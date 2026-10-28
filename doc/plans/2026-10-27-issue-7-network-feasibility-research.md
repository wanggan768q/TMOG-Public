# Issue #7 研究记录：Windows 每进程网络流量测量的可行机制

- **日期**：2026-10-27
- **Issue**：#7（进程网络流量契约 / per-process network measurement）
- **目的**：用官方一手来源（learn.microsoft.com 优先）查证 Windows 上按进程统计网络流量的候选机制，为后续实验（由主会话执行）与机制选型提供依据。
- **研究方法**：WebSearch 定位页面 + WebFetch 阅读原文 + `gh api` 读取镜像 manifest XML。所有机制性断言附一手来源 URL；无法找到一手来源的断言明确标注"推断"。不运行任何 exe、不做网络实验、不创建 ETW 会话。
- **结论摘要**：Windows 上**不存在普通用户可直接调用的、按进程累计字节的用户态 API**。可行组合只有两条路：
  1. **主机制（需管理员）**：ETW 内核网络提供者（Microsoft-Windows-Kernel-Network / 旧 NT Kernel Logger TcpIp+UdpIp 事件），每事件带 PID 与字节数（`size`），消费端按 PID 聚合差分。事件是否聚合未找到一手来源断言，推断为逐包/逐操作级（依据：事件模板含 `seqnum`、`connid`、`startime`/`endtime`，若聚合则无意义）。
  2. **降级机制（TCP-only）**：GetPerTcpConnectionEStats 读 `TCP_ESTATS_DATA_ROD_v0.DataBytesIn/Out` 差分。**读 ROD 本身不需要管理员，但开启采集（SetPerTcpConnectionEStats）需要管理员**，且文档明确"若未启用则读到无意义随机数据"——即降级路径实际上也受权限约束，需要以进程自身创建的连接（EnableCollection 默认值待实验确认）或标注"不可用"。
  3. **UDP 无用户态按 socket/进程累计字节 API**（一手来源核实：GetUdpStatistics* 仅报数据报个数；无 GetPerUdpConnectionEStats 一类 API）。
  - 身份绑定：ETW 事件只带 PID，不带进程创建时间；防 PID 复用需消费端对账（周期快照 + Process 事件 CreateTime），与 TMOG 的 ProcessIdentity(pid, creation_tick) 模型对齐是自然的。
  - 关键权限错误码：StartTrace → `ERROR_ACCESS_DENIED`（非管理员）；SetPerTcpConnectionEStats → `ERROR_ACCESS_DENIED`。

---

## 1. 候选机制清单与对比

### 1a. ETW 内核网络提供者（Microsoft-Windows-Kernel-Network）

**Provider 身份**：`Microsoft-Windows-Kernel-Network`，GUID `{7dd42a49-5329-4832-8dfd-43d979153a88}`。来源：manifest XML（镜像于 GitHub repnz/etw-providers-docs，Win10-10240 与 Win10-18990 两版一致）：
`<provider name="Microsoft-Windows-Kernel-Network" guid="{7dd42a49-5329-4832-8dfd-43d979153a88}" ...>`
URL: https://github.com/repnz/etw-providers-docs（manifest 文件 `Manifests-Win10-10240/Microsoft-Windows-Kernel-Network.xml`；一手 XML 来自系统 manifest，此仓库为可核对镜像）
⚠️ 说明：learn.microsoft.com 未单独出版该 provider 的 manifest 参考页（多轮检索未命中），GUID 以系统内 manifest 为准，实验阶段可用 `logman query providers Microsoft-Windows-Kernel-Network` 现场核对（由主会话执行）。

**Keywords**（manifest 一手）：该 provider 的 manifest 只定义两个 keyword：
- `KERNEL_NETWORK_KEYWORD_IPV4` mask `0x10`
- `KERNEL_NETWORK_KEYWORD_IPV6` mask `0x20`

⚠️ 任务描述中的 `NETWORK_TRACE` / `TCP_SEND` / `TCP_RECV` / `UDP_SEND` / `UDP_RECV` 命名：**未在 learn.microsoft.com 或该 provider manifest 中找到**。社区资料（colz101/ETW GUID 表、GitHub microsoft/retrace 的 retrace.h）提到 `0x100000000000`（bit 44，"Kernel Network" keyword）用于经 `EnableTraceEx2` 启用内核网络事件——**未找到一手来源，推断依据为**：System Providers 页（https://learn.microsoft.com/en-us/windows/win32/etw/system-providers）显示 System IO Provider 的 `SYSTEM_IO_KW_NETWORK` keyword 对应 legacy `PERF_NETWORK, EVENT_TRACE_FLAG_NETWORK_TCPIP`，而 EVENT_TRACE_FLAG_NETWORK_TCPIP 启用的就是 TcpIp/UdpIp 内核网络事件（见下）。即：**按方向细分（TCP_SEND/TCP_RECV…）的 keyword 细粒度不存在于一手来源；一手支持的粒度是 IPv4/IPv6 keyword + 事件级 opcode（task/opcode 决定 TCPSend/TCPRcv/UDPSend/UDPRecv）**。实验时应按 `0x10|0x20`（或 legacy flag `EVENT_TRACE_FLAG_NETWORK_TCPIP` 0x00010000）启用。

**事件与字段**（manifest 一手 + MOF 文档一手）：

| 事件 | ID (IPv4/IPv6) | task | 关键字段 |
| --- | --- | --- | --- |
| TCP 数据发送 | 10 / 26 | TCPIP, opcode "Data sent" | PID, size, daddr, saddr, dport, sport, startime, endtime, seqnum, connid |
| TCP 数据接收 | 11 / 27 | TCPIP, opcode "Data received" | PID, size, daddr, saddr, dport, sport, seqnum, connid |
| TCP 连接尝试 | 12 / 28 | TCPIP | 同上 + mss/sackopt/tsopt/wsopt/rcvwin |
| TCP 断开 | 13 / 29 | TCPIP | PID, size, …, seqnum, connid |
| TCP 重传 | 14 / 30 | TCPIP, "Data retransmitted" | 同接收模板 |
| TCP 连接接受 | 15 / 31 | TCPIP | 同连接模板 |
| TCP copy（协议代用户拷贝数据）| 18 / 34 | TCPIP | 同接收模板 |
| UDP 发送 | 42 / 58 | UDPIP | PID, size, daddr, saddr, dport, sport, seqnum, connid |
| UDP 接收 | 43 / 59 | UDPIP | 同上 |

- IPv4 版 MOF 文档（learn.microsoft.com 一手）：https://learn.microsoft.com/en-us/windows/win32/etw/tcpip-sendipv4 （TcpIp_SendIPV4：`uint32 PID; uint32 size; object daddr; object saddr; object dport; object sport; uint32 startime; uint32 endtime; uint32 seqnum; uint32 connid;`，size 为 "Size of the packet"）
- IPv4 接收/断开/重传类：https://learn.microsoft.com/en-us/windows/win32/etw/tcpip-typegroup1 （TcpIp_TypeGroup1，事件类型 11/13/14/16/18）
- UDP IPv4：https://learn.microsoft.com/en-us/windows/win32/etw/udpip-typegroup1 （UdpIp_TypeGroup1，事件类型 10/11：SendIPV4/RecvIPV4）
- IPv6 事件同字段（saddr/daddr 为 `win:Binary` 16 字节）。
- **旧式启用路径**（NT Kernel Logger，经典 MOF 事件，GUID `TcpIpGuid {9a280ac0-...}` / `UdpIpGuid {bf3a50c5-...}`）：https://learn.microsoft.com/en-us/windows/win32/etw/tcpip 、https://learn.microsoft.com/en-us/windows/win32/etw/udpip —— "To enable TCP/IP events in an NT Kernel logging session, specify the EVENT_TRACE_FLAG_NETWORK_TCPIP flag in the EnableFlags member"。EVENT_TRACE_FLAG_NETWORK_TCPIP = 0x00010000（EVENT_TRACE_PROPERTIES 页，见下）。

**事件是否带 PID？** 是。两个 MOF 页均明确：`PID — Identifier of the process associated with the request`，并强调 "You can trace network events to a source and destination process using the ProcessId property. Because some network events are logged by separate threads, you may not be able to use the ProcessId and ThreadId members of EVENT_TRACE_HEADER to identify the process"（即必须用事件 payload 里的 PID 字段，不能用 ETW 头里的 ThreadId/ProcessId）。

**事件是否带进程创建时间？** 否。事件模板无创建时间字段（manifest 与 MOF 均如此）。防 PID 复用见第 4 节。

**单位**：`size` 字段为 `uint32`，MOF 描述为 "Size of the packet"。⚠️ "packet" 的精确口径（是否含 TCP/IP 头、应用层字节数还是段长）**未找到一手来源**，推断依据为：发送事件带 `startime`/`endtime`（发送请求起止），接收事件为逐次收包，社区经验（KrabsETW/wtrace 生态）将其当作应用层/传输层载荷字节数求和；需实验与 EStats/接口总量交叉验证口径。

**启动会话的权限**：见第 2 节。

**是否聚合**：⚠️ 未找到一手来源。推断为**逐操作（非预聚合）**：事件模板携带 `seqnum`、`connid`、`startime`/`endtime`，若 provider 预聚合这些字段失去意义；且 Resource Monitor 的每连接行结构（社区/官方 troubleshooting 文档描述"many rows can be associated with a single process"）与逐事件模型一致。实验须实测事件速率与流量速率的关系来确认。

### 1b. GetPerTcpConnectionEStats / GetPerTcp6ConnectionEStats

来源（一手）：
- https://learn.microsoft.com/en-us/windows/win32/api/iphlpapi/nf-iphlpapi-getpertcpconnectionestats （IPv4）
- https://learn.microsoft.com/en-us/windows/win32/api/iphlpapi/nf-iphlpapi-getpertcp6connectionestats （IPv6）
- https://learn.microsoft.com/en-us/windows/win32/api/tcpestats/ns-tcpestats-tcp_estats_data_rod_v0 （数据结构）
- https://learn.microsoft.com/en-us/windows/win32/api/iphlpapi/nf-iphlpapi-setpertcpconnectionestats （启用采集，需管理员）

**字段与单位**（TCP_ESTATS_DATA_ROD_v0 一手原文）：
- `DataBytesOut`：*"The number of octets of data contained in transmitted segments, including retransmitted data. Note that this does not include TCP headers."* —— 单位是**八位组（octet，即字节）**，**含重传**，不含 TCP 头。
- `DataBytesIn`：*"The number of octets contained in received data segments, including retransmitted data. Note that this does not include TCP headers."* —— 同上口径。
- `DataSegsOut`/`DataSegsIn`：段数（segments），不是字节。
- `SegsOut`/`SegsIn`：全部段数（含无数据的 ACK 段等）。
- 映射到 IETF RFC 4898（tcpEStatsPerfDataOctetsOut 等，页面附完整映射表）。

**重传是否计入 DataBytesOut**：是——一手原文 "including retransmitted data"。重传单独口径在 `TCP_ESTATS_PATH_ROD_v0`（https://learn.microsoft.com/en-us/windows/win32/api/tcpestats/ns-tcpestats-tcp_estats_path_rod_v0）：`PktsRetrans`（*"The number of segments transmitted containing at least some retransmitted data"*，段数）、`BytesRetrans`（*"The number of bytes retransmitted"*，字节）。若需"净发送量"需用 DataBytesOut − BytesRetrans 近似（BytesRetrans 属于 Path 统计，需另开 TcpConnectionEstatsPath 的采集）。

**累计语义**：结构页 Remarks：*"This information is available after the connection has been established"*（RFC 4898 计数器语义，自连接建立起累计单调递增）。速率 = 两次快照差分 / 间隔。

**权限**：
- **SetPerTcpConnectionEStats（启用采集）必须管理员**：*"The SetPerTcpConnectionEStats function can only be called by a user logged on as a member of the Administrators group. If SetPerTcpConnectionEStats is called by a user that is not a member of the Administrators group, the function call will fail and ERROR_ACCESS_DENIED is returned."*（含 UAC/requireAdministrator manifest 说明，原文见 GetPerTcpConnectionEStats 页 Remarks；IPv6 页同文）
- **GetPerTcpConnectionEStats（读 ROD）**：文档页未对其本身声明管理员要求，返回值表中也没有 ERROR_ACCESS_DENIED 条目；但 Remarks 强制要求：*"The caller of GetPerTcpConnectionEStats should check the EnableCollection field in the returned Rw struct, and if it is not TRUE, then the caller should ignore the data in the Ros and Rod structs. If EnableCollection is set to FALSE, then the data returned in Ros and Rod are undefined."* 官方示例代码注释亦写 `// Need to run as administrator`（GetPerTcp6ConnectionEStats 页示例）。
- **关键推论**：TMOG 若以普通用户运行，无法 Set 启用采集 → 读到的 ROD 数据是"未定义的随机数据"，**降级路径在普通用户下实质不可用**，除非依赖"连接创建方默认已启用"（EnableCollection 默认值一手文档写 0/disabled，见 SetPerTcpConnectionEStats 页 TCP_ESTATS_DATA_RW_v0 说明）——故普通用户下应把 TCP EStats 标注为"不可用"，仅管理员模式下作为降级/对账手段。
- 读 ROD 的入口 Row 来自 `GetExtendedTcpTable`（MIB_TCPROW），或 `GetTcpTable`/`GetTcp6Table`（页面 Remarks 明确推荐此配对方式）。

**连接关断后 / TIME_WAIT 行为**：⚠️ 未找到一手来源直接断言"连接关闭后统计是否仍可读"。推断依据：连接从 GetExtendedTcpTable 消失（或 GetPerTcpConnectionEStats 返回 `ERROR_NOT_FOUND`："This requested entry was not found. This error is returned if the TCP connection specified in the Row parameter could not be found."）后无法再读；TIME_WAIT 状态行仍会出现在 GetExtendedTcpTable 表中（MIB_TCPROW_OWNER_PID 的 dwState 枚举含 `MIB_TCP_STATE_TIME_WAIT`，一手：https://learn.microsoft.com/en-us/windows/win32/api/tcpmib/ns-tcpmib-mib_tcprow_owner_pid），TIME_WAIT 期间 ROD 是否可读需实验确认。**设计含义：快照间隔内关断的连接会把最后一段未采集的增量留在关断瞬间之后——ETW 主机制无此问题，这是 EStats 降级路径的固有漏计来源。**

### 1c. UDP 侧是否存在 per-socket/per-process 字节累计 API

**结论：不存在。** 一手核实：
- `GetUdpStatisticsEx` 返回 `MIB_UDPSTATS`（https://learn.microsoft.com/en-us/windows/win32/api/iphlpapi/nf-iphlpapi-getudpstatisticsex 、https://learn.microsoft.com/en-us/windows/win32/api/udpmib/ns-udpmib-mib_udpstats）：字段仅 `dwInDatagrams`（收到的数据报**个数**）、`dwNoPorts`、`dwInErrors`、`dwOutDatagrams`（发送的**个数**）、`dwNumAddrs`（listener 表项数）——**全系统总量、无字节单位、无进程归属**。
- `GetExtendedUdpTable` 只返回 UDP 端点表（本地地址/端口 + PID），无字节累计字段（与 GetExtendedTcpTable 同类，见 1f）。
- TCP EStats 的 per-connection 体系（TcpConnectionEstatsData 等）没有 UDP 对应物：tcpestats.h 的 TCP_ESTATS_TYPE 枚举仅覆盖 TCP；检索 learn.microsoft.com 未发现任何 GetPerUdpConnectionEStats 类 API。
- **故明确表述：UDP 无用户态按 socket/按进程累计字节 API；UDP per-process 字节只能来自 ETW 内核网络事件。**

### 1d. GetIfTable2 / GetIfEntry2（接口总量）

来源（一手）：https://learn.microsoft.com/en-us/windows/win32/api/netioapi/nf-netioapi-getiftable2 、https://learn.microsoft.com/en-us/windows/win32/api/netioapi/ns-netioapi-mib_if_row2

- `MIB_IF_ROW2` 提供 `InOctets`（*"The number of octets of data received without errors through this interface. This value includes octets in unicast, broadcast, and multicast packets."*）、`OutOctets`、`InUcastOctets`/`OutUcastOctets`、`InMulticastOctets` 等，单位八位组，按接口累计。
- **结构完整字段列表中没有任何进程归属字段**（InterfaceLuid/InterfaceIndex/GUID/Alias/…全是接口属性）→ 只能做"系统总量 ≠ 各进程之和"的对照与对账（含 loopback 双计、内核自身流量、无法归因部分），不能做 per-process 归属。
- 权限：函数页未声明管理员要求（返回值仅 ERROR_NOT_ENOUGH_MEMORY / Other），普通用户可读。

### 1e. Microsoft-Windows-TCPIP 提供者

- learn.microsoft.com 未提供该 provider 的公开 manifest 参考页（多轮检索未命中其事件清单一手页面；社区 GUID 表列 {2F07E2EE-15DB-40F1-90EF-9D7BA282188A}，未找到一手来源）。
- **定性**：TCPIP provider 是 TCP/IP 栈的诊断级 provider（连接状态机、TCB 细节、拥塞、限流等内部事件），事件量级远高于 Kernel-Network 的 send/recv 级事件。⚠️ 该定性**未找到一手来源**，推断依据为：System Providers 页与 WPR 生态均把"网络记录"落在 Kernel-Network（WPR 内置 "Kernel Network" recording profile，见第 5 节），TCPIP provider 只出现在深度网络诊断场景。**结论：不适合 TMOG 的持续测量用途，仅作排查备用；不纳入主方案。**

### 1f. 其他候选

- **GetExtendedTcpTable / GetExtendedUdpTable**（一手：https://learn.microsoft.com/en-us/windows/win32/api/iphlpapi/nf-iphlpapi-getextendedtcptable ）：`TCP_TABLE_OWNER_PID_*` 返回 `MIB_TCPROW_OWNER_PID`，字段 dwState/dwLocalAddr/dwLocalPort/dwRemoteAddr/dwRemotePort/dwOwningPid（*"The PID of the process that issued a context bind for this TCP connection."*）——**只有连接表与 PID，无任何字节计数**。用途：为 EStats 提供 Row 入口、为 ETW 事件提供"当前活跃 PID 集合"对账。
- **Windows 性能计数器 Process 对象**：learn.microsoft.com 的 Performance Counters 概述页（https://learn.microsoft.com/en-us/windows/win32/perfctrs/performance-counters-portal）仅为入口页，未列出 Process 对象完整计数器清单；多轮检索未命中官方 per-process 计数器列表页。**未找到一手来源**，推断依据为：per-process 网络计数器在 Windows 中不存在——Resource Monitor 的 per-process 网络数据被官方 troubleshooting 文档描述为需专门机制（见下），且 Process 对象的 IO 类计数器（IO Data Bytes/sec 等）基于进程 IO 计数（含文件 IO，不区分网络）。**结论：无 per-process 网络 perf 计数器（待主会话实验用 typeperf 兜底确认）。**
- **Resource Monitor（resmon）每进程网络**：官方 troubleshooting 文档《Trace and troubleshoot with Resource Monitor》（learn.microsoft.com/en-us/troubleshoot/windows-server/performance/trace-and-troubleshoot-with-resource-monitor）确认其 Network 页按 PID/Address/Latency/Total(B/sec) 展示，但**该页未披露底层机制**。社区共识（wtrace/ETW 生态、Mark Russinovich Win7 资源监控文章）是 Resource Monitor 基于 ETW 内核网络事件 + 计数器合成——**未找到一手来源，标注为社区经验**。其存在本身证明"per-process 网络归属可行，但需要内核级事件"，与 1a/1b 的结论一致。

## 2. 权限矩阵

| 机制 | 普通用户 | 管理员（提升） | 错误码/依据 |
| --- | --- | --- | --- |
| **StartTrace（ETW 会话，含系统 logger）** | ❌ 不可 | ✅ 可 | *"Only users with administrative privileges, users in the Performance Log Users group, and services running as LocalSystem, LocalService, NetworkService can control event tracing sessions."* `ERROR_ACCESS_DENIED`；另注明 *"Only users with administrative privileges and services running as LocalSystem can control an NT Kernel Logger session."*（https://learn.microsoft.com/en-us/windows/win32/api/evntrace/nf-evntrace-starttracea） |
| **系统 logger 会话**（EVENT_TRACE_SYSTEM_LOGGER_MODE，启用内核网络事件所必需，见 System Providers 页） | ❌ 不可 | ✅ 可（≤8 个系统 logger） | 同上 + https://learn.microsoft.com/en-us/windows/win32/etw/system-providers （"the System Providers can only be enabled by a session with the EVENT_TRACE_SYSTEM_LOGGER_MODE set"）+ StartTrace 页 "no more than 8 system loggers" |
| **GetPerTcpConnectionEStats（读 ROD）** | ⚠️ 调用可成功但数据未定义（除非该连接已启用采集） | ✅ 可（先 Set 启用后可读） | GetPerTcpConnectionEStats 页 Remarks（EnableCollection=FALSE 时数据 undefined）；示例注释 "Need to run as administrator" |
| **SetPerTcpConnectionEStats（启用采集）** | ❌ `ERROR_ACCESS_DENIED` | ✅ 可 | *"can only be called by a user logged on as a member of the Administrators group… ERROR_ACCESS_DENIED"*（Get/SetPerTcpConnectionEStats 两页 Remarks 同文） |
| **GetExtendedTcpTable / GetExtendedUdpTable** | ✅ 可（文档无管理员要求） | ✅ 可 | 函数页无权限限制条目 |
| **GetIfTable2 / GetIfEntry2** | ✅ 可 | ✅ 可 | 函数页返回值仅内存错误 |
| **GetUdpStatisticsEx** | ✅ 可 | ✅ 可 | 函数页无权限限制条目 |

**结论**：主机制（ETW）与 TCP EStats 的"启用"动作都需要管理员；普通用户下可用的只有连接表/接口总量（无 per-process 字节）。TMOG 若要求普通用户可用，per-process 网络功能必须声明"不可用"或仅做 TCP EStats 尝试并按 EnableCollection 校验后失败降级。

## 3. 事件丢失与可靠性（ETW）

来源（一手）：
- https://learn.microsoft.com/en-us/windows/win32/api/evntrace/ns-evntrace-event_trace_properties
- https://learn.microsoft.com/en-us/windows/win32/api/evntrace/nf-evntrace-starttracea
- https://learn.microsoft.com/en-us/windows/win32/api/evntrace/nf-evntrace-processtrace
- https://learn.microsoft.com/en-us/windows/win32/api/evntrace/nf-evntrace-tracesetinformation

**丢失语义**（EVENT_TRACE_PROPERTIES 页原文）：
- *"When a buffer in a file or real-time session is full (or when the FlushTimer expires), the session flushes the buffer… If a session's buffers are filled faster than they can be flushed, new buffers are allocated… up to MaximumBuffers. Beyond this limit, the session discards incoming events until a buffer becomes available. Each session keeps a record of the number of events discarded (see the EventsLost member)."*
- `EventsLost`：*"On output, the number of events that were not recorded."*
- `LogBuffersLost`（写日志文件失败的缓冲数）、`RealTimeBuffersLost`（实时投递失败的缓冲数）。
- **在哪里读**：运行中查询用 `ControlTrace(SessionHandle, NULL, Properties, EVENT_TRACE_CONTROL_QUERY)`（EVENT_TRACE_PROPERTIES 页原文：*"To view session statistics, such as EventsLost while the session is running, call the ControlTrace function and set the ControlCode parameter to EVENT_TRACE_CONTROL_QUERY."*）；会话结束后最后一次查询/停止返回的 Properties 同样带 EventsLost。
- `TraceSetInformation`/`TRACE_QUERY_INFO_CLASS`：该 API 的信息类主要用于栈跟踪等扩展采集（页面列举 TraceStackTracingInfo），**未提供查询丢失事件的直接类别**；丢失计数以 ControlTrace QUERY 读 EVENT_TRACE_PROPERTIES 为准。
- 实时会话无消费者时的行为：*"ETW buffers events for real-time sessions when there are no real-time consumers for the session… If the limit is reached, new events will be ignored and the logging functions fail with STATUS_LOG_FILE_FULL."* → TMOG 若用实时会话，必须保证消费者先于会话启动（OpenTrace/ProcessTrace 就绪后再 StartTrace+EnableTrace），否则启动窗口内会丢事件。
- 消费端乱序提示（ProcessTrace 页）：事件按时间戳尽力有序，跨 CPU 同时间戳事件顺序不可预测 → 聚合按事件时间戳分桶时注意。

## 4. 身份绑定（PID 复用防护）

- ETW 网络事件只带 PID（uint32），**不带进程创建时间**（1a 节模板字段清单）。
- 官方文档明确 PID 会复用（Process_TypeGroup1 页原文，https://learn.microsoft.com/en-us/windows/win32/etw/process-typegroup1 ）：*"Process identifier numbers are reused, so they only identify a process for the lifetime of that process."*
- **对账方案**（与 TMOG 已有 ProcessIdentity(pid, creation_tick) 对齐）：
  1. 会话内同时启用进程生命周期事件（EVENT_TRACE_FLAG_PROCESS → Process_TypeGroup1 Start/End/DCStart/DCEnd，字段含 ProcessId、ImageFileName；EventVersion(2) 后含 CommandLine）。DCStart/DCEnd 在会话起止时枚举现存进程（Process_TypeGroup1 页原文：*"The DCStart and DCEnd event types enumerate the process that are currently running… at the time the kernel session starts and ends"*）——⚠️ 注意：MOF 页字段表未列 CreateTime；现代 manifest 版 Microsoft-Windows-Kernel-Process 的 ProcessStart 事件含 CreateTime，**未找到一手来源确认 kernel Process 事件必带创建时间**，实验须确认；若没有，回退方案 2。
  2. 消费端周期快照（如 1–5s）调 `OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION)` + `GetProcessTimes`（进程创建时间）对账活跃 PID 集合，复用 TMOG 现有 ProcessIdentity 契约做 (pid, creation_time) 二元组归属；与 ETW 事件的 PID 序列做窗口内关联。
  3. GetExtendedTcpTable 的 PID 集合作为旁证（活跃连接归属进程）。
- 复用误归属的残余风险：PID 复用发生在两次快照之间且 ETW 事件横跨复用点时，可能把新进程流量记到旧身份。缓解：以进程 End 事件 + 快照失活点为界切段，跨段 PID 重映射需 creation_time 一致才延续累计。

## 5. 开销

- **官方开销指引**（EVENT_TRACE_PROPERTIES / StartTrace 页一手）：
  - BufferSize 建议：*"Most trace sessions should use a buffer size of 64KB or less…"*；"small events and a low event rate (a few KB/s) → 4KB to 16KB；moderate → 16KB–32KB；large events or high event rate (a few MB/s) → 64KB–128KB"。*"Large buffers usually waste memory and disk space."*
  - MinimumBuffers/MaximumBuffers：*"most users should minimize memory usage by setting MinimumBuffers to 0 or to a small minimum (e.g. 4 or 8)"*；丢事件时提高 MaximumBuffers（*"You might then increase the value of MaximumBuffers if the trace drops events during event rate peaks."*）。
  - FlushTimer：实时会话 0 = 默认 1s；*"Most real-time traces should start with a timer of 5 or 10 seconds"*——TMOG 需要秒级聚合粒度，取 1–5s。
  - 系统资源约束：系统 logger ≤8、全会话 logger 上限 64（可经 EtwMaxLoggers 调至 256，重启生效）（StartTrace 页）。
  - StartTrace 页顶部 Important：*"Cross-process event tracing sessions are a limited system resource… use as few sessions as possible… stop the trace as soon as the scenario is completed."* → TMOG 长驻会话与该指引冲突，须用小缓冲+严格 keyword（只开 IPv4/IPv6 网络事件，不叠加 PROCESS 之外的 flag，PROCESS 事件可考虑用独立周期快照替代以减小系统 logger 负担）。
- **事件量与流量速率的关系**：⚠️ 官方未给出量化公式。推断依据：1a 节事件为逐 send/recv 操作级（seqnum/connid/startime-endtime 暗示），事件速率 ≈ 网络 IO 系统调用速率（大流量小包场景事件多、大包场景事件少）。实验需实测（例如 100MB 下载时的事件数与 CPU 占用）。
- **采用 Kernel-Network 的知名工具**：
  - WPR 内置 "Kernel Network" recording profile（"Records networking problems"）——WPR 文档页 step 4 capture-a-trace-with-wpr 含该 profile 表（本次 WebFetch 404，未能引用原文；WPR 命令行页 https://learn.microsoft.com/en-us/windows-hardware/test/wpt/wpr-command-line-options 确认 WPR 以内置 profiles 驱动，`wpr -status` 输出示例含系统 collector 的 "Events Lost" 计数，佐证丢失计数的使用方式）。⚠️ "Kernel Network profile 即 Microsoft-Windows-Kernel-Network" 的对应关系：搜索结果（GitHub colz101/ETW 表）显示该 provider GUID 存在于 WPR profiles 语境，未在 learn.microsoft.com 找到直接一手断言，标注为"高度可能、待实验验证（`wpr -profiles` / `wpr -profiledetails Network` 现场核对）"。
  - netsh trace：netsh 概述页（https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/netsh）列出 `trace` 上下文，但其文档未点名 Kernel-Network provider；**未找到一手来源**说明 netsh trace 具体启用哪些 provider，标注为推断。
  - Resource Monitor：见 1f，官方文档未披露机制。

## 6. 单位与口径汇总

| 字段/API | 单位 | 累计语义 | 备注 |
| --- | --- | --- | --- |
| ETW TcpIp/UdpIp `size` | uint32，"Size of the packet"（字节，精确口径待实验） | 逐事件（非累计），消费端求和 | IPv4/IPv6 事件结构相同 |
| EStats `DataBytesOut` | 八位组（字节） | 自连接建立累计，单调 | **含重传**，不含 TCP 头 |
| EStats `DataBytesIn` | 八位组 | 自连接建立累计 | 含（对端）重传到达的数据 |
| EStats `DataSegsOut/In` | 段 | 同上 | 非字节 |
| EStats Path `BytesRetrans` | 字节 | 同上 | 重传专用口径 |
| EStats Path `PktsRetrans` | 段 | 同上 | |
| MIB_IF_ROW2 `InOctets/OutOctets` | 八位组 | 接口级累计 | 含广播/组播，无进程归属 |
| MIB_UDPSTATS `dwInDatagrams/dwOutDatagrams` | 数据报**个数** | 系统级累计 | 无字节、无进程 |
| GetExtendedTcpTable | — | 快照 | 无字节计数 |

**速率口径**：ETW 主机制 = 窗口内 sum(size) / 窗口时长；EStats 降级 = (t2 计数 − t1 计数) / (t2 − t1)，需处理连接消失（差分丢失该连接尾部增量）与计数器不可比（连接新建导致计数从 0 起）两类边界。

---

## 7. 机制选型建议### 对比表

| 维度 | Kernel-Network ETW（主） | TCP EStats 差分（降级） | GetExtendedTcpTable | GetIfTable2 | UDP 用户态 API |
| --- | --- | --- | --- | --- | --- |
| 普通用户可用 | ❌（ERROR_ACCESS_DENIED） | ❌（Set 需管理员；未启用时数据未定义） | ✅ | ✅ | ✅（但无字节） |
| TCP 覆盖 | ✅ 发/收/重传/连接 | ✅（仅已启用连接） | 表项+PID | ❌ | ❌ |
| UDP 覆盖 | ✅ 42/43/58/59 | ❌ | 端点表无字节 | ❌ | ❌ |
| 身份可靠性 | PID 事件级；需防复用对账 | 绑定连接行（Row→PID） | PID 快照 | 无 PID | — |
| 开销可控性 | 可控（小缓冲+窄 keyword），需实测 | 极低（轮询） | 极低 | 极低 | — |
| 精度/口径 | 逐事件求和；受provider覆盖盲区、事件丢失及身份关联限制，不能声称除丢失外无漏计 | 快照间关断的连接漏计尾部 | 无字节 | 系统总量对照 | — |

### 推荐组合

1. **主机制（管理员模式）**：`EVENT_TRACE_SYSTEM_LOGGER_MODE` 会话 + 启用内核网络事件（manifest keyword `KERNEL_NETWORK_KEYWORD_IPV4|IPV6` = 0x30，或 legacy `EVENT_TRACE_FLAG_NETWORK_TCPIP`），消费端按 (payload PID, 方向) 聚合 `size`；ControlTrace QUERY周期读EventsLost，丢失增量>0时标数据可能偏低。**候选合同固定参数**：BufferSize **64KB**、MinimumBuffers **16**、MaximumBuffers **64**、FlushTimer **1s**（与归档探针一致；不是已验证资源总开销）。
2. **UDP**：由主机制覆盖；无 ETW 权限时标注"UDP 数据不可用"（一手依据充分）。
3. **降级（管理员不可用/用户拒绝提升）**：per-process 网络功能整体降级为"不可用"（TCP EStats 在普通用户下数据未定义，不建议启用，避免把随机数据当真实流量）；仅保留 GetIfTable2 系统总量展示。
4. **"权限不足不可用"状态码映射**：`StartTrace` 返回 `ERROR_ACCESS_DENIED`（5）→ 主机制不可用；`SetPerTcpConnectionEStats` 返回 `ERROR_ACCESS_DENIED` → EStats 降级路径不可用；`GetPerTcpConnectionEStats` 返回 `ERROR_NOT_FOUND` → 连接已关断/不存在（正常边界，非权限问题）。
5. **实验清单（主会话执行）**：a) `logman query providers Microsoft-Windows-Kernel-Network` 核对 GUID 与 keyword；b) 普通用户/管理员分别 StartTrace 验证错误码；c) 已知流量（如固定 10MB 下载）实测 sum(size) 与实际字节数的口径差（是否含头/是否逐包）；d) 事件速率与 CPU 开销；e) 连接关断后 EStats 可读性（TIME_WAIT）；f) Process 事件是否带 CreateTime。

---

## 8. 受控实验记录（主会话执行，2026-10-27）

**环境**：Windows 11 Pro 10.0.26200，会话 token 已具管理员组（`net session`/`IsInRole` 验证为环境既有状态，未执行提权动作）。探针：`research/issue7/etw-probe/etw-probe.cpp`（MSVC 14.44 /SDK 10.0.26100 编译，`/utf-8`）。全部流量仅 127.0.0.1 回环或本机 LAN IP 自连，子进程为探针自身 `--client` 参数实例；每轮会话 `StartTrace→Enable→收发→CloseTrace→ControlTrace STOP`，停止后 `logman query` 确认无残留会话。

**关键教训（探针 v1–v6 的零事件与归属问题分开）**：`EventHeader.ProcessId` 不可作为可靠流量归属——run12/13 中它有时为真实PID，有时为4或其他进程，与MOF页警告一致，合同仍采用payload首个uint32 PID。**撤回“v1–v6 因读取header PID而零事件”的确定归因**：归属读法错误只能错认进程，不能解释run2保存的 `total events=0`。后续版本观察到事件属事实，早期零事件是否由消费就绪、配置/参数或其他差异造成未证实，不将时间先后当因果；消费者先就绪仍保留为合同防线。

**Payload 布局实测**（由 dump 十六进制反推 + 交叉验证，v7 固化）：
- TCPIP op=10 (IPv4 send)：len=36 = `PID(4) size(4) daddr(4) saddr(4) dport(2) sport(2) startime(4) endtime(4) seqnum(4) connid(4)` —— 与 MOF TcpIp_SendIPV4 模板吻合
- TCPIP op=11/14/16/18 (recv/retrans/disconn/copy)：len=28，同 TcpIp_TypeGroup1 模板
- TCPIP op=12/15 (连接类)：len=44
- UDPIP op=42/43：len=28 = `PID(4) size(4) saddr(4) daddr(4) sport(2) dport(2) seqnum(4) connid(4)`
- 样例解码（run13 事件#1，UDP op42）：`38100100 4e040000 0a350136 0a350167 ef2a f7e9` → payloadPid=69688，size=1102，saddr=10.53.1.54、daddr=10.53.1.103；端口按网络序为 **sport=0xEF2A=61226、dport=0xF7E9=63465**。这是已保存的自然背景UDP样例；端口并非mDNS的5353，没有应用层协议证据，**撤回“外部mDNS、归属合理”的定性**，不凭地址/进程名确认协议或是否跨主机。

**关键词**：manifest 一手只定义 `KERNEL_NETWORK_KEYWORD_IPV4(0x10)|IPV6(0x20)`；任务分发里提及的 `NETWORK_TRACE/TCP_SEND` 等细粒度 keyword 不存在于此 provider（研究节 1a 已核）。实验用 `0x30` 成功收到 TCP+UDP 两族事件。

**受控计量与归档口径（run12/run13）**：
- 子进程自报向回环server发送65536B并收到65536B回显，两轮payloadPID混合总桶分别为 `pid=72860:196608B` 和 `pid=73356:196608B`，即 **3×65536B**；这与send/recv/copy三份总量自洽，不是逐opcode的直接分解。
- 逐任务/opcode保存的是**hdrPid桶**：run12 `hdrPid=25584` 的op10/op11/op18分别为65536B；run13 `hdrPid=73356` 的op10为65536B，op11/op18分别为77824B。headerPID不可靠，**撤回“77824=回显65536+server读取12288，所以正确归属于接收方”的解释**。归档没有 `payloadPid×opcode` 交叉计数，可靠接收方分解不可直接复查。
- 合同采用按payload PID聚合载荷字节的候选口径；TCP发送桶与已知实发量相符的证据只适用于该测试机和回环样例，不宣称所有路径“不含头且精确”已证实。

**TCP 双计风险**：run12/13上述hdrPid桶中op11与op18字节和分别相等，配合MOF TCP-copy语义及payloadPID总桶的3×65536B自洽性，支持合同**排除op18、只计op10/11**的防双计选择，但不能把hdrPid桶当最终可靠归属计数。专门 `op18-check.cpp` 验证入口已保存，**运行输出未归档**，不新增其成功结论为可复查证据；op14重传仍单列。

**UDP 回环盲区（run12/run13 两次观察）**：子进程自报回环UDP发送22400B，归档未观察到可归属该受控流量的UdpIp事件；同期自然背景UDP事件存在，只能证明provider在产事件，**不能把其定性为mDNS或用其验证UDP字节精度**。合同据此把该测试机/受控回环场景列为不可用/无数据，不显示0；不将该现象泛化为所有版本/硬件的“天然缺失”。跨主机UDP与 `size` 已知实发量对照未做，列为未验证。

**非本机地址实验受限说明**：本机所有自有 IP（127.0.0.1、10.53.1.103 LAN、Tailscale IP）互连均属回环路径；受控边界内（不产生真实外网流量、不装抓包工具）无法构造"离开主机"的流量场景。TCP 回环事件已证明机制有效，跨主机行为留待实机验收（列未实测限制）。

**丢事件计数**：有已保存QUERY行的轮次报告 `EventsLost=0 BuffersLost=0 RTBuffersLost=0`（BufferSize=64KB、MinimumBuffers=16、MaximumBuffers=64、FlushTimer=1s）。**run11两个输出文件为空，不能据此称run1–run13全部完成有效丢失查询**。已保存样例没有触发EventsLost>0，也没有证明UI丢失标注路径运行成功；该路径必须保持未实测。QUERY须在STOP前，run1停止后QUERY=4201的失败另保留为事实。

**事件量级观察**：run10仅开启keyword0x20、观察60s，1793事件约 **29.9/s**；其背景协议未证实，不能当完整0x30安静基线。run12/13开启0x30，全会话总量分别 **210265/229449**。当前保存源码含300ms消费者预热、子进程阶段和2500ms尾窗，日志无起止时间戳，**约3s只可估算7–9万事件/s量级**，不是瞬时峰值，不能用整个会话总数除以单独2.5s尾窗。精确速率/CPU峰值和最大缓冲压力仍未验证；生产聚合应增量处理且有资源上限，`std::map`查找/插入为O(log P)，不是O(1)。

**证据留存限制（审查 D4/D6/D7）**：`op18-check`只有源码/构建入口，未保存运行输出，本次不能复查专门归属验证；EventsLost>0及其状态标注未实际触发；UDP背景样例没有已知实发量基准。三者已同步到合同第9节，不以缺失输出重建或伪造实验结果。

**非提权对照**：`runas /trustlevel:0x20000` 降权运行在沙盒内静默失败（多种调用方式，exit=1 无输出）——**普通用户 StartTrace=ERROR_ACCESS_DENIED 未实测**，以 StartTrace 官方文档原文（研究节 2 权限矩阵）为准，列未实测限制。

**会话清理**：每轮 `ControlTrace STOP` 成功（rc=0），末轮后 `logman query` 确认无 TMOG 残留会话。受控子进程全部等待退出后回收，无遗留进程。
