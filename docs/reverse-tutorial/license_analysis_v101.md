# Task Manager TMOG v1.0.1 — 授权机制分析报告

- 目标：`F:\Work\txtest\Task Manager TMOG\Task Manager v1.0.1.exe`
- SHA-256：`99e7565d394c1dabe40e6703a3cb5971ba5219413dbed34ca1e99c7b3d354810`
- PE x86_64，8098 个函数，8765 个字符串（Ghidra 12.1.4 全量分析，REA evidence: `ev_5d2e2f8c…` 系列见各 md 文件）
- 本报告为**描述性静态分析**：说明验证机制如何工作，不涉及绕过手段。

---

## 1. 总体架构

```
用户输入 email + license key
        │
        ▼
[客户端] 组装 JSON（email, license, machineId, machineName）
        │  POST /activate   (WinHTTP, UA: TMOG-License/1.0)
        ▼
pro.license-tmog.com:443
        │  200 → { entitlement: base64, signature: base64 }
        │  非200 → { reason, limit, detail }
        ▼
[客户端] 校验签名 → 写入 %LOCALAPPDATA%\TMOG\license.json
        │
        ▼
后续启动：读 license.json → 解析 payload/signature → 本地验证 → 启用 Pro 功能
```

## 2. 网络协议（观察自 `FUN_1401f5780`，0x1401f5780）

| 项目 | 值 |
|---|---|
| API 栈 | WinHTTP（WinHttpOpen/Connect/OpenRequest/SendRequest/ReadData） |
| User-Agent | `TMOG-License/1.0`（0x14043c128） |
| 主机 | `pro.license-tmog.com`，端口 443（0x1bb） |
| 方法 | `POST`，路径 `/activate`（0x14043c260）或 `/deactivate`（0x14043c278） |
| 请求头 | `Content-Type: application/json` + `Accept: application/json` |
| 超时 | resolve 5000 / connect 8000 / send+receive 15000 ms |
| 响应上限 | 64 KiB（0x10000，超过直接失败） |
| 取消支持 | 请求句柄注册到 worker 结构（offset 0x50），支持中途取消（错误 0x4c7 = ERROR_CANCELLED） |

## 3. machineId 派生（观察自 `FUN_1401f4980` → `FUN_14030b220` → `FUN_1403198b0`）

1. 读注册表 `HKLM\SOFTWARE\Microsoft\Cryptography\MachineGuid`（REG_SZ）。
2. UTF-16 → UTF-8 窄字符串。
3. 过滤：仅保留 `[0-9a-f]` 与 `-`（即去掉花括号等非 hex 字符）。
4. 前缀拼上 `tmog.machine.v1.`（0x140448ef0）。
5. **纯软件实现的 SHA-256**（`FUN_1403198b0`：标准初始向量 6a09e667/bb67ae85/… 确���，无盐、无 HMAC）。
6. 输出 32 字节 → 小写 hex（64 字符）作为 `machineId` 字段。

含义：机器标识完全由 MachineGuid 决定，重装系统或改 MachineGuid 会改变 machineId。

## 4. 请求体（观察自 `FUN_140308540`，0x140308540）

激活请求 JSON 字段（字符串常量在 0x140448f04/0x140448f18/0x14044934c/0x140449358）：

```json
{
  "email": "<trim 过的购买邮箱>",
  "license": "<trim 过的 key>",
  "machineId": "<64位hex>",
  "machineName": "<GetComputerNameExW(DnsHostname)，失败时默认 'Windows PC'>"
}
```

## 5. 响应处理（观察自 `FUN_140309ea0`，0x140309ea0）

- **HTTP 200**：解析 JSON 取 `entitlement` 与 `signature` 两个字段，各自经 `FUN_140307a80` 做 **标准 base64 解码**（字母表 A–Z a–z 0–9 + /，`=` padding，容忍空白）后保存在内存结果结构中。两个字段缺一则激活失败。
- **非 200**：取 `reason`（映射为内部错误码，`FUN_14030a490`）、`limit`（数字，激活数上限 → 界面提示 "already active on N machines"）、`detail`（附加文本）。
- 响应体大于 64 KiB 或 JSON 解析失败 → 一律按激活失败处理。

错误分类（UI 字符串，0x140448f80–0x140449398 区间）对应服务器返回的 reason：`not recognised`（key 不存在）、`email mismatch`、`different machine`（激活数用尽）、`expired`、`disabled` 等。

## 6. 本地存储（观察自 `FUN_1401f4800` / `FUN_1401f4520` / `FUN_1400363d0`）

- 路径：`%LOCALAPPDATA%\TMOG\license.json`
  - 目录经 `SHGetKnownFolderPath(FOLDERID_LocalAppData)`（GUID `f1b32785-6fba-4fcf-9d55-7b8e7f157091`，读自 0x140446a30）+ 子目录 `TMOG`（0x1401f4520）+ 文件名 `license.json`（0x14043c210）。
  - 目录不存在时 `CreateDirectoryW` 递归创建。
- 文件格式（观察自 `FUN_140309020`，0x140309020）：

```json
{ "payload": "<base64 entitlement>", "signature": "<base64 signature>" }
```

- 读取时 `CreateFileW` 只读共享打开，读前经 `FUN_140034ec0` 校验句柄对应的最终路径（`GetFinalPathNameByHandleW`，防符号链接替换），单文件上限 64 KiB。

## 7. 签名验证（观察所得与未决部分）

**已观察**：
- 客户端持有固定验证逻辑：`payload` + `signature` 两个字段成对解码，缺一即整体无效。
- 导入表中只有 **BCrypt hash 系列**（`BCryptOpenAlgorithmProvider/CreateHash/HashData/FinishHash/DestroyHash`，0x1404c182c–0x1404c18a4），**没有** `BCryptVerifySignature`、`NCrypt*`、`CryptVerify*` 等系统签名验证 API。
- 结合 SHA-256 也是内置纯软件实现这一点，非对称验签同样为**二进制内静态链接的密码学库**（典型如 libsodium/ed25519-donna 类实现）。曲线常数与公钥的精确定位未在本次范围内完成。

**未决（unknown）**：
1. 内置公钥常量的具体地址与值。
2. 验签算法的精确身份（Ed25519 / ECDSA P-256 / 其他）——需进一步反编译 `FUN_140309020` 的下游调用链才能确认。
3. `payload`（entitlement）内部字段结构（服务器签发的明文 JSON，需服务器响应样本或更深的解析代码追查）。
4. 本地验签失败的降级行为：字符串 `The saved license could not be verified. Check access to the license file, or enter your key again.`（0x14041f300）与 `The license is saved, but this build cannot enable Pro.`（0x14041e5b0）表明存在"保存成功但本构建无法启用 Pro"的构建版本门控分支，具体条件未追。

## 8. 辅助流程

- **Deactivate**（`FUN_1401f4440`）：读本地 license → `FUN_1403088d0` 构造 payload JSON → `POST /deactivate` → `FUN_140308fe0` 按返回状态报成功/失败。本地文件随后删除（`TMOG could not remove the local license` 对应删除失败分支）。
- **Retry Saved License**（字符串 0x140418660）：本地 license.json 存在但初始验证失败时，可将 payload+signature 重新提交服务器复核（`FUN_140309c30` 构造验证请求）。
- **激活占用释放**：删除本地 license 后若服务器记录释放失败，会后台重试（`TMOG will retry releasing that activation safely in the background`，0x14043c3b0）。
- **重验证**：`TMOG could not revalidate this license. Open the license dialog to retry the saved license.`（0x14043c2a0）——存在周期性/启动时重验证路径。

## 9. 与 v0.1.3（Task Manager.exe）的差异

| 项目 | v0.1.3 (6007296 B) | v1.0.1 (6528328 B) |
|---|---|---|
| 函数数 | 7401 | 8098 |
| 字符串数 | 8005 | 8765 |
| 协议 | 同一服务器/UA/端点 | 相同 |
| 新增 | — | `Retry Saved License` 入口、`The license is saved, but this build cannot enable Pro.`、错误码 `limit` 字段处理、更完整的 license 存储失败恢复路径 |

两者授权协议同源（同 UA `TMOG-License/1.0`、同 `/activate`、`/deactivate`、同 machineId 派生方式），v1.0.1 是同机制的增强版。

## 10. 隐私视角摘要

出网数据仅限：email、license key、machineId（MachineGuid 的 SHA-256）、计算机名。不含文件列表、进程数据或浏览记录。官方隐私页：`https://www.tmog.org/privacy.html`（0x140432250）。

---

### Evidence 索引

- 全量分析：`analysis_v101.md`（binary_overview，Ghidra 12.1.4）
- 字符串搜索：`search_v101_license2.md`、`search_v101_net.md`、`search_v101_act.md`
- 反编译：`func_v101_licserv.md`（HTTP 层）、`func_v101_caller1.md`（activate）、`func_v101_caller2.md`（deactivate）、`func_v101_buildjson.md`（请求构造）、`func_v101_machineid.md` / `func_v101_guidread.md`（machineId）、`func_v101_parse.md`（响应解析）、`func_v101_b64.md`（base64）、`func_v101_savedlic.md`（本地读取）、`func_v101_path.md` 系（路径构建）
- 字节读取：Known Folder GUID @ 0x140446a30

所有结论均为静态观察（authority: shipped-artifact），未执行目标程序，未做任何网络请求。
