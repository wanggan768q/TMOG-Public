# TMOG-Public

对 Windows 应用 "Task Manager v1.1.0" 的逆向分析工程（原始文件与补丁文件对比）。

## 计划文档规则

- 所有计划文档（含计划模式草稿、设计方案与实施计划）必须放在当前工程的 `doc/plans/` 目录下。
- 禁止将计划文档写入用户目录的 `.claude/plans/` 或其他工程外目录。
- 技能的默认计划路径与此规则冲突时，以本规则为准。

## 工具链

逆向分析使用 REA（MCP 工具集）。入口技能：`reverse-engineer-anything`。

## 团队协作与独立审计

启动 Product、制定或修订计划、派发 Dev/Review、发布合并 PR、回写 Issue、恢复进度或清理任务 worktree 时，必须读取 `.claude/agent-team/README.md`。角色定义在 `.claude/agents/`，本地配置为 `.claude/agent-team/config.json`，执行进度在当前主工程 `.workflow/`（不放 `.claude/` 下：Claude Code 把 `.claude/` 视为受保护路径，每次写入都要审批）。建立流程不授权自动恢复历史功能开发；先取得用户指定任务或继续指令。

用户主动调用 TeamReview 审计团队流程、技能使用或跟进改进建议时，必须读取 `.claude/agent-team/team-review.md`。TeamReview 独立于 Product，仅用户管理；不自动运行，不自行整改或改变技能复制策略。

## Agent skills

### Issue tracker

Issues 在 GitHub Issues（`wanggan768q/TMOG-Public`）追踪，使用 `gh` CLI。See `docs/agents/issue-tracker.md`.

### Triage labels

五个标准 triage 角色使用默认标签字符串（needs-triage / needs-info / ready-for-agent / ready-for-human / wontfix）。See `docs/agents/triage-labels.md`.

### Domain docs

Single-context 布局：根目录 `GLOSSARY.md` + `docs/adr/`（按需惰性创建）。See `docs/agents/domain.md`.
