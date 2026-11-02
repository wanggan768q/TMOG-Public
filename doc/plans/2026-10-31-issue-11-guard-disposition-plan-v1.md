# Issue #11 GE 执行偏离静态处置 Implementation Plan v1

> **For agentic workers:** **awaiting_approval**。本次仅获“授权处置 Plan”；以下处置选项、例外追认、新预算均未批准。不得使用实施技能、旧批准记录或本计划交付启动 Dev/Review、重跑、发布。由 Product 转达用户决定并签后续合同；本 Plan 交付即关闭。

**Goal：** 区分现存技术证据价值、原始证据完整性与执行授权合格性，为 Product 提供不补造历史的最小处置选项。
**Architecture：** 读取原合同、报告、ops、原始日志及现存 meta；以独立静态 JSON/bytes/hash 核对保留证据，不导入或运行历史 evidence.py。将可重建的关联与不可恢复的信息分列，保留 blocked 与全部历史材料。
**Tech Stack：** 现有文件读取工具、Python 标准库隔离模式 `-I`、只读 Git；不新增依赖、服务或采集框架。
**Spec：** `E:/Git/TMOG-Public/.workflow/parallel-plan-20261029-6-11-17/issue11-guard-coverage/disposition-plan-contract.md`；原执行合同同目录 `evidence-review-contract.md`。

## Global Constraints

- run=`parallel-plan-20261029-6-11-17`；task=`issue11-guard-disposition-plan`；attempt=1；role=plan；v1 awaiting_approval。
- 主工程 `E:/Git/TMOG-Public`；参考 WT `E:/Git/TMOG-Public-WorkTree/issue11-io-20261030`。
- 固定 H=`978b1d8e6b68a9b4c0d678043ad04bbbb8e92ce3`；base=`4361d8e9723e398bf100e506bca26626e1528e53`。
- 原批准 evidence repair v1 SHA-256=`5baa1716d59b936d4b79ef8587d34d47c42f77a2828879bf4f6a2238c9f92f59`，原批准版保留不改。
- 本次唯一写域：本新计划；主工程 `.workflow/<run>/<task>/plan-1.md`、`plan-1.ops.jsonl`、同 `plan-1` 前缀附件。不得覆盖已有文件。
- 原材料、代码、配置、索引、state/events/BOARD 只读。不构建、不运行 exe/audit/测试/历史脚本、不提交/推送/GitHub操作、不安装/改权限/删除资源。
- 原预算已耗尽；不追加 Dev/Review 或自动返工，不以诚实披露、技术参考价值或新计划自动追认旧 PASS。
- 真实 helper I/O/EOF/终止/UI/T11T、发布、安装、系统实验均不在范围；fake 不证明真实 I/O。同步操作无硬墙钟、已发不可撤回、guard-send 非原子截止限制保留。

## Review Focus

1. 唯一 ID 与“至少一对”不是同一门槛；必须包含 prepare、注释与收尾记录，不能只枚举已出现的 run ID。
2. 重复 ID 对应固定文件名可能覆盖旧 stdout/meta；receipt 保留不等于原始输出保留。
3. 晚补 intent/receipt 不能恢复当时持久化顺序；不能拿新 UTC 替换旧事件。
4. 编译失败后修脚本再跑、audit 检查口径改变，与技术结果是否符合 oracle 分开判定。
5. 现存 hash、PASS 数量、audit exit0 均不独立证明全合同；人工核对与机器严格失败门须分列。

## 1. 静态查证结果与受影响任务

路径简称：`RUN=E:/Git/TMOG-Public/.workflow/parallel-plan-20261029-6-11-17`；`ROOT=WT/build/issue11-guard-evidence-review-a1`；`R=RUN/issue11-guard-evidence-review/review-1.ops.jsonl`；`S=RUN/issue11-guard-disposition-plan/plan-1-static.json`。S 是本次静态观察，不是历史原始 receipt。

| ID | 来源与独立查证事实 | 影响与建议 | 受影响任务 |
|---|---|---|---|
| D1 | 原合同§13/25、原计划§4要求唯一 ID 各1 intent+1receipt；audit checks[1/2]改为至少一对/末 receipt；evidence.py:421–453明文如此 | 0 failures 只证明放宽后的检查，不证明原合同通过；保留 GE-Q blocked | GE-R、GE-Q |
| D2 | R 全文件静态解析241行、111 ID，**6个不唯一组**，并非只有 violations_report 的4个 run ID；另有 prepare-M2-Debug(2 intent/1receipt)、prepare-M4-Debug(3/3) | 缺失首次 prepare receipt，prepare 不被 audit contract_ids 前缀集合覆盖；不能宣布全部唯一配对 | GE-R、GE-Q |
| D3 | R:174/186/176/188 的4条 stdout hash 与当前 M4 Debug configure/build 日志不符；当前84条 run receipt 对应 meta 中7条旧 receipt 不匹配，仅有当前同名 meta。evidence.py:109–111/125使用固定 ID 文件名+wb，:160覆盖 meta | 旧失败的 raw_exit/UTC/hash仍在 R，但至少上述4次旧 stdout不再由记录路径保留；不能声称全部失败原始输出完整保留。相同 archive stdout为空且hash相同不证明旧 meta被保留 | GE-R、GE-Q |
| D4 | prepare-M2-Debug R:124 首 intent 后没有自身失败 receipt，R:131第二 intent、132成功 receipt；ge-r-scriptrev-4 R:189 receipt 在237 intent之前；ge-r-ocr-1 R:236自报晚补 receipt | 缺失/晚补是原始证据缺口，不是解析坏行；时间顺序可记录，事前持久化证据不能恢复 | GE-R、GE-Q |
| D5 | R:176/188 M4 Debug build expected0/raw1，之后重建至199 raw0；多次脚本/audit修订见 review§8、R注释 | 原合同0自动返工/失败停止未满足；脚本错误而非业务缺陷的解释不授权自行重试。是否例外追认只能由用户决定 | GE-R、GE-Q |
| D6 | 独立读取12个当前 safe日志及相应 receipt：normal双配244/0 raw0；M1 240/4、M2 240/4、M3 238/6、M4 226/18、M5 240/4 raw1；M2/M3双配W1/R1各10PASS/0FAIL。12个zip的目标cpp成员等于H，normal目标源等于H | 当前技术矩阵有实质参考价值，未发现此静态样本与报告矛盾；不等于完整来源/账本/执行合同已验收，不预设必需新测试 | GE-R技术项、GE-Q |
| D7 | audit15 checks未将所有文件实际hash、完整命名oracle、每次timeout/120s、原始meta完整性、2GiB持续采集等作为失败门；evidence.py:586–618仅生成oracle统计，未chk命名条件；:561–578只看file和directory_sample，不解析command实际输入；:480–485缺失CTest不失败 | Review自报人工更强核验须独立保留，不能升级为机器检查覆盖；如采用现存技术证据，另做限定静态核验而不是用audit0概括 | GE-R、GE-Q |
| D8 | audit在237 records快照；现存241行/111 ID，新增auditfinal及report两对；报告自报109 ID可视作早期快照而非全文件最终数。预算取每ID首 receipt(:468)，exit取末 receipt；独立累计M4 Debug全部configure/build32.140s，对比audit10.015s，均<900s | 统计快照/口径必须标注；无已证超时，但不能把首轮耗时与末轮退出拼成同一完整运行证明 | GE-R、GE-Q |

本次核对168个 R 内 stdout/stderr 文件引用，164个与当前bytes/hash一致，4个不符；不符均上述旧 M4 stdout。不是全产物hash审计。现存原计划、review报告、audit、evidence.py hash与批准/报告给值一致；WT HEAD/父提交等于固定对象，当前porcelain为空。S包含精确文件hash、行号、GC计数和失败label。

## 2. 四层结论与恢复边界

| 层 | 当前可说 | 不可说 |
|---|---|---|
| 技术矩阵 | 当前safe原始行与退出记录支持normal/M矩阵、M2/M3双向阈值对照；H目标源静态对应 | 本次运行通过、完整源码/可执行文件来源和所有断言账本已独立验收、真实I/O通过 |
| 机器证据 | 当前日志可按R行号、路径、UTC、hash、meta关联；历史失败退出仍可读 | 所有旧stdout/meta完整保留；唯一配对/即时持久化成立 |
| 执行授权 | 重试、晚补、验收规则放宽是独立的合同偏离 | 技术结果良好就使重试自动合法；披露等于授权 |
| 验收效力 | 原GE-Q blocked保留；旧PASS仅成员自报，现存素材未验收 | Plan宣布GE-R全合同PASS、发布、#11完成 |

可静态重建：每个当前文件的关联表用 `(operation_id, occurrence, R行号)` 作**派生键**，列全部事件而非改写原ID；末轮文件实际hash与末receipt/meta匹配，旧receipt标“路径当前已被覆盖/不符”。每个缺口独立标unknown，保存静态观察时间和输入hash。
不可恢复：首次prepare失败的缺失receipt、旧同名meta及上述旧stdout原始bytes、遗漏的事前intent持久化、未采集完整sample/log/send数值轨迹。hash只标识bytes，不能反推bytes或执行授权；派生表不能冒充原始receipt。其他路径是否存在等价旧备份本次未穷尽搜索，不断言全磁盘不存在；没有可核对备份时不能宣称已恢复。

## 3. 最小处置选项与推荐

| 选项 | 处理与可验收范围 | 人工门槛/代价 |
|---|---|---|
| A 暂停保留（无例外时默认） | 原blocked不变，全部材料保留，不新验证；可接受本Plan交付而非GE-R通过 | Product记录暂停；0新增验证预算，无发布 |
| **B 限定现存静态核验（推荐）** | 先获本计划批准；以本次S为基础，限定核对当前末轮文件来源、完整命名账本/公共标签映射、12配置compile command实际输入、normal库存/CTest/gates、全部时序/预算/文件hash，形成技术项逐条“支持/不支持/未知”；**不修复历史，不追认执行** | 当前授权只交付Plan，未来执行者/新增静态Review预算须明确。技术参考项可限定接受；若用户要据此给GE-R例外技术验收，必须明确追认哪些重试及豁免哪些不可恢复门槛，不能称原合同全通过 |
| C 新验证（条件触发，非本次推荐默认） | B出现关键技术项无法从现存素材核对，或用户坚持新一轮满足原门槛时，才拟新固定对象验证合同/新输出根/唯一ID/失败停止；先提出具体缺项及最小验证范围 | 需新计划、独立预算、用户批准；任何测试输出/代码修改需另批Dev和新H复审；不能回补旧历史，不保证新轮必过 |

推荐B的理由：已有当前技术素材足以支持部分结论，流程缺陷又不能靠复跑恢复。先限定静态核验避免盲目全部重做；**若用户不批准B或不愿任何例外，停在A**。本计划不要求新增验证即可交付，也不申请现在启动Review。采用B后仍可仅接受“现存技术项支持清单”、保持GE-R执行不合格；不必追认例外。

批准待办由Product一次转达：选择A/B/C；B明确是仅技术参考还是例外技术验收；后者逐项承认D2–D5不可恢复缺口/重试偏离，不降低真实I/O/发布门槛；明确未来执行者、静态预算及新输出域。C预算不能由本Plan推荐自行生效。原批准版本及历史blocked保持可追溯。

## 4. 局部DAG、路径及派发

不修改全局路线。B/C均为待批分支；下表中未来写域仅为**申请域**，不构成本会话授权。

| task_id | Issue | 角色 | depends_on | 允许修改路径 | 验收摘要 |
|---|---|---|---|---|---|
| GD-P | #11 | plan | 无 | 本新计划、RUN/issue11-guard-disposition-plan/plan-1* | 静态发现、选项、hash与报告交付；awaiting_approval |
| GD-G | #11 | product/用户决定 | GD-P | Product自身批准记录/state/events/BOARD；不改计划/成员报告 | 用户绑定v1 hash、选项、例外和预算；不授权发布 |
| GD-S | #11 | 获批处理者（Product或新独立静态Review，待批准） | GD-G | B建议全新RUN/issue11-guard-disposition-static-review/review-1*；A无新成员写域；C先另出新计划，不沿用旧ROOT | B限定现存证据逐项支持/未知和不可恢复表；A暂停；C仅按另批合同 |
| GD-Q | #11 | product | GD-S | Product自身state/events/BOARD裁定记录；成员报告只读 | 验技术支持、证据完整性、例外审批分别记账；blocked/技术限定接受分开，禁自动发布 |

```mermaid
graph LR
  P["GD-P 静态Plan交付"] --> G["GD-G 用户决定/明确预算与例外"]
  G --> S["GD-S 获批处理 A暂停/B静态/C另批"]
  S --> Q["GD-Q Product分层裁定"]
```

图采用直接文本标记、无自定义状态颜色；拓扑表为等价可访问文本，未渲染、不声称视觉验证。GD-G/Q共享Product写域已有依赖路径；其余写域不重叠。Product按共享合同统计角色占用、就绪、派发与未派发原因；待批本任务不阻塞无关前沿。Plan交付即关闭，不留会话等待批准。

## 5. 准确静态方法与验收

本次已创建的 `RUN/issue11-guard-disposition-plan/plan-1-static.py` 是一次性、明确静态范围的检查附件；无历史脚本导入，不构建，不解包执行源码，只读zip目标成员，文件引用读域限制在ROOT；JSON输出用x模式拒绝覆盖。它的完整命令为：

```powershell
python -I E:/Git/TMOG-Public/.workflow/parallel-plan-20261029-6-11-17/issue11-guard-disposition-plan/plan-1-static.py
```

**本次已经执行成功，不应重跑该命令**：输出已存在，x模式会拒绝覆盖；该命令展示实际查证方法，不是未来重试授权。可用Read核对脚本、S及引用的R行号/meta/log。未来B要复用方法须新合同指定全新脚本和输出路径，不能改本附件或借其执行历史audit。

只读固定Git命令（本次静态附件以argv数组运行，失败抛出，不从archive cwd启动）：

```powershell
git -C E:/Git/TMOG-Public-WorkTree/issue11-io-20261030 rev-parse HEAD
git -C E:/Git/TMOG-Public-WorkTree/issue11-io-20261030 rev-parse 978b1d8e6b68a9b4c0d678043ad04bbbb8e92ce3^
git -C E:/Git/TMOG-Public-WorkTree/issue11-io-20261030 status --porcelain=v1
git -C E:/Git/TMOG-Public-WorkTree/issue11-io-20261030 diff --name-status 4361d8e9723e398bf100e506bca26626e1528e53 978b1d8e6b68a9b4c0d678043ad04bbbb8e92ce3
git -C E:/Git/TMOG-Public-WorkTree/issue11-io-20261030 show '978b1d8e6b68a9b4c0d678043ad04bbbb8e92ce3:tests/io_activity_checks.cpp'
```

本Plan可观察验收：
- [ ] 原合同、新批准计划hash及GE-Q来源已核；D1–D8含证据引用、影响、建议与受影响任务。
- [ ] 四层结论、可重建/不可恢复、选项与所需新授权分列，不宣布历史PASS、不默认新测试。
- [ ] v1新文件保留旧批准版，报告摘要≤20行、完整hash、技能清单与即时ops合法唯一配对落盘。
- [ ] 仅指定写域，静态附件/报告/计划均create-only；交Product DONE后关闭，不修改全局DAG/业务文件/旧材料。

## 6. 顺序、风险与未验证项

1. GD-P已执行必读与独立静态查证；写新计划/报告，取hash、核自己的ops，通知Product。
2. GD-G用户决定；未批准采用A。B/C新增预算、豁免、写域均单独明确，不能沿用原1Review预算。
3. GD-S按批准选项处理，任何缺口记录“不支持/未知”而非调宽audit；结果未知停止，不自动返工。
4. GD-Q核输入快照、支持清单、例外批准及人工门槛；任何技术接受均限固定H和获批范围，#11不自动关闭。

风险：晚补与覆盖不可逆；同hash只是bytes一致，不是多次运行证明；现存源码/日志可被事后变化，静态hash不能担保历史；历史audit忽略缺项可产生假绿。输入hash变化就停止引用旧静态结论。不存在代码失败证据不等于代码已证明正确，不增设必改Dev。

本次未完成全源码树/全部archive与exe来源、完整oracle表达式/公共GC顺序账本、compile command实际输入、所有gate/CTest原始行、全产物hash/持续资源/timeout策略核验；Review的相关声明保留self_report。旧audit check失败历史不复跑，本次未穷尽备份；若B获批再限定核对，不假称已通过。图未渲染，未操作Orca或TeamReview。技能版本/调用与执行等级见本任务报告；所有历史报告与批准状态原文保留。
