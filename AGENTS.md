# TMOG-Public

对 Windows 应用 "Task Manager v1.1.0" 的逆向分析工程（原始文件与补丁文件对比）。

## 计划文档规则

- 所有计划文档（含计划模式草稿、设计方案与实施计划）必须放在当前工程的 `doc/plans/` 目录下。
- 禁止将计划文档写入用户目录的 `.claude/plans/` 或其他工程外目录。
- 技能的默认计划路径与此规则冲突时，以本规则为准。

## 工具链

逆向分析使用 REA（MCP 工具集）。入口技能：`reverse-engineer-anything`。

## 团队协作与独立审计

团队采用 **DeepSeek Harness（DSH）Agent Teams**：当前会话是 Lead（原 Product），全程 Worker 与专项角色是可寻址的队友或子代理，工单与写范围记录在 DSH 共享任务板。启动团队、指定或恢复 Ticket、请求专项 Plan/Review/IssueWriter、交付 PR 或清理 worktree 时，必须读取 `.dsh/team/README.md`。角色提示在 `.dsh/team/roles/`；本地配置 `.dsh/team/config.json` 须为 `schemaVersion: 3`；运行资料在主工程 `.workflow/`。Worker 全程负责同一工单，Lead 只接单、路由与交付，专项角色按需使用，不走固定流水线。用户给出总目标计划，并明示授权自动完成、允许建票/发布 PR/低风险合并/关子票时，按 `.dsh/team/program.md` 进入 Program 模式（拆解→建票→开发→审查→PR→低风险合并→关子票）。只有 Lead 能创建队友；队友使用 fresh 上下文，派发必须自包含。

建立规则不授权自动恢复历史功能、改变权限、安装工具或发布 GitHub 内容。原始用户授权限定范围，明确 stop/等待确认优先于普通跟进；新模型不自动继承旧 Product 的全权扩大范围/合并授权。

用户主动调用 TeamReview 审计团队流程、技能使用或跟进改进建议时，必须读取 `.dsh/team/team-review.md`。TeamReview 独立于 Lead，仅用户管理；不自动运行，不自行整改或改变技能策略。

`.claude/agent-team/` 与 `.claude/agents/` 是 Claude Code + Orca 的历史实现，保留供查阅，不再作为执行规则。

## Agent skills

### Issue tracker

Issues 在 GitHub Issues（`wanggan768q/TMOG-Public`）追踪，使用 `gh` CLI。See `docs/agents/issue-tracker.md`.

### Triage labels

五个标准 triage 角色使用默认标签字符串（needs-triage / needs-info / ready-for-agent / ready-for-human / wontfix）。See `docs/agents/triage-labels.md`.

### Domain docs

Single-context 布局：根目录 `GLOSSARY.md` + `docs/adr/`（按需惰性创建）。See `docs/agents/domain.md`.
