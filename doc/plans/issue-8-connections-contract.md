# Issue #8：Connections 页面证据与范围合同（W20）

- 日期：2026-10-27
- 票：[#8 [Windows W20] Connections 页面证据与范围合同](https://github.com/wanggan768q/TMOG-Public/issues/8)
- Worktree：`E:/Git/TMOG-Public-WorkTree/issue-8-connections-contract`（分支 `issue-8-connections-contract`，基线 `767553a`）
- 目标工件：`Raw/Task Manager v1.1.0 - 原始文件.exe`，SHA-256 `fb57e1eb00cb259d4bd4cf6bd7289097be419f3ab171ee234f46c0ac1247d5a7`
- 方法约束遵守情况：本票全程未运行原厂 exe、未抓包、未扫端口、未关闭连接、未安装工具、未提权；仅静态字节解析（Python stdlib 只读脚本）+ 已有逆向证据库 + 官网/官方文档检索。

## 0. 结论（TL;DR）

**结论（高置信推断，非动态观测）**：Connections 极大概率是本机 TCP/UDP 连接与监听的只读枚举页，带进程归属与暴露分类；不是"远程查看别的机器"页面。

**证据强度与推断边界**：多重静态证据收敛（导入表方向性 + v1.1.0 页面级字符串观测 + v1.0.1 反编译 UI 结构的跨版本外推），但**未动态运行原件**，未将 IPHLPAPI 调用点核验到 Connections 页代码路径（Ghidra provider 本机不可用），且 E3 反编译库的版本身份为 v1.0.1（非 v1.1.0），其跨版本适用性未验证。导入表只能证明应用引用了这些 API（应用级证据，不能单独归属到某页）；本报告依赖的是 E1+E2+E3 的组合关联，非任一单项证明。"Connections=本机枚举"应读作"证据指向本机枚举，待实现票行为验收复核"。

原版另存在一个独立的 **PRO 门控 "Remote connections"** 附加功能，方向是 **本机作为被���服务端，允许 iPhone 连入查看本机**（"Buy a license to view this computer from an iPhone"），与 Connections 页面主体分离。该远程功能当前无实现授权、不归属任何现有票，本票仅将其记录为附加能力线索；#26（W21）是 Connections 本机连接查看的实现票，须待本合同获维护者确认后方可解锁，本票不实施 #26。

官网对该页仅有名称、无任何描述；本结论全部来自二进制静态证据与官方 API 文档，非官网推断。

## 1. 证据清单

### 1.1 静态二进制证据（v1.1.0 原件）

**E1. 导入表（本会话实测，脚本 `doc/plans/issue-8-pe-import-parse.py`，解析产物为下方原文）**

原件导入 `IPHLPAPI.DLL`，函数清单（IMAGE_IMPORT_BY_NAME 原文）：

- `GetExtendedTcpTable` — 本机 TCP 连接/监听表（含 PID 归属）枚举
- `GetExtendedUdpTable` — 本机 UDP 端点表（含 PID 归属）枚举
- `GetIfTable2Ex` / `GetIfEntry2` / `GetIfStackTable` — 接口表
- `GetUnicastIpAddressTable` / `GetAdaptersAddresses` — 本机地址/适配器（Exposure 分类所需的地址集合来源）
- `GetBestRoute2` / `FreeMibTable`

同时导入 `WS2_32.dll`：`InetNtopW`（地址→文本）、`GetAddrInfoExW` 等；`WINHTTP.dll` 仅与许可/更新相关字符串群相邻，未发现用于连接表。

无 `netapi32`/`wsock32` 远程管理类导入。**证据强度：方向性（应用级）。** 导入表只能证明应用引用了这些 API，不能单独证明它们属于 Connections 页；本证据的价值在于排除性——远程查看方案（WMI/RPC/RDP 客户端/自建协议客户端）不需要 IPHLPAPI 连接表 API，且全套 IPHLPAPI 导入（连接表+接口+地址+路由）与本机网络枚举的形态高度一致。归属结论由 E1+E2+E3 组合支撑。

**E2. UTF-16 字符串证据（本会话实测，脚本 `doc/plans/issue-8-u16scan.py`，全文 `issue-8-u16scan-output.txt`）**

v1.1.0 `.rdata` 命中 483 条，Connections 页核心证据（地址为镜像 VA）。**证据强度：组件级关联。** 字符串与其引用代码的绑定关系未逐一核验（未做 xref）；其中与 E3 反编译的 UI 构建函数直接印证的过滤组字符串（All connections/Connected connections/Listening connections/Public listeners/UDP connections/Local IPC unavailable on Windows/Connections/Connection scope）可归属到该页组件（同一创建序列），其余字符串（Exposure 释义、四态文案、行详情格式、列头词）目前是"同二进制共存的强语义线索"，归属为推断。

| VA | 字符串 | 含义 | 归属强度 |
|---|---|---|
| 0x140581720 | `Connections` | 页签名 |
| 0x140578d98 / 0x140581048 / 0x14058f8d8 / 0x1405a2418 / 0x1405d01b0 | `All connections` / `Connected connections` / `Listening connections` / `Public listeners` / `UDP connections` | 状态过滤组（与 E3 UI 构建证据一致） | 已归属（E2 v1.1.0 字节观测 + E3 v1.0.1 创建序列跨版本佐证） |
| 0x140581568 / 0x1405815e8 | `Connection scope: %1` / `Connection scope: All` | 范围汇总条 | 已归属（E2 v1.1.0 字节观测 + E3 v1.0.1 创建序列跨版本佐证） |
| 0x1405ab8a0 | `Scope %1. %2 connections, %3 listening, %4 public listeners, across %5 processes. Local IPC inventory is unavailable on Windows.` | 范围汇总句（统计本机连接/监听/公开监听/跨进程数） | 强关联（未 xref） |
| 0x14056db80 | `%1, PID %2. %3, %4. Local %5. Remote %6. Exposure %7. Owner %8.` | 行详情格式：本地端点、远程端点、暴露分类、属主 | 强关联（未 xref） |
| 0x1405b6ae8 / 0x1405b6b58 / 0x14059c638 | `TCP4` / `TCP6` / `UDP` | 协议显示名 | 强关联（未 xref） |
| 0x1405a2248 / 0x1405a0b90 / 0x1405a5b98 / 0x1405a1870 | `Protocol` / `Port` / `Remote` / `Process` | 列头候选词 | 弱关联（可能多页共用，如 Port 出现 5 处） |
| 0x1405900d0 | `Local endpoint` | 本地端点 | 强关联（未 xref） |
| 0x1405cc260 | `This socket accepts traffic on every matching network interface. Firewall and router rules still determine whether it is reachable.` | Exposure: 通配监听（0.0.0.0/::）释义 | 强关联（未 xref） |
| 0x1405cc5f0 | `This socket is restricted to software running on this computer.` | Exposure: 仅回环释义 | 强关联（未 xref） |
| 0x1405cad00 | `This endpoint is on a private, link-local, or local IPv6 network.` | Exposure: 私网/链路本地释义 | 强关联（未 xref） |
| 0x1405c3530 | `The remote endpoint is outside the local address ranges. A shared or CDN address may represent more than one service.` | Exposure: 外部端点释义 | 强关联（未 xref） |
| 0x1405c0050 | `The available socket data is not sufficient to classify exposure.` | Exposure: 未知释义 | 强关联（未 xref） |
| 0x14057fe50 / 0x1405811c0 / 0x1405813e0 | `Collecting connection inventory.` / `Connection inventory is currently unavailable.` / `Connection inventory is partial or limited to 20,000 rows.` | 加载/错误/截断三态 | 强关联（未 xref） |
| 0x14058f9e8 | `Listening on port %1` | 监听呈现 | 强关联（未 xref） |
| 0x14058ffc0 | `Local IPC unavailable on Windows` | Unix 域套接字 IPC 仅非 Windows 平台；Windows 显式标注不可用 | 已归属（E2 v1.1.0 字节观测 + E3 v1.0.1 创建序列跨版本佐证） |

**E3. UI 构建反编译证据（既有库 `docs/reverse-tutorial/evidence/func_db25e.md:8037-8058`；subject 为 v1.0.1，SHA-256 99e7565d394c1dabe40e6703a3cb5971ba5219413dbed34ca1e99c7b3d354810）**

Connections 页控件创建原文：STATIC `Connection scope: All`；BUTTON `Connections`（0x44031009=选中态 radio）+ `Listening` + `Public`（0x44011009=未选 radio）；BUTTON 组 `All connections` / `Connected connections` / `Listening connections` / `Public listeners` / `UDP connections` / `Local IPC unavailable on Windows`；`SysListView32` 列表控件（param_1[0x52]）。两组 radio 过滤 + ListView 表格，与本机连接页形态吻合（结构性推断）；页面在 15 页签数组中索引 10（`func_db25e.md:8153`）。

**E3 证据强度：跨版本外推（v1.0.1 → v1.1.0），未验证等价。** 该反编译来自 **v1.0.1** 二进制（与 E1/E2 的 v1.1.0 工件 SHA-256 不同；首次交付时误标为 v1.1.0 同工件族，经 Review 核查 func_db25e.md 文件头 subject 订正）。引用行内容（Connections 创建序列、页签索引 10）在 v1.0.1 evidence 中核对无误，但其对 v1.1.0 的适用性隐含“两版间该页 UI 未变”假设，该假设**未验证**，不作为已确认事实。方向判断不依赖 E3（由 E1 排除性 + E2 本机枚举语义 + §1.4 远程边界独立支撑）；E2 过滤组字符串已由 Review 在 v1.1.0 字节流独立确认存在，故 E3 仅作历史版本 UI 结构佐证，不用于宣称 v1.1.0 组件归属“已证实”。数据填充路径（哪个函数调用 GetExtendedTcpTable 并填入该 ListView）未核验——留作“未核验链路”记录于 §9。

### 1.2 官网证据（https://www.tmog.org/，2026-10-27 抓取）

- 十二页导航列表含 "Connections"，**全页无任何对该页功能的描述**（笼统命名，不能作为远程/本机依据）。
- 隐私声明原文："TMOG sends no usage statistics, hardware inventory, process information, or identifiers."；"only routine request is an update check"——与"本机单机工具"一致，官网层面无远程查看宣称。
- Network（带宽图）为另一独立页，与 Connections 不重叠。

### 1.3 官方 Windows API 文档

- GetExtendedTcpTable（iphlpapi.h，learn.microsoft.com）：`TCP_TABLE_OWNER_PID_*` 返回 `MIB_TCPROW_OWNER_PID`（state、local addr/port、remote addr/port、dwOwningPid）；`TCP_TABLE_OWNER_MODULE_*` 另带创建时间与模块路径。文档未要求管理员权限；XP SP2/Vista+ 可用。
- GetExtendedUdpTable（iphlpapi.h）：对应 `UDP_TABLE_OWNER_PID_*` → `MIB_UDPROW_OWNER_PID`（local addr/port、dwOwningPid；UDP 无状态/远程端点）。

### 1.4 远程 "Remote connections" PRO 功能的边界证据（澄清，防误判）

| VA | 字符串 | 含义 |
|---|---|---|
| 0x1405a5fa0 | `Remote connections are a PRO feature. Buy a license to view this computer from an iPhone.` | 方向：**iPhone→本机**，本机是被查看方 |
| 0x140579268 | `Allow Remote Connections` | 设置开关 |
| 0x1405a62a0 | `Remote connections could not listen on port %1: %2` | 本机作为**监听服务端** |
| 0x1405a65e0 | `Remote connections need a Windows Firewall rule. Phones cannot connect until it is added.` | 本机入站规则 |
| 0x1405a4ed0 / 0x1405a5090 / 0x1405a5270 | `Refused a connection from %1: only local networks are accepted.` / `too many connections are already open.` / `too many connections from one address.` | 服务端准入限制 |
| 0x1405c27d0 / 0x1405c4850 | `The pairing data could not be saved. Remote connections were not started.` | iPhone 配对数据 |

**结论：TMOG 本体不含"主动连接其他机器查看"的客户端逻辑；远程是"被动暴露本机数据给配对设备"的 PRO 附加功能。** 本项目不实施任何一侧。

## 2. 页面定义（合同正文，候选待维护者确认）

**Connections 页（推断定义）= 本机网络端点清单（只读）。** 数据源为 Windows IP Helper 连接表（TCP4/TCP6 连接与监听、UDP4/UDP6 端点），每行归属到本机进程，按协议/状态/暴露过滤，供检查而非操作。不关闭连接、不修改防火墙/路由、不发起任何网络请求。

此定义为静态证据推断（见 §0 边界），作为**候选合同**提交；实现票动工前需维护者确认，且以 §6 行为验收作为最终复核。

原版在非 Windows 平台把 Unix 域套接字 IPC 也纳入该页（`Local IPC` 过滤项），Windows 上明确标注不可用——本项目 Windows 版按原版行为不提供 IPC 行。

## 3. 字段合同

| 字段 | 合同 | 依据 |
|---|---|---|
| 协议 | `TCP4` / `TCP6` / `UDP`（UDP 不区分 4/6 显示时并入 `UDP`） | E2 0x1405b6ae8/0x1405b6b58/0x14059c638 |
| 本地端点 | 地址（InetNtopW 文本）+ 端口；`GetExtendedTcpTable`/`GetExtendedUdpTable` 原生字段 | E1 导入表 + 1.3 |
| 远程端点 | 仅 TCP 连接行有；监听与 UDP 行显示 `—`（原版 `Remote %6` 支持无值） | E2 0x14056db80 + 1.3 UDP 结构无远程字段 |
| 状态 | TCP 按 `MIB_TCP_STATE` 呈现，至少可区分 listening / established；UDP 行无状态 | E3 过滤组 + 1.3 |
| 进程归属（Owner） | PID（API `dwOwningPid`）；UI 显示 PID + 进程名，复用工程既有进程身份能力（pid+name+creation_tick，见 `src/ProcessSampler.h` 的 `ProcessIdentity`）；PID=0 或归属失败显示"系统/未知"，不伪造 | E2 0x14056db80（`PID %2`、`Owner %8`）+ 1.3 |
| 暴露分类（Exposure） | 五分类：回环限定 / 通配监听（任意接口）/ 私网·链路本地 / 外部端点 / 不可判定；每类附原版同义说明文案（0x1405cc260 等 5 条） | E2 五条释义串 + 0x14056db80 `Exposure %7` |
| PID 附加值 | 显示 `PID %2` 于详情 | E2 |

原版列头完整集合、列序、列名未全部取证（仅 `Protocol`/`Port`/`Remote`/`Process`/`Local endpoint` 五词命中）→ **列头命名与排序为自主设计**，字段集以上表为准。

## 4. 权限 / 刷新 / 覆盖 / 失败合同

**权限**
- `GetExtendedTcpTable`/`GetExtendedUdpTable`（OWNER_PID 类）普通用户可调用，官方文档无提权要求；**本页不要求管理员**，不自动提权。
- 部分内核/系统套接字 PID 归属可能为 0 或取不到进程名：显示"系统/未知"，禁止伪造归属。
- 只读：不实现关闭连接/结束 socket 属主进程（进程结束属既有 #3 能力，不经本页触发）。

**刷新**
- 手动刷新（复用全局 Refresh 语义）+ 后台线程枚举，结果经队列连接投递 UI（复用既有 SamplingWorker 模式）。
- 原版自动刷新间隔未取证 → 自动刷新节拍为自主设计：建议与 Processes 页同拍（1s）或用户可调；不得在枚举进行中阻塞 UI。

**覆盖**
- 上限 20,000 行（原版原文）；超限截断并显式提示 `Connection inventory is partial or limited to 20,000 rows.` 同义文案。
- 每帧整表替换（快照语义），不增量合并。

**失败与空态（四态分离，禁止假数据）**

| 状态 | 呈现 | 原版依据 |
|---|---|---|
| 收集中 | `Collecting connection inventory.` 同义文案 | 0x14057fe50 |
| 不可用（API 失败） | `Connection inventory is currently unavailable.` 同义文案 + 保留上次成功快照标注"陈旧" | 0x1405812d0 |
| 截断 | 部分行 + 明确截断提示 | 0x1405813e0 |
| 空表 | 真实空表（无连接）显示空态，不与"不可用"混淆 | 实测零值原则（票面共用约束） |

- Exposure 无法分类时按原版语义显示"不可判定"，不猜测。

## 5. 与 #7（进程网络速率）的边界

- #7 = 吞吐/速率测量（流量大小、每秒字节）；本页 = 端点清单（谁在连/听哪里、状态、归属、暴露）。
- 本页**不显示速率、不显示字节数**，不调用性能计数器；两票共享的只有进程身份能力。
- 若后续 UI 需要在两页间跳转（行→进程），只做导航，不复制数据。

## 6. 可运行验收方案（后续实现票执行）

1. **Debug/Release 均有效的自证式检查**（无管理员、无网络交互）：
   - 测试进程内创建临时监听 socket（如 `QTcpServer::listen(QHostAddress::LocalHost, 0)`），随后调用 `GetExtendedTcpTable`（`TCP_TABLE_OWNER_PID_LISTENER`）断言：能枚举到该行、本地端口匹配、`dwOwningPid == GetCurrentProcessId()`；
   - 同法对 UDP：`sendto` 到自身回环后 `GetExtendedUdpTable` 断言本地端点归属；
   - 断言失败即检查失败。对象均为测试进程自建，符合"可丢弃对象"边界。
2. **UI 实机验收**：Connections 页显示真实本机端点；过滤器五态切换生效；scope 汇总句数字与列表一致；暂停/恢复行为与 Processes 页一致。
3. **失败态注入**：以无权限/异常参数路径触发"不可用"文案路径（如单测 mock 枚举器返回失败），验证四态分离。
4. 环境受限项（20,000 行截断实测、IPv6 全状态覆盖）如实标注"未实测"。

## 7. 自主设计清单（原版证据不足，明确为自主设计）

- 列头完整命名、列序、列宽与排序行为。
- TCP 状态完整词表（原版仅证明 listening/established 可区分）。
- 自动刷新节拍与用户可调性。
- Exposure 各分类的**显示名**（释义文案已取证，分类标签名未取证）。
- 行上下文菜单（原版是否存在"跳转到进程"未取证）。

## 8. 维护者决策门槛

- **证据指向本机只读范围成立（高置信推断，非完备证明）**。"远程 vs 本机"问题已被静态证据充分回答到候选合同水平；API 调用点到页面组件的最终链路核验留待实现票行为验收复核。维护者**确认本合同**（字段集、四态、权限、覆盖）后，实现票方可开工。
- 远程 "Remote connections"（PRO，iPhone→本机）为原版真实存在的附加功能（字符串级证据，其机制未逆向），**本票不实施、不立实现合同**；该功能当前无实现授权、不归属任何现有票；若未来需要，须由维护者新立范围合同票（涉及服务端监听、配对、防火墙与准入策略，工作量独立），不影响 #26（W21，Connections 本机连接查看实现票）的解锁条件。
- 官网笼统名称与二进制证据冲突处，以二进制证据为准（官网无描述，无实际冲突）。

## 9. 实测与未实测状态

**工件与脚本卫生**

- 原件 SHA-256：`fb57e1eb00cb259d4bd4cf6bd7289097be419f3ab171ee234f46c0ac1247d5a7`（`Raw/Task Manager v1.1.0 - 原始文件.exe`，8,771,912 字节；本会话 open_binary 校验一致）。补丁件 `Task Manager v1.1.0.patched.exe` 未用于本票分析。
- 解析脚本均以 `python -I`（隔离模式）运行，脚本存放在工程可信目录 `doc/plans/`，仅以**只读**方式打开 Raw/ 下不可信工件路径，不执行、不写入工件；输出落盘到 `doc/plans/`。
- 未通过临时 provider 配置、提权或运行原件补证（遵守本票边界）。

| 项 | 状态 |
|---|---|
| 导入表解析（E1） | ✅ 实测（只读字节解析，脚本入库 `doc/plans/issue-8-pe-import-parse.py`） |
| UTF-16 字符串扫描（E2） | ✅ 实测（`doc/plans/issue-8-u16scan.py` + `issue-8-u16scan-output.txt`） |
| 字符串 xref 归属核验 | ❌ 未做（E2 中"强关联"项未做调用点验证；列头词为弱关联） |
| E1→E3 链路核验（连接表调用点是否服务 Connections 页） | ❌ 未做（Ghidra provider 本机不可用；不通过临时配置补证，留待实现票） |
| UI 构建反编译（E3） | ✅ 实测（既有库，2026-10-26 归档，Ghidra 12.1.4 evidence） |
| E3 版本身份 | ❌ 为 v1.0.1（SHA-256 99e7565d…，非 v1.1.0 fb57e1eb…）；对 v1.1.0 仅为跨版本线索，"v1.0.1→v1.1.0 该页 UI 未变"假设未验证，不作已确认事实（Review 核查出，首次交付误标 v1.1.0 同族） |
| 官网/MSDN 文档 | ✅ 实测抓取（2026-10-27） |
| 原版动态运行行为 | ❌ 未实测（本票禁止运行原件；行为合同均由静态证据支撑） |
| 20,000 行截断 / IPv6 全状态 | ❌ 未实测（留待实现票） |
| Ghidra 伪码级核验 | ⚠️ 未做（本机 REA provider 不可用：GHIDRA_INSTALL_DIR 未配置；不通过临时配置补证。与上方"E1→E3 链路核验"同一缺口，证据强度据此标"高"而非"完备"） |

## 10. 来源引用

1. 原件 v1.1.0 静态解析（本票脚本，SHA-256 见文件头）
2. `docs/reverse-tutorial/evidence/func_db25e.md`（**v1.0.1** UI 构建，Ghidra evidence，2026-10-26 入库；subject SHA-256 99e7565d394c1dabe40e6703a3cb5971ba5219413dbed34ca1e99c7b3d354810）
3. https://www.tmog.org/ （2026-10-27 抓取）
4. https://learn.microsoft.com/en-us/windows/win32/api/iphlpapi/nf-iphlpapi-getextendedtcptable
5. https://learn.microsoft.com/en-us/windows/win32/api/iphlpapi/nf-iphlpapi-getextendedudptable
