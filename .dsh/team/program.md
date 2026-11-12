# Program 模式：自动流水线合同

本文件是 `.dsh/team/README.md` 的补充合同，只描述“用户给出总目标计划、并明确授权自动完成”时的编排方式。与 README 冲突时以 README 的授权、安全与交付边界为准；Program 只能收窄授权，不能扩大。Program 不是新角色：Lead 编排，Plan 拆解，Worker 执行，Review 核验，IssueWriter 建票/发布/合并/关票。

## 0. 启用前提与 preflight

同时满足才进入 Program 模式：

1. 用户给出总目标计划（文本或计划文件），并明确授权自动推进。
2. 用户明示允许的外部操作：创建 Issue、发布 PR、低风险合并、关闭子票（PR 评论可选）。Program 不能替用户补默认授权。
3. 本地 `config.json` 的 `policy.merge=authorized`。
4. `risk_ceiling` 只接受 `low`。本版本只实现 low 自动合并；medium/high 属于扩大授权，需用户明确并修改合同，不得由配置自行生效。

S0 之前做一次 preflight 并写进 `program.json.preflight`：

- `gh auth status` 成功；`git remote -v` 指向预期仓库；`config.mergeMethod` 合法。
- 查询 `gh api repos/{owner}/{repo}/branches/main/protection`：成功则记录保护规则；403/404 记“保护状态未知”，在 S8 按真实错误处理。
- 记录 `git status --porcelain` 清单：Program 不要求主工作树干净，但不得覆盖用户未提交改动。
- 记录是否有 CI：无 CI 时全部质量证据用本地构建/测试原始输出替代，不虚构 CI。
- **身份限制**：所有角色共用同一 `gh` 身份，GitHub 无法区分 DSH 角色；合并审计只能用 PR 真实字段 + IssueWriter receipt 交叉核对，不宣称硬审计或不可伪造。

preflight 失败或缺授权项就退回逐票模式（README §3–§9），不用默认值代替用户明示授权。

## 1. Program Mandate（启动门票）

Lead 写 `.workflow/<run-id>/program.json`，摘要写 `state.json` 的 `program` 字段并同步 `BOARD.md`。至少包含：

- `program_id`、`created_utc`、`goal_id`
- `user_evidence`：**逐字可 grep 的用户原文** + 日期 + 来源会话，不由成员转述
- `master_plan_path`、目标与可观察验收
- `scope` / `allowed_paths` / `forbidden_paths`（默认禁用 `.dsh/`、`.claude/`、`AGENTS.md`、`docs/agents/`、CI/构建/打包/发布脚本、凭据、原始与补丁 exe、许可/网络协议逻辑）
- `external_actions`：`create_issue`、`publish_pr`、`merge`、`close_child_issue`、`pr_comment` 各自 true/false
- `writeback`：是否授权受控块写回（`program-checklist`、`program-spec`、`tmog-pr-findings`），默认 false
- `risk_ceiling`：只接受 `low`
- `auto_merge_paths`：用户点名的模块/目录（必须是 `allowed_paths` 子集，可空）
- `merge_limits`：`max_files`（默认 20）、`max_lines_total`（默认 800，按 `git diff --numstat`“增+删”总数，不是净行数）；记录测量命令与输出
- `first_merge_confirmation`：默认 true；首次自动合并前必须有用户确认，确认后写 `first_merge_confirmed_utc`
- `max_issues`：**本次 Program 允许自动推进的票数上限**（含建票与执行；超过需用户追加授权）
- `max_goal_rounds`、`max_teammates`（≤ 配置值）、`report_every_n_issues`（默认 5）
- `stop_conditions`：用户 stop、连续无进展、预算耗尽、命中高风险、需要凭据等

Mandate 之外的新范围、新依赖、权限或外部操作一律需要用户新决定。

## 2. 阶段与产出

每张子票按 S0–S10 推进；每阶段结果先落盘再通知。

| 阶段 | 执行者 | 产出 | Lead 核对 |
|---|---|---|---|
| S0 拆解 | Plan（子代理） | 子计划与规格写 `.workflow/<run-id>/plans/`、`.workflow/<run-id>/specs/<NN>-<slug>.md`；每票含目标/范围/验收/验证命令/依赖/风险估计/受影响路径；每批 ≤10 票，累计计划票数不超过 `max_issues` | 授权内、可独立验收、无隐藏依赖；超 `max_issues` 先报用户 |
| S1 建票 | IssueWriter | 父票 + 子票（正文 `Part of #<parent>` + `<!-- program:<id> ticket:<NN> -->`；原生 blocked_by，不可用则正文 `Blocked by: #n`；label 默认 `ready-for-agent`，缺失则退化并记录）；父票含 `<!-- program-checklist:start/end -->` 受控块，子票可含 `<!-- program-spec:start/end -->` | 规格与正文一致；issue 号写 state/任务板/`issue_map`；分批建票 |
| S2 取票 | Lead | frontier = Issue open、无未完成 blocker、**GitHub assignee 为空且任务板 owner 为空**、路径与活动票不冲突；`spawn_teammate` Worker + Assignment | 一票一写者；预算未超；Assignment 含 Mandate 摘要、Issue 正文/规格与单一执行者 |
| S3 开发计划 | Worker（可请 Plan） | 开发计划写该票 worktree 的 `doc/plans`（随票提交或留证据）；程序级规格只在 `.workflow/<run>/` | 不扩大授权、不改 Issue 正文 |
| S4 开发与自验证 | Worker | 分支/worktree（Worker 创建/复用）、RED/GREEN 原始证据、`ops.jsonl`、报告 | 只改获准路径；证据真实 |
| S5 本地独立审查 | Lead spawn fresh Review | PASS/FAIL/BLOCKED + 风险评级 + 机械测量 + 发现；Review 用自己的 `Invoke-TeamCheck` 重跑验证命令 | 绑定固定 head；报告回 Lead 转发；本地审查 FAIL/BLOCKED 轮次 ≤3 |
| S6 发布 | Assignment 指定的单一执行者（默认 Worker；权限分离时 IssueWriter） | 推送 + PR（`Part of #N`、范围/证据/限制、风险主张与机械依据；未完成用 Draft；不写 Closes/Fixes/Resolves） | head、正文、Draft 真实；无双 owner |
| S7 PR 审查 | Lead spawn **新的** fresh Review（PR 模式） | 记录审查时 head 与 base sha；PASS/CHANGES_REQUESTED + 风险评级 | 新实例；PR 审查 FAIL 轮次 ≤3，增量复审单独记录 |
| S8 合并 | IssueWriter | 低风险门槛全满足则合并；否则 hold 该票并问用户 | 第 3 节逐条核对 + 机械复算；每轮最多合并一票；首张确认 |
| S9 写回/关票 | Assignment 指定的单一执行者（默认 IssueWriter） | 受控块写回（必须有 `writeback` 授权）；低风险子票按授权关票并留验收证据；父票 checklist 勾选 | 只改受控块内部；只关子票，不关父票/整票 |
| S10 收口 | Lead | state/BOARD、goal 进度、选择下一 frontier | 核对真实 PR 合并字段与 IssueWriter receipt 一致（head/mergedAt/mergeCommit），不比较无法区分的角色身份 |

## 3. 低风险门槛

**自动合并 = A 路径条件（A1 或 A2 之一）AND B 通用条件（B1–B8 全部）。任一不满足就不自动执行，hold 该票并问用户；不允许为了推进先降门槛再补。**

### A 路径条件

- **A1 机械白名单**：全部变更文件都在 `doc/**`、`docs/**`、`**/*.md`、`tests/**` 内；且**不得**命中指令类路径 `.dsh/**`、`.claude/**`、`AGENTS.md`、`CLAUDE.md`、`docs/agents/**`（这些会被 agent 当规则加载，一律 high）；且全部在 `allowed_paths` 内、不在 `forbidden_paths` 内。
- **A2 点名路径**：全部变更文件都在 Mandate 的 `auto_merge_paths` 内（该表必须是 `allowed_paths` 子集且不含 `forbidden_paths`）。

### B 通用条件（A1/A2 都必须满足）

- **B1 禁止项**：不得改对外行为/接口/CLI/CMake target/默认值/数据格式/协议/权限；不得新增或升级依赖；不得改构建/CI/打包/发布；不得碰凭据/许可/原始或补丁 exe；不得删除、跳过或放宽既有测试断言。
- **B2 规模（机械）**：`git diff --numstat` 文件数 ≤ `max_files`，**增行+删行总数** ≤ `max_lines_total`（不是净行数）。测量命令与原始输出写进 PR 与 Review 报告。
- **B3 质量**：本地构建/测试全绿并保留原始输出与退出码；Review 用自己的 `Invoke-TeamCheck` receipt **独立重跑**该票验证命令，不复用 Worker 证据；Review 对同一 head PASS；仓库有 CI 时必须 CI 绿，无 CI 时用本地证据替代。
- **B4 集成状态**：未解决 blocking review thread 为 0（用 `gh api graphql` 查 `reviewThreads.isResolved`，不能只看“没有评论”）；PR 非 Draft；可合并、无冲突；必需检查通过。
- **B5 流程**：head 与独立审查 head 一致；使用 `match-head-commit`；mergeMethod 与配置一致；不 force push、不跳 hooks、不绕过保护。
- **B6 不偷关 Issue**：PR 正文与提交信息不得含 `Closes/Fixes/Resolves #<n>`；`gh pr view --json closingIssuesReferences` 必须为空；否则先改 PR 或 hold 问用户。
- **B7 首张确认**：`first_merge_confirmation=true` 时，`first_merge_confirmed_utc` 为空就不合并；确认记录由 Lead 在用户回复后写入。
- **B8 关子票**：该子票验收项全部有证据且已合并，并有逐票或 Program 的 close 授权；只关子票，父票/整票留用户验收，代码类不自动关父票。

## 4. 中断清单与自动处置

“轮次”指一次续跑轮次（Lead 收到一次自动续跑或用户消息后到下一次结束 turn）；“进展”指 state/报告/receipt/提交/PR 中至少一项发生可核对变化。所有处置按轮次/证据计数，不用墙钟。

| 中断 | 可举证判定 | 自动处置（有界） | 升级条件（问用户） |
|---|---|---|---|
| Worker 未回 READY/ACK | 连续 2 轮无新证据 | 一次有证据重发；仍无 → 查真实写入；确认无写入且实例 inactive 才换新 Worker 名接同票 | 有写入证据或存活状态未知（禁止第二写者） |
| 本地审查 FAIL/BLOCKED | 有 finding 的审查报告 | Worker 修复→**新的** fresh 审查；本地轮次 ≤3 | 3 轮仍 FAIL、需改设计/范围/依赖 |
| PR 审查 FAIL / CI 红 | 明确失败输出 | 修复→新的 fresh 审查→重跑；PR 审查轮次 ≤3；机器人每 PR 每机器人 ≤ `botReviewRounds` | 需要外部权限或架构决定 |
| main 前进 / 冲突 | base 漂移或冲突 | 合并窗口内每轮最多合并一票；无冲突时重跑受影响验证；冲突或受影响文件重叠 → 增量复审后重新排队 | 冲突涉及他人未交付改动 |
| 合并后回归 | 合并后验证失败 | 立即停合并，开修复票在原分支修复，不擅自 revert；其余票暂停合并 | 回滚/修复方案需用户决定 |
| 规格失效/超范围 | 规格与 Issue 不符 | Lead 记 `dropped` 并写明理由，子票保持 open；重新拆解或纳入下一批；最终报告单列 | 需要用户决定关闭/重拆 |
| state/任务板不一致 | 记录冲突 | 以磁盘 state 为准重排 frontier、重登记任务板；按 Issue 唯一标记去重 | 无法判定归属 |
| 队友 spawn 失败/failed | 创建/运行失败 | 一次重试；仍失败换新 Worker 名，按磁盘交接恢复同票；无可核实报告的 Assignment 记为 abandoned | 连续失败 |
| subagent 台账无 settle / 父 turn 被中断 | `subagent/catalog` 条目无 settle，且子会话无 `turn/end` 或最后写入停在中断时刻 | 按 README §8 对账，判定 dead 的记 `abandoned`，不等待、不唤醒、不重复派发同票；同票换新 Worker 名并重排 frontier | 子会话仍有活跃写入而归属/双写未知 |
| 预算满 | 见第 5 节两层预算 | 已就绪票排队；释放后再派 | 长期满且无进展 |
| GitHub 网络/限流未知 | 结果未知 | 先 `gh view/list` 查真实状态，退避重试一次；不盲重建/重合并 | 仍未知或有副作用风险 |
| path 冲突/依赖 | write_scopes/blocked_by | 串行或拆票，不并行写同路径 | 依赖导致长期停滞 |
| Lead 上下文紧张 | 报告过大/票数多 | 只读摘要、轮换 Worker、写磁盘交接；下一轮续跑继续 | 需要用户新开会话（已知中断） |
| 命中高风险 | 第 3 节 A/B 任一条不满足 | **只停该票外部操作并 hold**；未被它 blocked_by 的票继续；汇总单列；完成判据要求该票最终关闭或 dropped | 用户决定该票授权/放弃 |
| Worker 自行创建队友/子代理 | 发现 spawn/subagent 调用 | 立即停止该动作并报告；该产出不计入验收 | 重复发生 |
| 分支保护/合并权限拒绝 | 工具原始错误 | 记录错误，停止自动合并 | 需要用户改仓库设置或授权 |
| 用户 stop | 用户明确 stop/等确认 | 记录 hold、通知受影响 Worker、停止新派发与外部操作；用户 stop 视为直接人类请求，可对 goal 执行 `update_goal pause`；工具不支持时如实记录并结束 turn；同时按 README §8 对账 subagent 台账，被连带终止的子代理记 abandoned，不等待 | 只有用户明确释放才恢复 |
| 无进展 / 轮次空转 | 见第 5 节定义 | 只读检查后结束 turn，不派发、不做外部操作 | 第 2 轮无进展后向用户报告并等待 |

## 5. 续跑、等待、完成与预算

- **goal**：用户明确要求自动完成时用 `create_goal` 持久化目标（objective 绑定 program 与完成标准，`max_goal_rounds` 取 Mandate 值）。没有可用续跑机制时，Lead 必须如实说明“结束 turn 后不会自行继续”。
- **等待门闩（waiting_for_user）**：需要用户决定（首张合并确认、高风险票、扩权、凭据、3 轮失败、无进展）时，Lead 在 state 写 `waiting_for_user = {reason, question, evidence, since}` 并结束 turn 提问。续跑开始时若该字段存在且用户没有新的决定，**gated 动作（合并/关票/扩权/外部写入）一律不得执行**；只能做不受 gate 限制的只读或已在授权内的准备，然后结束 turn，不重复提问。
- **首张合并确认**：`first_merge_confirmation=true` 时，IssueWriter 只有在 Mandate 有 `first_merge_confirmed_utc` 时才执行第一次合并；该字段只能由 Lead 在用户确认后写入，不由 IssueWriter 自填。
- **无进展与空转定义**：连续 2 轮没有任何进展（定义见第 4 节开头）即“无进展”；没有可派发的工作且全部在等外部/用户即“空转”。两种情况都只做只读检查并结束 turn，不派发、不建票、不合并、不评论；“空转轮次”不保证节省 goal 轮次，只保证不产生副作用和工作浪费。
- **停止联动**：用户 stop 或 `config.paused=true` 时立即 state 记 hold、通知受影响 Worker、停止新派发与外部操作；对已发出的命令用 `interrupt_agent` 打断并说明哪些动作结果未知，不声称已终止无法核实的进程。用户明确释放后才 resume。
- **恢复**：每次续跑开始执行 README §8 恢复协议，并额外读 GitHub Issues，按 `<!-- program:<id> ticket:<NN> -->` 去重；已完成的不重做，已 merged 的不重合并，已建票的不重建；先对账 subagent 台账（`catalog` 无 settle ≠ running，见 README §8 与第 4 节），被中断连带终止的子代理记 abandoned 且不等待。
- **完成判据（Program 结束 ≠ 用户验收）**：全部子票进入终态——`closed`，或 `dropped` 且在最终报告单列原因与未交付内容；**没有 held / waiting 的子票**；父票 `program-checklist` 全部勾选；最终报告已发布。满足后 `update_goal complete` 并注明“待用户验收”。用户拒绝 dropped 票时重新打开。
- **轮次耗尽**：goal 轮次上限用尽但不是阻塞时，写可续跑状态摘要（完成/进行中/下一批/未合并 head），报告“需要新一轮续跑”，不宣称完成也不宣称失败。
- **两层预算**：
  - `executor.maxTeammates` 只限制**同时 running 的 Worker Assignment** 数；`waiting`（等审查/等反馈/等用户）不占 running 名额，但同一票仍只允许一个写者，收到 findings 后转回 running。
  - 专项（Plan/Review/IssueWriter）**串行执行，同一时刻最多 1 个**，不占 Worker 名额；因此 Worker 等待审查不会死锁，`maxTeammates=1` 也可完成“Worker → 审查 → Worker”的交接。
- **释放标准**：一条 Assignment 在 (a) 任务板条目 complete，或 (b) Lead 记录 abandoned（spawn 失败/无可核实报告/执行者确认停止）；且 (c) 末份报告 SHA256 已记录或明确“无报告”，(d) 该 actor 的 ops 无未完成 intent，(e) `list_agents` inactive 且无活动写入证据 时退出预算。状态未知仍计预算。**释放后旧地址永久退役**，不得再派新 Assignment；新票用新名称。释放不等于关闭会话。

## 6. 并行、合并窗口、写回与 git 纪律

- 并行度：running Worker ≤ `maxTeammates`；专项串行 1 个；每票独立 worktree（Worker 自建/复用）；同一路径同时只允许一个写者。
- **合并窗口**：每轮最多合并一票；合并队列单线程，只有 Lead 按顺序派 IssueWriter 合并；合并前刷新 `origin/main`。后续票若 `old_base..main` 变更文件与本票 diff 无重叠，重跑受影响验证后重新排队；有重叠则**增量复审**（fresh Review 只看交叉影响 + 重跑验证），不重走全量审查。增量复审不占本地/PR 审查轮次，但每次都要记录；同一票因 main 漂移触发超过 2 次增量复审仍无法合并时，向用户报告 main 变动过快。
- **合并核验**：IssueWriter 用 `gh pr view --json state,mergedAt,mergeCommit,headRefOid,baseRefName` 取值写 receipt；Lead 只核对“PR 已 merged + headRefOid 等于已审查 head + mergedAt 在窗口内 + mergeCommit 记录存在”。不比较 GitHub 身份（所有角色共用同一 gh 身份，无法区分）。
- **受控写回**：写回只允许改受控块内部——`<!-- program-checklist:start/end -->`（父票进度）、`<!-- program-spec:start/end -->`（子票规格修正）、`tmog-pr-findings:start/end`（PR 发现）；块外原文保留，冲突停止。必须有 Mandate 的 `writeback` 授权；执行者为 IssueWriter。Lead+Plan 改规格时同时更新磁盘规格与 Issue 受控块，Worker 始终按 Issue 正文实现。
- **计划位置**：程序级子计划与 Issue 规格在 `.workflow/<run>/`（Git 忽略，不污染主工作树）；每票开发计划在其 worktree 的 `doc/plans`，随票提交或作为证据保留。
- **Worker 不得调用** `spawn_teammate` 或 `subagent`；需要专项只能向 Lead 请求。
- 不 force push、不 amend 已推送提交、不跳 hooks、不 `git clean`/`worktree remove --force`。
- **技术隔离限制**：DSH 不提供工具白名单或沙箱，Worker 技术上能执行 `gh pr merge`/`gh issue edit`。合同规定这些动作只能由 IssueWriter 执行；S10 用 PR 合并字段与 IssueWriter receipt 交叉核对，发现异常即停并报告。这是审计约束，不是安全边界，必须如实说明。

## 7. 报告节奏与用户介入点

- 默认安静。按 `report_every_n_issues`（默认 5）或阶段边界给一次简短汇总；只在第 4 节“升级条件”或用户 stop 时单独找用户。
- 汇总格式：已完成/已合并/进行中票、当前 head 与 PR、阻塞与所需用户决定、下一批计划。不贴完整技术日志。
- 用户介入点只有：扩大授权/范围、命中高风险票、未授权外部操作、首张自动合并确认、凭据或人工操作、用户 stop/等待确认、同一阻塞累计 3 轮无效、无进展/空转需报告、合并后回归需决定。
- 需要用户决定时用 waiting_for_user 门闩，不用“静默等待”；一次只问一个明确问题，附证据与选项。

## 8. 可审计证据

每票至少保留：Issue 规格与 Issue 号映射、Worker 报告与 ops、本地审查报告（含风险评级与机械测量输出：文件清单、numstat 增删总数、验证命令与退出码）、PR 链接与 head、PR 审查报告、合并 receipt（state/mergedAt/mergeCommit/headRefOid）、关票证据、Lead 的 state/BOARD 事件。风险评级必须附机械测量，不能只写“低风险”；低风险不是跳过审查的理由。`Add-TeamRecord` 的 actor 由调用方填写，无法防伪造，审计时以时间线、真实文件与 GitHub 状态交叉核对，不宣称不可伪造。
