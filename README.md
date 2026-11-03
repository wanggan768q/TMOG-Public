# TMOG-Public

Windows Task Manager 逆向分析与重建工程。

多 Agent 团队仍运行在 **Claude Code + Orca**，采用借鉴 dsh-superagent 的主 Agent / Ticket Worker 工作方式：Product 接单与路由，Dev 对工单全程负责，Plan/Review/IssueWriter 按需提供专项协作。不是部署 DSH，也不是固定角色流水线。

入口：`claude -n Product --agent product`。运行规则见 [.claude/agent-team/README.md](.claude/agent-team/README.md)，本地配置按新版 `config.example.json` 显式迁移；未配置、未授权不启动历史任务。TeamReview 始终只由用户管理。
