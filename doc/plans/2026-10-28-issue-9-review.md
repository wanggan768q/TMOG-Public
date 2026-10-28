# Issue #9（W22）研究合同交叉审查记录

## 1. 元信息

- **日期**：2026-10-28
- **审查者**：TMOG-Dev-linked-seal 会话（独立交叉审查，未参与 #9 执行）
- **对象**：worktree `E:/Git/TMOG-Public-WorkTree/issue-9-sensor-contract`，分支 `issue-9-sensor-contract`
- **已审 HEAD**：`f7d9d247d8561ca0b2af69d43a29cff51538f6ff`（工作树干净，`git status` 无未提交改动）
- **审查范围**：基线 `246be01` → HEAD `f7d9d24`，4 个 commit（`b8bae52` → `6a03c4b` → `db5a64f` → `f7d9d24`），diff 共 3 个新增文档、791 行，无生产代码改动
- **审查性质**：仅审研究合同表述与证据链；只读已保存来源与日志 + 官方文档核验；未运行任何本机实验、未加载驱动、未运行原厂 exe
- **不使用**：旧聊天记录或会话记忆作为证据；全部结论基于本轮重读的文件与官方页面

## 2. 审查方法与证据来源

1. 重读 Issue #9 全文（GitHub `wanggan768q/TMOG-Public#9`，本轮经 `gh` 拉取）
2. 重读三份交付文档（HEAD 版本）：
   - `doc/plans/2026-10-27-issue-9-sensor-contract.md`（主报告）
   - `doc/plans/2026-10-27-issue-9-sensor-contract-api-research.md`（API 证据）
   - `doc/plans/2026-10-27-issue-9-sensor-contract-research.md`（综合研究）
3. 独立核验官方文档引文（本轮 WebFetch 逐字对照，非沿用执行会话结果）：
   - `nf-powerbase-callntpowerinformation`（InformationLevel 表格、返回码仅 STATUS_BUFFER_TOO_SMALL / STATUS_ACCESS_DENIED、Requirements 无特权段）✔ 一致
   - `processor-power-information-str`（6 个 ULONG 字段、CurrentMhz/MhzLimit 原文、WinNT.h omission Remarks、**无 EstimatedMilliwattsPerProcessor**）✔ 一致
   - `ns-winnt-processor_relationship`（EfficiencyClass 原文"performance and power tradeoff"、非 Intel 品牌名、Win10 成员下限）✔ 一致
   - `ns-winbase-system_power_status`（ACLineStatus 0/1/255、BatteryFlag 位表、255=unknown、BatteryFullLifeTime 估算 Remarks）✔ 一致
   - `power-setting-guids`（GUID_ACDC_POWER_SOURCE / GUID_BATTERY_PERCENTAGE_REMAINING / GUID_POWER_SAVING_STATUS 三段原文）✔ 一致
   - `win32-temperatureprobe`（"current implementations of WMI do not populate the CurrentReading property"原文）✔ 一致
   - `ns-sysinfoapi-system_info`（确认无任何频率字段，dwMaximumProcessorMhz 不存在）✔ 一致
   - `nn-dxgi1_6-idxgiadapter4`（方法列表仅 GetDesc3，无温度/功耗方法）✔ 一致
4. 本地证据独立复算：
   - `Raw/Task Manager v1.1.0 - 原始文件.exe` SHA-256 = `fb57e1eb…d5a7` ✔ 与文档一致
   - `Raw/Task Manager v1.1.0.patched.exe` SHA-256 = `56aada12…28a` ✔ 与文档一致
   - v1.0.1 证据文件（`search_power.md`、`trace_powerfreq.md` 等）subject digest 均绑定 `99e7565d…4810` ✔ 分层正确
   - `search_power.md`（Ghidra 12.1.4，pattern=`Power`，case_sensitive）结果清单包含文档引用的全部关键字符串（`CallNtPowerInformation ProcessorInformation CurrentMhz`@0x1404362a0、`MaximumMhz`@0x14043eae0、`nvmlDeviceGetPowerUsage`@0x140444858、`ADLX GPUTotalBoardPower`@0x140445278、`PowerAndFreqRows` RTTI 等）✔
   - `trace_powerfreq.md`（query=`Power & Freq`，11 条引用边）✔
5. 实测数据内部一致性（无法复跑实测，仅做算术/拓扑/布局一致性核对）：
   - 3600 × 126.25% = 4545.0 ≈ 实测 4545.12（计数器显示舍入范围内）✔
   - EfficiencyClass 实测 8×(class1+SMT) + 4×(class0) → 16+4=20 逻辑核，与"Intel 异构 12 核（8P 带超线程 + 4E）"拓扑自洽 ✔
   - `SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX` 布局主张（Relationship@0、Size@4、Flags@8、EfficiencyClass@9、GroupMask@32、每 entry 48 字节）与 x64 结构布局一致 ✔

## 3. 逐项审查结论（对照审查任务书口径）

| 审查点 | 结论 |
| --- | --- |
| PDH Actual Frequency 口径 | ✔ 本机实测口径（Actual = Processor Frequency × Perf%/100）已标注"逐计数器官方定义页缺失"，未冒充官方定义 |
| MaxMhz / MhzLimit / CurrentMhz 口径 | ✔ 三者术语严格区分（基准/上限/报告），引文与官方页逐字一致；CurrentMhz 实测钉死 MaxMhz 标为"官方确认·行为有偏差" |
| 1s / 事件驱动来源 | ✔ api-research §7 明确 1s tick 为观察假设/自主设计非官方承诺；事件驱动路线（RegisterPowerSettingNotification 等）均有官方页支撑 |
| EfficiencyClass 不冒称 Intel P/E | ✔ §5.2 两案明确"语义是性能/功耗权衡等级，非 Intel 品牌名"，默认方案 A 零推断 |
| AC/电池未知状态 | ✔ 255/−1 语义全部列入，F5/research §5.2 规定 255 原样显示、不猜 |
| 标准用户不担保 | ✔ f7d9d24 统一降级为"文档未说明特权限制、标准用户未实测"；**例外见发现 2（矩阵简写不一致）** |
| 单机 CurrentMhz 不泛化 | ✔ db5a64f 起全部限定"仅本测试机与本次采样场景" |
| "无标准 API 来源"≠"任何条件不能测" | ✔ GPU 行改为"本项目合同范围不可用（……不宣称全平台不可测）"；厂商 SDK 合法、本轮属范围选择 |
| per-core 温度不断言所有来源不存在 | ✔ 主报告与 research §4/§5.3 已加"不排除厂商已有来源"限定；**例外见发现 3（research §2 一行未同步）** |
| v1.0.1 / v1.1.0 hash 分层 | ✔ §2 表格明确 v1.0.1=历史证据（99e7565d…）、v1.1.0 未复验标未知，未编造复验结论 |
| 环境越界事件记录 | ✔ §8 如实记录：GHIDRA_INSTALL_DIR 用户级写入，旧值标"未核实/未知"、不追认、未回滚、处置权交用户——与"进程报未设不能证明注册表旧值空"的要求一致 |
| 验收项对照 | ✔ research §7 对照 4 项验收：3 项自评 [x] 有据，第 3 项（维护者确认）如实 [ ] 待决 |

## 4. 发现（证据/合同矛盾，供用户决策，本审查不代为修复）

### 发现 1【中】"0 命中"主张缺乏已保存证据支撑

- **位置**：research.md §3.5（"原版未用 PDH 性能计数器：`PdhOpenQuery`/`PdhAddCounter` 字符串 0 命中"；"`\Processor Information` 计数器路径 0 命中"）
- **问题**：已保存证据目录（`docs/reverse-tutorial/evidence/`）中**不存在**针对 `PdhOpenQuery`、`MSAcpi_ThermalZoneTemperature`、`root\wmi` 等负向 pattern 的搜索记录（本轮 Grep 全目录 0 命中，即无任何 evidence 文件包含这些查询）。唯一在案的字符串搜索是 `search_power.md`，其 pattern 为 `Power`（大小写敏感）——`PdhOpenQuery`/`MSAcpi` 均不含 "Power"，该清单**不构成**对上述 pattern 的覆盖，无法从中推断"0 命中"。
- **加重因素**：`search_power.md` 自身 limitations 明言："Only Ghidra-defined string Data is observed… an empty search does not establish that text is absent from the artifact"——即使执行过搜索，"0 命中"也不足以支撑"原版未用 PDH"这一结论性表述。
- **对比**：§3.4 的措辞"未在字符串清单出现"较谨慎（可解读为"在已保存清单中未出现"，字面成立），但 §3.5 的"原版未用 PDH"是结论性否定，超出了已保存证据能支撑的强度。
- **影响**：不阻塞候选合同（合同设计不依赖该结论；自主设计空间论证独立成立），但"原版观察层"该条表述需降级（如"已保存字符串清单中未出现，未做针对性负向搜索"）或补做显式搜索并落盘 evidence 后再保留原表述。
- **需用户决策**：是否要求执行者出一个小修订 commit（降级表述或补证据）；本审查不自动修。

### 发现 2【低-中】主报告 §4 矩阵权限列与自定标注规则不一致

- **位置**：主报告 `2026-10-27-issue-9-sensor-contract.md` §4 矩阵
- **问题**：矩阵下方术语说明规定："官方文档未说明特权限制的 API 写'文档未说明特权限制、标准用户未实测'"，但矩阵 10 行权限列实际简写为"标准用户"，仅 CPU 温度行写了全称。"标准用户"三个字单独阅读易被理解为"标准用户已验证可调用"，与 f7d9d24"权限表述统一降级、不升级为担保"的修订意图相悖。
- **影响**：F6 合同项与 §7 限制 2 表述正确，问题仅限矩阵展示层；但 W23 按矩阵实现时可能被误读为"标准用户已验证"。
- **需用户决策**：是否要求修订（矩阵全改全称，或在术语说明中显式声明"标准用户"简写即代表该全称）。

### 发现 3【低】research.md §2 表格 per-core 行未同步范围限定

- **位置**：research.md §2 表格行"per-core 温度/瓦数 | MSR（0x19C、RAPL 0x6xx）| 【明确不可用】RDMSR 是 Ring0 指令，必然内核驱动"
- **问题**：该行分层标记"【明确不可用】"未带"本轮合同范围"限定；同文档 §4 矩阵标注说明与 §5.3 均已修订为"本轮无驱动约束下不可达 + 不排除厂商已有来源"，§2 该行未同步。单独阅读该行可能误读为"所有条件下 per-core 温度不存在来源"。（RDMSR 直读需内核承载本身是架构事实，该半句成立。）
- **需用户决策**：是否随发现 1/2 一并做一次小修订。

### 发现 4【信息】通过项摘要（无需行动）

- 官方文档 8 处关键引文逐字核验一致（见 §2.3 清单）。
- Raw 双 hash、v1.0.1 证据 hash 绑定独立复算一致。
- 实测数据内部一致性（算术、拓扑、结构布局）核验通过。
- 环境事件 §8 记录符合"如实承认、不追认、不回滚、旧值标未知"要求。
- 分层标记体系（官方确认/行为偏差/本机实测/历史证据/未知/范围不可用）使用总体一致，限定语（本机、本轮、范围选择）在 f7d9d24 后基本到位。

## 5. 需用户决策事项汇总

1. **发现 1**：research.md §3.5"原版未用 PDH"表述——降级措辞，还是补做显式负向搜索并落盘 evidence？（本审查受"只读已保存来源+可查官方文档、不做新实��"约束，未代为补搜。）
2. **发现 2**：主报告 §4 矩阵权限列简写是否修订为全称。
3. **发现 3**：research.md §2 per-core 行是否补"本轮合同范围"限定。
4. 上述三项均为文档表述修订，可合并为执行者的一个小 commit；是否执行、何时执行由用户决定。
5. 主报告 §6 的六项合同决策（CurrentMhz 是否展示、P/E 口径、CPU 瓦数实验字段、CPU 温度尽力而为、1s tick、标准用户补测合同）**维持原样待维护者表态**——本审查未改变任何决策项内容。

## 6. 审查限制

1. **实测不可复验**：执行会话的本机实测（CurrentMhz 钉死、Energy Meter 读数、MSAcpi 热区、EfficiencyClass 布局）无法在本轮复跑（审查约束禁止新实验），仅做内部一致性核对，实测真实性以执行会话记录为准。
2. **负向搜索未代做**：发现 1 的补搜需运行 REA/Ghidra 静态分析，属本审查边界外；本审查仅指出证据缺口，未判断"原版是否真的用了 PDH"。
3. **官方文档核验为时点快照**：Microsoft Learn 页面内容可能更新，本轮核验对应 2026-10-28 时点。
4. **WebSearch 不可用延续**：本轮同样无法用搜索引擎交叉验证二手来源（E3 模型等），该限制在执行报告中已如实标注，本轮维持其【未知】分层不变。
5. 本审查未运行原厂 exe、未安装任何工具、未修改任何文件（本审查记录除外）、未 commit/push。

## 7. 结论

- 已审 HEAD `f7d9d24`，diff 仅三份研究文档，无生产代码。
- 研究合同的口径准确性、分层纪律、环境事件记录**总体合格**；八项官方引文与本地 hash 证据经独立核验一致。
- 三项表述级发现（发现 1 为证据缺口、发现 2/3 为内部不一致）均不阻塞候选合同，待用户决策后可由执行者一次小修订闭环。
- 本审查记录仅落盘本文档，未 commit/push/合入/关票；Technical PASS 与否的判定及 #27 解锁由 product/维护者决定，本审查不代行。
