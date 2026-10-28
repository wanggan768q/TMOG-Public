# Issue #9 传感器能力与范围合同 — 官方 API 证据核实报告

## 1. 元信息

- **日期**：2026-10-27
- **执行代理**：研究代理（team-lead 派发，Issue #9 证据核实子任务）
- **Issue**：wanggan768q/TMOG-Public#9（W22 Power & Freq 传感器能力与范围合同）
- **约束**（来自任务书）：
  - CPU% 绝不能换算成瓦数
  - 不猜 Intel P/E-core 类型
  - 不使用内核驱动（WinRing0/OpenHardwareMonitor 式）、不绕过保护
- **分层标记**：
  - 【官方文档确认】= Microsoft Learn 官方文档原文核实
  - 【官方文档确认但行为有已知偏差】= 文档存在但实测/已知行为与字面不符
  - 【本机实测】= 在本机（Win11 Pro 26200, Intel 20 逻辑核, 管理员会话）验证
  - 【未知/二手来源】= 无法从官方文档确认
  - 【明确不可用（无安全来源）】= 确认无符合约束的公开来源

---

## 2. CPU 频率

### 2.1 CallNtPowerInformation + PROCESSOR_POWER_INFORMATION 【官方文档确认】【本机实测】

**来源**：https://learn.microsoft.com/en-us/windows/win32/api/powerbase/nf-powerbase-callntpowerinformation

- 函数签名：`NTSTATUS CallNtPowerInformation(POWER_INFORMATION_LEVEL InformationLevel, PVOID InputBuffer, ULONG InputBufferLength, PVOID OutputBuffer, ULONG OutputBufferLength)`，DLL: PowrProf.dll，最低支持 Windows XP。
- `ProcessorInformation` (level 11)：

> "The *lpOutputBuffer* buffer receives one PROCESSOR_POWER_INFORMATION structure for each processor that is installed on the system. Use the GetSystemInfo function to retrieve the number of processors."
> （输出缓冲区为每个已安装处理器接收一个 PROCESSOR_POWER_INFORMATION 结构。）

- 权限：文档未要求管理员；错误码仅列出 `STATUS_BUFFER_TOO_SMALL` 与 `STATUS_ACCESS_DENIED`（"The caller had insufficient access rights"）。实测标准 API 调用在本机成功（管理员会话），官方文档未记载需要提权。

**PROCESSOR_POWER_INFORMATION**（https://learn.microsoft.com/en-us/windows/win32/power/processor-power-information-str）：

```c
typedef struct _PROCESSOR_POWER_INFORMATION {
  ULONG Number;
  ULONG MaxMhz;        // "The maximum specified clock frequency of the system processor, in megahertz."
  ULONG CurrentMhz;    // "The processor clock frequency, in megahertz. This number is the maximum
                       //  specified processor clock frequency multiplied by the current processor throttle."
  ULONG MhzLimit;      // "…maximum specified processor clock frequency multiplied by the current
                       //  processor thermal throttle limit."
  ULONG MaxIdleState;
  ULONG CurrentIdleState;
} PROCESSOR_POWER_INFORMATION;
```

- 单位：MHz（文档明确 "in megahertz"）。
- **无瓦数字段**。结构只有 6 个 ULONG，不含功耗/能量字段。
- **结构未在 WinNT.h 导出**（文档 Remarks："this structure definition was accidentally omitted from WinNT.h"），需自行定义。

**关键实测偏差（CurrentMhz 不反映实测频率）**【本机实测】：

- 同一时刻：`CallNtPowerInformation` 返回全部 20 个逻辑核 `CurrentMhz = 3600 = MaxMhz`（数值钉死）；
- 同期性能计数器 `\Processor Information(_Total)\Actual Frequency = 4545.12 MHz`、`% Processor Performance = 126.25`。
- 结论：**在本机（Win11 26200，该 Intel 平台，本次采样场景）CurrentMhz 实际反映的是请求的 P-state/标称节流值，不是实测瞬时频率**。文档中 "multiplied by the current processor throttle" 的字面含义与本机实测行为不符——它基本不随负载波动。该行为偏差仅证实于本测试机与本次采样场景；其他机型/负载/电源方案下是否一致为【未知】。与任务书假设"是否实际只反映请求的 P-state"在本机一致：**确认（限本机实测）**。
- 另实测首次调用缓冲区不足返回 `0xC0000023` (STATUS_BUFFER_TOO_SMALL)，缓冲区需 `24 × 逻辑核数` 字节（6×ULONG）。

### 2.2 PowerInformation(ProcessorInformation) 与 CallNtPowerInformation 的区别 【官方文档确认】

`PowerInformation`（NtPowerInformation 的用户态别名，指向同一内核信息类）不是独立公开 API；用户态文档化入口就是 `CallNtPowerInformation`（PowrProf.dll）。`POWER_INFORMATION_LEVEL` 值域（ProcessorInformation=11, SystemPowerInformation=12 等）以 CallNtPowerInformation 文档页的表格为准。注意：`PowerInformation` 这个名字在 Windows 驱动（WDM `NtPowerInformation`/ZwPowerInformation）语境存在，但用户态应用只应用 `CallNtPowerInformation`。

### 2.3 性能计数器 Processor Information 对象 【官方文档确认】【本机实测】

**本机实测计数器清单**（`(Get-Counter -ListSet 'Processor Information').Counter`，Windows 11 Pro 26200）：

- `\Processor Information(*)\% Processor Performance`
- `\Processor Information(*)\% of Maximum Frequency`
- `\Processor Information(*)\Processor Frequency`
- `\Processor Information(*)\Actual Frequency`
- 以及 % Processor Utility、Performance Limit Flags、% Performance Limit、C-state 计数器等 30 个。

实测读数（管理员 PowerShell，Get-Counter）：

| 计数器 | 实测值 | 含义 |
| --- | --- | --- |
| % Processor Performance | 126.25 | 当前性能百分比（0-100 基准以上可超） |
| % of Maximum Frequency | 100.00 | 相对最大频率的百分比 |
| Processor Frequency | 3600.00 MHz | = MaxMhz × (% of Maximum Frequency)/100 |
| Actual Frequency | 4545.12 MHz | 实测有效频率 = Processor Frequency × % Processor Performance/100 |

- 有效频率公式：`Actual/有效频率 ≈ 基准(MaxMhz) × %ProcessorPerformance/100`，与实测 3600×1.2625≈4545 吻合【本机���测验证】。
- **官方文档缺口**：Microsoft Learn 当前没有"Processor Information 计数器对象"逐计数器的权威参考页（搜索未命中专门文档页；旧版 perfctr 参考已 404）。Windows Server 排障指南确认 `\Processor Information(*)\` 对象与 `% Processor Time/% User Time/% Privileged Time/% Idle Time` 等存在（https://learn.microsoft.com/en-us/troubleshoot/windows-server/performance/troubleshoot-performance-problems-in-windows），并给出 PDH 数据采集建议（15 秒间隔为例，且说明"Performance Monitor 图最多 1000 个数据点"的显示限制，非采集限制）。
- 采样间隔：官方排障示例用 15s；任务书关注 1s tick——PDH 无官方最低间隔限制，1s 实测可行（本机 Get-Counter 即时读取成功）。**计数器含义（% Processor Performance 等）的逐项官方定义页【未知/二手来源】**——建议实现时以实测口径为准（Actual Frequency = Processor Frequency × Perf%/100）。

### 2.4 GetSystemInfo / GetLogicalProcessorInformationEx 【官方文档确认】

**GetSystemInfo / SYSTEM_INFO**（https://learn.microsoft.com/en-us/windows/win32/api/sysinfoapi/ns-sysinfoapi-system_info）：

- **不存在 `dwMaximumProcessorMhz` 字段**。官方文档与 Windows SDK 10.0.22621 / 10.0.26100 头文件 `sysinfoapi.h` 均为 0 命中（本机 grep 验证）。任务书中"Win11 SDK 是否新增该字段"的疑问：**确认不存在**。SYSTEM_INFO 字段只有 wProcessorArchitecture、dwPageSize、地址范围、dwActiveProcessorMask、dwNumberOfProcessors、dwProcessorType、dwAllocationGranularity、wProcessorLevel、wProcessorRevision。
- CPU 基准频率的官方来源因此是 `CallNtPowerInformation` 的 `MaxMhz` 或性能计数器 `Processor Frequency`（基准口径），不是 SYSTEM_INFO。

**GetLogicalProcessorInformationEx + PROCESSOR_RELATIONSHIP**（https://learn.microsoft.com/en-us/windows/win32/api/winnt/ns-winnt-processor_relationship）：

```c
typedef struct _PROCESSOR_RELATIONSHIP {
  BYTE Flags;                 // LTP_PC_SMT = 核心有多个逻辑处理器 (SMT/超线程)
  BYTE EfficiencyClass;       // Win10+
  WORD RelativePerformance;
  WORD RelativeEfficiency;
  BYTE Reserved[16];
  WORD GroupCount;
  GROUP_AFFINITY GroupMask[ANYSIZE_ARRAY];
} PROCESSOR_RELATIONSHIP;
```

**EfficiencyClass 官方原文**：

> "If the Relationship member … is RelationProcessorCore, EfficiencyClass specifies the intrinsic tradeoff between performance and power for the applicable core. A core with a higher value for the efficiency class has intrinsically greater performance and less efficiency than a core with a lower value for the efficiency class. EfficiencyClass is only nonzero on systems with a heterogeneous set of cores."
> （EfficiencyClass 指定核心固有的性能/功耗权衡；值越高性能越高能效越低；仅在异构核心系统上非零。最低支持 Windows 10。）

- **任务书假设修正**：任务书预期结论为"无法从公开 API 区分 P/E core"——**该结论不成立**。官方 API `EfficiencyClass` 就是 Windows 官方提供的异构核心分级；任务管理器的 P/E 标注也基于它。但注意两点：
  1. 它给的是**性能等级（class）**，不是 Intel 官方"Performance-core/Efficient-core"品牌名——区分 Intel 哪个 class 是 P-core 哪个是 E-core 仍需推断（高 class=P、低 class=E 是惯例，非文档承诺）。
  2. 语义是"性能/功耗权衡等级"，ARM 大小核同样适用。
- **本机实测**（GetLogicalProcessorInformationEx RelationProcessorCore）：12 个物理核心，其中 8 个 `SMT=1, EfficiencyClass=1`（= P-core 带超线程），4 个 `SMT=0, EfficiencyClass=0`（= E-core）。与 Intel 异构拓扑完全吻合，实测可用。
- 结构布局（实测）：entry 头部 `DWORD Relationship @0, DWORD Size @4`，`Flags @8, EfficiencyClass @9`，`GroupMask @32`，每 entry 48 字节。
- 另实测 RelationProcessorCore 首次调用需两次（先取 buffer 长度再取数据），ERROR_INSUFFICIENT_BUFFER 流程与文档一致。

---

## 3. 电源状态

### 3.1 GetSystemPowerStatus / SYSTEM_POWER_STATUS 【官方文档确认】

**来源**：https://learn.microsoft.com/en-us/windows/win32/api/winbase/ns-winbase-system_power_status

字段与单位：

| 字段 | 单位/含义 |
| --- | --- |
| ACLineStatus | 0=Offline, 1=Online, 255=Unknown |
| BatteryFlag | 1 High(>66%), 2 Low(<33%), 4 Critical(<5%), 8 **Charging**, 128 无电池, 255 Unknown |
| BatteryLifePercent | 0–100 剩余电量百分比，255=未知 |
| SystemStatusFlag | 0=省电模式关, 1=省电模式开（Win10 引入，原 Reserved1） |
| BatteryLifeTime | 剩余秒数，-1=未知或接 AC |
| BatteryFullLifeTime | 满电续航秒数，-1=未知或接 AC |

文档 Remarks：

> "The system is only capable of estimating BatteryFullLifeTime based on calculations on BatteryLifeTime and BatteryLifePercent. Without smart battery subsystems, this value may not be accurate enough to be useful."
> （BatteryFullLifeTime 是估算值，无智能电池子系统时可能不准确。）

- 权限：文档未说明特权限制；标准用户未实测。最低支持 Windows XP。

### 3.2 CallNtPowerInformation SystemPowerInformation (level 12) 【官方文档确认】

结构 SYSTEM_POWER_INFORMATION（https://learn.microsoft.com/en-us/windows/win32/power/system-power-information-str）：

| 字段 | 含义 |
| --- | --- |
| MaxIdlenessAllowed | 系统视为空闲的百分比阈值 |
| Idleness | 当前空闲百分比 |
| TimeRemaining | 空闲计时器剩余秒数 |
| CoolingMode | PO_TZ_ACTIVE(0)/PO_TZ_PASSIVE(1)/PO_TZ_INVALID_MODE(2) |

- CoolingMode=2 的语义即"系统不支持 CPU 节流或**无热区定义**"——这是判定 OEM 是否暴露 ACPI 热区的官方信号之一。
- 该 level 只反映**系统空闲度与冷却模式**，不含频率、不含瓦数。

### 3.3 PowerRegisterSuspendResumeNotification 【官方文档确认】

**来源**：https://learn.microsoft.com/en-us/windows/win32/api/powerbase/nf-powerbase-powerregistersuspendresumenotification

```cpp
DWORD PowerRegisterSuspendResumeNotification(
  [in]  DWORD         Flags,        // 必须是 DEVICE_NOTIFY_CALLBACK
  [in]  HANDLE        Recipient,    // 指向 DEVICE_NOTIFY_SUBSCRIBE_PARAMETERS
  [out] PHPOWERNOTIFY RegistrationHandle
);
```

> "Registers to receive notification when the system is suspended or resumed."
> 回调 Type 可能值：**PBT_APMSUSPEND, PBT_APMRESUMESUSPEND, PBT_APMRESUMEAUTOMATIC**。

- 最低支持：**Windows 8** / Server 2012（文档 Requirements 明确）。
- 机制：**回调**（DeviceNotifyCallbackRoutine），不是窗口消息。
- 权限：文档未说明特权限制；标准用户未实测。
- 注意（实现提示）：Qt 主线程不在此回调上，需要自建消息泵或用窗口消息替代方案（见 3.4 的 WM_POWERBROADCAST 也可收到 PBT_APMSUSPEND/PBT_APMRESUMESUSPEND）。

### 3.4 GUID_ACDC_POWER_SOURCE / PowerSettingRegisterNotification / WM_POWERBROADCAST 【官方文档确认】

**Power setting GUIDs**（https://learn.microsoft.com/en-us/windows/win32/power/power-setting-guids）：

> **GUID_ACDC_POWER_SOURCE** (5D3E9A59-E9D5-4B00-A6BD-FF34FF516548)："The system power source has changed." Data 为 DWORD（SYSTEM_POWER_CONDITION）：PoAc(0)=交流, PoDc(1)=电池, PoHot(2)=UPS 短时电源。

> **GUID_BATTERY_PERCENTAGE_REMAINING** (A7AD8041-B45A-4CAE-87A3-EECBB468A9E1)："The remaining battery capacity has changed. … The Data member is a DWORD that indicates the current battery capacity remaining as a percentage from 0 through 100."（最细粒度 1%。）

> **GUID_POWER_SAVING_STATUS** (E00958C0-C213-4ACE-AC77-FECCED2EEEA5)："Battery saver has been turned off or on…" Data DWORD：0x0=关, 0x1=开（省电模式）。

**注册 API**（三个，按宿主形态选）：

| API | 头文件 | 机制 | 最低版本 |
| --- | --- | --- | --- |
| RegisterPowerSettingNotification | winuser.h | 窗口消息 WM_POWERBROADCAST + PBT_POWERSETTINGCHANGE | Vista |
| PowerSettingRegisterNotification | powersetting.h | 窗口/服务句柄/回调 | Win7 |
| （服务用 DEVICE_NOTIFY_SERVICE_HANDLE） | | HandlerEx 回调 | — |

- RegisterPowerSettingNotification 文档（https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-registerpowersettingnotification）：交互应用 Flags=0、hRecipient=窗口句柄；服务 Flags=1。
- PowerSettingRegisterNotification 文档（https://learn.microsoft.com/en-us/windows/win32/api/powersetting/nf-powersetting-powersettingregisternotification）：Remarks 指出"注册后立即用当前值回调一次"——适合初始化。
- 权限：两者文档均未说明特权限制；标准用户未实测。

### 3.5 电池状态（SystemBatteryState level 5）【官方文档确认】

CallNtPowerInformation 文档页确认 `SystemBatteryState (5)` 输出 SYSTEM_BATTERY_STATE 结构（含充电/容量细节），InputBuffer 必须为 NULL。作为 GetSystemPowerStatus 的补充（充电功率、放电速率等需要时用）。

---

## 4. 功耗（瓦数）

### 4.1 总结论 【明确不可用（无安全来源）】→ 修正：**有一个被官方忽略的半公开来源，仍不建议依赖**

**核心结论维持**：Windows 用户态公开 API 文档中**没有任何官方记载的 CPU/GPU 瓦数来源**。所有官方文档化的功耗路径要么是估算、要么不存在。但本机实测发现一个重要例外（见 4.2）。

### 4.2 PROCESSOR_POWER_INFORMATION 不含瓦数 【官方文档确认】

2.1 节已确认结构只有 6 个 ULONG。任务书提到的 `EstimatedMilliwattsPerProcessor`：**官方文档中不存在该字段**（PROCESSOR_POWER_INFORMATION 文档页无此字段；这是旧版 MSDN/内部头的遗留，未见于现行 Learn 页面）。→ 状态：【未知/二手来源】字段本身不存在于现行文档，无需处理。

### 4.3 Energy Meter 性能计数器 【本机实测存在】【官方文档缺口】【未知/二手来源】

**本机实测**（Windows 11 Pro 26200，管理员会话）：

- 计数器集 `Energy Meter` 存在，3 个计数器：`\Energy Meter(*)\Power`、`\Energy Meter(*)\Energy`、`\Energy Meter(*)\Time`。
- 实例为 RAPL 域：`rapl_package0_pkg`、`rapl_package0_dram`、`rapl_package0_pp0`、`rapl_package0_pp1`、`_total`。
- 实测 Power 值：`rapl_package0_pkg ≈ 75550`（若单位 mW 即 ≈75.5W package 功耗，量级合理）；`rapl_package0_dram = 0`。
- 计数器类型 `AverageCount64`，DefaultScale=0。

**判断**：

- 这是 **Intel RAPL**（MSR 0x6xx 系列，MSR_PKG_ENERGY_STATUS 等）经内核计数器暴露——数据源本质是 MSR，但**由 Windows 内核驱动收集，用户态只需 PDH 读数**，不加载任何第三方驱动。
- **Microsoft Learn 无官方文档页**（搜索 "Energy Meter counter" 无文档命中；`https://learn.microsoft.com/en-us/windows/win32/perfctrs/` 相关页 404）。counter set 在 Windows 8+ 内核存在（与 `PowerInformation` 的 RAPL 支持同期），但**从未被官方文档化**。
- 单位（mW？µW？）：文档缺失，实测 75550 在 pkg 上量级符合 mW 的假设，但**未经官方确认**。
- 覆盖限制：仅 Intel CPU（AMD 用不同机制）；虚拟机可能无实例；dram 域可能为 0（本机如此）。
- **结论**：技术上"无第三方驱动"可行，但属于**未文档化接口**——可用性、单位、持久性都不受 Microsoft 承诺。若 Issue #9 要纳入 CPU 瓦数，唯一途径就是它，且必须标注"未文档化、Intel-only、实验性"。**不建议在 v1 合同中承诺**，可作为可降级实验字段。

### 4.4 GetPowerSetting GUID_POWER_SAVING_STATUS 【官方文档确认】

见 3.4——是"省电模式开/关"的**状态通知**，不是瓦数。不能当功耗数据源。

### 4.5 WMI Win32_PerfFormattedData_Counters_ProcessorInformation 【官方文档确认（无电源字段）】

- 该 WMI 格式化类是 Processor Information 计数器的 WMI 包装，属性与计数器一一对应（PercentProcessorPerformance、PercentMaximumFrequency、ProcessorFrequency、ActualFrequency 等）。**无瓦数/功耗字段**（功耗不在 Processor Information 计数器中，见 4.3——Energy Meter 是独立计数器集）。
- WMI 性能类的官方机制文档：https://learn.microsoft.com/en-us/windows/win32/wmisdk/performance-counter-provider
- → 状态：【官方文档确认】该类存在，且**确认无电源字段**。

### 4.6 Win11 24H2 任务管理器"能耗估算"（energy estimate）【未知/二手来源】

- Microsoft 公开文档中**无任何 API**暴露任务管理器 Process 列的能耗估算值。
- 该值来自 Microsoft 内部电源估算模型（外界称为 "E3"，Windows 11 的 energy estimator），**不对外发布**。此说法在社区（Windows Insider 博客、第三方分析）广泛流传，但**Microsoft Learn 无官方页面**承认模型名或暴露机制。
- → 状态：【未知/二手来源】"任务管理器能耗列无公开 API"这一点由官方文档的缺失反推（无任何 documented API 返回它），"E3 模型名"属于二手来源。

### 4.7 硬件/驱动方案（仅列举，明确不采用）【官方文档确认（作为"不可用"证据）】

**LibreHardwareMonitor / OpenHardwareMonitor 需要内核级访问**：

- LibreHardwareMonitor（MPL 2.0）README："Some sensors require administrator privileges to access the data."
- 源码验证（本机 GitHub API 拉取）：
  - `LibreHardwareMonitorLib/PawnIo/PawnIo.cs`：通过 `CreateFile` 打开驱动设备 + `IOCTL_PIO_EXECUTE_FN (0x841<<2)` / `IOCTL_PIO_LOAD_BINARY (0x821<<2)` 执行内核侧代码。
  - `LibreHardwareMonitorLib/PawnIo/IntelMsr.cs`：`ReadMsr(uint index, out ulong value)` — CPU 温度与能耗均通过 **MSR 读取**（`ioctl_read_msr`），包括 `MSR_PKG_ENERGY_STATUS` 等。
- PawnIO（https://github.com/namazso/PawnIO，GPL-2.0）自述 "Input-output driver"，是加载沙盒模块的**内核驱动**；旧版 LHM/OHM 用 WinRing0（同样是内核驱动，需驱动签名）。
- **结论**：MSR 直读路线需内核驱动（Ring0）承载——本轮工程约束"不新增内核驱动、不绕过保护"，故**本轮不采用**（属范围选择；MSR 需 Ring0 这一事实不排除厂商已有带驱动的来源，本轮未纳入评估）。

---

## 5. 温度

### 5.1 WMI MSAcpi_ThermalZoneTemperature（root\WMI）【官方文档缺失】【本机实测存在】

**重大文档事实**：`MSAcpi_ThermalZoneTemperature` 在现行 Microsoft Learn **没有独立 API 参考页**。

- `https://learn.microsoft.com/en-us/windows/win32/wmicoreprov/msacpi-thermalzonetemperature` → 404
- `.../msacpi-thermalzonetemperature-kernel`、`.../msacpi-thermalzonetemperature-msacpi-thermalzonetemperature` → 404
- MicrosoftDocs org 的 GitHub 中无该类文档（code search 0 命中）。
- Learn 站内搜索仅返回 Q&A 提及（如 "how to determine the temperatures of cpu and gpu in windows 10"，含 `/10 - 273.15` 开尔文换算示例）。
- 对照组 `Win32_TemperatureProbe`（root\CIMV2）有官方页且明确"不填充 CurrentReading"（见 5.2）。

**单位与用法**（Q&A/二手来源，与旧版文档一致）：`CurrentTemperature` 单位为**十分之一开尔文**（tenths of degrees Kelvin），摄氏度 = `CurrentTemperature/10 − 273.15`。

**本机实测**（管理员 PowerShell）：

```
InstanceName            CurrentTemperature
ACPI\ThermalZone\TZ00_0               3010    → 301.0 K = 27.85 °C
```

- 本机存在该类且有 1 个实例（TZ00，主板热区而非 CPU 专属）。
- 权限：本机在管理员会话读取成功。官方权限文档缺失；**多数二手来源指出读取需要管理员**（该 WMI 类查询通常需要提升的令牌）。→ 权限状态：【未知/二手来源】（实测管理员下可用；标准用户行为未测，因为本会话即为管理员）。
- 可用性：依赖 OEM ACPI `_TZ`/ThermalZone 实现——这解释了"多数机器不存在"（OEM 未实现或只给主板热区不给 CPU）。SYSTEM_POWER_INFORMATION.CoolingMode=PO_TZ_INVALID_MODE 可作官方探测信号（见 3.2）。
- **结论**：可用性碎片化（OEM 依赖）、单位是开尔文×10、官方文档缺失、权限未文档化 → 合同应标注为"**尽力而为、部分机器可用、随时可能消失**"。

### 5.2 Win32_TemperatureProbe（root\CIMV2）【官方文档确认：无实时读数】

**来源**：https://learn.microsoft.com/en-us/windows/win32/cimwin32prov/win32-temperatureprobe

> "Real-time readings for the CurrentReading property cannot be extracted from SMBIOS tables. For this reason, current implementations of WMI do not populate the CurrentReading property. The CurrentReading property's presence is reserved for future use."
> （CurrentReading 无法从 SMBIOS 表提取实时读数；现行 WMI 实现不填充该属性。）

- → **明确不可用**作为温度来源（官方自己声明不填充）。

### 5.3 CPU per-core 温度（MSR 0x19C/DTS、Intel DPTF）【本轮合同范围不可用：MSR 直读需 Ring0】

- per-core 温度读数依赖 MSR（IA32_THERM_STATUS 0x19C、MSR_TEMPERATURE_TARGET 等），用户态不可直接访问（Ring0 指令 RDMSR）。LibreHardwareMonitor 源码证实其 per-core 温度走 `ioctl_read_msr` 内核模块（见 4.7）。
- Intel DPTF（Dynamic Tuning Framework）是 OEM/驱动侧方案，无用户态公开 API。
- → **本轮合同范围不可用**：所选标准 API 无已确认来源；per-core 直读需 MSR（RDMSR 为 Ring0 指令），本轮无驱动约束下不可达。MSR 需 Ring0 这一架构事实**不排除厂商已有 per-core 来源**（如厂商 SDK/驱动栈，本轮未纳入评估）。

### 5.4 GPU 温度 【官方文档确认：DXGI 无温度接口】

- **IDXGIAdapter4**（最新 DXGI 1.6 适配器接口，https://learn.microsoft.com/en-us/windows/win32/api/dxgi1_6/nn-dxgi1_6-idxgiadapter4）：方法列表**只有 GetDesc3**（ACG 兼容性），无温度/功耗方法。
- **DXGI_ADAPTER_DESC3**（https://learn.microsoft.com/en-us/windows/win32/api/dxgi1_6/ns-dxgi1_6-dxgi_adapter_desc3）：字段为 Description/VendorId/DeviceId/SubSysId/Revision/三种内存大小/AdapterLuid/Flags/抢占粒度——**无温度字段**。
- DXGI 1.6 的改进（低延迟/混合适配器枚举等）亦不含温度。
- **NVAPI**（NVIDIA）与 **ADLX/ADL**（AMD）：厂商专有 SDK，可读 GPU 温度/功耗，但许可与分发受限（NVAPI 需接受 NVIDIA SDK EULA；ADLX 是 AMD 开源但绑定 AMD 硬件），且违反"通用、不装驱动"的合同精神。→ 列举不采用，状态：厂商专有（二手来源确认存在，本报告未深入核实其许可条款细节）。

---

## 6. 权限逐项清单

| API | 管理员要求 | 证据 |
| --- | --- | --- |
| CallNtPowerInformation（level 11/12/5） | 文档未说明特权限制；标准用户未实测，返回码含 STATUS_ACCESS_DENIED | 官方页 + 本机管理员实测成功 |
| GetSystemPowerStatus | 文档未说明特权限制；标准用户未实测 | 官方页无权限段 |
| PowerRegisterSuspendResumeNotification | 文档未说明特权限制；标准用户未实测 | 官方页无权限段 |
| RegisterPowerSettingNotification | 文档未说明特权限制；标准用户未实测 | 官方页无权限段 |
| PowerSettingRegisterNotification | 文档未说明特权限制；标准用户未实测 | 官方页无权限段 |
| PDH 性能计数器（Processor Information / Energy Meter） | 文档未说明特权限制；本机管理员下验证可读，标准用户未实测 | 本机实测 + 文档缺口 |
| MSAcpi_ThermalZoneTemperature | **官方无文档**；二手来源普遍称需管理员；本机管理员下成功 | 见 5.1 |
| MSR/RAPL 直读 | 需内核驱动承载（本轮不采用） | 见 4.7/5.3 |

注：本会话为管理员会话。对官方文档未列权限段的 API，本报告表述为"文档未说明特权限制、标准用户未实测"——这**不是文档担保**；MSAcpi 的标准用户行为未实测，合同中按"可能需要管理员"保守处理。

---

## 7. 采样频率与资源

- **CallNtPowerInformation 开销**：文档无任何性能开销说明（无 IRQL/耗时承诺）。它是轻量内核查询，无官方延迟数据 → 【未知】。实现时按普通系统调用对待（1s tick 完全无压力）。
- **PDH/性能计数器采样间隔**：官方排障指南示例用 **15 秒**（`logman -si 00:00:15`），并说明这是 PerfMon 图形显示限制（1000 点）而非采集下限。1s 采样无官方警告。来源：https://learn.microsoft.com/en-us/troubleshoot/windows-server/performance/troubleshoot-performance-problems-in-windows
- **任务管理器自身 1s tick**：**官方无文档记载**任务管理器内部采样间隔（无 Learn 页面说明其刷新机制）。任务书若引用"1s"应作为观察假设而非官方承诺 → 【未知/二手来源】。

---

## 8. 字段矩阵草案

| 字段 | 数据来源 API | 单位 | 采样建议 | 权限 | 可靠性 | 覆盖限制 | 分层 |
| --- | --- | --- | --- | --- | --- | --- | --- |
| CPU 基准频率 | CallNtPowerInformation(11).MaxMhz；或计数器 Processor Frequency（基准口径） | MHz | 慢速（1–10s）即可，静态 | 文档未说明特权限制；标准用户未实测 | 高（官方） | 全平台 | 【官方文档确认】 |
| CPU 当前/有效频率 | 计数器 `\Processor Information(*)\Actual Frequency`（或 Processor Frequency × % Processor Performance/100） | MHz | 1s tick | 文档未说明特权限制；标准用户未实测 | 高（实测与公式吻合） | 全平台（Win8+ 计数器对象） | 【本机实测】+【官方对象存在】 |
| CPU"当前频率"（CallNtPowerInformation.CurrentMhz） | CallNtPowerInformation(11).CurrentMhz | MHz | 不建议作为主频率源 | 文档未说明特权限制；标准用户未实测 | **低**（实测钉死在 MaxMhz，不随负载变） | 全平台 | 【官方文档确认但行为有已知偏差】 |
| AC/电池 | GetSystemPowerStatus.ACLineStatus | 0/1/255 | 事件驱动（GUID_ACDC_POWER_SOURCE）+ 慢速轮询 | 文档未说明特权限制；标准用户未实测 | 高 | 全平台 | 【官方文档确认】 |
| 电池百分比 | GetSystemPowerStatus.BatteryLifePercent；事件 GUID_BATTERY_PERCENTAGE_REMAINING | 0–100, 255=未知 | 事件驱动 + 60s 兜底 | 文档未说明特权限制；标准用户未实测 | 高 | 有电池的机器 | 【官方文档确认】 |
| 充电状态 | BatteryFlag & 8；SystemBatteryState(level 5) | 位标志 | 同上 | 文档未说明特权限制；标准用户未实测 | 高 | 有电池的机器 | 【官方文档确认】 |
| 省电模式 | SystemStatusFlag / GUID_POWER_SAVING_STATUS | 0/1 | 事件驱动 | 文档未说明特权限制；标准用户未实测 | 高 | Win10+ | 【官方文档确认】 |
| 睡眠/恢复通知 | PowerRegisterSuspendResumeNotification（回调，Win8+）或 WM_POWERBROADCAST(PBT_APMSUSPEND/RESUME) | 事件 | 注册即得 | 文档未说明特权限制；标准用户未实测 | 高 | 全平台 Win8+ | 【官方文档确认】 |
| 电源源变更通知 | RegisterPowerSettingNotification(GUID_ACDC_POWER_SOURCE) → WM_POWERBROADCAST | 事件（PoAc/PoDc/PoHot） | 注册即得 | 文档未说明特权限制；标准用户未实测 | 高 | 全平台 Vista+ | 【官方文档确认】 |
| CPU 瓦数 | **无安全来源**；唯一候选 = `\Energy Meter(rapl_package0_pkg)\Power`（未文档化） | 实测值疑为 mW（未确认） | 若做：1–2s，可降级 | 管理员未验证（本机管理员下可读） | **低**（未文档化，Microsoft 不承诺） | Intel-only（RAPL）、VM 可能无实例 | 【本机实测存在】【官方文档缺口】 |
| GPU 瓦数 | 标准 API（DXGI）无接口；NVML/ADLX 厂商 SDK 存在但本轮选择不纳入（依赖/范围选择） | — | — | — | — | — | 本项目合同范围不可用（不宣称全平台不可测） |
| CPU 温度 | WMI `MSAcpi_ThermalZoneTemperature`(root\WMI).CurrentTemperature | 十分之一开尔文 → ÷10−273.15 得 °C | 慢速（5–10s），温度变化慢 | 可能需管理员（官方无文档） | 低-中（OEM 依赖，多数机器只有主板热区或缺失） | OEM ACPI _TZ 支持的机器；Win32_TemperatureProbe 官方声明不填充 | 【本机实测存在】【官方文档缺失】 |
| GPU 温度 | 同上（DXGI 无接口；厂商 SDK 本轮不纳入） | — | — | — | — | — | 本项目合同范围不可用（同上） |
| P/E-core 区分 | GetLogicalProcessorInformationEx(RelationProcessorCore).EfficiencyClass（Win10+） | 等级值（0=highest efficiency） | 静态 | 文档未说明特权限制；标准用户未实测 | 高（官方语义 + 本机 8P+4E 实测吻合） | Win10+；语义是性能等级，非 Intel 品牌名 | 【官方文档确认】【本机实测】 |
| SMT/超线程 | 同上 .Flags & LTP_PC_SMT | 位 | 静态 | 文档未说明特权限制；标准用户未实测 | 高 | 全平台 Win7+ | 【官方文档确认】 |

---

## 9. 引用命令与限制清单

本报告实测所用命令（PowerShell，管理员会话，Windows 11 Pro 10.0.26200，20 逻辑核 Intel 异构 CPU）：

```powershell
# 1. CallNtPowerInformation(ProcessorInformation=11)
Add-Type -MemberDefinition '[DllImport("powrprof.dll")] public static extern int CallNtPowerInformation(int level, IntPtr inBuf, int inLen, byte[] outBuf, int outLen);' -Name P2 -Namespace W2
$n = [Environment]::ProcessorCount          # 20
$buf = New-Object byte[] (24*$n)            # 每核 24 字节（6×ULONG）；不足则 0xC0000023
[W2.P2]::CallNtPowerInformation(11, [IntPtr]::Zero, 0, $buf, $buf.Length)   # 0 = 成功
# 解析：每核 Number@0, MaxMhz@4, CurrentMhz@8, MhzLimit@12

# 2. 性能计数器（频率）
Get-Counter '\Processor Information(_Total)\% Processor Performance',
            '\Processor Information(_Total)\% of Maximum Frequency',
            '\Processor Information(_Total)\Processor Frequency',
            '\Processor Information(_Total)\Actual Frequency'

# 3. Energy Meter（RAPL，未文档化）
(Get-Counter -ListSet 'Energy Meter').Counter
Get-Counter '\Energy Meter(rapl_package0_pkg)\Power'

# 4. MSAcpi_ThermalZoneTemperature
Get-CimInstance -Namespace root/wmi -ClassName MSAcpi_ThermalZoneTemperature

# 5. EfficiencyClass（P/E 区分）
# GetLogicalProcessorInformationEx(RelationProcessorCore)：每 entry 48 字节，
# Relationship@0, Size@4, Flags@8(SMT), EfficiencyClass@9, GroupMask@32
```

**限制**：

1. 本会话为管理员会话——MSAcpi_ThermalZoneTemperature 与 Energy Meter 在**标准用户**下的行为未实测（合同按保守假设处理）。
2. 本机为 Intel 单路桌面平台——Energy Meter 的 AMD/多路/VM 行为未验证。
3. WebSearch 工具在本次会话中持续返回空结果，部分二手来源（E3 模型、MSAcpi 权限、任务管理器 1s tick）未能交叉验证，已如实标注。
4. WebFetch 对 learn.microsoft.com 个别路径 404（perfctr 计数器参考、wmicoreprov 热区页）——这些是**官方文档确实缺失**的证据，不是网络问题（同站其他页面均正常）。
5. GPU 厂商 SDK（NVAPI/ADLX）许可条款未逐条核实，仅标注"厂商专有、不采用"。

**官方 URL 清单（全部经 WebFetch 验证 200）**：

1. https://learn.microsoft.com/en-us/windows/win32/api/powerbase/nf-powerbase-callntpowerinformation
2. https://learn.microsoft.com/en-us/windows/win32/power/processor-power-information-str
3. https://learn.microsoft.com/en-us/windows/win32/power/system-power-information-str
4. https://learn.microsoft.com/en-us/windows/win32/api/winbase/ns-winbase-system_power_status
5. https://learn.microsoft.com/en-us/windows/win32/api/powerbase/nf-powerbase-powerregistersuspendresumenotification
6. https://learn.microsoft.com/en-us/windows/win32/power/power-setting-guids
7. https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-registerpowersettingnotification
8. https://learn.microsoft.com/en-us/windows/win32/api/powersetting/nf-powersetting-powersettingregisternotification
9. https://learn.microsoft.com/en-us/windows/win32/api/sysinfoapi/nf-sysinfoapi-getsysteminfo
10. https://learn.microsoft.com/en-us/windows/win32/api/sysinfoapi/ns-sysinfoapi-system_info
11. https://learn.microsoft.com/en-us/windows/win32/api/sysinfoapi/nf-sysinfoapi-getlogicalprocessorinformationex
12. https://learn.microsoft.com/en-us/windows/win32/api/winnt/ns-winnt-processor_relationship
13. https://learn.microsoft.com/en-us/windows/win32/cimwin32prov/win32-temperatureprobe
14. https://learn.microsoft.com/en-us/windows/win32/api/dxgi1_6/nn-dxgi1_6-idxgiadapter4
15. https://learn.microsoft.com/en-us/windows/win32/api/dxgi1_6/ns-dxgi1_6-dxgi_adapter_desc3
16. https://learn.microsoft.com/en-us/troubleshoot/windows-server/performance/troubleshoot-performance-problems-in-windows
17. https://learn.microsoft.com/en-us/windows/win32/wmisdk/performance-counter-provider
18. https://github.com/LibreHardwareMonitor/LibreHardwareMonitor（二手，驱动依赖证据）
19. https://github.com/namazso/PawnIO（二手，内核驱动自述）
