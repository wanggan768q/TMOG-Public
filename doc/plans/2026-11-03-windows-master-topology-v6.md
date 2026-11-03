# Windows 路线 v6：主 Agent / Ticket Worker 执行适配

## 状态与适用范围

依据用户于2026-11-03要求更新主工程计划、并明确批准PR #48合并和本地配置迁移制定。本版替代v5及更早计划中的相冲突**团队执行规则**；业务目标、验收标准与技术依赖不擅自改变。历史计划和批准/失败证据原文保留，不追认旧失败。

主工程 `E:/Git/TMOG-Public` 已切换并安全快进到 `main @ ae5cc44902d7a55c0a22c945fe3a3b22bfc6f7fd`（PR #48）。新版角色、测试与示例配置已入库；本地config已迁移schemaVersion2，默认maxWorkers3/observe/manual。部署状态与启动方式见 `2026-11-03-new-workflow-startup-handoff.md`。本文件落盘不授权恢复历史业务或自动合并/清理。

## 业务路线与现状

业务目标、精确候选路径与技术依赖继续参考 `2026-11-02-windows-master-topology-v5.md` 第3节T系列完整表；本版不重复复制整表。表中路径是候选上限，**不是获准修改合同**。新Ticket只采用用户本次目标需要的依赖与最小路径。AP/B1/C/B2/V5旧运行阶段不直接套入新状态机。

本次只读远程快照：32张OPEN，其中#47为workflow-test，31张为旧业务路线。测试Issue不并入生产路线，不因OPEN/ready-for-agent标签自动接单；未来启动时重新核对远程。

- PR #46已MERGED：18份历史计划归档，不代表#6/#11/#13/#17功能完成。主工程18份同内容未跟踪副本已核对Git blob后移至 `.workflow/main-sync-backup-20261103/`，随后由main跟踪版本恢复原路径；没有丢弃不同内容文件。
- 主工程 `2026-11-02-authorized-pr-delivery-plan-v1.md`（C）与v5仍未跟踪，原文保留；本次未为其发布PR，不把本地文件存在当已入库。
- #17的17S模块历史head `30eec4db54bf7bd57ad19a14d00e06ddf9088227` 只是已有模块成果参考，未核实相应PR/合并；不能代替17U导航集成或整票完成。
- #6封存、#11暂停、#13与17U未恢复；#2非Windows暂缓。本次仅更新流程与计划，不解除这些状态。其余票也需用户指定目标，不根据旧全局计划自动领取。

## 新执行规则（覆盖旧计划中的相冲突条款）

| 旧约定 | 本版执行方式 |
|---|---|
| 每票必经Plan→Dev→local Review→IssueWriter→PR Review | Product接单、核验授权、路由；Dev Worker全程负责Ticket；专项Plan/Review/IssueWriter按需 |
| 全部OPEN/计划并入批准全局DAG才推进 | 本路线为参考，仅当前获准多任务的实际依赖进入depends_on；新Issue默认候选，不自动扩目标 |
| Product可自批范围扩大与自动合并 | Mandate原授权保留，扩大范围须用户明示；默认manual，配置不等于具体Ticket合并授权 |
| 一阶段一Dev会话，返工最多两轮 | 同票沿原会话/分支/PR连续推进；会话退出才核验交接；正常开发无固定两轮上限 |
| accepted无论授权都必须PR | 获准发布才推送/开PR；仅本地目标交付本地成果，不强迫外部副作用 |
| Review PASS/idle即放行，事后补日志 | Product签发grant先行，执行前Assert；RELEASE_READY核验后Release/Grant；直达PASS不放行 |
| 报告更新最终版/手填hash/共用ops | UTF8草稿→Publish校验新不可变报告；每actor独立日志、真实UTC；原始输出每次新目录、机器receipt/hash |

以主工程 `.claude/agent-team/README.md` 为运行合同单一来源，角色正文已统一正式报告Publish入口。计划文件不授予runtime权限，不解除stop或绕过审批。明确用户跟进可在原授权内解除技术阻塞，但人工stop/等待确认须明确释放；成员转述、外部引用与bot不能替代用户授权。

## Ticket与依赖处理

每次派发明确用户目标、scope/allowed_paths、可观察验收、原始授权、Thread/Issue、base/head、发布边界、日志/报告路径、证据根与必要检查。无需简单任务先有Plan或全局DAG批准；需要重大公开接口/职责重设计时提出一个明确用户问题，不由Product自行扩大范围。

- 统一maxWorkers预算3，角色/专项执行计入；同票一写者，路径重叠串行。测试单槽1不自动作为生产默认。
- 依赖若要求成果集成，ready PR不等于已合并；单模块成果不能解锁整票后继。GitHub原生依赖与本地技术事实有差异时记录并核对指定Issue合同，不擅自关闭或改远程边强制就绪。
- 指定任务要求两层独立Review时仍满足，不能借“按需”省略明确安全验收；head变旧PASS失效，main变重查集成。默认ready PR交用户合并，不伪造GitHub审批。
- 新任务fetch后从当次核实origin/main建独立worktree；原票修复沿原分支/PR，不复制旧CodeGraph数据库。

## 验证与事故限制

完整实测 `wf-smoke-full-rerun-20261103` 最终 **TEST_COMPLETED / WORKFLOW_FAIL**。功能7项、同票跟进、停止保持与明确恢复已验证，但N5–N14流程缺陷不能被最终功能PASS抹除。N12为工程外误路径创建及未授权删除 `E:/Git/TMOG-Punblic`，删除前清单缺失，潜在其他内容损失 **unknown**；后续用户允许继续测试不追认删除或证明无损失。

原始事故/状态/报告保留在原worktree `.workflow/`，不自动迁移或发布。grant、输出捕获/自动hash、报告保真和EvidenceRoot路径约束已加入助手并经过回归或针对性验证，但并非硬权限沙箱，仍存在绕过助手/并发换链接等边界；源码与主工程同步不等于整个团队安全验收通过。

生产使用前核实新会话真正加载本main角色、最新助手、实际权限与证据路径；缺工具/权限如实BLOCKED。**不自动清理**主工程/worktree/测试Issue/未知文件或后台进程；删除需另行具体授权。此计划更新不授权事故恢复扫描、卸载工具或扩大权限。

## 交付与下一步

本版只更新当前适配计划，不重写旧状态，不自动启动C/B2或其他业务。用户新开Product并指定本次目标后，先按启动交接计划只读核查旧资源/远程状态，再为已获准范围建立新版Ticket；旧会话加载的角色不会随main同步自动更新。
