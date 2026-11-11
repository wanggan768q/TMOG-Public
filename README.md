# TMOG-Public

Windows Task Manager 逆向分析与重建工程。

多 Agent 团队运行在 **DeepSeek Harness（DSH）Agent Teams**，采用借鉴 dsh-superagent 的 Lead / Ticket Worker 工作方式：当前会话是 Lead（原 Product），负责接单、授权与路由；Worker 对一张工单全程负责；Plan/Review/IssueWriter 作为按需专项角色，由 Lead 以一次性子代理或 fresh 队友创建。工单与写范围记录在 DSH 共享任务板，运行资料在主工程 `.workflow/`。不是固定角色流水线；当用户给出总目标计划并明示授权自动完成、允许建票/发布 PR/低风险合并/关子票时，按 Program 模式连续推进（见 `.dsh/team/program.md`）。

入口就是 DSH 会话：规则见 [.dsh/team/README.md](.dsh/team/README.md)，角色提示见 [.dsh/team/roles](.dsh/team/roles)，本地配置按 `schemaVersion: 3` 的 `config.example.json` 显式迁移；未配置、未授权不启动历史任务。TeamReview 始终只由用户管理。

`.claude/agent-team/` 与 `.claude/agents/` 是 Claude Code + Orca 的历史实现，保留供查阅，不再作为执行规则。
