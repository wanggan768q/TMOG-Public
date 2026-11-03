# 现有 Agent 团队改造成 dsh-superagent 工作方式

> 本计划取代本文件上一轮“部署原生 DSH”的错误方向。用户明确要求修改 `.claude/agent-team/README.md` 与 `.claude/agents/`，保留 Claude/Orca 执行环境；不安装 DSH。

**目标：** Product 变为接单/路由的主 Agent，Dev 变为对一张 Ticket 全程负责的 Worker；Plan/Review/IssueWriter 按需要提供专项服务，不再是固定流水线。

**参考：** deepseek-ai/dsh-superagent-prototype，固定 SHA `6337fc823ce20251c8de8085948165c81aaa701e` 的 domain、authorization、execution、orchestrator/worker/team prompts。复用行为，不声称拥有其数据库、自动订阅、HTTP 面板、槽位强制器或权限沙箱。

## 实施范围

- 重写共享团队合同和 product/dev/plan/review/issue-writer 六角色的边界；team-review 保持用户独立管理，更新审计术语。
- 更新 config.example.json、check.ps1 和最小 check.tests.ps1：统一 maxWorkers=3、eval.mode=observe，保留 Claude settings/worktree 适配字段；老配置明确要求迁移，不静默解释。
- 更新 AGENTS.md、根 README 和 .workflow/README.md，撤回 DSH 部署入口，删除本次误新增的 tools/dsh-superagent 六文件；历史记录与主工程私有配置保留。

## 关键决策

- 保持 `claude -n Product --agent product` 入口及原角色名，兼容用户终端习惯；行为改为主 Agent + Worker，不新增同义角色。
- Worker 在原 Ticket 的 worktree/分支/PR 上连续调查、实施、验证、请求独立审查、发布及处理反馈；Product 不编技术计划、不介入例行实现、不强制每阶段新开 Worker。
- 计划按任务需要生成，不要求所有 Ticket 先有 Plan、全局 DAG 批准或覆盖全部 OPEN Issue。
- 授权范围不可由 Product 自行扩大；相关用户跟进可恢复同授权任务，显式停止/等确认优先于普通跟进。外部评论/机器人只是上下文，不授予新权限。
- 新配置默认人工合并，与上游一致；不把历史 Product 全权授权自动移入新流程。若用户显式授权某 Ticket 合并，仍须固定 SHA/独立 Review/CI/基点核验，不能绕过 runtime permissions；Issue 关闭仍须用户验收。
- 无固定正常开发返工上限；自动机器人每 PR 每机器人最多三轮，独立审查与 CI 问题按真实推进情况处置。
- 只迁移规则和默认示例，不改主工程 config.json、settings、运行 state 或已有会话。不自动恢复历史任务。

## 验证步骤

- [x] 写最小自检并观察新版配置检查尚不存在时失败。
- [x] 写新版示例与检查，验证模式、worker 上限、模型、旧配置拒绝、独立 TeamReview 就绪检查。
- [x] 重写共享合同/角色及上下文入口，核对无残留固定流水线和原生 DSH 入口。
- [x] 执行新自检、配置静态检查、diff --check 和工程 CTest。
- [x] 独立审查变更；报告行为迁移与真实多会话执行未验证的边界。不提交、不推送。

验证结果：六个角色 tools 与 c577979 完全一致；新增自检先 RED 后 GREEN，覆盖按需角色预检、非法模式/模型/预算/旧配置与 TeamReview 独立就绪门槛。独立审查发现全角色预检阻塞已修复。CTest 3/3 与 diff --check 通过，Qt 未发现。实际团队运行、主工程私有配置迁移、GitHub 操作均未执行。
