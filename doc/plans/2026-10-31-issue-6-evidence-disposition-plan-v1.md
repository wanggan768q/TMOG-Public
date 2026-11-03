# Issue #6 现存证据只读处置 v1 Implementation Plan

> **For agentic workers:** 本版 **awaiting_approval**，仅为处置草稿；不启动执行技能、Dev、Review 或 IssueWriter。用户决定由 Product 收集；本计划交付不等于批准实施、豁免或发布。

## 摘要

- run=`parallel-plan-20261029-6-11-17`；task=`issue6-evidence-disposition-plan`；attempt=1；role=plan。
- 固定 H=`876120ea77280ed0f036aac1e323deb3a1885425`，本次 Git HEAD/status 查询 exit0，工作树无输出（干净）。
- 材料 v1-A 与全局 v4-A 原文件及批准 SHA 均一致并保留；不改业务验收或 DAG。
- 当前 Review2 报告 SHA=`c916092abd5554f9deb0c3ca970be009fa3e85b6c208de84765ce8656763197a`，与其 ops receipt 一致。先前 `c7f…` 仅为成员交付声明的转述，非本次文件实测；原因/时间 unknown，不能断言覆写。
- 实测 Dev2 ops **55 行**、Review2 ops **22 行**、Review1 ops **23 行**；配对/命令完整性缺口保留，不能重写旧 ledger。
- Review2 E/F 自报使用 `icacls`，违反继承的明确“不改 ACL/提权”；“恢复 Users:F”不证明原 ACL 恢复，也不追认执行授权 PASS。
- 本次仅保存有限目录当前 ACL；原 ACL/权限变更命令及完整时序/恢复等价性仍 unknown，未进行权限修改或新实验。
- 技术修复结论为有限参考；机器证据不完整、执行授权存在偏离，材料任务整体保持 **blocked / not accepted**。
- 推荐批准“封存参考、保留阻塞、停止自动修补循环”；无新 Dev/Review 预算，无重测/发布/清理授权。

**Goal：** 固定现存可观察证据，明确其支持范围及不可恢复缺口，供 Product/用户作最小处置决定。
**Architecture：** 只读合同、报告/ops、现存输出和限定当前 ACL，分开技术、机器证据、执行授权、验收效力；新证据只描述本次读取，不替代历史运行证据。
**Tech Stack：** Python 标准库（`python -I`）、只读 Git、PowerShell `Get-Acl`；不安装依赖、不构建或执行目标脚本。
**Spec：** `.workflow/parallel-plan-20261029-6-11-17/issue6-evidence-disposition-contract.md`；共享 `.claude/agent-team/README.md`；原批准材料计划。

## 1. 范围与硬边界

主工程 R=`E:/Git/TMOG-Public`；W=`E:/Git/TMOG-Public-WorkTree/issue6-integration-20261029`；本 run D=`R/.workflow/parallel-plan-20261029-6-11-17`；本人输出 O=`D/issue6-evidence-disposition-plan`。

- 仅新建本计划和 O 内本人报告/ops/必要附件。旧报告/ops、state/events/BOARD、其他票、DAG、settings、代码均不写。
- 用户在 state 的 `evidence_disposition_decision`，UTC=`2026-10-31T10:46:02.688616+00:00`，只授权现存证据规划；不授权重测、ACL 改动、修码、增预算、追认或发布。
- 保留材料计划 `doc/plans/2026-10-31-issue-6-material-recovery-plan-v1.md`，SHA=`97157b9673365a3d0b5ca3cee768cd86c59a5c88fbb751517ef6c834447fab04`。
- 保留全局计划 `doc/plans/2026-10-31-windows-master-topology-v4.md`，SHA=`5e89e65c8d002bde9ee01127ee53530afac0914c8dbe699cfcc5285eec3d3e7b`。
- 文件时间戳、当前 hash、ACL、报告互相一致均不证明原逐操作授权/命令/raw exit/UTC。权限拒绝即交 Product，不换方法绕过。

## 2. 实测事实、来源与影响

所有本次机器证据在 `O/evidence-1.json`（SHA=`73b105ca3cdc01a88ac16d55883db46818ffd2cb8f57258441ef92ddb9ddd0ee`）及 `O/evidence-2.json`（SHA=`2bddfd01838a65003201ffcb4a4acbd34a844a8bc9de25c3f3c0ad44633477e5`）。后者保留现存六份输出 hash 与全文，UTF-8 容错解码出现乱码；不得把乱码还原猜测当准确中文目标诊断。原始文件 hash 不受解码影响。

| 来源 | 本次核实 / unknown | 影响与建议 |
|---|---|---|
| `D/issue6-material-recovery/review-2.md` 与 ops 最末 receipt | 当前报告 `c916092a…3197a`（97物理行），ops `6a8aeccd…0e0eb`（22物理行）；报告自报20行不符；不存在报告所称 r2-000 error 行 | 当前快照可固定，但不能称20行或有错误行已保存；不补写错误记录 |
| Product blocker 中 `c7f…` 及协调者澄清消息 | `c7f…`为先前成员交付声明；当前文件与 receipt/state 固定的 c916 相同。未取得 c7f 完整 SHA/对应文件，何以声明不同 unknown | 保留“声明差异”而非“已证实文件覆写”；mtime不重建编辑时序，不宣称差异已洗清 |
| Review2 ops | 无未配对 intent；孤立 receipt=`r2-001,r2-007-post,r2-010,r2-012`。多处 command_group 是概述/占位；r2-009 没有实际 icacls 命令/逐场景 raw exit/ACL 前后快照 | 聚合 receipt 不能充当每一操作的原始记录；保持机器完整性不合格 |
| `D/issue6-material-recovery/dev-2.md` / ops | 报告 SHA=`2c27c28ccd6e5be921c0bf7374474b1f5a08b432831617449eebaf591c0b55c1`；ops SHA=`d75a94b764b5ef076e26793d756bdfcdaa80fbc5e6f0e3d12f0f1cd597420281`，55物理行，均为JSON对象；报告自报46行，合同/state转述47行均不是实测总行数 | 追加本处置索引，不修改旧自报；有效JSON不等于完整证据 |
| Dev2 ops 第7、43–46、55行 | `d2-m2-probe-01`缺receipt；pre-good receipt第44行早于intent第45行；第43行称替换null，第46行称保留，原null字节不在当前文件；`d2-m8-report-01`孤立receipt | 历史前置intent/丢失字节不可恢复，不能新运行或补造补齐；仅记录矛盾 |
| Dev2 Symlink 第39行/报告第11行 | receipt=`hashSame=True,sizeSame=False`，报告称hash/size完全一致；ops完整原始命令亦不足 | 同内容同size自报不能升级为工具事实；HardLink与Symlink证据分别处理 |
| Dev2末行自报ops SHA=`14610d…06106` | 当前为d75a94…；未提供该旧快照，是否自引用追加前的hash或其他原因 unknown | 不将hash差异直接归因为篡改，固定当前完整文件和声明 |
| Review1 ops / Dev1澄清 | Review1实测23行，3未配对intent、10孤立receipt；Dev1明确承认全部UTC估填，仍自称按mtime重排“真实操作时间线” | 保留旧失败来源；文件时间戳只支持现存元数据，不支持原完整时序/净耗时；不追认旧PASS |

### 2.1 当前 ACL 能证明什么

本次 `Get-Acl` 于 `2026-10-31T10:48:47.726151+00:00` 至 `10:48:48.436553+00:00` 成功 exit0。只查 `counter-examples` 自身、其直接子目录以及 `cx-pkg-F` 直接子目录；链接 `junction-to-real-host`、`symlink-dir-pkg` 只读链接元数据，**跳过 ACL、未跟随目标**。结果完整 SDDL/owner/继承状态/规则在 evidence-1 的第三个 commands 条目 stdout。

- 所查询普通目录当前 `AreAccessRulesProtected=False`；例如 `cx-pkg-E/F` 为继承 ACL，BUILTIN Users 当前继承 ReadAndExecute，而非可据此笼统称所有目录已恢复显式 Users:F。
- E实际 junction目标及 F的 `licenses/locked-dir` **没有在本次限定ACL查询内**；未扩扫。其原 ACL/当前 ACL 及全边界恢复完整度 unknown。
- 未见本次输入包含原安全描述符保存、完整 icacls 参数/exit与恢复前后等价比较。原ACL不可由父目录当前ACL、能读取输出或当前owner逆推。
- Review2报告/ops对E/F权限改动、恢复Users:F均为 **self_report**；报告“无系统级变更”不改变禁止项，也不证明没有残余权限差异。
- 技术上 E输出是 `locked-junction (Junction)` 读前拒绝，不能独立证明枚举错误分支；F输出是白名单/漏列失败，不能证明枚举不完整分支触发。上述仅描述现存输出，不重新实验。

## 3. 四层结论及原验收映射

| 层次 | 判定 | 可支持 / 不可支持 |
|---|---|---|
| 技术判定 | **qualified_reference_only** | Dev2/Review2均主张R-A/R-B/P-C/P-D已修复，现存full输出有 `28 cases, 0 unexpected passes`、P-good有 `ALL PASS`；本Plan不重新审代码或运行，不自行技术PASS |
| 机器证据完整性 | **incomplete / FAIL** | 当前文件、55/22/23行与配对问题为本次工具事实；历史执行退出码/逐case准确诊断/完整命令/时序/未保存ACL不因读取附件而变完整 |
| 执行授权 | **deviation_recorded / 不追认PASS** | Review2 E/F使用icacls的自报直接背离Review1合同第11行与Review2继承条款、禁止自动改权限；原ACL恢复unknown，当前只读授权不溯及既往 |
| 验收效力 | **blocked / not accepted** | 材料任务整体验收及发布不能由技术参考解锁；历史PASS不用于发布；处置计划交付只证明规划交付 |

原材料计划各必需项的支持范围：

| 原项 | 现存支持 | 合法/完整证据范围及缺口 |
|---|---|---|
| M1 固定来源/28文件/历史保留 | 两版Review均记28/28一致，材料v1/v4当前hash一致；Review1报告/ops存在 | 当前批准文本hash已合法只读核实；28来源核验仍为既有审查记载，孤立receipt/命令不足，不将其全量升级为本次复验；历史UTC/缺口永久保留 |
| M2 清单接口、独立白名单、文档、版权原字节 | Review1材料/36路径参考与Review2无材料diff记载 | 静态技术参考可复用，原完整合法机器证据未恢复；制作器全流程未测 |
| M2 链接/祖先/非普通对象读前拒绝 | Review2 R-B及A–D/N27、Dev2 HardLink记载；E/F现存输出 | A–D/N27不是ACL实验，可保留为有限非ACL参考，仍不能证明全ledger完整；E/F排除于可接受验收证据，不借它们证明枚举错误分支 |
| M3 有效基包、N22目标、N4 size-only、N16保声明、目标诊断/P-good | Review2与Dev2四项技术记载，现存full/P-good输出 | 本次仅证明输出文件存在与其hash/ASCII尾部；逐case精确诊断、原raw exit与执行授权完整性未重新核实，不能认定M3整体通过 |
| M1/M3 真实UTC、完整命令、每组intent/receipt | ops现存、部分精确命令及rawexit字段 | D1–D4、孤立receipt、原null缺失、late intent、概述命令等使完整性不满足；新测试不能补历史 |
| 最终T6T构建/完整制作/两次重建/固定新SHAReview | 两Review明示未执行 | 未验收，留原T18→T6T及材料Review门槛；本次禁止运行 |
| T6 干净Win11普通用户/真实运行/维护者合规与对应源码等 | 均为unknown/pending | 人工门槛不能技术替代；Issue #6保持OPEN，不发布 |

PS5.1：现存两份out-51 hash相同并含ParserError/UnexpectedToken，能支持“留下了解析失败输出”，不支持Dev2自报的5.1 HardLink平台行为。基线原因由Review2记载，非本Plan新平台核验；不新增兼容修复范围。

## 4. 状态 superseded 映射与全局路线

以下为 **建议追加索引，不修改历史文件**：

| 对象 | 历史状态原样保留 | 当前解释/取代关系 |
|---|---|---|
| Dev1/Review1，head `cf65a9bd…` | Dev DONE、Review PASS+必改 | 原技术R-A/R-B/P-C/P-D问题由批准attempt2取代；旧证据缺口未被取代/洗白，不用于放行H |
| Dev2，固定H | DONE、writer freeze | 仅 `dev_commit_delivered`，不是整体accepted；当前技术参考+不可恢复ledger缺口 |
| Review2，固定H | 技术PASS+证据FAIL+授权PASS自报 | 授权PASS不接受，整体 `not_accepted_required_evidence_and_review_deviation`；不改原报告，不另造历史新PASS |
| 本处置v1 | awaiting_approval | 交付后可由Product核验规划输出，用户另批准处置；不取代材料v1-A、v4-A或原业务验收 |

本请求是现有T6M阻塞的处置附件，不增加可执行DAG节点、不改变allowed_paths或T6R→T6M→T6T/T18→T6T依赖。若Product发现全局v4尚未显式列本新增处置文档，按共享合同另派新Plan并请求全局新版批准，旧v4保留；本计划不擅自并入。无关已批准就绪前沿可继续，T6M阻塞不等于暂停全部Issue。

## 5. 最小选项与人工门槛

**A（推荐）：封存为有限技术参考，保持材料整体阻塞，停止自动修补循环。** 用户批准本v1固定SHA后，Product记录55/22/23行、c916当前快照与c7f声明差异、ACL授权偏离/恢复unknown，保留原记录、代码/产物，不追加Dev/Review、不重测、不发布、不清理。不进行例外追认，Issue保持OPEN。可以不读取更多历史就完成处置记账。

**B：仅暂停，暂不采纳处置索引。** 保留本草稿和已有blocked状态，等待用户下一目标；同样0新预算、不放行。代价是未形成已批准解释索引，不改善历史证据。

以后若用户要求继续业务或查明权限：须另给**新请求/新会话/新计划及批准SHA**，明确准许查询路径、权限处置/实验边界、预算与完整验收。原ACL无法恢复的事实仍保留；不得默认新测消除旧缺口或默认豁免。这里不预设计新业务方案、不申请额外Review或全局历史读取。

## 6. 单任务拓扑、顺序与可观察验收

| task_id | Issue | 角色 | depends_on | 允许修改路径 | 验收摘要 |
|---|---|---|---|---|---|
| issue6-evidence-disposition-plan | #6 | plan | []（已收到只读合同，不以材料通过为前置） | `R/doc/plans/2026-10-31-issue-6-evidence-disposition-plan-v1.md`；`O/plan-1.md`、`O/plan-1.ops.jsonl`及O本人新附件 | 只读快照/四层结论/未知/选项/固定SHA，原计划DAG和历史不改，无实施放行 |

最小文字拓扑：`只读规划合同 → 本单任务交付 → Product核验/用户批准A或B`；材料T6M的业务完成依赖仍未满足。无新增Dev/Review任务，无路径重叠并行派发，本Plan不是调度者。

- [ ] 固定本v1、本人报告/ops和附件SHA，核对材料v1/v4未变、H不变、工作树干净。
- [ ] Product只读核对报告摘要/附件来源、55/22/23行和四层边界；不得把报告解析成功当技术验收。
- [ ] Product向用户询问A（推荐）/B，在自己的窗口办理；本Plan交付即关闭，不占窗口等待。
- [ ] 获批A后Product只在其独占state/events/BOARD中追加处置解释/阻塞，不改旧报告ops，不解锁T6T/发布；无新角色预算。

### 准确验证命令（只读，不是业务重测）

```powershell
$R='E:/Git/TMOG-Public'
$W='E:/Git/TMOG-Public-WorkTree/issue6-integration-20261029'
$D="$R/.workflow/parallel-plan-20261029-6-11-17"
[DateTime]::UtcNow.ToString('o')
git -C $W rev-parse HEAD
if ($LASTEXITCODE -ne 0) { throw 'head query failed' }
git -C $W status --porcelain
if ($LASTEXITCODE -ne 0) { throw 'status query failed' }
Get-FileHash -Algorithm SHA256 -LiteralPath "$R/doc/plans/2026-10-31-issue-6-evidence-disposition-plan-v1.md","$R/doc/plans/2026-10-31-issue-6-material-recovery-plan-v1.md","$R/doc/plans/2026-10-31-windows-master-topology-v4.md","$D/issue6-material-recovery/review-2.md","$D/issue6-material-recovery/dev-2.ops.jsonl","$D/issue6-material-recovery/review-2.ops.jsonl","$D/issue6-material-recovery/review-1.ops.jsonl"
```

预期：H准确等于本版固定H、status为空、原材料v1/v4 SHA准确匹配；当前输入快照如发生变化，先报告差异，不套用本版结论。本人采集器不重复运行（附件使用独占新建，会拒绝覆盖）；完整实际执行argv/UTC/stdout/stderr在evidence-1，完整采集程序在O/evidence_collect.py。不得用本节授权ACL实验/历史修补。

## 7. 风险、自查与技能证据

风险：当前ACL覆盖有限且不恢复原权限；输出中文编码未确证，容错解码不等于准确原文；hash声明差异可能只是口径/快照问题，不能判定篡改；技术参考不满足完整验收会长期blocked。推荐接受这个诚实上限，不为了“绿色”持续加修复循环。

自查（self_report）：合同目标/验收已映射§1–6；禁止项未扩张；原批准版本/SHA保留；单任务表/文字拓扑一致；不改DAG，可能需全局覆盖由Product另派；未实施测试/权限/代码/发布。新计划需用户批准，未宣布批准。

技能使用：调用 `superpowers:writing-plans`（插件，工具加载成功；来源缓存版本目录7.0.0，技能内容独立版本/SHA unknown）；用于范围/文件/步骤/验收和自查。其默认计划目录、实施/TDD/提交/子代理交接要求不适用于本合同，按工程doc/plans和只读边界覆盖。既有工程计划类技能定向Glob无匹配，不把这次查找称全量技能审计；REA/CodeGraph不适用于本次纯现存文档/日志/ACL读取，未调用，不新增逆向或代码分析。完整技能调用/执行分级见本人报告。
