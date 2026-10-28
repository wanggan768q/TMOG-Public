# Issue #8 Connections 最小文档收口修订计划 v1

> **执行者须知：** 后续实施按 Product 合同逐任务执行，可使用 superpowers:executing-plans；本文件不授权 Plan 派发 agent、提交或发布。所有步骤使用复选框记录。当前仅交付方案，状态 **awaiting_approval**，不是批准后的 Connections 实现计划。

**Goal：** 以新版本合同和勘误映射收口 #8，确定本机只读 Connections 的自主规则、证据边界与未来 #26 验收，不实现页面。

**Architecture：** 保留历史候选及审查原件；新增一个自包含合同 v2，内含来源分层、规范规则、样例、修订映射和验收矩阵。复用现有进程身份与单在途/代际/持久陈旧模式，具体 Connections 代码留给 #26；不新建通用服务或框架。

**Tech Stack：** Markdown、PowerShell 只读检查、Git/gh 查询；未来实现沿用 C++20、Qt Widgets、CMake、Windows IP Helper OWNER_PID 表。

## 1. 身份、授权与全局约束

- run_id=product-20261028-issue8；task_id=issue8-contract-revision-plan；attempt=1；Plan_i8_20261028_1。
- project_root=`E:/Git/TMOG-Public`；本次实查 HEAD 与只读远程 main 均为 `54596d28d96ac497b6100901dcd093e5954ef07c`。未 fetch，不假装完成集成。
- 历史树 `E:/Git/TMOG-Public-WorkTree/issue-8-connections-contract` 仅只读，HEAD=`86da6ee019a6aca2d2bc02419f5aa395b94a757f`，base=`767553af8d58ffd1842e59010cf5e3eddef447cd`。
- 候选 `doc/plans/issue-8-connections-contract.md` 日期 2026-10-27，无语义版本；最后内容提交 `04e1186077aaaedbd43f67c57be26ddf7d21b491`；SHA256=`fdfa3ddb6febc31b8c99728bcddc0424e935eee46a54e9bd2b79fc14dd3bc46c`。
- Product 转达已认可的方向：本机只读、E3仅历史参考、Public非回环监听但非公网可达、单一互斥过滤、Connected=ESTABLISHED、可见保留行统计、截断标部分、未知身份单列、远程排除。此为转达批准记录，不冒充 Plan 直接取得用户批准。
- **新细则（UDP Public、分类规则、数值、排序、保留算法、代际及关闭）全部待维护者确认**；本计划批准也不等于原版行为实测。
- 不改旧合同/历史报告、业务代码、settings、state/events；不提交/推送/合并/写 Issue；不运行原件、补丁、采集器、网络实验，不安装、不提权、不临时配置 provider。
- 禁止自动外传端点、抓包、扫描、关闭连接、结束属主、修改网络；排除远程服务/移动客户端、速率/字节、Local IPC 首版。Local IPC 是本产品范围排除，不是 Windows 没有 IPC 的平台结论。
- 计划只在主工程 `doc/plans/`；任何后续副作用由执行者重新登记 intent 并等 Product 的同 operation_id 确认。

## 2. 依赖与可修改路径

2026-10-28 本次 gh：#8/#26/#17 均 OPEN；#8 comments=[]、原生 blocked_by=[]；#26 原生 blocked_by 为 #17/#8。#17 档位合同为 0.5/1/2/5 秒，默认 1 秒；main 代码目前只有 1000ms 定时器，**不能称 #17 已实现**。#8 文档收口不依赖 #17 代码完成；#26 必须等两票及其合同/人工门槛完成，并得到明确开工指令。

| 阶段 | 允许路径 | 说明 |
|---|---|---|
| 本 Plan | 本文件；`.claude/workflow/product-20261028-issue8/issue8-contract-revision-plan/plan-1.md` | 仅新文件，已独立握手 |
| 批准后文档任务（尚未派发） | 新任务树 `doc/plans/issue-8-connections-contract-v2.md`；同步本批准计划的同名文件 | 只新增；v2包含勘误映射，不拆额外勘误文档 |
| 固定 SHA 审查 | Product 指定的新 Review 报告路径 | 只读代码/合同；不覆写 early-review 或旧报告 |

历史证据若不在新 main：只把三份历史 md（候选/review/session-handoff）及 E1/E2 两脚本与扫描文本从固定历史 SHA 按原路径、原字节同步进新任务树并入提交，前提是 Product 逐文件批准新增路径/摘要；若有同路径冲突则停，不覆盖。现有主工程 `docs/reverse-tutorial/evidence/func_db25e.md` 不修改。不 cherry-pick 整旧分支，不接管旧 worktree。所有业务路径 `src/`、`tests/`、`CMakeLists.txt`、`Raw/` 在本次文档任务只读。

## 3. 方案比较与推荐

1. **推荐：新合同 v2 + 内嵌勘误映射**。保留原证据与争议，一个新文件定义当前规范；少量同步原字节证据，独立审查可复现。代价是读者须遵守 v2优先、历史不作当前规范。
2. 原位修改候选。文件少，但历史已引用摘要和 early-review 不再直接对应，易把旧 PASS 搬到新版；不推荐，本合同也未授权覆盖。
3. 补当前原版动态/调用点证据后再定规则。可提高原版归属权威，但需环境与实验另授权，不能决定自主资源策略；不作为本轮关闭前提，不执行。

选择1只解决 #8 的合同交付；#26 UI/资源真机效果仍未测。无视觉比较问题，不开视觉 companion。

## 4. v2 必须包含的确定规范（自主设计建议，待批准）

### 4.1 数据与身份

- 四张来源表：TCP4/TCP6 使用 `GetExtendedTcpTable(AF_INET/AF_INET6, TCP_TABLE_OWNER_PID_ALL)`；UDP4/UDP6 使用 `GetExtendedUdpTable(..., UDP_TABLE_OWNER_PID)`；`Reserved=0`，`bOrder=FALSE`，由本程序决定稳定选择和排序。四表依次采集，不是同一瞬间原子快照；显示采集开始/结束时间、完成表集合。
- UI 列：协议、本地地址、本地端口、远程地址、远程端口、TCP状态、PID、进程名、身份可用性、Exposure。UDP显示 `UDP`，详情另有 IPv4/IPv6；UDP状态/远程和 TCP LISTEN 远程均为 `—`。ESTAB显示 `ESTABLISHED`；其他合法 TCP 状态保留官方值（1..12），未知整数显示 `UNKNOWN(n)`，不归Connected。
- 数值端口按 `ntohs` 解码，IPv6 scope按引用官方结构文档 `ntohl` 解码，地址保留网络序字节；实现/实机若发现 SDK 与运行结果差异，记录并重新审查，不能隐式修正合同。IPv6文本 `[fe80::1%7]:8080`，scope非零必须显示十进制 zone；scope=0 的链路本地写“scope未知”，不凭适配器名猜。
- `ProcessIdentity` 实际定义在 `src/ProcessSnapshot.h:9`，是 `(pid,creation_tick)`，不是 name参与身份，也不是旧合同所写定义于 ProcessSampler.h。API只有PID，不能直接造 creation_tick。
- 名称仅显示本轮成功查询；名称失败但创建身份成功仍可计可信身份，名显示不可用。身份需采表前后核对同PID创建时间一致；无前置身份、退出、前后变化、PID=0、拒绝、预算耗尽均显示明确原因，不拼接旧缓存名称。表与身份查询之间仍有竞态，不能承诺 socket 到创建身份的原子证明；不提供本页危险操作。将来导航到进程须当时重新验证身份，不以PID单独导航。
- 未知PID仍显示API返回数值；PID=0显示“PID 0／身份未知”，不武断命名系统。未知身份**行数**独立统计，不凭PID去重成真实进程数。

### 4.2 地址类别、Exposure与Public

分类是本产品保守地址规则，不依赖DNS、路由探测、适配器/防火墙扫描或在线特殊地址库；分类不代表连接方向、风险、可达性或唯一服务。

按下列优先级，分类对象先验格式与scope合法性：

1. 非法/缺地址、IPv4携带zone、IPv6 mapped携带非零zone → Unknown；LISTEN/UDP所需本地地址不合法则Public不确定。
2. IPv4-mapped IPv6 `::ffff:a.b.c.d` 仅**分类**规范化为IPv4，显示/协议族不变。
3. 未指定 `0.0.0.0`/`::`：仅 TCP LISTEN 或 UDP绑定端点作 Wildcard；非LISTEN远端未指定 → Unknown。
4. Loopback：IPv4 `127.0.0.0/8`、IPv6 `::1/128`。
5. LocalRange：IPv4 `10/8`、`172.16/12`、`192.168/16`、`169.254/16`、共享地址 `100.64/10`；IPv6 `fc00::/7`、`fe80::/10`。显示“私有/链路本地/共享范围”；scope缺失单列，不改成Global。
6. 保守 Unknown：IPv4 `0/8`余部、`192.0.0/24`、`192.0.2/24`、`198.51.100/24`、`203.0.113/24`、`198.18/15`、`224/4`、`240/4`；IPv6 `ff00::/8`、`2001:db8::/32`、`2001::/23`，及不属于 `2000::/3` 的余部。该固定表不宣称是完整IANA分类；特殊地址可能保守未分类。
7. 其余IPv4单播/IPv6 `2000::/3`候选 → ExternalCandidate（“其他单播地址”，不是已证全球可达）。

Exposure：TCP LISTEN/UDP绑定按本地地址分类；TCP非LISTEN按远端分类。非LISTEN“回环端点”不写“该socket限制为本机软件”，因为远端类别不能证明绑定范围。通配说明“匹配接口范围；防火墙/路由/NAT仍影响可达性”。保留五个主显示类别：回环端点、通配绑定、私有/链路本地/共享范围、其他单播地址、不可判定。

**Public真值建议：** 首版 `Public listeners` 明确显示为“Public（TCP非回环监听）”，仅 TCP state=LISTEN 且本地类别为 Wildcard/LocalRange/ExternalCandidate 时为true；Loopback为false；Unknown为unknown，不混入Public结果，单列“监听范围未知行”。私网/链路本地监听仍是Public=true，**不等于公网可达**。

**UDP不加入Listening/Public计数与过滤**。官方UDP6文档明确绑定行可能只用于发送，没有接收意图，不能用绑定证明监听行为；所有UDP仍归UDP过滤/总端点行，可显示本地绑定Exposure。UDP是否将来提供“非回环绑定”单独统计需另批准，首版不加第六过滤。

### 4.3 单一过滤、搜索、排序、统计

- 只有一组互斥模式，默认All：All=所有有效保留行；Connected=TCP ESTAB；Listening=TCP LISTEN；Public=上述true；UDP=UDP4/6。切换替换旧模式，不与历史第二radio组相交。
- 搜索在过滤后执行：trim后的单一字符串，按Unicode大小写折叠的普通子串OR匹配进程名、十进制PID、协议/族、规范本地/远端地址文本、十进制端口。空字符串全匹配；不正则、不DNS；状态/Exposure/错误文案不搜索。输入最多256 UTF-16码元，超限拒绝并反馈，不截断后静默改变查询。
- 排序在选行上限后执行；不改变哪些行入选。PID/端口数值；协议按 TCP4/TCP6/UDP4/UDP6，地址按族+原始字节+scope，状态按原生数值，文本按大小写折叠后原字符串。缺值两方向始终最后；相等用规范行键升序兜底，不靠API返回顺序。
- 规范行键：协议族顺序、local地址字节、local scope、local port、remote是否存在、remote地址字节/scope/port、TCP state、API PID；相同行保留重复，不宣称socket唯一ID；同键详情不确定时清选择，不凭行号保持身份。
- scope数字只对**当前可见保留行**：端点行总数R（含UDP）、Connected数C、TCP监听L、Public数P、UDP数U、可信不同 `(pid,creation_tick)` 数K、未知身份行X、监听范围未知行Y；L与U不相加成“连接数”。搜索/过滤零行写“无匹配项”；完整四表零行写“当前系统清单为空”；部分零行写“已完成表无行，仍有未完成来源”，不冒充系统空。
- 标“可见保留行统计”；partial/truncated始终附“非完整系统总量”，不因搜索匹配全部而清partial；排序不改变数字。

### 4.4 20,000行选择、失败与解析

- 全局上限20,000，不是每表20,000。四表固定顺序 TCP4、TCP6、UDP4、UDP6，流式检查所有可解析行，维护规范键最小20,000的有界集合，最后统一排序；不先占满TCP4就放弃后续表，不按用户搜索/排序挑保留行。
- 可保留相同键重复行；完整表存在第20,001行即truncated；刚好20,000且全部四表解析完成不truncated。选择有固定低键偏倚（含协议优先），不声称代表性抽样；比随机/无界全量排序更可复现且更少资源。
- 每表检查 header、alignment、`offsetof(table,table)`、`sizeof(row)`、numEntries及返回缓冲范围；用减法/除法验证边界防整数溢出，不接受 `4+count*rowSize` 盲算。非法表整张拒绝，不将半个损坏结构作可信行。异常字段的行可保留标未知，不伪造值。
- 四表至少一张成功：本轮发布成功表的有界新快照，失败表及错误码显式partial，**不混旧失败表**。四表均失败/未完成：Unavailable，保留上一已接受快照并标陈旧；无历史则无数据。成功空表也算成功来源，但部分空不等于系统零。
- 身份查询不足不丢端点，属字段级未知，单列identity_limited，不自动等同缺TCP/UDP表；内存超限若导致丢端点则partial。

### 4.5 资源、重试、协作截止、取消与关闭

以下均为**建议产品预算，未批准/未原版实测/未实现峰值验证**。MiB=1,048,576字节。

| 项 | 数值/动作 | 依据与取舍 |
|---|---|---|
| 单表IP Helper缓冲 | <=4 MiB；四表串行，仅一份live API缓冲 | 足以容纳远超20,000的典型OWNER_PID行，但非所有系统担保；更大表报budget_exceeded而非无限分配 |
| 单表调用 | 1次NULL探测+最多3次有缓冲调用（初次+最多2次增长重试） | 最多16次四表API调用；仅ERROR_INSUFFICIENT_BUFFER重试，无sleep/无限循环 |
| 分配增长 | newSize必须大于原size且<=4MiB；释放旧缓冲再分配，不保留旧副本 | 每表累计申请量<=12MiB，四表<=48MiB（非live峰值）；无增长/非法size立即fail |
| 数据预算 | 每个归一化快照owned storage<=16MiB，<=20,000行；名字每行最多256 UTF-16码元 | 字符串截长注明“名称显示截断”，身份查询不造值；不能只算vector大小而漏容量/字符串 |
| 临时工作区 | <=4MiB，含身份缓存/选择索引/排序工作区；API缓冲另计 | 处理超限明确限制标记；实现需测所有容器容量 |
| 在途与投递 | 一个worker；一份结果mailbox/最多一个UI唤醒待消费，零请求积压 | GUI堵塞不持续发完整结果或加worker；唤醒消费前busy不解除 |
| 数据owned峰值 | 旧UI16+在途16+mailbox16+API4+工作区4<=56MiB | 上限针对Connections自管数据，非Qt/线程/Windows内部内存或整个进程RSS保证；移动共享不制造额外快照副本 |
| 协作截止 | 整轮从启动计单调2,000ms；API前后、每256行、每次身份查询前后检查 | 是“不再启动下一工作”的软截止；不是同步API两秒内返回保证 |
| 身份查询 | <=20,000个不同PID，每PID前后各至多一次；无增长重试 | 超预算/截止剩余身份未知，不阻塞清单发布；全部句柄按作用域释放 |
| 关闭等待 | 2,000ms协调等待上限 | 迟缓API不能取消；超时拒绝本次关闭/延后，保留worker及owner所有权；不强杀/不detach销毁 |

取消标记只在API调用边界/解析/查询边界起作用；不使用 `TerminateThread`，不承诺 `CancelSynchronousIo` 能取消这些API。过截止的单次调用返回后停止新增工作：若本轮已有成功表则partial（deadline），否则Unavailable；暂停/切页/关闭的旧代际结果一律丢弃而非发布partial。资源在API实际返回和线程退出后释放。永久挂起时保留一条在途线程/资源并显示“仍在等待，未安全退出”，这是已知关闭可用性限制，不伪报完成。

UI关闭协调不能在GUI线程连续阻塞等待2秒；用现有事件循环分阶段等完成/确认退出，期间按钮禁重入但窗口保持响应。超时保留页面owner，可重试关闭；取消关闭不重启第二worker，旧代际不能回填。完成通知、结果消费、线程退出是三个不同事件；只有结果消费且线程退出后才允许下一次采样。SamplingWorker现有模式可借鉴，但没有上述Connections资源账本/可取消保证；#8不改它。

### 4.6 #17节拍、暂停、代际与持久状态

- 复用已批准的#17档位0.5/1/2/5秒、默认1秒；只有活动页面按档位采，非活动页停止新请求。采用真实单调tick，忙时跳过，不排队、不补欠采样；间隔是请求节拍不是结果准时率。
- 每次暂停、恢复、切页离开/进入、改档位、关闭尝试都递增代际；旧完成/失败/投递不得改变新模型或清陈旧。进入页/恢复不额外并发，等下一tick或明确手动刷新。
- 暂停时自动请求停止；手动刷新空闲可采**一次当前代际**，不解除暂停；忙时给“正在采样”反馈，零积压。手动刷新接受后旧持久失败可被真实完整成功清除，但暂停标记仍在；恢复后暂停期结果若迟到应丢弃。
- 端点清单不是速率差分，不照搬Processes“第一帧CPU待采样”；首个有效端点帧立即可显示。
- 状态由结果品质（full/partial/unavailable）+数据年龄（从未/当前/陈旧）+活动（idle/collecting/paused/closing）组成，不压成相互覆盖的一条临时消息。
- 显示优先：关闭等待 > Unavailable/旧数据陈旧 > 本轮partial/truncated > 暂停保留 > collecting > full空/有行。次级状态持久并列：collecting/忙碌提示不能遮住陈旧或partial；暂停不会让旧数据变新。
- full当前代际成功（包括完整空）清旧失败/陈旧；partial替换旧模型但只清旧帧的标签，保持“本轮部分、缺哪些表”，不能显示“已全面恢复”；Unavailable保留旧帧及其partial属性，附陈旧时间/失败原因。

### 4.7 文档样例与确定期望（纯合成，非实测）

下表六行属于同一完整合成快照；A=(PID101,creation_tick11)，B=(PID202,22)。端口/身份仅fixture值。

| 行 | 协议/本地 | 远端/状态 | Owner | Exposure | Public |
|---|---|---|---|---|---|
| a | TCP4 127.0.0.1:80 | —/LISTEN | A | 回环端点 | false |
| b | TCP4 0.0.0.0:8080 | —/LISTEN | A | 通配绑定 | true |
| c | TCP6 [fe80::1%7]:443 | —/LISTEN | B | 私有/链路本地/共享范围 | true |
| d | TCP4 10.0.0.2:5000 | 8.8.8.8:443/ESTABLISHED | PID303，身份拒绝 | 其他单播地址 | false |
| e | UDP [::]:5353 | —/— | PID0，未知 | 通配绑定 | 不适用 |
| f | UDP [::1]:9 | —/— | B | 回环端点 | 不适用 |

All无搜索：R=6,C=1,L=3,P=2,U=2,K=2,X=2,Y=0。
Connected：R=1,C=1,L=0,P=0,U=0,K=0,X=1。
Listening：R=3,L=3,P=2,K=2,X=0。
Public：仅b/c，R=2,L=2,P=2,K=2,X=0。
UDP：仅e/f，R=2,C=0,L=0,P=0,U=2,K=1,X=1。
All搜索 `443`：c/d，R=2,C=1,L=1,P=1,K=1,X=1。搜索 `NoMatch`：R=0，“无匹配项”，不是系统空；大小写折叠及普通字符子串无正则效果。
新增 TCP6 `[fe80::1%0]:443`：LocalRange且scope未知，Public=true；detail明确zone未知，不能凭文本去关联网卡。新增非法本地监听：Public=unknown，Y+1，不计P。UDP通配不得计L/P。
端口升序9<80<443<5000<5353<8080；PID升序0<101<202<303（未知身份不改变可用PID数值）。所有scope端口处理须用原始编码fixture验证，不能仅检查已格式化文本。

## 5. 勘误映射（追加，不覆写历史）

| 来源位置 | 影响 | v2替代表述/措施 |
|---|---|---|
| 旧合同15“被���” | 乱码损害范围解释 | 新合同写“本机作为被查看的监听服务端（静态字符串线索）” |
| 旧合同39/44/45/58“已归属” | E3 v1.0.1不能证明v1.1.0组件归属 | 全部改为“v1.1.0字符串存在的历史记录；页面关联推断，xref未核验” |
| 旧合同35/88导入排除性及本体不含客户端 | 静态缺导入无法排除动态加载/其他客户端路径 | “证据指向本机页和附加远程线索，不证明绝无其他逻辑；两侧均范围排除” |
| 旧合同74/115普通用户可调用 | 文档未列管理员要求不担保全部token/系统环境 | “按非提权OWNER_PID方案，失败逐表处理；普通token成功需#26实测” |
| 旧合同96 IPC按原版Windows不可用 | 字符串不是Windows平台能力证明 | 产品首版不提供IPC，历史字符串只作参考 |
| 旧合同106身份定义 | name误纳入、头文件定位不准确 | 实际ProcessSnapshot.h的pid+creation_tick，API PID不足以证明身份 |
| 旧合同56/132两个Unavailable VA；Product展示130称不一致 | 不能贸然把其中一处纠成另一处 | 历史扫描105..106同时列0x1405811c0无句点和0x1405812d0有句点；分别注明静态变体，不称地址错误；Plan未重读原始二进制 |
| 旧合同147..148“无网络交互”+sendto | 受控socket/回环发送也是网络实验 | 改为未来批准后受控回环实验；UDP仅bind即可检查端点，不为验收伪造远端 |
| 旧合同146断言 | NDEBUG可能使Release无检查 | #26行为check显式非零退出，不靠assert |
| early-review52远程属#26 | 错归实现范围 | 保留原报告，v2勘误明确#26本机，远程无票/无授权 |
| session-handoff33最终PASS | 自报不是当前固定SHA独立receipt | 仅标historical self_report；新v2必须新固定SHA独立Review |
| session-handoff37 #9/#10未开始 | 历史快照过时，非本轮待办 | 保留日期/历史属性，不重写旧票状态，不据此自动恢复 |
| 旧合同181/187 Ghidra不可用 | 仅历史环境结论 | 不声明当前provider不可用，本轮未检测/未配置REA |

E3 文件头与8037..8058本次读取确为v1.0.1（subject SHA `99e7565d394c1dabe40e6703a3cb5971ba5219413dbed34ca1e99c7b3d354810`）；当前v1.1.0原件SHA历史记录 `fb57e1eb00cb259d4bd4cf6bd7289097be419f3ab171ee234f46c0ac1247d5a7`，本轮未重新hash原件。#26证明自主实现符合v2，**不能补成原版API→页面调用链证明**。若用户后来要求原版等价，另开证据合同。

## 6. 实施顺序与本次 #8 可观察验收

### Task 1：维护者确认方案与规则（人工门槛）
- [ ] Product 展示本计划摘要/文件SHA，逐项确认§4 UDP/地址/预算/软截止/关闭限制及§2新增文件范围。
- [ ] 用户批准记录绑定本文件v1与SHA，标明不是原版实测或#26开工批准。拒绝任一关键规则则Plan另写v2计划，不改已引用v1。
- [ ] 明确历史任务树不接管；Product从新fetch的origin/main创建文档任务树，技能/CodeGraph/报告按团队合同预检。

### Task 2：最小文档交付（批准后 Dev，不是现在）
- [ ] 只新增合同 `doc/plans/issue-8-connections-contract-v2.md`，自包含§4全部确定规则/数值与样例，附§5映射、来源和实测分层。
- [ ] 必需历史资料按固定SHA原字节同步（Product批准后），不运行原脚本、不改Raw、不改业务代码，不顺带修主交接或#9/#10资料。
- [ ] 执行下面只读检查，逐条捕获退出码/输出；文档行为fixture不冒充应用行为测试。
- [ ] Dev在任务分支正常限定文件提交（不main、不amend、不跳hooks），记录新HEAD。提交/产物仍先单独握手。

### Task 3：独立Review/集成/收口（人工与发布门槛）
- [ ] Review绑定批准计划SHA、合同v2SHA和最终HEAD；独立逐行校验样例/真值表、数值资源上界、取消承诺、勘误、历史证据引用及范围diff。早期PASS不复用。
- [ ] 集成核对最新main：只新增文档时记录业务diff为空与引用仍有效；若main改了身份/暂停/资源生命周期，重新CodeGraph核对并修文档、复审新SHA。不能凭“无冲突”免核查。
- [ ] #8四项验收：来源/原版与自主区分；字段权限刷新覆盖错误均确定；维护者确认；自包含样例与验收合同。四项都完备才建议accepted；#26行为测试未执行不妨碍纯合同票，但需明确不是功能PASS。
- [ ] Product放行固定SHA后才允许IssueWriter发布/合并/回写，按团队合同核查head、CI、人工记录、PR查重；本计划不执行这些操作。不满足则#8保持OPEN/blocked，不以继续调研关闭。
- [ ] #8关闭不启动#26；仍核查#17原生依赖和用户开工指令。

### 当前与后续文档检查命令

以下PowerShell在各明确目录执行；使用变量时由Product填入**实际登记且Git核实的新任务树**，不是可执行的占位路径。每条失败立即停。当前Plan只对自己的允许输出执行摘要/只读检查；v2命令在文件真实存在并获后续合同后执行。

```powershell
# 当前身份：本轮已执行
 git -C E:/Git/TMOG-Public rev-parse HEAD
 git -C E:/Git/TMOG-Public-WorkTree/issue-8-connections-contract rev-parse HEAD
 Get-FileHash -Algorithm SHA256 E:/Git/TMOG-Public-WorkTree/issue-8-connections-contract/doc/plans/issue-8-connections-contract.md
 gh issue view 8 --repo wanggan768q/TMOG-Public --json number,title,body,comments,state,url
 gh api repos/wanggan768q/TMOG-Public/issues/26/dependencies/blocked_by --jq '.[] | {number,state}'

# 后续文档任务的cwd由Product合同指定：精确相对路径
 git rev-parse HEAD
 git diff --check
 git diff --name-status origin/main...HEAD
 Get-FileHash -Algorithm SHA256 ./doc/plans/issue-8-connections-contract-v2.md
 git diff origin/main...HEAD -- src tests CMakeLists.txt Raw
```

期望：`diff --check`退出0；业务范围diff空；name-status仅合同/批准计划和批准的历史原字节新增；不将origin/main旧引用视为新fetch成功。新合同不得有U+FFFD或未定占位；专用Grep检查模式 `�|TBD|TODO|待补`（只查v2新规范，不把历史文档乱码偷偷删除），应无命中。人工逐行确认“待批准/未实测”标签不是占位。

## 7. 未来 #26 测试合同（本轮不运行，也不承诺已有目标）

未来#26计划必须创建并注册三个明确检查目标：`connections_contract_checks`（纯合成解析/分类/过滤/选择/预算）、`connections_lifecycle_checks`（Qt事件循环+注入API，生产路径代际/队列/关闭）、`connections_loopback_checks`（Windows批准后自建socket）。这是未来交付要求，当前CMake没有这些目标，本#8不加代码。

| 检查ID | 可观察输入 → 结果 | 权威/门槛 |
|---|---|---|
| F1 | IPv4/6字节编码、ntohs/ntohl、scope0/7、mapped、非法长度、计数溢出、未知state | 纯fixture；值与§4一致、非法表拒绝；Debug/Release显式check返回非零 |
| F2 | §4.7六行及各过滤/搜索/排序；私网/通配/链路本地/Public、UDP只发送绑定语义 | 纯fixture数字逐项一致，不额外过滤组/不正则/不公网断言 |
| F3 | 四表打乱顺序、19,999/20,000/20,001、同键重复、TCP4占满且TCP6仍被检查/标注覆盖，或同表后出现更小键、损坏一表/全部失败/部分空 | 规范最小键选择可重复；仅超限truncated；不混旧表、不伪系统零 |
| F4 | NULL探测/缓冲增长三次/第四次需求/4MiB+1/不增长/分配失败；注入单调时间与取消 | <=16个API调用；预算超限明确；截止后无下一调用；同步调用延迟超过2s不宣称已取消 |
| F5 | 20,000身份、PID复用/退出/拒绝/名称失败、前后身份变化、缓存超预算 | 无旧名误挂；K/X/Y正确；限制写实；句柄均释放，无危险目标 |
| F6 | 100次busy刷新、GUI暂不消费、快速暂停→恢复、暂停手动、改档/切页、旧成功/失败迟到 | 最大worker1/mailbox1/唤醒1/请求积压0；旧代际不改模型/不清陈旧 |
| F7 | 慢API在途关闭、2s后仍未退出、晚返回、重试关闭、重复close | UI仍响应；第一次不销毁owner、不报完成；实际线程退出后才能析构；无TerminateThread/detach |
| F8 | full→fail→collecting→partial→full空与paused并存 | 持久陈旧不被忙消息覆盖；partial不冒充全面恢复；full空真实清错 |
| W1 | 批准后自建TCP4/6回环listen+受控连接；UDP4/6 bind无需sendto | 当前PID/端口/状态与系统工具对照；IPv6不可用明确未测，不skip成PASS |
| W2 | 四档/暂停/手动/搜索/关闭真实UI，普通非提权token，连接消失与进程退出 | 人工UI/实机记录Windows/SDK/Qt版本、运行命令、结果与场景限制；不做公网/原厂实验 |
| W3 | owned分配计数峰值及真实RSS/UI延迟 | 56MiB只约束owned数据；API内部/Qt/RSS另报告实测不拿理论代替；真实>20,000socket实验未授权 |

未来#26在Product指定任务树已有配置/环境满足后准确验证命令：

```powershell
cmake --build ./build --config Debug --target connections_contract_checks connections_lifecycle_checks connections_loopback_checks
ctest --test-dir ./build -C Debug --output-on-failure -R '^connections_(contract|lifecycle)_checks$'
cmake --build ./build --config Release --target connections_contract_checks connections_lifecycle_checks connections_loopback_checks
ctest --test-dir ./build -C Release --output-on-failure -R '^connections_(contract|lifecycle)_checks$'
# 下面两条需要独立受控回环实验批准，不能默认运行：
ctest --test-dir ./build -C Debug --output-on-failure -R '^connections_loopback_checks$'
ctest --test-dir ./build -C Release --output-on-failure -R '^connections_loopback_checks$'
```

期望每组实际发现目标并退出0；“No tests found”是失败，不是通过；测试源码不得仅assert。环境配置命令由#26对已存在Qt/SDK/CMake配置核实后写入其批准计划，不在#8假定安装路径或自动安装。既有回归至少 `process_checks|sampling_recovery_checks|close_lifecycle_checks|stale_persistence_checks`，与新的#17完成合同再合并；原厂动态/原版链路仍未测。任何目标缺失/环境缺失/IPv6未支持单列blocked/未验证。

## 8. 来源、风险与批准待办

本轮可核对来源：主工程团队README/AGENTS/Plan角色；Product展示报告全文；历史候选/review/handoff；扫描产物105..107；E3文件头与8037..8058；gh #8/#26/#17正文和原生依赖；CodeGraph主工程 MainWindow暂停/刷新/closeEvent、SamplingWorker、ProcessSnapshot。未从报告推断原始runtime receipt已取得。

官方技术参考（2026-10-28本轮WebFetch读取，非运行证据）：
- https://learn.microsoft.com/en-us/windows/win32/api/iphlpapi/nf-iphlpapi-getextendedtcptable
- https://learn.microsoft.com/en-us/windows/win32/api/iphlpapi/nf-iphlpapi-getextendedudptable
- https://learn.microsoft.com/en-us/windows/win32/api/tcpmib/ns-tcpmib-mib_tcp6row_owner_pid
- https://learn.microsoft.com/en-us/windows/win32/api/udpmib/ns-udpmib-mib_udp6row_owner_pid

两GetExtended文档定义同步签名、缓冲大小与表类型，没有本合同可用的取消/timeout参数；不是对运行时最坏耗时的担保。UDP6明确绑定可能仅用于发送；scope/端口网络序依原文。首次iprtrmib路径404后改用官方tcpmib路径，记录失败不隐藏。

风险/取舍：固定低键选择有偏倚；4MiB API预算可能使大系统整表Unavailable；保守地址表有Unknown不覆盖全部特殊范围；PID表和身份不能原子绑定；同步API挂起导致安全关闭受阻；#17未完成可能使未来生命周期规则要重验。以上是明确支持限制，拒绝用静默降级消除。

**批准待办：** Product转达维护者确认推荐新版本文件策略与允许新增路径；§4全部自主规范及数值/已知关闭限制；#8只做文档和固定SHA独立Review；#26实验/实现仍另批准。批准后改验收或关键方案须新版本/SHA并重新验收。当前结论仅“计划交付待审批”，不称#8完成/accepted，不关闭任何Issue。
