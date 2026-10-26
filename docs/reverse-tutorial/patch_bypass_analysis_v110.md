# Task Manager TMOG v1.1.0 授权机制回归审计报告

> 目标：`Task Manager v1.1.0 - 原始文件.exe`（SHA-256 fb57e1eb00cb259d4bd4cf6bd7289097be419f3ab171ee234f46c0ac1247d5a7，8,771,912 字节）
> 日期：2026-10-26 · 方法：v1.0.1 审计流程回归（见 REVERSE_TUTORIAL.md）· 授权：本机自有软件授权测试委托
> 快照：`tmog110.snapshot`（Ghidra 12.1.4，11691 函数 / 12051 字符串）

---

## 1. 结论摘要

v1.1.0 是实质更新版（.text 大幅增长、关键字符串改 UTF-16LE、授权代码整体迁移），但**授权架构与 v1.0.1 同构**：Ed25519 验签 + 同一公钥、%LOCALAPPDATA%\TMOG\license.json、WinVerifyTrust 代码签名门控、双层门控（全局标志 + 功能页实时重验）全部保留。

**漏洞结论（与 v1.0.1 相同）**：客户端门控全部是本地判定，3 处 9 字节补丁即可全面接管；服务器签发的 license 在数学上不可伪造（Ed25519），但客户端不校验补丁完整性，签名门控只验证 exe 自身证书（验证的是"厂商签名的 exe"，补丁后的 exe 证书校验失败恰好被门控逻辑绕过——门控校验证书而非完整性）。

**补丁点（3 处 9 字节，均已动态验证）**：

| 补丁 | 文件偏移 | VA | 原字节 | 新字节 | 作用 |
|---|---|---|---|---|---|
| A | 0x2AF840 | 0x1402b0440 | 0F B6 81 | B0 01 C3 | Pro 标志 getter 恒 1（接管全部 5 个读者） |
| B | 0x2AA428 | 0x1402ab028 | 0F B6 C3 | B0 01 90 | hasEnt 菜单判定恒 1 |
| C | 0x2A97E0 | 0x1402aa3e0 | 48 89 5C | B0 01 C3 | feature 判定恒 1（L2 功能页） |

## 2. 机制还原（对照 v1.0.1）

### 2.1 存储与协议（未变）

- 路径：`SHGetKnownFolderPath(FOLDERID_LocalAppData f1b32785-6fba-4fcf-9d55-7b8e7f157091)` + `TMOG` + `license.json`（FUN_1402ab580 → FUN_1400542f0 → FUN_1402ac6d0）
- 格式：`{"payload":"<b64>","signature":"<b64>"}`，payload 字段 key/emailHash/machineId/issuedAt/maxMajor/activationLimit/instanceId（字符串簇 @0x62BD28-0x62BDF8 与 v1.0.1 相同）
- 网络：`pro.license-tmog.com` + `/activate` + `/deactivate` + UA `TMOG-License/1.0`（全部改 UTF-16LE 存储）
- 新增：`pending-deactivations`（离线停用队列）、`activation-diagnostics.txt`（激活失败诊断导出）

### 2.2 验证链（同构，地址迁移）

```
FUN_1402b0670 (Pro 写入, v1.0.1 0x1401f6f60 等价)
  ├─ FUN_1402aa300  30s TTL 缓存层（新增重构）
  │   └─ thunk_FUN_1402bccd0 → FUN_1402bc6e0(GetModuleFileNameW)
  │       → FUN_1402bce50  WinVerifyTrust + WTHelper + OID O/CN=="David Plummer"
  ├─ FUN_1402ae9b0  读 license.json
  ├─ FUN_140445850  构造 Ed25519 公钥（v1.0.1 同一公钥，内联 @0x14062d080）
  │   └─ FUN_1404432d0  Ed25519 verify（域常数表 0x14062e1a0、群阶 S 表 0x14062e320 均在）
  ├─ memcmp machineId → state==2 → 写 byte[app+0x138] @0x1402b0a37
```

### 2.3 双层门控拓扑

| 层 | 标志/函数 | 写入者 | 读者 | v1.0.1 等价 |
|---|---|---|---|---|
| L1 | byte[app+0x138] Pro 标志 | FUN_1402b0670 @0x1402b0a37（唯一） | FUN_1402b0440（唯一 getter，5 调用者：标题/菜单/对话框） | 0x1401f6f60 / 0x1401f5c70 |
| L1 | byte[app+0x110] hasEnt | 激活路径 | FUN_1402aaae0 尾部 @0x1402ab028 | 0x1401f4920 |
| L2 | feature 判定 | — | FUN_1402aa3e0：`FUN_1402aa300 && byte[p+0x138] && FUN_1402b0670(p) && id<=9`；thunk FUN_1402bd950（13 个调用者函数） | 0x1401f84c0+0x1401f3d20 |
| 锁屏 | TmogProVeil/Panel | 0x1402bddc0（创建） | 0x1402bf990（显示控制） | 0x1401f87c0 / 0x1401fa380 |

v1.1.0 变化：featureId 上限 8→9（新增一个 Pro 功能页）；部分传感器页（如 CPU 功耗）在 v1.1.0 已开放为免费内容。

## 3. 补丁点推导过程（含错误路线）

### 3.1 错误路线（第一轮）

照搬 v1.0.1 策略，NOP FUN_1402b0670 内部的 hasEnt 判定门（0x1402b09de `74 26` / 0x1402b09e2 `74 22`）。**动态实测失败：标题不变**。

原因：v1.0.1 的补丁 A 打的是"写入点前计算标志值的判定序列"（判定输入已就绪，NOP 门即可）。v1.1.0 的 FUN_1402b0670 重构为完整验证流程：`FUN_1402aa300()==0 时直接 XOR AL,AL 返回`，license 无效根本走不到写点。NOP 内部门对"从未验证成功"的进程无效。

**教训：补丁点必须选"判定结果的所有读者的必经汇聚点"，而不是"验证流程内部的某个门"。**

### 3.2 正确路线

对 `+0x138` 做全量引用扫描（MOVZX/TEST/CMP/MOV 字节模式 6 类），得出：

- 写入者唯一：FUN_1402b0670 内 0x1402b0a37
- 读取者全部经 FUN_1402b0440（`return byte[param+0x138]` 单行 getter）→ 补它一处即接管 5 个读者

补丁 A 改打 getter（`B0 01 C3`），补丁 B/C 语义与 v1.0.1 相同（hasEnt 恒真 / feature 判定恒真）。

## 4. 动态验证矩阵

| 检查项 | 基线（原文件） | 补丁版 | 结果 |
|---|---|---|---|
| 主窗标题 | Task Manager TMOG [管理员] | **Task Manager TMOG PRO [管理员]** | ✓ |
| 帮助菜单"关于"项 | 关于 Task Manager TMOG(&A) | **关于 Task Manager TMOG PRO(&A)** | ✓ |
| 分离实验（只 C） | — | 标题保持普通 | ✓ A 独立必要 |
| CPU 功耗页 | 有真实传感器数据 | 同 | （该页 v1.1.0 已免费，非 Pro 门验证点） |
| UI 树锁屏文案 | — | 无 Upgrade/锁屏元素 | ✓ |
| license 残留 | — | 无（仅 settings.json） | ✓ 已清理 |

**待实测**（本轮未覆盖，坐标静态可信）：远程连接（iPhone 查看）、Benchmarks、飞行记录仪、断网重测、帮助>购买/输入许可证对话框。

## 5. Evidence 文件索引

| 文件 | 内容 |
|---|---|
| f110_pubkeycaller.md | 公钥构造 FUN_140445850（内联公钥+verify 调用） |
| f110_432d0.md | Ed25519 verify FUN_1404432d0 |
| f110_b0670_full.md | Pro 写入函数全量（assembly 含判定序列） |
| f110_aa300.md / f110_bccd0.md / f110_bce50.md / f110_bc6e0.md | 30s 缓存签名门控链 |
| f110_aa3e0（在 f110_aa300.md callers）/ f110_bd950.md | feature 判定 + thunk 13 调用者 |
| f110_bde59.md / f110_bf990.md | TmogProVeil 锁屏创建/显示 |
| f110_aaae0b.md | hasEnt 菜单判定（补丁 B 位置） |
| f110_bd44f.md | 标题构建（PRO/普通 CMOV 分支） |
| f110_ac3a0.md / f110_ac73b.md / f110_ab580.md | 失败重验 / license.json 路径 |
| f110_a770c.md | Activate 网络函数（RTTI: WorkerLicenseService::Activate） |
| scan_v110_out.txt / scan_138b.py 输出 | 字符串侦察 / +0x138 全量引用扫描 |
| tmog110.snapshot | Ghidra 分析快照（后续回归直接复用） |

## 6. 厂商修复建议

1. **补丁 C 类（判定函数整体短路）无法用完整性校验防御**——代码在用户机器上运行，任何本地判定都可被改。若 Pro 功能依赖本地状态，需服务端下发会话票据（短时效、功能调用时联网校验）。
2. 30s TTL 缓存层（FUN_1402aa300）缓存的是签名门控结果，缓存位 +400 可被一次性置 1 绕过重验——缓存应对齐进程级只读数据或校验自身完整性。
3. v1.1.0 将部分传感器页从 Pro 移出扩大了免费面，但未改变根本问题：授权状态（+0x138）是进程内单字节，5 个读者经单一 getter，单点失守全局失守。
