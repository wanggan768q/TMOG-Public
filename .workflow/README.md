# 执行进度目录

本目录是主工程的持久进度入口；当前只建立规则，没有启动实际计划执行。

用户指定任务或要求恢复时，Product 按 `.claude/agent-team/README.md` 创建 `<run-id>/state.json`、`events.jsonl` 和各任务报告。Product 唯一写状态/事件，角色只写指定报告；副作用前先记意图，结果未知先核查，不重复派发、发布或合并。

恢复时把执行编号或目录交给 Product，例如：

> 读取 .workflow/run-001 的状态，按共享合同核对后继续；不要自动执行其他计划。

独立 TeamReview 只由用户调用，其授权、会话记录和长期改进台账在 `team-review/`；单次审计报告按 `.claude/agent-team/team-review.md` 保存并关联源执行。它不改 Product 状态/事件，不受 Product 管理。任务报告的技能使用清单按共享合同记录，自报与工具证据分开；缺失写未知。

运行文件保持 Git 忽略，保留在主工程，不随任务 worktree 清理。它们只提供本机持久化，不自动备份或跨机器同步；删除主工程或进度文件会丢失恢复依据。报告不包含凭证或 settings 正文。
