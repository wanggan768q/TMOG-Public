# 迁移计划：Claude/Orca 多 Agent 工作流 → DeepSeek Harness 团队协作

**日期：** 2026-11-11
**目标：** 把 `.claude/agent-team/` + `.claude/agents/` 描述的 Claude Code + Orca 团队模型，迁移为 DSH 的 Lead + 队友 + 共享任务板模型。旧资产保留为历史，不覆盖、不删除。

## 1. 现状

- 契约：`.claude/agent-team/README.md`（122 行）；角色：`.claude/agents/{product,dev,plan,review,issue-writer,team-review}.md`。
- 运行纪律：`.claude/agent-team/runtime.ps1`（槽位 Grant/Release、报告发布、证据执行、操作日志）；`.claude/agent-team/check.ps1`（schemaVersion=2 配置 + 角色 frontmatter 静态检查）；`branches.ps1`（只读分支/worktree/PR 表）。
- 运行资料：`.workflow/<run-id>/`（state.json、events.jsonl、报告、ops.jsonl、slots）。
- 环境耦合：`claude -n ... --agent ... --settings ... --model ...`、Orca 终端 handle、Claude ListAgents/SendMessage、活动槽文件锁、技能复制到 worktree。

## 2. DSH 可用原语（本次采用）

| 需求 | DSH 原语 | 说明 |
|---|---|---|
| 主 Agent | 当前 DSH 会话即 Lead | 唯一向用户答复、唯一 spawn 队友 |
| 全程 Worker | `spawn_teammate(context=fresh)` 持久队友 | 一票一队友，可多轮派发 |
| 专项（Plan/Review/IssueWriter） | 一次性 `subagent`，或按需 `spawn_teammate` | 结果回 Lead，由 Lead 路由 |
| 派发/跟进 | `send_message` | 下一步边界送达；发送成功≠已处理 |
| 状态观测 | `list_agents` / `wait_agent` / `interrupt_agent` | 无自动唤醒；无成员可动时 `wait_agent` 立即返回 |
| 工单与授权范围 | `team_task_*` 共享任务板 | subject/description/blocked_by/write_scopes/CAS |
| 大规模扇出（可选） | `workflow` 脚本 | 多独立工单审计/迁移，不是默认流水线 |
| 定时（可选） | `schedule_*` | 仅用户显式要求；不用于团队轮询 |

**DSH 不提供**：按角色指定模型/工具白名单/`--settings`；Orca 终端；槽位硬限；跨会话自动唤醒。契约必须如实写明这些能力边界。

## 3. 目标结构

```
.dsh/team/
  README.md            团队合同（唯一规则来源）
  roles/lead.md        Lead（原 Product）
  roles/worker.md      全程 Ticket Worker（原 Dev）
  roles/plan.md
  roles/review.md
  roles/issue-writer.md
  roles/team-review.md
  config.example.json  schemaVersion=3
  config.json          本地配置，Git 忽略
  check.ps1 / check.tests.ps1
  runtime.ps1 / runtime.tests.ps1
  branches.ps1
  team-review.md       独立审计合同
```

- `.claude/` 保留为历史实现：README 与六个角色各加一行迁移标记，指向 `.dsh/team/`；脚本不删。
- `AGENTS.md` 团队章节改指 DSH；`.workflow/README.md` 改为 DSH 记账口径。
- `.gitignore` 增加 `.dsh/team/` 跟踪例外（`.dsh/skills` 等仍忽略）。

## 4. 关键决策

1. **不覆盖旧资产**：新建 `.dsh/team/`；旧配置/state 原样保留，跨会话恢复以 `.workflow` 磁盘记录为准。
2. **配置 schemaVersion=3**：`executor.maxTeammates`（1–16，默认 3）替代 `maxWorkers`；删除 `eval.model`/`executor.model`/`claude.settings`（DSH 无角色模型与 settings 参数，不伪造）。`dsh.worktreeRoot`、`dsh.mergeMethod` 保留。
3. **槽位退役**：DSH 无硬并发限制，活动槽文件锁不再有执行环境支撑。改为：Lead 按 `maxTeammates` 自查预算；每票一个写者；用任务板 `write_scopes` + `blocked_by` 记录路径冲突与真实依赖。`runtime.ps1` 只保留与执行环境无关的证据纪律（报告发布、证据执行、操作日志）。
4. **角色不再靠启动参数加载**：角色文件是 `spawn_teammate`/`subagent` 的自包含提示来源，行为边界仍是行为约定，不是权限沙箱。
5. **路由收敛到 Lead**：只有 Lead 能 `spawn_teammate`；Worker 需要专项时向 Lead 请求，Lead 建一次性 `subagent` 或专项队友，结果由 Lead 路由回 Worker。
6. **技能路径改为 `.dsh/skills`**：队友共享 Lead 工作目录，通常无需把技能复制进 worktree；在 worktree 另开会话时须先确认技能可用，否则不得宣称已使用技能。
7. **TeamReview 独立性**：优先用户新开 DSH 会话直接执行；退路是用户明确要求时由 Lead spawn 一个 fresh 上下文队友，只转达用户问题、不派整改。
8. **合并与验收边界不变**：默认交付 ready PR 由用户合并；`policy.merge=authorized` 仍须该票用户明示授权并满足固定 head/独立审查/CI 门槛。
9. **state.json 升到 schema_version=3**：新 run 不再写活动槽/终端字段（slot/grant/terminal/tab），所有者用队友 target/name，工单用任务板 task id；历史 v2 记录原样保留、只读兼容。`.workflow/README.md` 同步。

## 5. 验证步骤

- [x] `check.tests.ps1` RED→GREEN（无脚本时 exit 1；角色标记缺失时 exit 1）后通过；非法配置、legacy 配置、按需角色就绪检查被正确拒绝/放行。
- [x] `runtime.tests.ps1` RED→GREEN（旧槽位版 exit 1）后通过；覆盖无槽位证据根越界拒绝、报告不可变、receipt 真实退出码/UTC/摘要、角色日志隔离。
- [x] `check.ps1 -ConfigPath .dsh/team/config.example.json`、本地 `.dsh/team/config.json -Ready`、以及 `-Ready -Role <六个角色>` 全部通过；`schemaVersion=2`、`executor.model`、`eval.mode=auto` 且 `allowInferred=false` 探针均 exit 1。
- [x] 六个角色文件与 README 交叉引用、无乱码、无 Orca/Claude 启动残留；`git diff --check` 通过；旧 `.claude/agent-team/check.ps1` 仍通过（历史实现未被破坏）。
- [x] 独立审查（fresh 上下文子代理）完成并复核修复，见第 7 节。
- [x] 不提交、不推送、不改主工程本地私有配置（只新增 Git 忽略的 `.dsh/team/config.json` 安全默认值）。

## 6. 未验证边界（据实声明）

- 共享任务板跨会话是否持久：未验证；恢复以 `.workflow` 磁盘记录为准。
- 队友是否持有 `team_task_*` 工具：未验证；契约默认由 Lead 记账，队友具备时可自行 claim/complete。
- `subagent`/Agent Teams 依赖 profile 启用：desktop profile 可用，web profile 可能禁用；合同已写明前提与 fallback，未实机验证其他 profile。
- 实际多会话团队运行、GitHub 发布/合并/CI、`branches.ps1` 联网查询：本次不执行。

## 7. 独立审查与修复

独立审查（fresh 上下文子代理，只读）结论 PASS WITH FINDINGS，无 blocker。已修复：

| 级别 | 发现 | 修复 |
|---|---|---|
| major | Worker 角色提示仍要求先读 Assignment 再 READY，与合同“READY 后再发 Assignment”相反 | `roles/worker.md` 改为 READY → 收 Assignment → ACK → 开工 |
| major | 合同把“结束/收口队友”写成可执行动作，但 DSH 无关闭队友工具 | README §9 改为“停止派发 + 任务板 complete + 保留 inactive”，说明 `interrupt_agent` 不删除 durable teammate |
| minor | `roles/lead.md` 说“不启动 TeamReview”，与 README 允许用户明确要求时创建 fresh 队友矛盾 | 改为“不自动启动；仅用户明确要求时创建，只转达用户问题” |
| minor | team-review 两份文件里“谁转达谁”主客体写反 | 统一为“Lead 只把用户问题与决定转达给它” |
| minor | `check.ps1` 未拒绝 `eval.mode=auto` + `allowInferred=false` | 增加校验并加入 check.tests 用例（探针实测 exit 1） |
| minor | `-Ready` 不校验合同正文是否存在 | `-Ready` 校验 `README.md`/`team-review.md`，check.tests 增加缺合同用例 |
| minor | README 称 state `schema_version=2` 格式未变，但旧记录含槽位/终端字段 | state 改为 v3 并注明旧 v2 只读兼容；同步 `.workflow/README.md` |
| minor | 两条旧运行纪律被静默删除：10 分钟无 ACK 处置、state 原子替换 | 补入 README §5 消息语义与 §8 state 记录 |
| minor | `branches.ps1` 自称“不改 git 状态”，但默认 `git fetch --prune`；gh 非零退出被当成“无 PR” | 改注释；显式检查 `$LASTEXITCODE` 并降级为 unknown（实测 non-zero → warning） |
| minor | 合同默认 Agent Teams/`subagent` 在所有 profile 可用 | 增加 profile 前提与 fallback 说明 |

修复后重跑：静态检查、`-Ready`（六角色）、两套测试、旧检查、`git diff --check` 均 exit 0。
