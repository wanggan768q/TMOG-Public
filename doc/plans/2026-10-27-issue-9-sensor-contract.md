# Issue #9（W22）Power & Freq 传感器能力与范围合同 — 研究报告与候选合同

## 1. 元信息

- **日期**：2026-10-27
- **Issue**：[wanggan768q/TMOG-Public#9](https://github.com/wanggan768q/TMOG-Public/issues/9)（[Windows W22] Power & Freq 传感器能力与范围合同）
- **工作树**：`E:/Git/TMOG-Public-WorkTree/issue-9-sensor-contract`，分支 `issue-9-sensor-contract`，基线 `origin/main@246be01`
- **执行**：TMOG-Dev 会话（#9 研究执行者）+ 后台官方文档研究代理
- **详细 API 证据**：见同目录 [`2026-10-27-issue-9-sensor-contract-api-research.md`](./2026-10-27-issue-9-sensor-contract-api-research.md)（每条结论附官方 URL 与原文引用）
- **硬约束遵守（含一项例外，见 §8）**：
  - 未安装任何内核驱动或工具；未提权；未干预硬件；未运行原版 exe/补丁；未联系厂商授权服务或遥测
  - **例外**：一次用户级环境变量写入（`GHIDRA_INSTALL_DIR`，属配置修改越界，详见 §8 环境事件；修改前旧值未核实）
  - CPU% 与瓦数严格分离；功耗不按 CPU% 估算
  - 不猜测 Intel P/E-core 品牌归属（官方 EfficiencyClass 语义与品牌名的差异见 §5.2）
- **证据分层标记**：
  - 【官方文档确认】Microsoft Learn 官方文档原文核实（URL 可访问）
  - 【官方确认·行为有偏差】文档存在但实测行为与字面含义不符
  - 【本机实测】在报告所列测试设备上以只读命令验证
  - 【未知/二手】无官方文档确认，仅有二手来源或由缺失反推
  - 【明确不可用】确认无符合约束的安全来源，合同中显示"不可用"，不填估算值

---

## 2. 原版证据（版本绑定）

| 证据 | 版本 | 绑定 | 状态 |
| --- | --- | --- | --- |
| `Raw/Task Manager v1.1.0 - 原始文件.exe` SHA-256 | v1.1.0 | `fb57e1eb00cb259d4bd4cf6bd7289097be419f3ab171ee234f46c0ac1247d5a7` | 本票实测（sha256sum，2026-10-27） |
| 原版 Power & Freq 页静态字符串证据（`docs/reverse-tutorial/evidence/search_power.md`、`trace_powerfreq.md`） | **v1.0.1** | subject sha256 `99e7565d394c1dabe40e6703a3cb5971ba5219413dbed34ca1e99c7b3d354810`，Ghidra 12.1.4 | **v1.0.1 历史证据**；v1.1.0 字符串未复验，标未知 |

v1.0.1 历史证据要点（不能当作 v1.1.0 已证明）：
- 原版 Power & Freq 行构建函数 `PowerAndFreqRows`，频率字符串直接引用 `CallNtPowerInformation ProcessorInformation CurrentMhz` / `MaximumMhz`——与 §4.1 的官方 API 结论一致。
- 原版 GPU 功耗走 `nvmlDeviceGetPowerUsage`（NVIDIA）与 `ADLX GPUTotalBoardPower`（AMD）厂商专有 SDK；CPU 功耗字符串出现 `AMD Ryzen Master CPUParameters::fVDDCR_*`。均为厂商绑定方案；本项目本轮**选择不纳入**厂商 SDK（本轮依赖/驱动/权限与范围选择：避免引入厂商分发链与厂商绑定覆盖，非"用户禁止所有 SDK"的约束），厂商 SDK 本身合法存在。
- 原版另有 `CPU Package Power` / `Package Power` / `SoC Power` 字符串，其来源在 v1.0.1 证据中未定位到具体调用（未知）；v1.1.0 中是否存在同样字符串未复验。

**结论**：原版功耗页的既有观测（即使复验 v1.1.0 成立）只证明该程序在原厂机器上可采，**不能证明所有机器可采**；本合同以公开 API 证据为准，不承诺复刻原版的厂商 SDK 数据。

---

## 3. 测试设备与实测记录

| 项目 | 值 |
| --- | --- |
| 机型/OS | Windows 11 Pro，10.0.26200（2026-10-27） |
| CPU | Intel 异构 12 核（8 P-core 带超线程 + 4 E-core，20 逻辑核） |
| 会话权限 | 管理员（**注意**：标准用户行为未实测，见 §7 限制） |
| 实测方式 | 只读 PowerShell：`CallNtPowerInformation` P/Invoke、`Get-Counter`、`Get-CimInstance`、结构体解析；未安装任何东西 |

关键实测结果（详见 api-research.md §2/§4/§5）：
1. `CurrentMhz` 全部 20 逻辑核钉死 = `MaxMhz`(3600)，同一时刻计数器 `Actual Frequency = 4545 MHz` → **本机实测中 CurrentMhz 不反映实测瞬时频率**（该偏差仅证实于本测试机与本次采样场景，其他机型/负载/电源方案下行为未验证，见 §7）【官方确认·行为有偏差】
2. 有效频率公式 `MaxMhz × %ProcessorPerformance/100` 与计数器读数吻合（3600×1.2625≈4545）【本机实测】
3. `Energy Meter` 计数器集存在（RAPL 域，pkg≈75.5W 量级），但**无官方文档**【未知】
4. `MSAcpi_ThermalZoneTemperature` 本机存在 1 个主板热区实例（TZ00 = 27.85°C），**非 CPU 专属**【本机实测存在】
5. `GetLogicalProcessorInformationEx` EfficiencyClass 实测 8×class1(SMT) + 4×class0，与异构拓扑吻合【本机实测】

---

## 4. 字段能力矩阵（含来源/单位/频率/权限/可靠性/覆盖）

| 字段 | 来源 | 单位 | 采样 | 权限 | 可靠性 | 覆盖 | 分层 |
| --- | --- | --- | --- | --- | --- | --- | --- |
| CPU 基准频率 | `CallNtPowerInformation(11).MaxMhz` | MHz | 静态 | 文档未说明特权限制；标准用户未实测 | 高 | 全平台 | 官方文档确认 |
| CPU 有效频率 | PDH `\Processor Information(*)\Actual Frequency`（或 Processor Frequency × % Processor Performance / 100） | MHz | 1s tick | 文档未说明特权限制；标准用户未实测 | 高（公式+实测吻合） | Win8+ | 本机实测 + 官方对象存在 |
| CPU 报告频率 | `CallNtPowerInformation(11).CurrentMhz` | MHz | — | 文档未说明特权限制；标准用户未实测 | **低**：实测钉死 MaxMhz，不随负载变 | 全平台 | 官方确认·行为有偏差 |
| AC/电池 | `GetSystemPowerStatus.ACLineStatus` + `GUID_ACDC_POWER_SOURCE` 事件 | 0/1/255 | 事件驱动+慢速轮询 | 文档未说明特权限制；标准用户未实测 | 高 | 全平台 | 官方文档确认 |
| 电池百分比 | `BatteryLifePercent` + `GUID_BATTERY_PERCENTAGE_REMAINING` | 0–100（255=未知） | 事件驱动+60s 兜底 | 文档未说明特权限制；标准用户未实测 | 高 | 有电池机器 | 官方文档确认 |
| 充电状态 | `BatteryFlag`（bit 8）+ `SystemBatteryState(level 5)` | 位标志 | 同上 | 文档未说明特权限制；标准用户未实测 | 高 | 有电池机器 | 官方文档确认 |
| 省电模式 | `SystemStatusFlag` / `GUID_POWER_SAVING_STATUS` | 0/1 | 事件驱动 | 文档未说明特权限制；标准用户未实测 | 高 | Win10+ | 官方文档确认 |
| 睡眠/恢复 | `PowerRegisterSuspendResumeNotification`（Win8+）或 `WM_POWERBROADCAST` | 事件 | 注册即得 | 文档未说明特权限制；标准用户未实测 | 高 | Win8+ | 官方文档确认 |
| P/E 等级区分 | `GetLogicalProcessorInformationEx(RelationProcessorCore).EfficiencyClass` | 等级 0..N | 静态 | 文档未说明特权限制；标准用户未实测 | 高 | Win10+ | 官方文档确认 + 本机实测 |
| SMT | 同上 `.Flags & LTP_PC_SMT` | 位 | 静态 | 文档未说明特权限制；标准用户未实测 | 高 | Win7+ | 官方文档确认 |
| **CPU 瓦数** | 无安全文档来源；唯一技术候选 = 未文档化 `\Energy Meter(rapl_package0_pkg)\Power` | 疑为 mW（未确认） | — | 未验证 | **低**（无官方承诺） | Intel RAPL only；VM 可能无实例 | **未知**（存在性本机实测，文档缺口） |
| **GPU 瓦数** | 标准 API（DXGI）无接口；NVML/ADLX 厂商 SDK 存在但本轮选择不纳入（依赖/范围选择，见 §4 术语说明） | — | — | — | — | — | 本项目合同范围不可用（标准 API 无来源；不宣称全平台不可测） |
| **CPU 温度** | WMI `MSAcpi_ThermalZoneTemperature`（root\WMI）`.CurrentTemperature` | 0.1 K → ÷10−273.15 | 慢速 5–10s | **文档未说明特权限制，标准用户未实测**（本机管理员下成功） | 低-中（OEM `_TZ` 依赖；本机只有主板热区） | 部分 OEM 机器 | 未知（本机实测存在，官方文档缺失→404） |
| **GPU 温度** | 同上（DXGI 无接口；厂商 SDK 本轮不纳入） | — | — | — | — | — | 本项目合同范围不可用（同上） |
| CPU per-core 温度 | 所选标准 API 无已确认来源；per-core 直读需 MSR（Ring0）→ 本轮无驱动约束下不可达 | — | — | — | — | — | 本轮合同范围不可用（MSR 需 Ring0 不排除厂商已有来源；厂商 SDK 未纳入） |

**术语与权限标注**：
- **术语严格区分**：基准频率 = `MaxMhz`（标称最大）；上限频率 = `MhzLimit`（节流限制，本合同未单列展示）；有效频率 = `Actual Frequency`（动态实测口径）；报告频率 = `CurrentMhz`（P-state 请求口径）。四者不混用。
- 矩阵中权限列的写法：官方文档**未说明特权限制**的 API 写"文档未说明特权限制、标准用户未实测"——这**不等于文档担保**标准用户可调用；本会话为管理员会话，标准用户行为全部未实测（见 §7 限制 2）。
- GPU 行"不可用"指**本项目合同范围**：标准 API 无来源 + 厂商 SDK 本轮选择不纳入（依赖/驱动/权限与范围选择；厂商 SDK 本身合法，本轮约束"不连接厂商授权服务"针对云/遥测类服务，不是禁止一切本地厂商 SDK）；不宣称全平台/任何条件下都不可测。
- per-core 温度行同理：本轮无驱动约束下 MSR（Ring0）不可达 + 所选标准 API 无已确认来源；不排除厂商 SDK 已有 per-core 来源（本轮未纳入）。

驱动路线排除证据：LibreHardwareMonitor/PawnIO/WinRing0 均依赖内核驱动执行 MSR 读取（api-research.md §4.7 引用其源码与 README）。

---

## 5. 候选合同（供维护者确认）

### 5.1 建议选定：频率 + 电源合同（W23 实现范围）

| # | 合同项 | 内容 |
| --- | --- | --- |
| F1 | **CPU 有效频率** | 每逻辑核 + `_Total`，PDH `Actual Frequency`，单位 MHz，1s tick；来源口径标注"有效频率（实测口径）" |
| F2 | **CPU 基准频率** | `MaxMhz`，静态字段，随有效频率同列展示作对照 |
| F3 | **电源状态** | AC/电池 + 电池百分比 + 充电状态 + 省电模式；事件驱动（`RegisterPowerSettingNotification`）+ 60s 轮询兜底 |
| F4 | **睡眠/恢复处理** | 注册通知；恢复后差分基线作废（沿用 #14 恢复语义），不产生跨睡眠伪增量 |
| F5 | **不可用语义** | 无电池→电池字段显示"不可用"；睡眠中→缺样；事件 API 失败→明确错误状态；**不填估算、不造零**（沿用工程既有约定） |
| F6 | **权限** | 选定字段的官方文档均未说明特权限制（不升级为担保；标准用户实测属后续验证合同）；不自动提权 |
| F7 | **资源上限** | 1s tick 复用现有采样调度；PDH 连接复用、失败降级为"待采样/不可用"，不阻塞 GUI |

### 5.2 P/E 显示口径（需决策，默认不标品牌）

官方 `EfficiencyClass` 是性能/功耗权衡等级，**不是 Intel P/E 品牌名**。两案：
- **A（默认建议）**：显示"效率等级 N"（官方语义直译），不出现 P/E 字样 → 零猜测，完全合规
- B：惯例映射（高 class→P、低 class→E）→ 依赖推断，与"不猜 P/E 类型"约束冲突，需维护者明确接受推断风险后才可用

### 5.3 明确不可用（W23 显示"不可用"，不实现）

- GPU 瓦数、GPU 温度：本项目合同范围不可用（标准 API 无来源；厂商 SDK 存在但本轮选择不纳入，属依赖/范围选择而非禁止性约束，非"客观不存在"）；CPU per-core 温度：本轮无驱动约束下不可达（MSR 需 Ring0），且所选标准 API 无已确认来源——不排除厂商已有来源。若未来出现官方新 API 或维护者修订范围选择，另行修订合同
- CPU 瓦数：无文档化安全来源 → 默认不可用；是否启用实验字段见决策项 3

### 5.4 尽力而为字段（默认关闭，需决策）

| 字段 | 理由 |
| --- | --- |
| CPU 温度（MSAcpi 热区） | OEM 依赖（本机仅主板热区）、单位换算非直觉、官方文档已 404、标准用户权限未验证。若启用：探测到实例才显示，标注"热区温度（非 CPU 保证）"，5–10s 慢速采样 |
| CPU 瓦数（Energy Meter） | 未文档化、单位未确认、Intel-only、无官方可用性承诺。若启用：必须标注"实验性·未文档化"，可随时失效 |

---

## 6. 需维护者/用户决策清单

1. **报告频率（CurrentMhz）是否展示**：a) 不展示，只展示有效频率+基准（推荐，避免误导） b) 展示并标注"报告口径（内核请求值）"
2. **P/E 显示口径**：A"效率等级"（推荐）/ B"P/E 标签（推断）"
3. **CPU 瓦数实验字段**：默认不可用（推荐，合规） / 纳入实验性可选（未文档化，Intel-only，用户自担）
4. **CPU 温度尽力而为字段**：默认关闭（推荐，证据弱） / 纳入可选（部分机器可用，可能需管理员）
5. **采样 tick 确认**：频率与电源均 1s tick（电源事件驱动优先、1s 兜底轮询）是否接受
6. **标准用户实测合同**：MSAcpi/Energy Meter 若纳入，需在标准用户会话补测（当前会话为管理员，未验证）→ 补测前字段保持关闭/未知

---

## 7. 限制与未验证项

1. **单机型实测**：全部实测基于 §3 所列一台 Intel 异构 Win11 机器；AMD/多路/VM/平板行为未验证，合同不承诺全机型
2. **管理员会话偏差**：MSAcpi、Energy Meter 的标准用户行为未实测（本会话即管理员）；对官方文档未列权限段的 API，准确表述为"文档未说明特权限制、标准用户未实测"，**不升级为文档担保**
3. **Processor Information 计数器逐项官方定义页缺失**：计数器含义以实测公式为准（已验证 Actual = Frequency × Perf%/100）
4. **任务管理器 1s tick**：官方无文档，作为本项目自主设计（非官方承诺）
5. **v1.1.0 字符串复验未做**：REA MCP Ghidra provider 在本会话环境不可用（见 §8），v1.0.1 历史证据不外推到 v1.1.0；如需复验待环境修复后独立进行
6. **E3 能耗模型、MSAcpi 权限、NVAPI/ADLX 许可条款**：二手来源，未获官方确认，均已标注

---

## 8. 环境事件记录（如实，不追认）

- **事件**：本会话在发现 REA MCP 的 Ghidra provider 报 `GHIDRA_INSTALL_DIR is not set` 后，执行了 PowerShell `[Environment]::SetEnvironmentVariable('GHIDRA_INSTALL_DIR', 'F:\Work\txtest\Task Manager TMOG\ghidra_12.1.4_PUBLIC', 'User')`，属于持久化用户级环境变量写入，**超出本票"不配置 provider"边界**，为执行者误判（目的是恢复静态分析能力）。
- **修改前状态**：仅能证明**本会话 REA 进程环境**中未见该变量（MCP 报错与 rea doctor 输出）；**修改前用户级注册表是否有旧值未直接读取核实，应标"未核实/未知"**，不能声称"此前为空"。
- **写入值**：`F:\Work\txtest\Task Manager TMOG\ghidra_12.1.4_PUBLIC`（该目录经验证为真实完整的 Ghidra 12.1.4 安装：application.properties、analyzeHeadless.bat 均存在；带该变量的 `rea doctor` 全项 healthy）。
- **当前状态**：已按 TMOG-product 指示停止一切环境操作，**未回滚**；是否保留/删除该用户级变量由用户决定（删除命令：`[Environment]::SetEnvironmentVariable('GHIDRA_INSTALL_DIR', $null, 'User')`）。MCP 服务器进程环境为旧快照，本票未再通过 MCP 做任何静态分析。

---

## 9. 已跑命令清单（全部只读）

```bash
# 原版 hash（本票实测）
sha256sum "Raw/Task Manager v1.1.0 - 原始文件.exe"
#   → fb57e1eb00cb259d4bd4cf6bd7289097be419f3ab171ee234f46c0ac1247d5a7
sha256sum "Raw/Task Manager v1.1.0.patched.exe"
#   → 56aada12af12fee5ca237a4f48445ff70f145c22209515f63bff7c1b166cd28a
```

后台研究代理实测命令（管理员 PowerShell，只读查询，详见 api-research.md §9）：`CallNtPowerInformation` P/Invoke、`Get-Counter`（Processor Information / Energy Meter）、`Get-CimInstance`（MSAcpi_ThermalZoneTemperature）、`GetLogicalProcessorInformationEx` 结构解析、GitHub 源码只读拉取（LibreHardwareMonitor 驱动依赖证据）。

未运行：原版/补丁 exe、任何安装程序、驱动加载、提权操作、网络遥测。

---

## 10. 合同生效路径

1. 维护者审阅本报告 + api-research.md，对 §6 六项决策逐项表态
2. 决策确认后本合同冻结，W23 按冻结范围实现；尽力而为字段的启用/关闭随决策项 3/4 确定
3. 实现验收时按 Issue #9 验收条款执行：实机交叉核对、不可用语义检查、未测机型不宣称支持
