# Issue #8：Connections 页面合同 v2（自包含规范）

- 版本：v2（2026-10-28）
- 票：[#8 [Windows W20] Connections 页面证据与范围合同](https://github.com/wanggan768q/TMOG-Public/issues/8)
- 批准依据：批准计划 `doc/plans/2026-10-28-issue-8-contract-revision-plan-v1.md`（v1，SHA-256 `0fd4828aa09b316428bab1476a24221beedd8f66b0ebe3b50ffb0ddc69977249`，用户批准记录 2026-10-28）
- 任务树：worktree `issue-8-contract-v2-20261028`，分支 `docs/issue-8-contract-v2-20261028`，基线 `54596d28d96ac497b6100901dcd093e5954ef07c`
- 历史任务树（`issue-8-connections-contract`，HEAD `86da6ee019a6aca2d2bc02419f5aa395b94a757f`）不接管；本文件不覆写任何历史原件。

## 0. 文件地位与来源分层

1. **L1 规范层**：本文件 §1..§12 为当前唯一规范；实现票 #26 及其验收以本文件为准。
2. **L2 历史证据层**：历史三份 md（候选合同 `issue-8-connections-contract.md`、`issue-8-review.md`、`issue-8-session-handoff.md`）与两脚本一扫描产物（`issue-8-pe-import-parse.py`、`issue-8-u16scan.py`、`issue-8-u16scan-output.txt`）按固定 git 对象（HEAD `86da6ee0…`）原字节保留。它们只证明"v1.1.0 二进制中存在哪些导入/字符串/UI 结构线索"，**不作为当前行为规范**；与本文件冲突处以本文件为准，冲突逐条见 §9 勘误映射。历史文件不覆写、不改名、不删乱码。
3. **L3 实测层**：当前为空。本合同未运行原件/补丁件、未做网络实验、未做 GUI 实测；#26 的 F1..F8/W1..W3（§11）通过后产生的证据才进入实测层。任何"实测"表述须带场景与版本限定。

历史 early-review 的"技术审查闭环 PASS"仅为当时会话的 self_report，不能升级为当前固定 SHA 的独立审查结论；本文件必须经新固定 SHA 的独立 Review（非作者自审）。

## 1. 页面定义、范围与依赖

- Connections 页 = **本机网络端点清单（只读）**：本机 TCP4/TCP6 连接与监听、UDP4/UDP6 端点，逐行进程归属，按协议/状态/暴露过滤。供检查，不供操作：不关闭连接、不结束 socket 属主进程、不修改防火墙/路由、不发起任何网络请求、不提供本页危险操作。
- 方向结论的权威表述：证据指向本机页（静态字符串与导入方向性），附加存在远程功能字符串线索；**不证明绝无其他逻辑，两侧均范围排除**。
- 远程 "Remote connections"（PRO，方向为 iPhone→本机，本机作为被查看的监听服务端——静态字符串线索）不实施、不立合同、不归属任何现有票；远程无票、无授权。
- 首版范围排除：远程服务与移动客户端、速率/字节统计（#7 边界：本页不显示速率、不显示字节数、不调用性能计数器）、Local IPC。Local IPC 是**本产品范围排除**，不是"Windows 没有 IPC"的平台结论。
- 依赖事实（2026-10-28 gh 查询）：#8/#26/#17 均 OPEN；#26 原生 blocked_by = #17、#8；#17 档位合同为 0.5/1/2/5 秒、默认 1 秒，main 代码目前只有 1000ms 定时器，**不能称 #17 已实现**。#8 文档收口不依赖 #17 代码完成；#26 必须等 #8/#17 及其合同/人工门槛完成，并得到明确开工指令。
- 安全边界：禁止自动外传端点、抓包、端口扫描、关闭连接、结束属主、修改网络状态。

## 2. 数据采集与进程身份

### 2.1 四张来源表

| 表 | API | 关键参数 |
|---|---|---|
| TCP4 | GetExtendedTcpTable | AF_INET, TCP_TABLE_OWNER_PID_ALL |
| TCP6 | GetExtendedTcpTable | AF_INET6, TCP_TABLE_OWNER_PID_ALL |
| UDP4 | GetExtendedUdpTable | AF_INET, UDP_TABLE_OWNER_PID |
| UDP6 | GetExtendedUdpTable | AF_INET6, UDP_TABLE_OWNER_PID |

- `Reserved=0`，`bOrder=FALSE`；稳定选择与排序由本程序决定（§4、§5）。
- 四表依次采集，**不是同一瞬间原子快照**；展示采集开始/结束时间与完成表集合。
- 每表调用次数与缓冲预算见 §7。

### 2.2 UI 列与显示值

列（10）：协议、本地地址、本地端口、远程地址、远程端口、TCP状态、PID、进程名、身份可用性、Exposure。

- UDP 行协议列显示 `UDP`（详情另有 IPv4/IPv6）；UDP 的状态/远程端点、TCP LISTEN 的远程端点均显示 `—`。
- TCP ESTABLISHED 显示 `ESTABLISHED`；其他合法 TCP 状态保留官方值（MIB_TCP_STATE 1..12）；未知整数显示 `UNKNOWN(n)`，不归 Connected。
- 数值端口按 `ntohs` 解码；IPv6 scope 按官方结构文档以 `ntohl` 解码；地址保留网络序字节。实现/实机若发现 SDK 与运行结果差异：记录并重新审查，**不能隐式修正本合同**。
- IPv6 文本格式 `[fe80::1%7]:8080`；scope 非零必须显示十进制 zone；scope=0 的链路本地地址写"scope未知"，不凭适配器名猜测关联。

### 2.3 进程身份与竞态

- 身份类型 = `(pid, creation_tick)`，实际定义在 `src/ProcessSnapshot.h:9`（`ProcessIdentity`，默认 `operator==`）。进程名**不参与身份**。IP Helper API 只返回 PID，不能直接构造 creation_tick；身份查询按工程既有进程身份能力完成。
- 名称仅显示本轮成功查询的结果；名称失败但创建身份成功仍计可信身份，名称列显示不可用。不拼接旧缓存名称。
- 身份须在采表前后核对同 PID 创建时间一致；无前置身份、进程退出、前后创建时间变化、PID=0、查询被拒、预算耗尽，均按明确原因显示，不伪造。
- **身份竞态声明**：表采集与身份查询之间仍存在竞态，本页不能承诺"socket 到创建身份"的原子证明。将来导航到进程须当时重新验证身份，不以 PID 单独导航。
- 未知 PID 仍显示 API 返回数值；PID=0 显示"PID 0／身份未知"，不武断命名系统进程。未知身份**行数**独立统计（§4.5 的 X），不凭 PID 去重成真实进程数。

## 3. 地址分类、Exposure 与 Public

### 3.1 分类原则

分类是本产品**保守地址规则**：不依赖 DNS、路由探测、适配器/防火墙扫描或在线特殊地址库；分类不代表连接方向、风险、可达性或唯一服务。分类对象先验格式与 scope 合法性。按下列优先级：

1. **Unknown（不可判定）**：非法/缺地址、IPv4 携带 zone、IPv6-mapped 携带非零 zone；LISTEN/UDP 所需本地地址不合法则 Public 不确定（unknown）。
2. **IPv4-mapped 规范化**：`::ffff:a.b.c.d` 仅**分类**时规范化为 IPv4；显示与协议族不变。
3. **Wildcard（通配绑定）**：未指定地址 `0.0.0.0`/`::` 仅当 TCP LISTEN 或 UDP 绑定端点时成立；非 LISTEN 行的未指定远端 → Unknown。
4. **Loopback（回环）**：IPv4 `127.0.0.0/8`；IPv6 `::1/128`。
5. **LocalRange**：IPv4 `10/8`、`172.16/12`、`192.168/16`、`169.254/16`、共享地址 `100.64/10`；IPv6 `fc00::/7`、`fe80::/10`。显示"私有/链路本地/共享范围"；scope 缺失单列，不改成 Global。
6. **保守 Unknown**：IPv4 `0/8` 余部、`192.0.0/24`、`192.0.2/24`、`198.51.100/24`、`203.0.113/24`、`198.18/15`、`224/4`、`240/4`；IPv6 `ff00::/8`、`2001:db8::/32`、`2001::/23`，以及不属于 `2000::/3` 的余部。该固定表**不宣称是完整 IANA 分类**；特殊地址可能保守未分类。
7. **ExternalCandidate（其他单播地址）**：其余 IPv4 单播与 IPv6 `2000::/3` 候选。这不是"已证全球可达"。

### 3.2 Exposure

- 分类对象：TCP LISTEN 与 UDP 绑定按**本地地址**分类；TCP 非 LISTEN 按**远端**分类。
- 五个主显示类别：回环端点、通配绑定、私有/链路本地/共享范围、其他单播地址、不可判定。
- 非 LISTEN 行即使远端是回环地址，也不写"该 socket 限制为本机软件"——远端类别不能证明绑定范围。
- 通配绑定说明："匹配接口范围；防火墙/路由/NAT 仍影响可达性。"

### 3.3 Public 真值（TCP 非回环监听）

- 显示名：`Public（TCP非回环监听）`。
- true：仅当 TCP state=LISTEN 且本地地址类别 ∈ {Wildcard, LocalRange, ExternalCandidate}。
- false：本地类别为 Loopback 的 TCP LISTEN。
- unknown：本地类别 Unknown 不混入 Public 结果，单列"监听范围未知行"（§4.5 的 Y）。
- **私网/链路本地监听 Public=true 不等于公网可达。**
- **UDP 不加入 Listening/Public 计数与过滤**：官方 UDP6 文档明确绑定行可能只用于发送、没有接收意图，绑定不能证明监听行为。所有 UDP 归 UDP 过滤与总端点行，可显示本地绑定 Exposure。UDP"非回环绑定"单独统计需另行批准，首版不加第六过滤。

## 4. 单一过滤、搜索、排序与统计

### 4.1 单一互斥过滤

一组互斥模式，默认 All：

| 模式 | 定义 |
|---|---|
| All | 所有有效保留行 |
| Connected | TCP ESTABLISHED |
| Listening | TCP LISTEN |
| Public | §3.3 true |
| UDP | UDP4/UDP6 |

切换替换旧模式；不与任何历史第二过滤组（如 Local IPC）相交。

### 4.2 搜索（过滤后执行）

- 输入：trim 后单一字符串；空字符串全匹配。
- 匹配：Unicode 大小写折叠的普通子串 OR 匹配以下字段——进程名、十进制 PID、协议/族、规范本地/远端地址文本、十进制端口。
- 不正则、不 DNS；TCP 状态、Exposure、错误文案不参与搜索。
- 输入上限 256 UTF-16 码元；超限拒绝输入并反馈，不截断后静默改变查询。

### 4.3 排序（选行上限之后执行；不改变哪些行入选）

- PID、端口按数值；协议按 TCP4/TCP6/UDP4/UDP6 顺序；地址按族+原始字节+scope；TCP 状态按原生数值；文本按大小写折叠后原字符串。
- 缺值在两个方向始终排最后；相等以规范行键升序兜底，不依赖 API 返回顺序。

### 4.4 规范行键

键 = 协议族顺序、local 地址字节、local scope、local port、remote 是否存在、remote 地址字节/scope/port、TCP state、API PID。相同键的重复行保留（不宣称 socket 唯一 ID）；同键详情不确定时清空选择，不凭行号维持身份。

### 4.5 可见保留行统计

- 指标（均只对**当前可见保留行**）：端点行总数 R（含 UDP）、Connected 数 C、TCP 监听 L、Public 数 P、UDP 数 U、可信不同 `(pid,creation_tick)` 数 K、未知身份行数 X、监听范围未知行数 Y。L 与 U 不相加成"连接数"。
- 标注"可见保留行统计"；partial/truncated 时始终附"非完整系统总量"，不因搜索命中全部可见行而清除 partial；排序不改变统计数字。
- 空态文案：搜索/过滤后零行 → "无匹配项"；完整四表解析且零行 → "当前系统清单为空"；部分表完成且零行 → "已完成表无行，仍有未完成来源"（不冒充系统空）。

## 5. 20,000 行选择、失败与解析

### 5.1 全局 20,000 选择

- 上限 20,000 为**全局**，不是每表 20,000。
- 四表固定顺序 TCP4、TCP6、UDP4、UDP6；流式检查所有可解析行；维护"规范键最小的 20,000 行"有界集合；最后统一排序。不先占满 TCP4 就放弃后续表，不按用户搜索/排序挑选保留行。
- 相同键重复行可保留；完整表存在第 20,001 行 → truncated；恰好 20,000 且四表全部解析完成 → 不 truncated。
- 选择存在固定低键偏倚（含协议优先），**不声称代表性抽样**；相对随机/无界全量排序更可复现、更省资源。

### 5.2 表结构验证

每表检查：header、对齐、`offsetof(table, Table)`、`sizeof(row)`、numEntries、返回缓冲范围；用减法/除法验证边界防整数溢出，不接受 `4 + count * rowSize` 盲算。非法表整张拒绝，不把半个损坏结构当可信行；异常字段的行可保留并标未知，不伪造值。

### 5.3 成功/失败组合

- 四表至少一张成功：发布成功表的有界新快照；失败表与其错误码显式 partial，**不混入旧失败表**。
- 四表全部失败/未完成：Unavailable；保留上一已接受快照并标陈旧；无历史快照则无数据。
- 成功的空表也算成功来源；部分空不等于系统零。
- 身份查询不足不丢端点：属字段级未知，单列 `identity_limited`，不自动等同缺 TCP/UDP 表；内存超限若导致丢端点则 partial。

## 6. 代际、节拍、暂停与陈旧

### 6.1 节拍（#17 合同已定，#17 代码未实现）

- 复用 #17 档位 0.5/1/2/5 秒、默认 1 秒（合同已定；main 现状仅 1000ms 定时器，档位生效待 #17 交付）。只有活动页面按档位采集；非活动页停止新请求。
- 采用真实单调 tick；忙时跳过，不排队、不补欠采样。间隔是请求节拍，不是结果准时率。
- 端点清单不是速率差分，不照搬 Processes 页"第一帧 CPU 待采样"；首个有效端点帧立即可显示。

### 6.2 代际

- 每次暂停、恢复、切页离开/进入、改档位、关闭尝试都递增代际。
- 旧代际的完成/失败/投递不得改变新模型、不得清除陈旧标记。
- 进入页面/恢复不额外并发采集；等待下一 tick 或明确手动刷新。

### 6.3 暂停与手动刷新

- 暂停时自动请求停止采集。
- 手动刷新在空闲时可采**一次当前代际**，不解除暂停；忙时反馈"正在采样"，零请求积压。
- 手动刷新被接受后，旧的持久失败可被一次真实完整成功清除，但暂停标记仍在；恢复后，暂停期间迟到的结果应丢弃。

### 6.4 状态模型与显示优先

- 状态 = 结果品质（full / partial / unavailable）+ 数据年龄（从未 / 当前 / 陈旧）+ 活动（idle / collecting / paused / closing）三元组，不压成相互覆盖的单条临时消息。
- 显示优先级：关闭等待 > Unavailable/旧数据陈旧 > 本轮 partial/truncated > 暂停保留 > collecting > full 空/有行。次级状态持久并列显示：collecting/忙碌提示不能遮住陈旧或 partial；暂停不会让旧数据变新。
- full：当前代际成功（含完整空）清除旧失败/陈旧。
- partial：替换旧模型，但只清除旧帧的对应标签，保持"本轮部分、缺哪些表"，不显示"已全面恢复"。
- Unavailable：保留旧帧及其 partial 属性，附陈旧时间与失败原因。

## 7. 资源预算、协作截止、取消与关闭

以下数值为产品预算（随批准计划 v1 纳入规范）：**未做原版实测、未做实现峰值验证**；#26 按 F4/W3 复核。MiB = 1,048,576 字节。

| 项 | 数值/动作 |
|---|---|
| 单表 IP Helper 缓冲 | ≤4 MiB；四表串行，仅一份 live API 缓冲。更大表报 budget_exceeded，不无限分配 |
| 单表调用 | 1 次 NULL 探测 + 最多 3 次有缓冲调用（初次 + 最多 2 次增长重试）；四表合计最多 16 次 API 调用；仅 ERROR_INSUFFICIENT_BUFFER 重试，无 sleep/无限循环 |
| 分配增长 | newSize 必须大于原 size 且 ≤4 MiB；释放旧缓冲再分配，不保留旧副本；每表累计申请 ≤12 MiB，四表 ≤48 MiB（非 live 峰值）；无增长/非法 size 立即失败 |
| 数据预算 | 每个归一化快照 owned storage ≤16 MiB、≤20,000 行；进程名每行最多 256 UTF-16 码元，截长注明"名称显示截断"，身份查询不造值；不能只算 vector 大小而漏容量/字符串 |
| 临时工作区 | ≤4 MiB（身份缓存/选择索引/排序工作区）；API 缓冲另计；处理超限明确限制标记，实现需测所有容器容量 |
| 在途与投递 | 一个 worker；一份结果 mailbox/最多一个 UI 唤醒待消费；零请求积压；GUI 堵塞不持续发完整结果、不加 worker；唤醒消费前 busy 不解除 |
| owned 峰值 | 旧 UI 16 + 在途 16 + mailbox 16 + API 4 + 工作区 4 ≤ 56 MiB（只约束 Connections 自管数据，不含 Qt/线程/Windows 内部内存或进程 RSS 保证；移动共享不制造额外快照副本） |
| 协作截止 | 整轮从启动计单调 2,000 ms；API 前后、每 256 行、每次身份查询前后检查。是"不再启动下一工作"的软截止，不是同步 API 两秒内返回保证 |
| 身份查询 | ≤20,000 个不同 PID，每 PID 前后各至多一次；无增长重试；超预算/截止剩余身份未知，不阻塞清单发布；句柄按作用域全部释放 |
| 关闭等待 | 2,000 ms 协调等待上限；迟缓 API 不能取消，超时拒绝本次关闭/延后，保留 worker 与 owner 所有权；不强杀、不 detach 销毁 |

- 取消标记只在 API 调用边界/解析/查询边界起作用；不使用 `TerminateThread`，不承诺 `CancelSynchronousIo` 能取消这些同步 API。
- 过截止的单次调用返回后停止新增工作：本轮已有成功表 → partial(deadline)，否则 Unavailable；暂停/切页/关闭的旧代际结果一律丢弃而非发布 partial。资源在 API 实际返回和线程退出后释放。
- 永久挂起时保留一条在途线程/资源并显示"仍在等待，未安全退出"——这是已知关闭可用性限制，不伪报完成。
- UI 关闭协调不在 GUI 线程连续阻塞 2 秒：用现有事件循环分阶段等待完成/确认退出，期间按钮禁重入但窗口保持响应。超时保留页面 owner，可重试关闭；取消关闭不重启第二 worker，旧代际不能回填。
- 完成通知、结果消费、线程退出是三个不同事件；只有结果消费且线程退出后才允许下一次采样。现有 SamplingWorker 模式可借鉴，但没有本节的资源账本/可取消保证；#8 不改它，#26 不直接照搬其收束语义。

## 8. 合成样例与确定期望（纯合成，非实测）

下表六行属于同一完整合成快照；A=(PID101, creation_tick11)，B=(PID202, 22)。端口/身份仅 fixture 值。

| 行 | 协议/本地 | 远端/状态 | Owner | Exposure | Public |
|---|---|---|---|---|---|
| a | TCP4 127.0.0.1:80 | —/LISTEN | A | 回环端点 | false |
| b | TCP4 0.0.0.0:8080 | —/LISTEN | A | 通配绑定 | true |
| c | TCP6 [fe80::1%7]:443 | —/LISTEN | B | 私有/链路本地/共享范围 | true |
| d | TCP4 10.0.0.2:5000 | 8.8.8.8:443/ESTABLISHED | PID303，身份拒绝 | 其他单播地址 | false |
| e | UDP [::]:5353 | —/— | PID0，未知 | 通配绑定 | 不适用 |
| f | UDP [::1]:9 | —/— | B | 回环端点 | 不适用 |

- All 无搜索：R=6, C=1, L=3, P=2, U=2, K=2, X=2, Y=0。
- Connected：R=1, C=1, L=0, P=0, U=0, K=0, X=1。
- Listening：R=3, L=3, P=2, K=2, X=0。
- Public：仅 b/c，R=2, L=2, P=2, K=2, X=0。
- UDP：仅 e/f，R=2, C=0, L=0, P=0, U=2, K=1, X=1。
- All 搜索 `443`：命中 c/d，R=2, C=1, L=1, P=1, K=1, X=1。搜索 `NoMatch`：R=0，显示"无匹配项"（不是系统空）；大小写折叠与普通字符子串，无正则效果。
- 追加行 `TCP6 [fe80::1%0]:443`（LISTEN）：LocalRange 且 scope 未知，Public=true；详情明确 zone 未知，不凭文本去关联网卡。
- 追加非法本地监听行：Public=unknown，Y+1，不计入 P。
- UDP 通配行（如 e）不得计入 L/P。
- 排序检查：端口升序 9 < 80 < 443 < 5000 < 5353 < 8080；PID 升序 0 < 101 < 202 < 303（未知身份不改变可用 PID 数值）。
- 所有 scope/端口处理必须用原始编码 fixture 验证，不能只检查已格式化文本。

## 9. 勘误映射与历史证据（不覆写历史）

历史六文件按固定 git 对象（HEAD `86da6ee0…`）原字节保留：候选合同 `issue-8-connections-contract.md`（SHA-256 `fdfa3ddb6febc31b8c99728bcddc0424e935eee46a54e9bd2b79fc14dd3bc46c`）、`issue-8-review.md`、`issue-8-session-handoff.md`、`issue-8-pe-import-parse.py`、`issue-8-u16scan.py`、`issue-8-u16scan-output.txt`。以下勘误按"读历史时以 v2 表述为准"生效，不修改历史原件。

| # | 来源位置 | 影响 | v2 替代表述/措施 |
|---|---|---|---|
| 1 | 候选合同 L15"被查看"处存在乱码替换符（历史文件原样保留，本行不复制乱码字符） | 乱码损害范围解释 | 本机作为被查看的监听服务端（静态字符串线索） |
| 2 | 候选合同 L39/L44/L45/L58"已归属" | E3（v1.0.1）不能证明 v1.1.0 组件归属 | v1.1.0 字符串存在的历史记录；页面关联推断，xref 未核验 |
| 3 | 候选合同 L35/L88 导入排除性与"本体不含客户端" | 静态缺导入无法排除动态加载/其他客户端路径 | 证据指向本机页和附加远程线索，不证明绝无其他逻辑；两侧均范围排除 |
| 4 | 候选合同 L74/L115"普通用户可调用" | 文档未列管理员要求不担保全部 token/系统环境 | 按非提权 OWNER_PID 方案，失败逐表处理；普通 token 成功需 #26 实测 |
| 5 | 候选合同 L96 IPC 按原版 Windows 不可用 | 字符串不是 Windows 平台能力证明 | 产品首版不提供 IPC，历史字符串只作参考 |
| 6 | 候选合同 L106 身份定义 | name 误纳入身份、头文件定位不准确 | 身份 = `src/ProcessSnapshot.h:9` 的 `(pid, creation_tick)`；API PID 不足以证明身份 |
| 7 | 候选合同 L56 与 L132 两个 Unavailable VA；Product 曾展示 L130 称不一致 | 不能贸然把其中一处纠成另一处 | 历史扫描 105..106 同时列 `0x1405811c0`（无句点）与 `0x1405812d0`（有句点）；分别注明静态变体，不称地址错误；本轮未重读原始二进制 |
| 8 | 候选合同 L147..148 "无网络交互" + UDP `sendto` 自检 | 受控 socket/回环发送也是网络实验 | 改为未来批准后的受控回环实验；UDP 仅 bind 即可检查端点，不为验收伪造远端 |
| 9 | 候选合同 L146 assert 断言 | NDEBUG 可能使 Release 无检查 | #26 行为检查显式非零退出，不靠 assert |
| 10 | early-review L52 远程属 #26 | 错归实现范围 | 保留原报告；#26 为本机实现，远程无票/无授权 |
| 11 | session-handoff L33 "技术审查闭环（最终 PASS）" | 自报不是当前固定 SHA 独立 receipt | 仅标 historical self_report；本 v2 须经新固定 SHA 独立 Review |
| 12 | session-handoff L37 "#9/#10 未开始" | 历史快照过时，非本轮待办 | 保留日期/历史属性，不重写旧票状态，不据此自动恢复 |
| 13 | 候选合同 L181/L187 Ghidra 不可用 | 仅历史环境结论 | 不声明当前 provider 不可用；本轮未检测/未配置 REA |

证据版本记录（历史记录，本轮未重新 hash 原件）：v1.1.0 原件 `Raw/Task Manager v1.1.0 - 原始文件.exe` SHA-256 `fb57e1eb00cb259d4bd4cf6bd7289097be419f3ab171ee234f46c0ac1247d5a7`（8,771,912 字节）；E3 反编译库 `docs/reverse-tutorial/evidence/func_db25e.md` subject 为 **v1.0.1**（SHA-256 `99e7565d394c1dabe40e6703a3cb5971ba5219413dbed34ca1e99c7b3d354810`），其 8037..8058 行为 UI 结构佐证，跨版本适用性未验证。#26 证明自主实现符合 v2，**不能补成原版 API→页面调用链证明**；若将来要求原版等价，另开证据合同。

## 10. 实测状态与限制声明

| 项 | 状态 |
|---|---|
| 原件/补丁件运行 | ❌ 未运行（本票禁止） |
| 网络实验（抓包/扫描/回环 socket） | ❌ 未执行 |
| GUI/功能测试 | ❌ 未执行；文档行为不冒充应用测试 PASS |
| 预算峰值验证（4/48/56 MiB、16 API 调用、2,000ms 截止） | ❌ 未实现未测，#26 F4/W3 复核 |
| 非提权 token 全路径 | ❌ 未实测（勘误 #4） |
| 20,000 行截断、IPv6 全状态 | ❌ 未实测 |
| 原版 API→页面调用链 | ❌ 未核验（xref 未做；勘误 #2/#3） |
| REA/provider 环境 | 本轮未检测/未配置（勘误 #13） |

## 11. 未来 #26 验收矩阵（引用合同，本轮不运行）

未来 #26 计划必须创建并注册三个检查目标：`connections_contract_checks`（纯合成解析/分类/过滤/选择/预算）、`connections_lifecycle_checks`（Qt 事件循环+注入 API，生产路径代际/队列/关闭）、`connections_loopback_checks`（Windows 批准后自建受控回环 socket）。当前 CMake 没有这些目标，#8 不加代码。

| 检查 | 可观察输入 → 结果 | 权威/门槛 |
|---|---|---|
| F1 | IPv4/6 字节编码、ntohs/ntohl、scope 0/7、mapped、非法长度、计数溢出、未知 state | 纯 fixture；值与 §2/§3 一致、非法表拒绝；Debug/Release 显式 check 返回非零 |
| F2 | §8 六行及各过滤/搜索/排序；私网/通配/链路本地/Public、UDP 只发送绑定语义 | 纯 fixture 数字逐项一致；不额外过滤组/不正则/不公网断言 |
| F3 | 四表打乱顺序、19,999/20,000/20,001、同键重复、TCP4 占满且 TCP6 仍被检查/标注覆盖，或同表后出现更小键、损坏一表/全部失败/部分空 | 规范最小键选择可重复；仅超限 truncated；不混旧表、不伪系统零 |
| F4 | NULL 探测/缓冲增长三次/第四次需求/4 MiB+1/不增长/分配失败；注入单调时间与取消 | ≤16 个 API 调用；预算超限明确；截止后无下一调用；同步调用延迟超过 2s 不宣称已取消 |
| F5 | 20,000 身份、PID 复用/退出/拒绝/名称失败、前后身份变化、缓存超预算 | 无旧名误挂；K/X/Y 正确；限制写实；句柄均释放，无危险目标 |
| F6 | 100 次 busy 刷新、GUI 暂不消费、快速暂停→恢复、暂停手动、改档/切页、旧成功/失败迟到 | 最大 worker 1/mailbox 1/唤醒 1/请求积压 0；旧代际不改模型/不清陈旧 |
| F7 | 慢 API 在途关闭、2s 后仍未退出、晚返回、重试关闭、重复 close | UI 仍响应；第一次不销毁 owner、不报完成；实际线程退出后才能析构；无 TerminateThread/detach |
| F8 | full→fail→collecting→partial→full 空与 paused 并存 | 持久陈旧不被忙消息覆盖；partial 不冒充全面恢复；full 空真实清错 |
| W1 | 批准后自建 TCP4/6 回环 listen+受控连接；UDP4/6 bind 无需 sendto | 当前 PID/端口/状态与系统工具对照；IPv6 不可用明确未测，不 skip 成 PASS |
| W2 | 四档/暂停/手动/搜索/关闭真实 UI，普通非提权 token，连接消失与进程退出 | 人工 UI/实机记录 Windows/SDK/Qt 版本、运行命令、结果与场景限制；不做公网/原厂实验 |
| W3 | owned 分配计数峰值及真实 RSS/UI 延迟 | 56 MiB 只约束 owned 数据；API 内部/Qt/RSS 另行实测报告，不拿理论代替；真实 >20,000 socket 实验未授权 |

未来 #26 的构建与验证命令（在其批准计划落实环境后执行；loopback 组需独立受控回环实验批准，不能默认运行）：

```powershell
cmake --build ./build --config Debug --target connections_contract_checks connections_lifecycle_checks connections_loopback_checks
ctest --test-dir ./build -C Debug --output-on-failure -R '^connections_(contract|lifecycle)_checks$'
cmake --build ./build --config Release --target connections_contract_checks connections_lifecycle_checks connections_loopback_checks
ctest --test-dir ./build -C Release --output-on-failure -R '^connections_(contract|lifecycle)_checks$'
ctest --test-dir ./build -C Debug --output-on-failure -R '^connections_loopback_checks$'
ctest --test-dir ./build -C Release --output-on-failure -R '^connections_loopback_checks$'
```

期望每组实际发现目标并退出 0；"No tests found" 是失败不是通过；测试源码不得仅 assert。既有回归至少 `process_checks|sampling_recovery_checks|close_lifecycle_checks|stale_persistence_checks`，与 #17 完成合同再合并。任何目标缺失/环境缺失/IPv6 未支持单列 blocked/未验证。

## 12. 维护者门槛与来源

- 本合同规则与数值经批准计划 v1 获用户批准（2026-10-28）；**该批准不是原版行为实测，也不是 #26 开工批准**。#8 收口仍需：固定 SHA 独立 Review（非作者自审、非历史 self_report）→ Product 放行 → PR/合并/回写。
- 修改验收或关键方案须新版本计划与新 SHA，重新批准并复审。

来源：
1. 批准计划 v1 及其官方技术参考（2026-10-28 WebFetch 读取，非运行证据）：GetExtendedTcpTable、GetExtendedUdpTable、MIB_TCP6ROW_OWNER_PID、MIB_UDPROW_OWNER_PID（learn.microsoft.com 四篇；两 GetExtended 文档无本合同可用的取消/timeout 参数；UDP6 明确绑定可能仅用于发送；scope/端口网络序依原文）
2. 历史六文件（固定 git 对象 HEAD `86da6ee0…`，原字节保留）
3. `src/ProcessSnapshot.h:9`（本任务树基线 `54596d2…` 实读）
4. gh 票状态（2026-10-28：#8/#26/#17 OPEN；#26 blocked_by #17/#8）
