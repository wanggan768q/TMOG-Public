# 多 agent 工作流梳理与 PR 审查闭环方案 v1（2026-11-02）

状态：已定稿并实施（见 §9）。没有恢复、发布、合并或清理任何历史任务。
来源：Product 跨会话请求（流程梳理）；依据 `.claude/agent-team/README.md`、`config.json`、`.claude/agents/{product,dev,review,issue-writer}.md`、`.workflow/product-merge-status-20261102.md`。

## 1. 现状结论

现行链路：Plan → Dev（固定 SHA）→ 本地 Review → Product 验收 → IssueWriter 推送 + Draft PR → Product 放行 → IssueWriter ready + merge → 回写 Issue → 同步/清理。

| # | 问题 | 合同位置 | 后果 |
|---|---|---|---|
| G1 | “Draft PR → ready → merge”在同一个 IssueWriter 会话、同一次 Product 放行内完成，没有“等人审 PR”的阶段 | README §PR 第 2–5 条；issue-writer.md 第 4–5 条；状态机 `publishing → merge_pending → merged` | PR 一出现就被合并，PR 审查窗口实际为零 |
| G2 | “GitHub 审批满足”是合并门槛，但仓库只有一个作者、不能自审批，也没有 main 审批保护 | README §PR 第 3 条 + 合入方式 | 这条门槛恒为空，等于没有 PR 层门槛 |
| G3 | 没有“PR 发现 → 回写 Issue → Dev 修复 → 复审 → 同一 PR 更新”的返工路径；返工只定义在本地 Review FAIL 上 | README §计划、开发与审查；product.md 第 5 条 | PR 上的意见无人接，也不会进入 Issue |
| G4 | IssueWriter 明确“不更改标签/Issue 正文” | issue-writer.md §交付与边界 | 与“PR 有问题就修改对应 Issue 描述”冲突 |
| G5 | 已验收子模块可以不发 PR（#17 17S 写成“不单独 PR，保留供 17U 集成”）；计划交付后的 docs PR 只是 Product 待办，没有强制 | 历史 BOARD；README §主工程 第 6 条 | accepted 成果长期留在本地分支，“completed/accepted ≠ 有 PR”；17 份计划仍 untracked |
| G6 | 状态里 accepted、completed 的含义没有和“已有 PR/已合并”绑定 | 状态机 | 汇报时容易把“处置完成/模块通过”说成交付完成 |

本地 Review 应保留：它是对固定 SHA 的技术门槛，用来挡住不合格代码。缺的是它下游的 **PR 层审查**：以 GitHub PR 为载体，由用户（或用户指定的审查者）看整体 diff、对 main 的集成影响和取舍，决定是否合并。

## 2. 目标规则（建议）

1. **有合格开发就有 PR**：本地 Review PASS + Product 验收后，必须推送并开 PR，进入 `pr_review`。只有“合入会破坏 main”才不发可合并 PR，且要在计划拓扑里写明理由；这种情况仍开 **Draft PR（标注不可合并）** 供审查。不再出现“accepted 但没有 PR”。
2. **IssueWriter 不再自动合并**：发布与合并拆成两个独立会话。发布会话推送、开 PR（ready for review），回写 Issue 后就退出。合并会话只在用户给出合并批准后才启动。
3. **PR 发现回写 Issue**：PR 上的变更要求由 IssueWriter 写回对应 Issue（见 §4），再由新的 Dev attempt 修复，新的本地 Review 复审新 SHA，推到**同一个 PR**，回到 `pr_review`。
4. **术语与状态绑定**：Review PASS 只说“本地审查通过 @SHA”；accepted 只说“Product 验收”；只有 `merged` 才算入库；只有 Issue 全部验收项完成才 `completed` 并关票。

## 3. 状态机（替换 README 第 113 行）

```text
planned → awaiting_approval → queued → starting → ready
→ dev_running → review_running → accepted
→ publishing → pr_review(AI pr-review 会话) ──PR_PASS@head──→ awaiting_merge_approval ──(用户“合并 #N”)──→ merge_pending → merged → issue_written → cleanup_pending → completed
                  │
                  └─(PR_CHANGES_REQUESTED 或用户 PR 评论)→ pr_changes_requested → issue_updated → dev_running(新 attempt) → review_running → accepted → publishing(同一 PR) → pr_review
```

- `awaiting_merge_approval` 不占用任何角色会话和额度。Product 在恢复时、每轮 turn 结束前、看板重写时读一次 PR 状态（reviews、comments、head），不常驻轮询；这类 PR 在看板“待用户处理”中列出。
- 计数分开：`repair_rounds`（本地 Review 返工）和 `pr_repair_rounds`（PR 返工），各自最多 2 轮，超过交给用户。
- 任何新 push 都会让此前的合并批准失效（与“head 变化旧 PASS 失效”一致）。

## 4. 角色交接改动

| 角色 | 改动 |
|---|---|
| Review（本地） | 不变：固定 SHA、只读。报告中注明“本地审查，非 PR 审查”。 |
| PR 审查者（AI，用户决定） | 每个 PR 进入 `pr_review` 后，Product 自动开一个独立的 `pr-review` 模式 Review 会话。它不能是该 PR 的本地 Review 会话，最好也不复用同一套审查技能。审查对象是 `gh pr diff`、PR 相对**当前 main** 的 merge-base 与集成影响、PR 正文与 Issue 验收是否一致。结论为 `PR_PASS@head` 或 `PR_CHANGES_REQUESTED`，以 PR 评论发出（不 approve，不合并），报告落盘后会话关闭。用户也可以在 PR 上追加评论，Product 视同变更要求。 |
| IssueWriter·发布 | 推送 → 按标记查重 → 创建/更新 PR（直接 ready for review，或按 §2.1 用 Draft）→ 在 Issue 上写“PR #N 待审 @SHA”→ 报告 → 退出。**不合并**。 |
| IssueWriter·回写 | 由 Product 派发（收到 PR 变更要求后）：把 PR 发现整理到 Issue 正文中的受控区块 `<!-- tmog-pr-findings:start/end -->`（只改这个区块，原文不动），并附一条链接到 PR 评论的 Issue 评论 → 退出。需要把 issue-writer.md 中“不更改 Issue 正文”改为“只改受控区块”。 |
| IssueWriter·合并 | 只在收到用户合并批准后启动：按 §8 第 1 条的合并门槛逐项核对，然后 `gh pr merge --merge --match-head-commit`，回写 Issue，满足全部验收项时关票，然后退出。 |
| Dev | 修复合同来源增加“Issue 受控区块 + PR 评论链接”。在**原任务分支**上追加正常提交（不新开分支、不 force），使同一 PR 自动更新。 |
| Product | 新增：PR 状态读取、`pr_changes_requested` 判定、派发回写和修复、看板 PR 列显示“待审/待修/待合并”。“待用户处理”中列出所有处于 `pr_review` 的 PR 链接。 |

会话生命周期不变，仍然是“一阶段一会话、用完即关”：发布、回写、合并是三次互相独立的 IssueWriter 会话；AI pr-review 也是一次性会话，执行时存活，报告落盘后关闭。只有在等待外部结果或用户合并指令（`awaiting_merge_approval`）的期间，本任务没有任何会话存活。

## 5. 计划文档与部分交付

- 计划类交付（含路线图、澄清稿）在交付验收后，按批次由 Product 开 `docs/plans-<日期>` 分支，由 IssueWriter·发布开 PR，同样进入 `pr_review`，由用户合并。
- 子任务（例如 #17 的 17S）各自开 PR，正文写 `Part of #17`，不用 Closes/Fixes；Issue 保持 open，直到全部子 PR 合并且整票验收完成。

## 6. 需要修改的文件（批准后实施；`.claude/` 可直接提交 main）

- `.claude/agent-team/README.md`：状态机（第 113 行）、§PR 第 2–6 条、合入方式中“GitHub 审批”一句改为“用户合并批准”、看板任务表 PR 列含义。
- `.claude/agents/issue-writer.md`：拆分发布/回写/合并三种合同；删除“满足门槛自动合并”；放开 Issue 正文受控区块。
- `.claude/agents/product.md`：第 6–7 条改为“放行发布 → pr_review → 按用户批准放行合并”；增加 PR 返工路径。
- `.claude/agents/dev.md`：修复来源和“本地审查”措辞，改动很小。
- `.claude/agents/review.md`：增加 `pr-review` 模式（审查对象、PR 评论权限、不 approve/不合并）。对应的 Review settings 需要允许 `gh pr comment`，这项要由用户确认，不自动放宽。
- `docs/agents/issue-tracker.md`：不改（PRs as request surface 仍为 no；PR 审查只针对本流程自己的 PR）。

## 7. 历史任务（只记录适用方式，本方案不授权执行）

| 任务 | 新规则下的处理 | 需要用户另行授权 |
|---|---|---|
| #17 17S @30eec4db | 符合“有合格开发就有 PR”，可开 `Part of #17` PR 进入审查；Review 列出的非阻塞遗留可以直接作为 PR 评论 | 是 |
| 17 份未入库计划 | 批次 docs PR | 是 |
| #13 | 原 A 的覆盖缺口未闭环，不满足 accepted，不发 PR | 是（先补齐验收） |
| #6 封存 / #11 暂停 | 保持现状 | — |
| 6 条未合并分支 | 不删除 | — |

## 8. 用户决定（2026-11-02，Opus 会话 AskUserQuestion）

1. 合并信号：用户在 Product 终端明确说“合并 #N”，**N 是 PR 编号，不是 Issue 编号**。合并门槛由 Product 在开 IssueWriter·合并会话前核对，IssueWriter 在合并前再核对一次，需同时满足：
   - PR 当前 head = 本地 Review PASS 绑定的 SHA = 有效 `PR_PASS` 绑定的 head；
   - `PR_PASS` 审查时所用的 main 基点等于当前 origin/main。main 已前进时，由 Product 按 README §PR 第 4 条重新评估；需要更新分支时，由 Dev 正常提交，再走本地 Review 和 pr-review，旧 PASS 和用户合并指令一起失效；
   - 没有未处理的用户 PR 评论，没有冲突；必需 CI（目前仓库没有 CI）已满足。
   
   任何一项不满足都不合并，回报用户。
2. PR 审查者：由 AI 做 PR 审查（独立 `pr-review` 会话，见 §4）。最终合并仍需要第 1 条的用户信号。
3. 部分交付：一律开 PR，正文写 `Part of #N`。计划文档按批次开 docs PR。
4. PR 发现回写：IssueWriter 只改 Issue 正文中的 `tmog-pr-findings` 受控区块，并附评论链接。

完整闭环：Dev → 本地 Review → Product 验收 → IssueWriter·发布（PR）→ AI pr-review →（变更要求 → IssueWriter·回写 Issue → 新 Dev attempt → 本地 Review → 推到同一 PR → AI pr-review）→ PR_PASS → 用户“合并 #N” → IssueWriter·合并 → 关票（满足全部验收项时）。

## 9. 定稿（用户 2026-11-02 第二次指令，取代 §8 第 1 条）

用户指令：全部决策由 Product 作出，一律选推荐项、不问用户；开发流程不需要人工确认；最终发布的成品由用户验收；放开 Review 的 `gh pr comment` 权限；流程要固定写进各角色的 md；由 Opus 会话负责实施。

- 合并：AI pr-review 给出 `PR_PASS`，且合并门槛（三方 head 一致 + main 基点 + 无未处理意见和冲突 + CI）满足后，Product 自行放行 merge，不需要用户说“合并 #N”。
- 新增状态 `awaiting_user_acceptance`：Issue 的全部 PR 合并后进入该状态，用户在 Product 终端说“验收通过 #N”（N 为 Issue 编号）后才关票；验收不通过时回写 Issue 并开新的修复任务。
- 已实施：`.claude/agent-team/README.md`，以及 `.claude/agents/{product,plan,dev,review,issue-writer}.md`；新建 `.claude/agent-team/settings/review.json`（被 Git 忽略；在原模板基础上允许 gh pr view/diff/comment，禁止 merge/review/edit/close/ready/push），并将 config 的 Review_Setting 指向它。
- 本次未处理的历史任务：#17 17S、17 份未入库计划、#13、#6、#11，以及 6 条分支。它们不在本次实施范围内，需要用户另行指定。
