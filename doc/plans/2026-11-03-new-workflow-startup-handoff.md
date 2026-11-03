# 新工作流主工程启动与交接计划

## 当前部署事实（2026-11-03）

- PR #48已MERGED：https://github.com/wanggan768q/TMOG-Public/pull/48 ，merge SHA `ae5cc44902d7a55c0a22c945fe3a3b22bfc6f7fd`。
- 主工程 `E:/Git/TMOG-Public` 当前main已安全fast-forward，含工作流、runtime助手、测试用例与示例配置。原工作流分支/worktree保留，没有强推或删除。
- 主工程旧config备份：`.workflow/main-sync-backup-20261103/config-v1.json`；18份与远程blob一致的未跟踪计划副本和manifest同目录保留，不同内容/无远程对应计划未移动。
- 本地 `.claude/agent-team/config.json` 已显式迁移schemaVersion2，settings路径保持原设置，无权限修改；`executor.maxWorkers=3`、model=null、eval.mode=observe、allowInferred=false、merge=manual、botReviewRounds=3。该文件Git忽略，未上传凭证/设置正文。
- 本次新增路线：`2026-11-03-windows-master-topology-v6.md`。旧v5和授权PR交付v1原文保留，其冲突团队规则由v6/新合同覆盖；业务依赖、封存与暂停状态不改变。

## 启动前预检

从主工程运行：

```powershell
pwsh -NoProfile -File .claude/agent-team/check.ps1 -Ready -Role dev
pwsh -NoProfile -File .claude/agent-team/check.ps1 -Ready -Role review
pwsh -NoProfile -File .claude/agent-team/runtime.tests.ps1
```

需要Plan/IssueWriter/独立审计时，分别加 `-Ready -Role plan|issue-writer|team-review` 检查实际角色设置；不用的角色不会阻塞Worker。通过仅证明文件/脚本检查，不代表真实多会话或权限沙箱已通过。

## 新会话与旧执行

启动入口仍为 `claude -n Product --agent product`，但必须新会话实际读取main的AGENTS、共享合同、config及本计划。已有Product或测试会话名字占用时先核对身份，由用户安排交接/命名，不能重复创建写者，也不自动关闭他人终端。

旧Product读取过的合同不会因文件更新自动刷新，不能只发送“继续”后假定已经换成新工作流。历史run/BOARD内容可能过期；保留原state/events，先核实真实Git/PR/会话/hold/权限拒绝，再在新run记录映射。绝不代其他会话执行被拒操作，不自动解除#6封存/#11暂停/#13及17U未授权。

新Product仅接单/核验授权/路由，Dev对Ticket全程负责；不重新创建固定Plan→Dev→Review→IssueWriter流水线。grant中EvidenceRoot固定本run允许根，路径外拒绝；正式报告由UTF8草稿Publish校验，新版本不可覆写；检查用Invoke-TeamCheck保存新目录原始输出/自动hash，不用ExecutionPolicy Bypass、Pester/旧shell替代本测试普通断言要求。

## 推荐首次输入（只读交接，不恢复开发）

> 读取 `doc/plans/2026-11-03-new-workflow-startup-handoff.md` 和 `doc/plans/2026-11-03-windows-master-topology-v6.md`，确认已加载当前main的新版主Agent/Worker合同和schemaVersion2配置。仅只读核对旧run、现有worktree/分支/PR与暂停状态，给出可继续的目标及缺权限项；不要恢复业务、改共享状态、发布GitHub内容、合并、清理或关闭会话。等我明确指定本次目标。

随后用户明确指定目标，例如“仅处理#17已有17S模块的发布准备，不开发17U；先核对已有成果，是否允许push/PR由本次指令明确”。该例只是指令形态，不是本计划的发布授权。默认manual merge；授权发布不附带合并/关闭Issue，扩大范围需用户明示。

## 不得误报的事实

- C计划/v5仍本地未跟踪，不等于已发PR；PR #46已merged只代表历史归档。
- 测试#47保持open并标workflow-test，不并入生产backlog，也不自动关闭/删除。
- 完整测试已执行但WORKFLOW_FAIL，N12删除前内容与潜在损失unknown；后续修复/合入不是无损失证明。
- 生产目标未由本次更新授权；本计划没有启动新的Product或Worker，没有改变远程Issue依赖/标签/状态。

## 本次更新交付边界

新版工作流已入main；本地配置迁移和计划落盘后可供用户使用。新建两份计划尚未自动提交/推送，用户要求提交时再走正常PR。私有备份和运行资料不入Git。主工程旧BOARD不由当前会话冒充Product重写，用户新会话只读交接时核对其过期状态。
