# 执行进度目录

本目录是 DSH Agent Teams（Lead + Ticket 队友）的本机持久化入口，不是自动调度服务。只入库本 README，运行资料保持 Git 忽略。

Lead 按 `.dsh/team/README.md` 在 `<run-id>/` 写 `schema_version=3` 的 `state.json`/`events.jsonl`，并维护 `.workflow/BOARD.md`；Program 模式另写 `<run-id>/program.json`（Program Mandate，字段见 `.dsh/team/program.md`）。Worker 与专项成员只写自己的报告和 `ops.jsonl`。新状态不再记录活动槽/终端字段，所有者用队友 target/name，工单用任务板 task id；历史 `schema_version=2` 记录原样保留、只读兼容。DSH 共享任务板记录当前会话的工单与写范围，但跨会话恢复以本目录磁盘记录为准。记录 Ticket/Mandate/Assignment、所有者、输入读标记、线程关联、stop/hold、版本/PR/验收及资源。副作用结果未知先核实，不因重启重复编辑、发布或合并。

恢复须明确用户授权或原授权内相关用户跟进；人工 stop/等确认须明确解除。旧 `schema_version=1`、`.claude` 历史路径与旧 Claude 团队记录保留，恢复时核实并登记映射，不改写原资料，不继承旧自授范围/合并规则，不自动恢复其他历史票。

TeamReview 仅用户调用，按 `.dsh/team/team-review.md` 写独立审计状态、报告和台账，不改 Lead 状态，不受 Lead/Worker 管理。它审计当前规则与历史适用版本的真实证据，不因读到进度而启动整改。

主工程运行资料不随任务树清理，不包含凭证或配置正文；没有自动备份/跨机器同步，需保存时另行授权。
