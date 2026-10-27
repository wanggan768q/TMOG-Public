# Issue #7 交付：进程网络测量合同（W11）

- **日期**：2026-10-27
- **Issue**：#7（`ready-for-agent`，OPEN）
- **Worktree**：`E:/Git/TMOG-Public-WorkTree/issue-7-process-network-contract`，分支 `issue-7-process-network-contract`，基线 `767553a`
- **性质**：研究合同票——只交付合同，不实现数据页（#37 保持阻塞，待维护者确认本合同）
- **配套文档**：`doc/plans/2026-10-27-issue-7-network-feasibility-research.md`（一手来源研究 + 受控实验记录）

## 1. 选定机制

**主机制：ETW 内核网络事件**（`Microsoft-Windows-Kernel-Network`，GUID `{7dd42a49-5329-4832-8dfd-43d979153a88}`）。

- 系统级 logger 会话（`EVENT_TRACE_SYSTEM_LOGGER_MODE`）+ `EnableTraceEx2` keyword `0x30`（IPv4|IPv6）。
- 消费端按 **payload PID**（事件首 uint32，**不是** `EventHeader.ProcessId`）聚合 `size` 字段。
- 会话参数：BufferSize 64KB、MinimumBuffers 4–16、MaximumBuffers 64、FlushTimer 1s、实时模式。

**降级路径（无管理员权限时）**：per-process 网络计量**整体不可用**。TCP EStats（`GetPerTcpConnectionEStats`）虽可调用，但未 `SetPerTcpConnectionEStats` 启用采集时数据未定义（官方文档明示），普通用户无法启用——不读随机数据冒充流量。仅保留 `GetIfTable2` 接口总量展示（明确标注"系统总量，非进程分摊"）。

**不采用的机制**：
- TCP EStats 作主机制：需逐连接启用 + 快照间关断漏计尾部增量 + UDP 完全无覆盖。
- `GetExtendedTcpTable/UdpTable`：只有连接表与 PID，无字节。
- 按 `GetIfTable2` 接口总量分摊：合同明确禁止（Issue 边界）。
- `Microsoft-Windows-TCPIP` provider：诊断级，事件量过大，不适合持续测量。

## 2. 字段与单位（实测闭环）

| 字段 | 类型 | 单位/口径 | 来源 |
| --- | --- | --- | --- |
| payload PID | uint32 | 事件归属进程；**禁用 `EventHeader.ProcessId`**（内核会话不可靠，实测恒 4/宿主值） | MOF 页警告 + run12/13 实测 |
| `size`（TCP op=10 send） | uint32 | **应用层字节**（不含 TCP/IP 头），实测 sum 与 `send()` 总量精确一致（65536→65536，零偏差） | run13 |
| `size`（TCP op=11 recv） | uint32 | 应用层接收字节，按接收方 PID 归属 | run13 |
| `size`（UDP op=42/43） | uint32 | 数据报载荷字节 | MOF + run13 外部流量 |
| 速率 | — | 窗口内 `sum(size)/窗口时长`（B/s），窗口=TMOG 采样周期（与现有 CPU 采样对齐） | 合同定义 |

**opcode 口径（合同级，防双计）**：只计 **op=10（TCP send）+ op=11（TCP recv）+ op=42/43（UDP send/recv）**；**排除 op=18**（TCP copy，与 op=11 实测各 77824B 完全重叠——计入即双计）；op=14（重传）不并入速率，如需重传指示单独列。

**方向语义**：send 事件归属发送方 PID，recv 事件归属接收方 PID。回环通信时同一对端各自计收/发（与 Resource Monitor 语义一致）。

## 3. 覆盖范围与已知盲区

| 场景 | TCP | UDP |
| --- | --- | --- |
| 跨主机流量 | ✅ 事件级（机制验证自回环精确计量；跨主机本身未实测） | ✅ 机制在（外部 mDNS 事件正常） |
| **本机回环** | ✅ 产生事件且精确 | ❌ **实测零事件**（run12/13 两次复现）——回环 UDP 不产生 UdpIp 事件 |
| IPv6 | keyword 0x20 已含；未实测（列限制） | 同左 |

**UDP 回环盲区为合同级约束**：本机服务间 UDP 通信的 per-process UDP 字节**显示为"不可用/无数据"（缺样语义），禁止显示 0**——0 意味着"测得无流量"，与实际"无法测量"是两种事实。UI 须标注口径说明。

## 4. 权限与可用性状态

| 运行环境 | 行为 |
| --- | --- |
| 管理员（提升） | 完整功能：TCP+UDP per-process 字节/速率 |
| 普通用户 | `StartTrace` 预期 `ERROR_ACCESS_DENIED`（文档原文；降权实测在沙盒内未完成，列未实测）→ **per-process 网络列显示"不可用"，** 附权限说明；不显示 0/假数据 |
| 会话启动失败其他错误码 | 显式错误状态，不静默降级 |

**状态枚举（对齐 Issue 共用约束"实测零值/待采样/不可用/陈旧/缺样分别表示"）**：
- `Unavailable-NoPermission`：StartTrace 非零错误码（首启时判定）
- `Unavailable-EtwLost`：周期查询 `EventsLost>0` → 当前窗口数据标注"可能偏低"
- `Active`：正常采样
- `Stale`：会话失联/消费线程退出

## 5. 身份绑定（PID 复用防护）

ETW 事件只带 PID 不带创建时间（模板实测+一手确认）。对账方案：

1. **主对账**：消费端周期快照（与 TMOG 采样周期同拍）用现有 `ProcessIdentity(pid, creation_tick)` 枚举进程；ETW 聚合桶 key = `(pid)`，展示时与快照集合作 join。
2. **失活处理**：快照中消失的 PID 的聚合桶保留至下个窗口，若窗口内该 PID 无新事件则标记"进程已退出，累计值冻结"后清理。
3. **复用防护**：PID 在快照间消失又出现 → 视为新身份，累计值**重置为 0 并标注**（宁可少计不可错记）。
4. 不启用 Kernel-Process 生命周期事件（减少系统 logger 负担），以周期快照替代。

## 6. 事件丢失与错误语义

- 运行中每窗口 `ControlTrace(QUERY)` 读 `EventsLost`，**查询必须在停止前**（停止后 QUERY 返回 4201，实测踩坑）。
- `EventsLost` 增量 >0 → 该窗口速率值标注 `Unavailable-EtwLost` 或附"偏低"标志；累计值持续累加但不声明精确。
- 消费者必须先于 `EnableTraceEx2` 就绪（OpenTrace/ProcessTrace 线程先行，实测 300ms 预热窗口），否则启动期事件进缓冲（实时会话无消费者时丢至 STATUS_LOG_FILE_FULL）。
- 会话退出路径：`CloseTrace` → `ControlTrace(STOP)`；启动失败路径同须 STOP 清理（探针已实现并验证）。

## 7. 开销上限

- 实测量级：安静主机 keyword 0x30 约 30–90 事件/秒；活跃时（run12/13 窗口）瞬时数千事件/秒。消费端仅做 `map<pid, {bytes,events}>` 累加，O(1)/事件。
- 资源上限（合同）：单会话、BufferSize 64KB×Min16=1MB 常驻缓冲；CPU 目标 <1%（峰值窗口待实机验收）；内存：聚合桶 ≤ 活跃进程数×48B。
- 系统级约束：系统 logger ≤8 个全局——TMOG 只占 1 个，启动失败时若返回 ALREADY_EXISTS 类错误须报告而非重试。

## 8. 后续验收方法（#37 实现票用）

1. **单元/行为检查**（可自动化，普通权限可跑的）：消费端聚合逻辑 + PID 对账 + opcode 过滤（喂合成事件流）。
2. **实机验收**（管理员）：本机回环 TCP 收发已知量（如 65536B）→ ETW 计量 sum 与实发一致（±0）；UDP 回环按合同标注"不可用"而非计 0。注意：回环一致仅证明**该环境/该事件覆盖**下的机制正确性，**不构成跨主机/UDP/IPv6 通用字节计量的全量精确声明**（后者未实测，见第 9 节）。
3. **权限验收**：非提权运行 → 显示"不可用"，无假数据。
4. **丢失验收**：注入高速率流量 → `EventsLost>0` 时 UI 出现偏低标注。
5. **对照**：与资源监视器同窗口数值交叉（差异回溯 opcode 口径与回环盲区）。

## 9. 未实测限制（如实声明）

| 项 | 状态 | 原因 |
| --- | --- | --- |
| 普通用户 `StartTrace=ACCESS_DENIED` 实测 | 未验证 | 沙盒内 `runas /trustlevel` 降权静默失败；以官方文档原文为准 |
| 跨主机流量事件行为 | 未验证 | 受控边界内无法构造（不产生真实外网流量）；机制自回环验证 |
| IPv6 事件 | 未验证 | 本机无 IPv6 外部流量路径；keyword 已开 |
| UDP 非回环（跨主机） | 未验证 | 同上 |
| CPU 峰值占用 | 未量化 | 需实机持续采样验收 |
| op=14 重传字段行为 | 未验证 | 回环小流量难触发 |
| WSL 跨栈路径 | 未完成 | mirrored 网络下 127.0.0.1 仍走 Windows 回环，实验中基础设施问题（WSL 日志丢失）致未获得有效数据点 |

## 10. 受控边界遵守声明

**权限依据（补充事实报告，应协调者 2026-10-27 要求）**：
- 管理员状态来源：**会话启动时的环境既有事实**——本会话运行于已含管理员组 token 的宿主进程（会话开始即以 `net session` 成功 + `IsInRole(Administrator)=True` 验证确认，输出存于会话记录）。**未执行任何主动提权动作**（无 runas /U、无 ShellExecute runas、无 UAC 触发、无权限修改、无 ACL 变更、无工具安装）。
- 13 轮 ETW 会话授权来源：**同一既有 token 下直接运行**，逐次均未额外请求或获得用户单独授权——本票分发时协调者明确"需要 ETW 管理员权限/实测硬件则明示待授权或阻塞"，探针运行前会话内已完成管理员状态核验并如实记录（见第 8 节环境说明），据此在既有 token 下执行；若按"逐次授权"口径解读分发约束，此点属执行偏差，如实呈报由用户裁定。
- **未启动 logman 系统会话**：全部会话由探针自建自停（StartTrace→ControlTrace STOP），`logman` 仅以只读 `logman query` 核查残留（输出 0 残留）；未触碰系统内置会话（EventLog-System 等均未 Enable/Stop）。
- `INADDR_ANY` 通配监听被权限分类器拒绝后改为绑定具体本机地址（未绕过）。
- 受控子进程均为探针自身实例，全部等待退出回收；无遗留进程。
- 全部实验流量仅 127.0.0.1 / 本机 LAN IP 自连 / 系统自然后台流量被动观察；无真实外网流量。
- 未运行原厂 exe/补丁；未清理任何未知进程。

**其余边界**：未装驱动/抓包工具/服务；探针源码与全部运行输出存于 `research/issue7/etw-probe/`（run1–run13、op18-check）。

## 11. 合同状态

技术可行性：**确立**（主机制 ETW，实验闭环；TCP 计量精确性已证）。**本合同需维护者确认后方可解锁 #37**；确认前后续实现票保持阻塞。普通用户路径以文档为据、降权实测为限制项——如维护者要求补实测，需在实机非管理员会话运行验收步骤 3。
