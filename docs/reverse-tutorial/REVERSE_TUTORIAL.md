# Task Manager TMOG v1.0.1 逆向分析教程（手动复现指南）

> **目的**：从零开始，只用 Ghidra + REA CLI + 十六进制编辑器，复现本项目的完整分析过程，最终产出 3 个补丁点（10 字节）并验证。
> **读者**：跟着本教程逐步操作的分析师。每一步都标注了工具、精确输入和预期输出。
> **合规前提**：仅用于授权测试。分析对象为本机自有的 `Task Manager v1.0.1.exe`。

---

## 阶段 0：环境准备

### 0.1 工具清单

| 工具 | 用途 | 获取方式 |
|---|---|---|
| REA CLI（rea@6.4.0） | Ghidra 驱动、搜索、反编译 | 已安装（`rea --version` 验证） |
| Ghidra 12.1.4 | 反编译引擎 | `ghidra_12.1.4_PUBLIC/` 已在工程目录 |
| Python 3 | 字节级计算/补丁 | 系统自带或安装 |
| HxD 或 010 Editor | 可选手动十六进制编辑 | 免费下载 |
| PowerShell | 进程/窗口验证 | 系统自带 |

### 0.2 会话环境变量（每个新终端都要执行）

```powershell
$env:GHIDRA_INSTALL_DIR = "F:\Work\txtest\Task Manager TMOG\ghidra_12.1.4_PUBLIC"
cd "F:\Work\txtest\Task Manager TMOG"
```

> **为什么重要**：REA 靠这个变量找 Ghidra。MCP 服务器不热加载它，所以全程用 CLI。
> **省时关键**：先建快照再分析，避免每次搜索重跑 8 分钟自动分析：

```bash
rea analyze "Task Manager v1.0.1.exe" --snapshot tmog101.snapshot --format md
```

之后所有命令都带 `--snapshot tmog101.snapshot`（注意：`read-bytes` 不支持此参数）。

### 0.3 建立基线（无补丁对照）

```powershell
Start-Process ".\Task Manager v1.0.1.exe"; Start-Sleep 8
Get-Process | Where-Object {$_.Name -like "*Task Manager*"} | Select Id, MainWindowTitle
# 预期：MainWindowTitle = "Task Manager TMOG"（无 PRO）
Get-Process | Where-Object {$_.Name -like "*Task Manager*"} | Stop-Process -Force
```

同时记录测试基准：点击侧栏红框 Pro 分区（功耗与频率等），确认显示锁屏 + “升级到Pro版”按钮。

---

## 阶段 1：目标概览与字符串侦察

### 1.1 二进制概览

```bash
rea analyze "Task Manager v1.0.1.exe" --format md > analysis_v101.md
```

关键数字（确认分析成功）：约 **8098 个函数、8765 个字符串**，PE x86_64。

### 1.2 找授权入口（字符串侦察）

授权机制总是从字符串入手。搜最可疑的词：

```bash
# 授权服务器域名（一次性确认网络层）
rea search "Task Manager v1.0.1.exe" "license" --format md > s1_license.md
# 统计命中数
grep -c "^| 0x" s1_license.md    # 预期 66 条
```

翻阅 `s1_license.md` 找到关键证据：

- `pro.license-tmog.com` — 授权服务器
- `TMOG-License/1.0` — HTTP UA
- `/activate`、`/deactivate` — API 端点
- `license.json` — 本地存储文件名
- `.?AVLicenseService@host@tmog@@` — RTTI 符号（确认 C++ 类名 LicenseService）
- `That license key is already active on` — 服务器错误文案

> **方法论**：先搜 `license`（宽泛）→ 读命中列表 → 提取机制名词 → 再精确搜。这比直接搜“password/key/bypass”有效得多。

### 1.3 记录待查清单

从字符串中提炼问题（本教程的路线图）：

1. license.json 存哪、什么格式？
2. 里面内容如何被验证？（签名？明文？）
3. Pro 标志存哪、谁写谁读？
4. Pro 功能页的第二层门控在哪？

---

## 阶段 2：追踪本地 license 存储

### 2.1 从文件名追到路径构造

```bash
# trace 命令 = 找字符串 + 谁引用它
rea trace "Task Manager v1.0.1.exe" "license.json" --snapshot tmog101.snapshot --format md > t1_lj.md
```

输出 `references` 表给出引用地址（如 `0x1401f486b`）→ 记下。

### 2.2 反编译引用函数

```bash
rea function "Task Manager v1.0.1.exe" 0x1401f486b --snapshot tmog101.snapshot --format md > f_ljpath.md
```

读 `## raw_result.value.pseudocode` 段。你会看到调用链：`FUN_1401f4800` → `FUN_1401f4520`（加 `TMOG` 子目录）→ `FUN_1400363d0`（`SHGetKnownFolderPath`）。

**确认已知文件夹 GUID**（本教程的关键技巧——直接读文件字节，绕过 Ghidra 往返）：

```bash
rea read-bytes "Task Manager v1.0.1.exe" 0x140446a30 --length 16 --format md
# bytes_hex: 8527b3f1ba6fcf4f9d557b8e7f157091
python3 -c "import uuid; print(uuid.UUID(bytes_le=bytes.fromhex('8527b3f1ba6fcf4f9d557b8e7f157091')))"
# → f1b32785-6fba-4fcf-9d55-7b8e7f157091 = FOLDERID_LocalAppData
```

**结论 1**：license 路径 = `%LOCALAPPDATA%\TMOG\license.json`。

### 2.3 找文件格式解析器

```bash
rea function "Task Manager v1.0.1.exe" 0x1401f4c80 --snapshot tmog101.snapshot --format md > f_load.md
rea function "Task Manager v1.0.1.exe" 0x140309020 --snapshot tmog101.snapshot --format md > f_parse.md
```

读 `f_parse.md` 的 pseudocode + **callees 表**。你会看到：

- 取 JSON 字段 `"payload"` 和 `"signature"`（字符串常量地址 0x140448f70 等）
- 各自 base64 解码（`FUN_140307a80`）
- **callees 里没有任何 crypto API** ← ⚠️ 这里是本教程最大的坑，见阶段 3 开头

用 python 直接读字段名常量（又一次字节直读技巧）：

```python
# 0x140448f04='key', 0x140448f18='machineId', 0x140448f38='maxMajor',
# 0x140448f48='activationLimit', 0x140448f58='instanceId'
# 0x14044934c='email', 0x140449358='machineName', 0x140449380='entitlement'
```

**结论 2**：license.json 格式 `{"payload":"<b64>","signature":"<b64>"}`，payload 解码后是 JSON。

---

## 阶段 3：验证链分析（⚠️ 本教程最重要的教训）

### 3.1 错误路线（示范，勿重复）

只看 `FUN_140309020` 的 callees 没有验签函数 + 导入表无 `BCryptVerifySignature` → 断言“客户端无验签，手写 license 即可解锁”。

**实测会失败**（两轮：任意 payload、含正确 machineId 的 payload 都不解锁）。教训：

> **“导入表无 X API”⇏“无 X 功能”**。静态链接的密码学库完全绕开导入表。

### 3.2 正确路线：追下游消费者

问自己：309020 的输出（payload 明文+signature 明文）被谁消费？

```bash
rea xrefs "Task Manager v1.0.1.exe" 0x140309020 --snapshot tmog101.snapshot --format md
# → 0x1401f4c80 附近 → 反编译 f_load.md 里的 FUN_1401f4e20（启动加载器）
```

一路追到 `FUN_14030bfe0`（0x14030bfe0）—— 验证调度器：

```bash
rea function "Task Manager v1.0.1.exe" 0x14030bfe0 --snapshot tmog101.snapshot --format md > f_bfe0.md
```

其伪代码开头：

```c
cVar8 = FUN_14031b820(&local_b8, &payload, &pubkey_list_item);  // ← 就是它
if (cVar8 != '\0') { FUN_1403092f0(...); }  // 签名有效才解析 payload
```

### 3.3 识别 Ed25519（不需要运行 crypto 工具的特征法）

```bash
rea function "Task Manager v1.0.1.exe" 0x14031b820 --snapshot tmog101.snapshot --format md > f_ed25519.md
```

在 pseudocode/assembly 里找以下特征（任何一条即可确认非对称验签存在）：

1. **参数长度检查**：`param_1[1] == 0x40`（64 字节签名）&& `param_3[1] == 0x20`（32 字节公钥）
2. **S 值范围检查表**：数据表 `0x14044a1f0`（Ed25519 群阶 L 的字节比较）
3. **SHA-512**：`FUN_14031a620`（初始常数 0x6a09e667… 为 SHA-256；SHA-512 是 0x6a09e667f3bcc908…）
4. **253 轮固定循环**（标量乘法）+ **域运算函数**（`FUN_14031c480`）
5. **域常数表**（0x14044a070 起：qword 序列含 0xd51a,0x8f25,… = sqrt(-1)）
6. **常数时间比较**（SIMD XOR 累积后判 0）

用 python 直接从 PE 读公钥常量（0x140309ac0 函数内的 rip 相对寻址目标 0x140448e51）：

```python
# 32 字节公钥 @ 0x140448e59:
# 49 5b af 30 e6 68 bb f5 97 ac b8 40 89 32 d2 84
# a4 39 c8 69 f1 51 59 3f d3 b4 ba 59 cc 51 9e 8e
```

**结论 3**：客户端有完整 Ed25519 验签。手写 license.json **在数学上不可行**。

### 3.4 machineId 绑定与状态机（补齐链路）

继续读 `f_bfe0.md` 后半段：

- `FUN_1403092f0`：解析 payload JSON，**必需字段** `key`/`emailHash`/`machineId`/`issuedAt`
- 之后 `memcmp(本机machineId, payload.machineId)` → 不匹配走 "activated on a different machine"
- `FUN_14030be50`：状态 = 2（有效）/ 3（maxMajor 超限）
- `FUN_1401f6f60`：写入 `app+0x50`（状态）和 `app+0x138`（Pro 标志）

本机 machineId 派生（用于理解，非攻击）：

```powershell
$guid = (Get-ItemProperty "HKLM:\SOFTWARE\Microsoft\Cryptography").MachineGuid
$filtered = ($guid.ToCharArray() | Where-Object {$_ -match '[0-9a-f\-]'}) -join ''
$bytes = [Text.Encoding]::UTF8.GetBytes("tmog.machine.v1." + $filtered)
$sha=[Security.Cryptography.SHA256]::Create(); ($sha.ComputeHash($bytes)|%{$_.ToString('x2')}) -join ''
```

### 3.5 代码签名门控（0x139）

```bash
rea function "Task Manager v1.0.1.exe" 0x1401f7bb0 --snapshot tmog101.snapshot --format md > f_sig.md
```

关键内容：`WinVerifyTrust(GENERIC_VERIFY_V2, 自身exe)` + `WTHelper*` 取证书 → OID 2.5.4.10(O) 与 2.5.4.3(CN) 必须等于 `"David Plummer"`。结果写入 `app+0x139`。

---

## 阶段 4：门控拓扑测绘（补丁点选择的依据）

对每个关键标志做全量 xrefs：

```bash
rea xrefs "Task Manager v1.0.1.exe" 0x1401f5c70 --snapshot tmog101.snapshot --format md  # 0x138 读者
rea xrefs "Task Manager v1.0.1.exe" 0x1401f4920 --snapshot tmog101.snapshot --format md  # hasEnt 读者
rea xrefs "Task Manager v1.0.1.exe" 0x1401f6f60 --snapshot tmog101.snapshot --format md  # 0x138 写入者
```

**判定规则**（这是补丁点数量最少化的核心）：
- **写入点唯一 + 读者集中** → 补丁写入点即可接管全部判定
- 读者分散在业务代码 → 只能逐点补

本项目结论：

| 层 | 标志 | 写入点 | 读者 | 补丁策略 |
|---|---|---|---|---|
| L1 | `app+0x138` Pro 标志 | `FUN_1401f6f60` 唯一 | 5 处（标题/菜单/对话框） | 补写入点 |
| L1 | `app+0x110` hasEnt | 激活路径 | `FUN_1401f4920` 唯一函数 | 补读取函数返回值 |
| L2 | per-page 解锁标志 ×7 | `FUN_14010ee30` | `FUN_1401fa380` | 补 feature 判定 thunk |

---

## 阶段 5：提取补丁点字节

### 5.1 补丁 A：Pro 总开关（4 字节）

```bash
rea function "Task Manager v1.0.1.exe" 0x1401f6f60 --snapshot tmog101.snapshot --format md
```

在 `raw_result.value.assembly` 里找判定序列（VA 0x1401F6FD9）：

```asm
CMP byte  [rbx+0x139], 0    ; 80 BB 39 01 00 00 00
JZ   fail                   ; 74 0A   ← A-1
CMP dword [rbx+0x50], 2     ; 83 7B 50 02
JNZ  fail                   ; 75 04   ← A-2
MOV AL,1 / JMP write / fail: XOR AL,AL / write: MOV [rbx+0x138],AL
```

VA→文件偏移（python 脚本，解析 PE section 表）：

```python
import struct
data = open(r'F:\Work\txtest\Task Manager TMOG\Task Manager v1.0.1.exe','rb').read()
pe_off = struct.unpack_from('<I', data, 0x3c)[0]
nsec = struct.unpack_from('<H', data, pe_off+6)[0]
opt = struct.unpack_from('<H', data, pe_off+20)[0]
sec0 = pe_off+24+opt
base = struct.unpack_from('<Q', data, pe_off+24+24)[0]
def va2off(va):
    rva = va - base
    for i in range(nsec):
        s = sec0+i*40
        vsz, va, rs, rp = struct.unpack_from('<IIII', data, s+8)
        if va <= rva < va+max(vsz,rs): return rp+(rva-va)
print(hex(va2off(0x1401F6FD9)))   # 0x1F63D9
```

**A-1：文件偏移 0x1F63E0：`74 0A` → `90 90`**
**A-2：文件偏移 0x1F63E6：`75 04` → `90 90`**

### 5.2 补丁 B：hasEnt 菜单入口（3 字节）

`FUN_1401f4920` 尾部 `MOVZX EAX,BL`（VA 0x1401F494F）→ **文件偏移 0x1F3D4F：`0F B6 C3` → `B0 01 90`**（`MOV AL,1; NOP`，保留函数内锁逻辑）。

### 5.3 补丁 C：Pro 功能页（3 字节）⚠️ 第一轮补丁最容易漏

先做分离实验证明它必要：只打 A+B 启动 → 标题变 PRO 但 Pro 功能页仍锁屏 → 说明有第二层门控。

追锁屏组件：搜 `%1 is a TMOG Pro feature` → `FUN_1401f8cd0`（TmogProPanel WM_PAINT）→ 创建者 `FUN_1401f87c0`（注册 `TmogProVeil`/`TmogProPanel` 类 + "Upgrade to Pro" 按钮）→ 显示控制器 `FUN_1401fa380` → 读 per-page 标志 → 由 `FUN_14010ee30` 写 → 调 `FUN_1401f84c0`（feature 判定 thunk）→ `JMP FUN_1401f3d20`：

```c
return (app+0x139 != 0)      // 签名门控
    && (app+0x138 != 0)      // Pro 标志
    && FUN_1401f5db0()       // 实时重验 license（重跑 Ed25519+machineId）state==2
    && featureId <= 8;
```

**为什么功能页不信任 0x138**：每次切页实时重验。签名失效后 0x139=0，此处必挂。

`FUN_1401f84c0` 是全部 feature 查询的唯一入口（xrefs 确认 `FUN_1401f3d20` 只有这一个调用者）。补丁 C：

**文件偏移 0x1F78C0：`48 81 C1` → `B0 01 C3`**（`MOV AL,1; RET`， thunk 剩余 9 字节成死码）

---

## 阶段 6：打补丁与验证

### 6.1 生成补丁副本（原子化脚本，避免手工编辑错位）

```python
src = open(r'F:\Work\txtest\Task Manager TMOG\Task Manager v1.0.1.exe','rb').read()
p = bytearray(src)
# 每个补丁前先断言原字节 —— 防版本错位
assert bytes(p[0x1F63E0:0x1F63E2]) == b'\x74\x0a'
p[0x1F63E0:0x1F63E2] = b'\x90\x90'
assert bytes(p[0x1F63E6:0x1F63E8]) == b'\x75\x04'
p[0x1F63E6:0x1F63E8] = b'\x90\x90'
assert bytes(p[0x1F3D4F:0x1F3D52]) == bytes.fromhex('0fb6c3')
p[0x1F3D4F:0x1F3D52] = bytes.fromhex('b00190')
assert bytes(p[0x1F78C0:0x1F78C4]) == bytes.fromhex('4881c138')
p[0x1F78C0:0x1F78C3] = b'\xb0\x01\xc3'
open(r'F:\Work\txtest\Task Manager TMOG\Task Manager v1.0.1.patched.exe','wb').write(bytes(p))
chk = open(r'F:\Work\txtest\Task Manager TMOG\Task Manager v1.0.1.patched.exe','rb').read()
print('diff bytes:', sum(1 for a,b in zip(src,chk) if a!=b))  # 预期 10
```

> ⚠️ **教程作者踩过的坑**：追加补丁时如果从原件重建副本，会静默覆盖之前的补丁。**每次追加补丁必须从上一次的副本文件读入**，或像本脚本一样一次性打全。

### 6.2 验证矩阵

```powershell
Start-Process ".\Task Manager v1.0.1.patched.exe"; Start-Sleep 8
Get-Process | Where-Object {$_.Name -like "*patched*"} | Select Id, MainWindowTitle
```

| 检查项 | 预期 |
|---|---|
| 主窗标题 | **“任务管理器TMOG PRO”**（或 "Task Manager TMOG PRO"） |
| 点击侧栏“功耗与频率” | 无锁屏，直接显示传感器数据 |
| 点击“飞行记录仪”等红框其余项 | 同上 |
| 应用菜单 | license 项变为 "Deactivate License"（补丁 B 生效） |
| 断网重测 | 行为不变（纯本地判定） |

分离验证（可选，证明各补丁独立必要）：
- 只 A：标题 PRO 但功能页锁 → 证明 C 独立必要
- 只 C：标题普通 → 证明 A 独立必要
- A+B（无 C）：标题 PRO 但功能页锁（教程作者的轮次 1 结果）

### 6.3 恢复

删除副本；`license.json` 若动过也删（`%LOCALAPPDATA%\TMOG\`）。

---

## 阶段 7：方法论复盘（写给下一次分析的你）

1. **先动态后静态**：构造 POC 实测 → 失败 → 再回头补静态链。本教程作者两版错误报告都源于“静态推理跳过动态验证”。
2. **导入表是假阴性高发区**：静态链�� crypto 库完全绕开导入表。识别特征：长度检查(0x40/0x20)、固定轮数循环、域常数表、常数时间比较。
3. **门控分层是常态**：全局标志 + 实时重验是常见双保险。每个“读者”都可能是独立判定点，xrefs 全量扫是唯一可靠方法。
4. **字节直读优于工具往返**：已知 VA 时用 python 解析 PE section 表直接读字节，秒级完成 vs Ghidra 分钟级。
5. **分离实验是免费的信息**：补丁覆盖失误导致的“回退”恰好证明了各补丁点的作用边界。
6. **所有中间产物落盘**（md 文件），每个结论标注 evidence 文件名——本次审计三轮推翻重来，全靠文件可回溯。

---

## 附录 A：本次分析全部补丁点速查

| 补丁 | 文件偏移 | 原字节 | 新字节 | 作用 |
|---|---|---|---|---|
| A-1 | 0x1F63E0 | 74 0A | 90 90 | 跳过 0x139 签名门控 |
| A-2 | 0x1F63E6 | 75 04 | 90 90 | 跳过 state==2 检查 |
| B | 0x1F3D4F | 0F B6 C3 | B0 01 90 | hasEnt 恒真（菜单） |
| C | 0x1F78C0 | 48 81 C1 | B0 01 C3 | feature 判定恒真（Pro 功能页） |

## 附录 B：关键地址速查（v1.0.1, SHA-256 99e7565d…）

| 地址 | 内容 |
|---|---|
| 0x1401f6f60 | Pro 标志写入函数（app+0x138） |
| 0x1401f5c70 | Pro 标志读取（1 字节函数） |
| 0x1401f4920 | hasEnt 读取（app+0x110） |
| 0x1401f84c0 → 0x1401f3d20 → 0x1401f5db0 | feature 判定链 |
| 0x14030bfe0 | license 验证调度（Ed25519 入口） |
| 0x14031b820 | Ed25519 verify 实现 |
| 0x1403092f0 | payload JSON 解析（key/emailHash/machineId/issuedAt） |
| 0x1401f7bb0 | WinVerifyTrust + CN/O="David Plummer" 门控 |
| 0x1401f87c0 / 0x1401fa380 | TmogProVeil 锁屏创建/显示控制 |
| 0x14010ee30 | 页面切换 + per-page 标志写入 |
| 0x140448e59 | 内嵌 Ed25519 公钥（32 字节） |
