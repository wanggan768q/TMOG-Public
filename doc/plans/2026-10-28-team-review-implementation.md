# TeamReview 实施计划

**目标：** 增加只由用户主动调用、独立于 Product 的团队流程审计角色，记录技能使用证据与长期改进建议，不自动实施优化。

**范围：** 仅修改角色、文档、本地/示例配置与静态检查，不启动会话、审计实际任务、操作 GitHub、改变技能复制策略或权限设置。

## 文件与步骤

- [x] 新增 `.claude/agents/team-review.md` 和 `.claude/agent-team/team-review.md`：定义用户授权、单例、独立会话登记、报告、改进台账及证据门槛。
- [x] 修改共享 README/Product/AGENTS/workflow README：明确自动闭环仅包括原五角色，TeamReview 独立；统一技能使用报告字段，不新增 hooks/全局历史读取。
- [x] 本地及示例 config 增加空 `TeamReview_Setting`；单例固定，不增加 Max_TeamReview。
- [x] check.ps1 纳入第六角色；TeamReview 使用独立文档指针和写审计资料权限，不要求 Product 的 INTENT_RECORDED。`-Ready` 保持原自动团队四个设置预检，`-Ready -Role team-review` 仅检查审计设置，避免审计配置阻塞开发及开发设置阻塞审计。
- [x] 静态检查通过；两个启动预检在空设置时分别拒绝 Dev_Setting 和 TeamReview_Setting；`git diff --check` 通过。

## 验收边界

TeamReview 仅用户启动/关闭/指定范围，Product 可收到报告路径但不派发、排队、关闭或指挥。默认读取指定范围已有记录，联系成员需用户再批准。报告区分已证实、待验证、证据不足；技能来源/版本未知如实记录，成员自报不冒充工具证据。优化和新增/合并/精简成员建议须用户另行批准并指定执行者；复核也须再次主动调用。审计报告可以写自己的目录，不改 Product state/events。

长期台账 `.claude/workflow/team-review/`；单次报告位于对应执行的 team-review 子目录，多执行报告位于独立审计编号目录并引用来源。恢复不自动开始新审计；本次文件授权不等于实际审计授权。

## 检查记录

- 默认静态检查退出 0：六个角色与配置合同 PASS。
- `-Ready` 退出 1：Dev_Setting 空，预期拒绝。
- `-Ready -Role team-review` 退出 1：TeamReview_Setting 空，预期独立拒绝。
- `git diff --check` 通过；本地 config 与审计 ledger 保持忽略，新角色与专用合同可跟踪。
- 未启动审计/终端、未生成真实审计台账或修改技能复制策略，未提交、推送或运行 GitHub 写操作。检查只覆盖静态结构和空设置拒绝，不证明权限隔离或真实协作可用。
