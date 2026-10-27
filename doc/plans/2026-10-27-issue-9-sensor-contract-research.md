# Issue #9 传感器能力与范围合同 — 综合研究报告

## 1. 元信息

- **日期**：2026-10-27
- **Issue**：[wanggan768q/TMOG-Public#9](https://github.com/wanggan768q/TMOG-Public/issues/9)（[Windows W22] Power & Freq 传感器能力与范围合同）
- **执行代理**：sensor-api-research（官方 API 核实）+ 原版二进制静态证据汇总
- **输入材料**：
  - 官方 API 核实报告：`doc/plans/2026-10-27-issue-9-sensor-contract-api-research.md`（19 个 Microsoft Learn URL 全部 WebFetch 验证）
  - 原版 v1.0.1 静态证据：`docs/reverse-tutorial/evidence/search_power.md`（sha256 `99e7565d…354810`，Ghidra 字符串清单）、`trace_powerfreq.md`
- **硬约束**（来自 Issue #9 本文，逐条遵守）：
  - 不新增内核驱动、不绕过硬件或系统保护
  - 不按 CPU% 估算成真实瓦数
  - 不自动提权
  - 缺硬件验证写未验证，不承诺全机型
- **分层标记**：【官方文档确认】／【官方文档确认但行为有已知偏差】／【本机实测】／【原版静态证据】（v1.0.1 二进制字符串与符号）／【未知/二手来源】／【明确不可用（无安全来源）】

## 2. 官方 API 能力（权威层）

详细逐条引用见姊妹报告 `2026-10-27-issue-9-sensor-contract-api-research.md`。本节只列合同要用的结论。

| 能力 | API | 结论 |
| --- | --- | --- |
| CPU 基准频率 | `CallNtPowerInformation(ProcessorInformation=11).MaxMhz` | 【官方文档确认】单位 MHz；每核 24 字节结构；需自行定义结构（WinNT.h 未导出） |
| CPU 当前频率 | 同上 `.CurrentMhz` | 【官方文档确认但行为有已知偏差】实测钉死在 MaxMhz，不随负载变化 |
| CPU 有效频率 | 性能计数器 `\Processor Information(*)\Actual Frequency` | 【本机实测】4545MHz = 3600 × 126.25%，公式吻合；计数器对象 Win8+ 存在，逐计数器官方定义页缺失 |
| CPU 基准×性能% | `\Processor Information(*)\Processor Frequency` + `% Processor Performance` | 【本机实测】与 Actual Frequency 换算一致 |
| P/E-core 区分 | `GetLogicalProcessorInformationEx(RelationProcessorCore).EfficiencyClass` | 【官方文档确认】【本机实测】8 核 class=1+SMT（P-core）、4 核 class=0 无 SMT（E-core）；语义是性能等级非 Intel 品牌名 |
| SMT | 同上 `.Flags & LTP_PC_SMT` | 【官方文档确认】 |
| AC/电池 | `GetSystemPowerStatus`（ACLineStatus/BatteryFlag/BatteryLifePercent/BatteryLifeTime） | 【官方文档确认】无权限要求；BatteryFullLifeTime 是估算值 |
| 电源源通知 | `RegisterPowerSettingNotification(GUID_ACDC_POWER_SOURCE)` → WM_POWERBROADCAST | 【官方文档确认】Vista+，窗口消息；PowerSettingRegisterNotification（Win7+，回调，注册即回当前值） |
| 电池百分比通知 | `GUID_BATTERY_PERCENTAGE_REMAINING`（0–100） | 【官方文档确认】 |
| 省电模式 | `GUID_POWER_SAVING_STATUS` / `SystemStatusFlag` | 【官方文档确认】Win10+ |
| 睡眠/恢复 | `PowerRegisterSuspendResumeNotification`（PBT_APMSUSPEND / PBT_APMRESUMESUSPEND / PBT_APMRESUMEAUTOMATIC） | 【官方文档确认】Win8+，回调机制，无特权要求 |
| 系统空闲/冷却模式 | `CallNtPowerInformation(SystemPowerInformation=12).CoolingMode` | 【官方文档确认】PO_TZ_INVALID_MODE 可作"无 ACPI 热区"官方探测信号 |
| CPU 瓦数 | **无文档化来源**；唯一候选 = 未文档化计数器 `\Energy Meter(*)\Power`（RAPL） | 【本机实测存在】【官方文档缺口】Intel-only，单位未确认（实测 pkg≈75.5，若 mW 则量级合理） |
| GPU 瓦数/温度 | DXGI 1.6 全接口无任何温度/功耗方法（IDXGIAdapter4 仅 GetDesc3） | 【官方文档确认：不可用】 |
| CPU 温度 | WMI `MSAcpi_ThermalZoneTemperature`(root\WMI)，单位十分之一开尔文 | 【官方文档缺失】【本机实测存在】TZ00=301.0K；OEM 依赖；官方权限文档缺失 |
| CPU 温度（备选） | `Win32_TemperatureProbe` | 【官方文档确认：不可用】"current implementations of WMI do not populate the CurrentReading property" |
| per-core 温度/瓦数 | MSR（0x19C、RAPL 0x6xx） | 【明确不可用】RDMSR 是 Ring0 指令，必然内核驱动 |

## 3. 原版 v1.1.0/v1.0.1 证据（原版观察层）

来源：`search_power.md`（v1.0.1，sha256 `99e7565d394c1dabe40e6703a3cb5971ba5219413dbed34ca1e99c7b3d354810`）；v1.1.0 原版 exe 在 `Raw/`，本票实测 SHA-256 `fb57e1eb00cb259d4bd4cf6bd7289097be419f3ab171ee234f46c0ac1247d5a7`（2026-10-27，sha256sum）。注意：上述静态字符串/导入表证据均绑定 **v1.0.1**，v1.1.0 未做字符串复验，是否一致为【未知】。

### 3.1 原版 CPU 频率来源 【原版静态证据】

字符串清单中有两条诊断标签：

| 地址 | 字符串 |
| --- | --- |
| 0x1404362a0 | `CallNtPowerInformation ProcessorInformation CurrentMhz` |
| 0x14043eae0 | `CallNtPowerInformation ProcessorInformation MaximumMhz` |

导入表函数（0x1404c085a 起）：`CallNtPowerInformation`、`PowerGetActiveScheme`、`PowerReadACValueIndex`、`PowerReadDCValueIndex`、`GetSystemPowerStatus`（0x1404c24b6）。

→ **原版 CPU 频率 = CallNtPowerInformation(ProcessorInformation)**，即第 2 节确认"报告频率/请求 P-state"而非实测有效频率。原版页面名 "Power & Freq" 展示的频率大概率是 CurrentMhz 口径（3600 恒定值型）。本项目的自主设计空间：改用性能计数器 Actual Frequency 展示真实有效频率，或两者都显示并标注口径。

### 3.2 原版 CPU 功耗来源 【原版静态证据】

CPU 瓦数字符串全部绑定厂商 SDK，无任何系统 API 佐证：

| 地址 | 字符串 |
| --- | --- |
| 0x140440070 | `CPU Package Power` |
| 0x140440088 | `AMD Ryzen Master CPUParameters::fVDDCR_VDD_Power` |
| 0x140440108 | `AMD Ryzen Master CPUParameters::fVDDCR_SOC_Power` |
| 0x1404400e0 | `CPU Core Power` |
| 0x140440158 | `SoC Power` |
| 0x1403fb210 / 0x140438d40 | `CPU Power` |
| 0x140415e10 | `Power consumption` |

→ 原版 CPU 功耗来自 **AMD Ryzen Master SDK / Intel 侧等厂商 SDK**（需要其驱动/服务栈）。Intel 侧未见 RAPL/MSR/Energy Meter 字符串。**本项目按约束不引入厂商 SDK → CPU 功耗在原版路径上不可复刻**。

### 3.3 原版 GPU 功耗来源 【原版静态证据】

| 地址 | 字符串 |
| --- | --- |
| 0x140444858 | `nvmlDeviceGetPowerUsage`（NVIDIA NVML） |
| 0x140444870 | `nvmlDeviceGetEnforcedPowerLimit` |
| 0x140445278 | `ADLX GPUTotalBoardPower`（AMD ADLX） |
| 0x140445290 | `ADLX GPUPower` |
| 0x140407ac0 | `GPU Power: %1`（UI 格式串） |

→ GPU 功耗走 **NVML / ADLX 厂商 SDK**。NVML 随驱动分发（nvml.dll），ADLX 为 AMD SDK——均属"厂商授权/专有依赖"，Issue 约束"不连接厂商授权"与"研究没有访问厂商授权"→ **不复刻**。

### 3.4 原版温度来源 【原版静态证据 + 缺口】

- UI 字符串有 `TEMP`（0x140193680 附近 switch，绘图标签）、设置页 `Temperature` 选项（0x1400da0d0 反编译体）。
- **`MSAcpi_ThermalZoneTemperature` 字符串 0 命中**；`WMI` 温度类名、`\\root\wmi` 命名空间均未在字符串清单出现。
- → 原版温度来源**未在静态证据中确认**（可能走厂商 SDK 的温度接口，NVML/ADLX/Ryzen Master 均含温度 API）。温度来源标记【未知】，需动态验证（不在本票自动授权范围）。

### 3.5 原版页面结构 【原版静态证据】

- 页面名 `Power & Freq`（0x140415ce8），15 项导航第 9 位。
- RTTI 符号：`PowerAndFreqRows@tmog::host::WindowsApplication`（返回 `vector<DisplayRow>`，lambda 接收 `HardwareDeviceDescriptor`）→ 原版按**硬件设备描述符逐设备**渲染行，CPU/GPU/盘各自一行。
- Summary 图的 `POWER` 图类型（switch case 6，`CPU Power` 标签）。
- **原版未用 PDH 性能计数器**：`PdhOpenQuery`/`PdhAddCounter` 字符串 0 命中；`\Processor Information` 计数器路径 0 命中。

### 3.6 原版证据的局限 【限制】

- 静态字符串只能证明"代码引用了什么"，不能证明运行时取值是否成功、UI 上是否真的展示、失败时如何降级。
- v1.0.1 与 v1.1.0 均未动态运行观察 Power & Freq 页的实际取值（本票不授权运行原厂 exe）。
- → 原版功耗/温度的**实际展示行为**属【未知】；本报告的能力合同按"安全可行"独立推导，不背书原版路径。

## 4. 字段矩阵（Issue 验收项 1）

可靠性：高=官方文档+实测双证；中=官方文档或单一实测；低=未文档化/OEM 依赖。

| 字段 | 来源 API | 单位 | 采样建议 | 权限 | 可靠性 | 覆盖/支持限制 | 分层 |
| --- | --- | --- | --- | --- | --- | --- | --- |
| CPU 基准频率 | `CallNtPowerInformation(11).MaxMhz` | MHz | 启动时一次+电源方案变更 | 无 | 高 | 全平台 WinXP+ | 【官方文档确认】 |
| CPU 有效频率 | PDH `\Processor Information(*)\Actual Frequency` | MHz | 1s（随主 tick） | 无 | 中-高 | Win8+；VM/部分虚拟化可能无实例 | 【本机实测】 |
| CPU 性能百分比 | PDH `% Processor Performance` | % | 1s | 无 | 中 | 同上 | 【本机实测】 |
| CPU 报告频率（原版口径） | `CallNtPowerInformation(11).CurrentMhz` | MHz | 不建议单独展示 | 无 | **低**（实测恒等于 MaxMhz） | 全平台 | 【官方文档确认但行为有已知偏差】 |
| P/E-core 分级 | `EfficiencyClass`（GetLogicalProcessorInformationEx） | 等级 0..n | 静态 | 无 | 高 | Win10+；异构系统才非零；语义为性能等级 | 【官方文档确认】【本机实测】 |
| SMT/逻辑核拓扑 | 同上 Flags + RelationProcessorCore/Package | — | 静态 | 无 | 高 | Win7+ | 【官方文档确认】 |
| AC/电池状态 | `GetSystemPowerStatus` + `GUID_ACDC_POWER_SOURCE` 通知 | 0/1/255 | 事件驱动+60s 兜底轮询 | 无 | 高 | 全平台；台式机 ACLineStatus 可能为 255 | 【官方文档确认】 |
| 电池百分比 | `BatteryLifePercent` + `GUID_BATTERY_PERCENTAGE_REMAINING` | 0–100, 255=未知 | 事件驱动 | 无 | 高 | 有电池机器 | 【官方文档确认】 |
| 充电中 | `BatteryFlag & 8`；`CallNtPowerInformation(5)` SystemBatteryState | 位 | 事件驱动 | 无 | 高 | 有电池+智能电池子系统 | 【官方文档确认】 |
| 剩余时间 | `BatteryLifeTime` | 秒，-1=未知 | 事件驱动 | 无 | 中（系统估算） | 接 AC 时恒 -1 | 【官方文档确认】 |
| 省电模式 | `GUID_POWER_SAVING_STATUS` | 0/1 | 事件驱动 | 无 | 高 | Win10+ | 【官方文档确认】 |
| 睡眠/恢复事件 | `PowerRegisterSuspendResumeNotification` 或 WM_POWERBROADCAST | 事件 | 注册即得 | 无 | 高 | Win8+（回调）/全平台（消息） | 【官方文档确认】 |
| 冷却模式/热区存在性 | `CallNtPowerInformation(12).CoolingMode` | 枚举 | 慢速（10s+） | 无 | 中 | 用于探测 ACPI 热区是否定义 | 【官方文档确认】 |
| CPU 温度 | `MSAcpi_ThermalZoneTemperature`(root\WMI) | 0.1 K（÷10−273.15→°C） | 慢速（5–10s） | **可能需管理员（官方无文档，本机管理员实测通过）** | **低** | OEM ACPI _TZ 依赖；多数机器缺失或仅主板热区；随时可能消失 | 【本机实测存在】【官方文档缺失】 |
| CPU 温度（备选探测） | `Win32_TemperatureProbe`(root\CIMV2) | — | — | — | **不可用** | 官方声明不填充 CurrentReading | 【明确不可用】 |
| CPU 瓦数 | 无安全来源；实验候选 `\Energy Meter(*)\Power`（RAPL） | 疑似 mW（未确认） | 若做：2s+，可降级隐藏 | 未验证标准用户 | **低**（未文档化、Microsoft 不承诺） | Intel-only；VM/AMD/旧平台无实例 | 【本机实测存在】【官方文档缺口】 |
| GPU 瓦数 | 无（NVML/ADLX 为厂商 SDK，约束排除） | — | — | — | — | — | 【明确不可用（无安全来源）】 |
| GPU 温度 | 无（DXGI 无接口；NVAPI/ADLX 排除） | — | — | — | — | — | 【明确不可用（无通用来源）】 |
| per-core 温度 | 无（MSR Ring0） | — | — | — | — | — | 【明确不可用】 |

## 5. 候选能力合同（供维护者确认）

### 5.1 频率合同（建议承诺）

1. **有效频率**（主展示）：PDH `\Processor Information(_Total)\Actual Frequency`，MHz，1s tick。实例缺失（VM 等）→ 显示"不可用"，不回退估算。
2. **基准频率**：`CallNtPowerInformation(11).MaxMhz`，MHz，静态。
3. **性能百分比**：`% Processor Performance`（可选次行；有效频率÷基准×100 一致性校验）。
4. **P/E-core 拓扑**：EfficiencyClass 分组计数（如 "8P+4E"），标注"按 Windows 性能等级分级，非厂商品牌名"。
5. 不展示 CallNtPowerInformation.CurrentMhz 作为"当前频率"（实测恒等于 MaxMhz，是假数据风险）——如需保留原版口径必须显式标注"报告频率（P-state 请求值）"。

### 5.2 电源合同（建议承诺）

1. **AC/电池**：`GetSystemPowerStatus` 快照 + `GUID_ACDC_POWER_SOURCE` 事件；台式机 255=未知 原样显示。
2. **电池百分比/充电状态/剩余时间**：同源；-1/255 显示"未知"，不猜。
3. **省电模式**：`GUID_POWER_SAVING_STATUS`（Win10+，低于则隐藏行）。
4. **睡眠/恢复**：WM_POWERBROADCAST 消息路径（Qt 可原生收）为主，恢复后强制刷新全量传感器快照。

### 5.3 可选传感器范围（需维护者决策）

| 项 | 建议 | 理由 |
| --- | --- | --- |
| CPU 温度（MSAcpi） | **实现为尽力而为行**：查询成功→显示；类缺失/无实例→"不可用"。不因它提权；标准用户失败时按权限不足显示 | 唯一无驱动的 CPU 温度来源，但覆盖碎片化；有官方 CoolingMode 探测信号辅助 |
| CPU 瓦数（Energy Meter 计数器） | **不进 v1 合同**；可作为后续实验票（标注：未文档化、Intel-only、单位未确认、随时可消失） | 违反"未知不估算"的风险最低做法是不承诺；数据源本质未获 Microsoft 承诺 |
| GPU 温度/瓦数 | **明确不可用行**（固定显示"无安全来源"） | DXGI 官方无接口；NVML/ADLX 违反厂商授权约束 |
| per-core 温度 | **明确不可用** | MSR=Ring0，硬约束排除 |

### 5.4 需用户（维护者）决策项

1. **CPU 瓦数是否纳入实验性行**（Energy Meter 未文档化）——建议：不纳入，立后续票。
2. **CPU 温度是否接受"部分机器可用"**的尽力而为合同——建议：接受，加覆盖限制标注。
3. **是否复刻原版的"报告频率"口径**（CurrentMhz）——建议：不复刻，仅展示有效频率+基准频率，避免假数据。
4. **实机验证矩阵**：本机（Win11 26200，Intel 8P+4E）已验证项为【本机实测】；以下仍**未验证**，需维护者提供机器或在验收时执行：
   - 标准用户（非管理员）下 MSAcpi 查询、Energy Meter 读取
   - AMD 平台 EfficiencyClass / Energy Meter / Actual Frequency
   - 有电池的笔记本（BatteryLifeTime/Charging 实测）
   - VM / Hyper-V 虚拟化环境（计数器实例存在性）
   - 台式机无电池时 ACLineStatus=255 的实际表现
5. **原版动态验证授权**：若要确认原版温度/功耗实际展示值，需维护者明确授权运行原厂 exe（本票未获得，未执行）。

## 6. 限制清单

1. **静态证据边界**：原版结论仅基于字符串/导入表/RTTI；未动态运行原厂 exe（未授权），UI 实际取值不可证。
2. **单一机型实测**：本机 Intel 8P+4E 桌面平台、管理员会话；AMD/笔记本/VM/标准用户未覆盖（矩阵已逐行标注）。
3. **文档缺口**：`MSAcpi_ThermalZoneTemperature` 与 Energy Meter 计数器在现行 Microsoft Learn 无参考页——这不是检索失败，是官方文档缺失（同站其他页面均 200）。两者行为可能随 Windows 更新变化。
4. **搜索工具限制**：WebSearch 本次会话持续空结果，二手来源（E3 估算模型、任务管理器 1s tick 官方口径）未交叉验证，报告按【未知】处理。
5. **未安装任何驱动、未访问厂商 SDK、未运行原厂 exe**——符合 Issue 验收项 4。
6. 本报告不承诺像素级复刻原版 Power & Freq 页；本项目为独立 Qt 实现。

## 7. 验收对照（Issue #9 acceptance criteria）

- [x] **每个字段有来源、单位、频率、权限、可靠性及支持／未知矩阵** → 第 4 节 19 行矩阵。
- [x] **选定安全可行的频率／电源测量，并明确功耗／温度无来源时不可用** → 第 5.1/5.2 节承诺合同；CPU 瓦数/GPU 全项/per-core 温度标【明确不可用】；CPU 温度按尽力而为+覆盖限制。
- [ ] **维护者确认展示范围及后续测试合同** → 第 5.4 节列出 5 项决策；待确认。对应硬件证据（AMD/笔记本/VM/标准用户）缺失项已标"未验证"，构成验收时的限制或阻塞。
- [x] **研究没有安装驱动或访问厂商授权，不以继续调查完成** → 全程仅 PDH/WMI/Power API 查询 + 二进制静态分析；第 6 节限制清单。

## 8. 姊妹报告与本报告的关系

| 文档 | 内容 |
| --- | --- |
| 本文 | 能力合同汇总：原版观察 + 官方能力 → 字段矩阵 + 候选合同 + 决策项 |
| `2026-10-27-issue-9-sensor-contract-api-research.md` | 官方证据细节：19 个 URL 逐条原文引用（英文+中文）、实测命令、权限清单、分层标注 |
