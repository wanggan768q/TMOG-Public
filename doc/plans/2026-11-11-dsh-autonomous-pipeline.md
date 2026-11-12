# 计划：DSH 自动流水线（Program 模式）

**日期：** 2026-11-11
**用户目标：** 给一个总目标计划 → 拆子计划 → 在 GitHub Issue 中形成 → 每票做开发计划、开发、review、写回 Issue、提交 PR、审核 PR → 低风险且审核通过的直接合并，最终自动完成全部任务。
**授权证据：** 用户 2026-11-11 会话明确“审核通过是低风险的可以直接合并”“我的目标是自动完成所有任务”。

## 1. 审核结论：原 roles 能否闭环

迁移后的 roles 只能做到“单票半自动”：每票开发到 ready PR 可自动，但计划拆解、建票、批量授权、低风险判定、合并、关票、跨票续跑都缺 owner 或门槛。**无法自动完成全部任务。** 本次新增 Program 模式补齐。

## 2. 设计：`.dsh/team/program.md`

- **Preflight**：gh auth/remote/分支保护/工作树/无 CI 声明；失败退回逐票模式。
- **Program Mandate**：逐字用户授权证据、scope/allowed/forbidden paths、外部操作清单、`risk_ceiling`、`auto_merge_paths`、`merge_limits`（numstat 增+删）、`max_issues`（自动推进票数上限）、`max_goal_rounds`、`first_merge_confirmation`、报告节奏、stop 条件。缺项不启动。
- **阶段 S0–S10**：拆解（规格写 `.workflow/<run>/`，分批 ≤10 票）→ 建票（`<!-- program:<id> ticket:<NN> -->` 唯一标记，便于恢复去重）→ frontier 取票 → 开发 → fresh 本地审查 → 单一执行者发布 PR → 新的 fresh PR 审查 → 低风险合并 → 回写/关子票 → 收口（核对合并提交与 IssueWriter receipt）。
- **低风险门槛（机械优先）**：机械白名单（doc/docs/md/tests，且不删/跳过/放宽断言）或 Mandate 点名的 `auto_merge_paths`；numstat 增+删总数与文件数；依赖/接口/构建/发布禁止项；Review 用自己的 receipt 独立重跑验证；同 head PASS；未 resolved 评论为 0（graphql）；首张合并确认。
- **中断矩阵**：ACK 缺失、Review FAIL（每票 ≤3 审查轮次）、CI 红、main 前进、合并后回归、规格失效、状态不一致、spawn 失败、预算、网络、路径冲突、上下文、高风险票、分支保护、用户 stop、无进展、空转轮次；全部用轮次/证据计数，不用墙钟。
- **续跑与完成**：`create_goal`；恢复读 Issues 按标记去重；stop→`update_goal pause`；完成判据 = 子票全 merged+closed + 父票 checklist 全勾 + 最终报告（≠用户验收）；轮次耗尽给可续跑摘要。
- **预算释放**：任务板 complete + 报告 SHA256 + 无未完成 intent + inactive 且无写入证据；旧地址永久退役。
- **合并窗口**：每轮最多合并一票；main 前进按 diff 重叠与否选择重跑验证或增量复审；合并后回归失败即停并开修复票。
- **技术隔离限制**：DSH 无工具白名单；合并只能由 IssueWriter 执行，S10 用合并提交与 receipt 交叉核对（审计约束，不是安全边界）。

## 3. 角色改动

- `lead`：preflight、Program 编排、风险门槛、合并窗口、首张确认、stop→pause goal、续跑/完成/预算释放、S10 合并 actor 核对、findings 转发、上下文控制。
- `plan`：Mandate 摘要输入、子计划与规格写 `.workflow/<run>/`、分批与 `max_issues`、机械风险依据、Issue 正文权威性。
- `worker`：按 Issue 正文实现、请求 fresh 审查、≤3 审查轮次、head 冻结、main 前进重跑/增量复审、风险上报、不建票/合并/关票/改 spec。
- `review`：Assignment 必须含 program 摘要；每个结论来自新 fresh 实例；独立重跑验证（自己的 receipt）；机械白名单/numstat/断言弱化检查；未 resolved thread；低风险不免审；报告回 Lead。
- `issue-writer`：建票唯一标记、label 退化、合并前机械复算、未 resolved thread、首张确认、每轮最多一票、父票不关、失败保留真实状态。
- `team-review`：Program 审计项（授权逐字证据、机械测量、首张确认、合并 receipt、预算释放、stop 联动、无进展处置、恢复去重）。

## 4. 配置与检查

- 本地 `.dsh/team/config.json`：`policy.merge=authorized`（用户明示授权低风险自动合并）；示例配置仍 `manual`。
- `check.ps1`：`-Ready` 校验 `program.md` 存在且含关键条款锚点（低风险门槛、numstat、first_merge_confirmation、update_goal pause、max_goal_rounds）；角色新标记（lead `create_goal`、plan `子计划`、review `风险`、issue-writer `创建 Issue`）。
- `.gitignore`：新增 `!.dsh/team/program.md`。

## 5. 闭环判定

- **能闭环的部分**：用户给总计划 + 批量授权 + 低风险范围内，S0–S10 可连续自动执行；失败路径有界（审查 3 轮、重试 1 次、每轮最多一票合并）。
- **设计内必须停**：用户 stop；命中高风险票；需扩大授权/范围；未授权外部操作；首张合并确认；凭据/人工操作；同一阻塞连续 3 轮无效；无进展/空转 pause。
- **运行环境限制**：Lead turn 结束不会自醒，依赖 goal 续跑；上下文/预算是硬约束；GitHub 网络/限流；仓库无 CI（用本地证据）；分支保护可能阻止合并。
- **未验证**：真实多票连续运行、任务板跨会话、GitHub 建票/合并实操、goal 自动续跑在本 profile 的真实行为。

## 6. 对抗审查与修复

独立对抗审查（fresh 子代理）结论：**有条件能闭环，无 blocker，15 个 major + 12 个 minor + 4 nit**。已修复：

| # | 发现 | 修复 |
|---|---|---|
| M1 | Review 拿不到 Mandate 数值却要判风险 | 审查 Assignment 必带 `program.json` 摘要（program §2/§3、README §4、review 角色） |
| M2 | 低风险靠主观评级 | 机械白名单 + `auto_merge_paths`；非白名单一律 high |
| M3 | 净行数可规避规模阈值 | 改为 numstat“增+删”总数，记录测量命令与输出 |
| M4 | 质量证据自证闭环 | Review 用自己 receipt 独立重跑；禁止删/跳过/放宽断言 |
| M5 | README §13 与 program §3 口径冲突 | 删除“模块放宽”，统一为白名单/点名路径 |
| M6 | main 前进重审无收敛 | 定义合并窗口（每轮一票）与增量复审（仅交叉影响） |
| M7 | 预算释放靠自报 | 四条判据 + 旧地址永久退役 |
| M8 | stop 不联动 goal | stop/`paused` → `update_goal pause` + hold + 通知 |
| M9 | 续跑重复建票 | Issue 正文唯一标记 + 恢复读 Issues 去重 |
| M10 | 完成判据未定义 | 子票全 merged+closed + 父票 checklist + 最终报告 = 结束（≠验收） |
| M11 | `max_issues` 语义不明 | 定义为自动推进票数上限；S0 分批 |
| M12 | 授权凭证 Lead 自写 | `user_evidence` 逐字可 grep；Mandate 摘要写 BOARD；首张合并确认 |
| M13 | 高风险停票还是停 Program | 只停该票并 hold，未 blocked_by 的票继续，汇总单列 |
| M14 | 墙钟超时不可执行/空转烧轮 | 改轮次/证据计数；无进展 2 轮 pause；空转不烧轮 |
| M15 | 合并 actor 无法核对 | S10 用合并提交与 IssueWriter receipt 交叉核对 |

次要修复：S6/S9 写死单一执行者；规格移入 `.workflow/<run>/` 避免脏树；每个结论用新 fresh Review；findings 经 Lead 转发；check 增加 program.md 关键锚点；S0 前 preflight；Issue 正文为权威源；Plan 拆解带 Mandate；定义“审查轮次/进展/无进展”；`doc/plans` 只放开发计划；team-review 步骤编号；worktree 由 Worker 创建。

### 第二轮复核（对抗审查）与修复

结论：**仍有阻塞，不能直接无人值守启动**。发现 1 个 blocker（P0 预算/释放死锁）与 10 个 major。已修复：

| # | 发现 | 修复 |
|---|---|---|
| P0 | `maxTeammates=1` 时 Worker+Review 互相等槽；满并行时 Review 无槽；spawn 失败/无报告无法释放 | 预算改两层：running Worker ≤ `maxTeammates`；专项串行最多 1 个、不占 Worker 名额；waiting 不占 running；释放判据增加 abandoned；`maxTeammates=1` 也能交接 |
| J1 | §3“全部条件”实为二选一，A2 漏禁止项 | §3 改为 A 路径（A1/A2 之一）AND B 通用（B1–B8）结构；A2 同样受 B1 约束 |
| J2 | 白名单不校验 allowed/forbidden，`**/*.md` 可改 `.dsh`/AGENTS/agents 指令 | A 路径增加 allowed/forbidden 校验；`.dsh/**`、`.claude/**`、`AGENTS.md`、`CLAUDE.md`、`docs/agents/**` 一律 high；IssueWriter 复算增加 forbidden 与 closingIssuesReferences |
| J3 | `risk_ceiling` 无操作语义 | 只接受 low；medium/high 属扩大授权，不由配置生效 |
| J4 | 自动 `update_goal pause` 不可执行；阈值/引用冲突 | 去掉自动 pause 宣称；用户 stop 视为直接请求可 pause，工具不支持则如实记录；无进展 2 轮/空转只读结束 turn，不声称节省轮次；统一“同一阻塞累计 3 轮”升级 |
| J5 | 完成判据要求全部子票 closed，与 dropped/held 互斥 | 完成 = 子票 closed 或 dropped（报告单列且用户可重开）、无 held/waiting、父票 checklist 全勾、最终报告发布 |
| J6 | S9 无合法写者更新父票 checklist/规格 | 定义受控块 `program-checklist`/`program-spec`/`tmog-pr-findings` + Mandate `writeback` 授权，执行者 IssueWriter，块外保留 |
| J7 | 合并 actor 核对不可执行（共用 gh 身份、squash/rebase） | 改为核对 PR 真实字段 state/mergedAt/mergeCommit/headRefOid 与 receipt；明确不声称能识别角色；记录身份限制 |
| J8 | 审查轮次作用域不明/可能耗尽或无限 | 本地/PR 审查各自 ≤3；增量复审单独记录、不占轮次；超过 2 次 main 漂移增量复审报告用户；README 一般规则与 Program 计数不冲突 |
| J9 | 首张确认/升级等待无门闩，goal 续跑可能越过 | 新增 `waiting_for_user` 门闩 + `first_merge_confirmed_utc`：用户未决定前 gated 动作一律不执行，IssueWriter 无确认字段拒绝首张合并 |
| J10 | 合并门槛不检查 Closes/Fixes，可能偷关父票 | B6 要求 `closingIssuesReferences` 为空、正文/提交无 Closes/Fixes/Resolves；Worker 发布规则同步 |

其他修复：`-Role program` 六角色就绪；README/program/team-review 关键锚点校验（截断 README 会红）；`max_issues` 单一语义；`PR_PASS` 记录审查时 head+base；Worker 禁止调用 `spawn_teammate`/`subagent`；`Invoke-TeamCheck` 无参数/cwd 限制写明包装脚本；S2 frontier 明确 GitHub assignee 与任务板 owner；计划位置区分 `.workflow`（程序级）与 worktree `doc/plans`（开发计划）；stop 时不假称已终止未知命令。

## 7. 验证

- [x] `check.ps1 -Ready`（team 与 program 两种）通过；六角色就绪通过；program.md/README/team-review.md 关键锚点校验生效（删锚点或截断 README 均 exit 1）。
- [x] `check.tests.ps1`（含缺锚点、缺合同、截断 README、`-Role program`、非法配置用例）、`runtime.tests.ps1`、旧 `.claude/agent-team/check.ps1` 均 exit 0；`git diff --check` 通过。
- [x] 第一轮对抗审查 + 第二轮复核完成，发现均已修复（见第 6 节）；两轮审查者未能联网验证 GitHub 实操与 goal 真实行为。
- [x] 不提交、不推送、不创建真实 Issue/PR。

## 8. 仍未验证 / 残余风险（据实声明）

- 真实多票连续运行、任务板跨会话、`spawn_teammate`/`team_task_*`/`wait_agent`/`interrupt_agent` 在本 profile 的真实行为：未实测。
- `create_goal` 的轮次上限、续跑触发时序、用户提问后是否恢复、session resume 后 goal disarm 的后果：未实测；合同已避免依赖“自动 pause”。
- GitHub 实操未执行：gh auth 虽已登录，但建票/PR/合并/分支保护/`reviewThreads`/`closingIssuesReferences` 未实跑；分支保护可能拒绝自动合并（合同要求记录错误并升级）。
- 仓库无 CI，本地证据替代方案未在真实票上验证；`Invoke-TeamCheck` 的包装脚本约束未实跑。
- 合同无法防止工具层越权（Worker 技术上有 `gh`），只能审计；`Add-TeamRecord` 的 actor 可伪填，审计依赖时间线与真实状态交叉核对。
- 因此结论是“**有条件闭环**”：在批量授权 + 低风险范围内可连续自动推进；高风险、扩权、首张合并确认、凭据/人工操作、3 轮失败、无进展仍会停，且 turn 结束依赖 goal 续跑。

## 9. 第三轮修复：subagent 台账对账（2026-11-12）

触发：对 session-9458620e 只读分析发现父日志 `subagent/catalog` 26 条中有 3 条无 settle。逐一核对子会话日志后确认：

- `41815fb6`（独立审查三个 ready PR）：spawn 后 6 秒父 turn 1 `aborted(disposed)`，子会话无 `turn/end`、最后写入停在中止时刻 → 幽灵。
- `dda7fedd`（R-13 r2 review）：父 turn 7 `interrupted` 时正在写报告，子会话无 `turn/end`、停 15 小时 → 幽灵。
- `34528aad`（R-6 r2 review）：真实在途；`e848173d`（R-6 rebase）已正常 settle。

根因：DSH 只在子代理正常结束时投递 `subagent-settled`；父 turn 被 abort/interrupt 会 dispose 子会话且不补发通知；会话恢复只重放消息历史，不重建 catalog，父日志/GUI 把“无 settle”长期当 running。

合同修复（本次）：

- README §8 新增 **subagent 台账对账**：catalog 无 settle ≠ running；查子会话 `turn/end`、最后写入时间、父是否收到 settle；无 `turn/end` 且无新写入记 `abandoned`，不等待、不唤醒、不重复派发；对账结果写 state/events。
- program.md：§4 中断表新增“subagent 台账无 settle / 父 turn 被中断”行与用户 stop 行联动；§5 恢复条目先对账台账。
- roles/lead.md：续跑、恢复、DSH 语义三处写入同一规则。
- check.ps1：README 增锚点「subagent 台账对账」，program 增锚点「subagent 台账」；check.tests.ps1 增两条“删锚点必须失败”用例。

未修复（环境限制）：DSH 本体在打包 `app.asar`（213 MB）内，不在工程仓库，无法在安装目录安全打补丁；建议上游修复：spawn 登记 / settle 清除 / turn abort 补发 `subagent-settled` / GUI 以子会话存活状态为准。session-9458620e 已写入磁盘的两个幽灵条目无法从只追加日志删除，只能按合同对账忽略；该会话 turn 8 仍在运行，未改动其 state。
