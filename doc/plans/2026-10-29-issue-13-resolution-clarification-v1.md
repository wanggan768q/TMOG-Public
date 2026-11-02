# Issue #13 固定 SHA 审查遗漏范围内澄清计划 v1

> 本文件为范围内问题澄清，不是批准书或开发派发。原批准 v1 原样保留。新增实现、豁免原必需验收或改变关键方案的提议均为 **awaiting_approval**，由 Product 转达用户；本会话不执行。

**Goal：** 核对 Review 正文遗漏、旧授权及既有证据，给 Product 提供 A 的计划/权限判据，不裁定独立技术 Review PASS。
**Architecture：** 只读冻结代码与局部运行记录；复用既有日志，不重建、不重跑。区分“代码事实”“成员自报”“本次工具核对”“人工门槛”。
**Tech Stack：** 现有 C++/Qt/CMake；CodeGraph v1.6.2，Read/Grep、只读 Git/Get-FileHash；无新增依赖。
**Spec：** `doc/plans/2026-10-28-issue-13-recovery-plan-v1.md`，SHA-256 `2fcf58af3227267b6d72fa3ac7e913122bb3c016f3bff28cff3db5201db8f142`。

## 1. 身份、范围、依赖与修改边界

- run_id=`product-20261029-recovery`；task_id=`issue13-resolution-clarification`；attempt=1；role=plan；协调者 Product [d3936c]；关联 issue13-recovery-dev attempt2/repair_round1；Issue #13。
- 主工程 `E:/Git/TMOG-Public`；代码只读树 `E:/Git/TMOG-Public-WorkTree/issue-13-modal-checks-20261028`。
- base=`54596d28d96ac497b6100901dcd093e5954ef07c`；固定 head=`9ceef0c6252f6da4b82c16009a7c8384af25981b`；上一 FAIL=`cbd06d9953a827b6055c0731aa28e6a50eb656c2`。
- A 已批准：最小接口、开发/构建、fake/offscreen；B 与维护者人工确认未闭环，不阻塞独立 A 的范围内判断，但整票不可关闭。
- 本次允许新建：本文件、`.claude/workflow/product-20261029-recovery/issue13-resolution-clarification/plan-1.md` 与 `plan-1.ops.jsonl`；只创建该唯一报告目录。
- 不修改原批准计划、旧报告、state/events、业务代码、Git/GitHub/settings；不写 TEMP/构建目录，不运行目标/测试、清理或杀进程。以下修复建议不扩展当前写域。
- 依赖：Review 原文应说明全量 Spec 条目；用户豁免/新增实现须 Product 另取授权；代码 head 改变须重新绑定证据及独立审查。

## 2. 问题矩阵：计划条款、证据及最小下一步

源码行号均来自固定工作树；“计划 L”指原批准计划 Read 行号。

| ID / 来源 | 确切要求及代码/记录 | 等效性与影响 | 最小下一步 / 是否重新批准 |
|---|---|---|---|
| P1 帧序号，resolution §8 | 计划 §4 L82：枚举器序号从1递增；L127输出 seq。测试 L98–118 只返回队列帧并写 wall_clock_ns；L445/499 明确 round=1/递增，L461/511 输出轮次；无枚举结果序号字段或 seq 输出 | 实际 driver 轮次可以证明三轮投递的逻辑序列，不等于枚举器序号/消费结果 seq。属于原 A 文本的部分未满足，而非新增要求；不得把“按需未来补齐”当批准豁免 | Product 取得 Review 对该条的明确逐项判断；若要求严格补齐，在另授权合同内补最小消费序号/日志；若用 round 替代并取消原结果 seq 要求，属改变验收，awaiting_approval |
| P2 Y 当前选择变化，resolution §8 | 计划 §4 L122：Y“额外当前选择/顺序变化”；L113视图位置变化。测试 L400–415 仅模态前选 A 并核 PID；L493–496 模态内仅 sort，未 select/setCurrent 到 B、也无 modal currentIndex/identity 变化断言。生产 MainWindow L151–163 restore_selection 按原身份恢复 A | 每轮 PID order 变化证明行集/排序变化，不证明 current selection 从 A 改为其他身份；排序本身不能当同义替代。Y 的反事实选择变化输入确实缺失，是独立 A 的真实计划门槛，不由 R/X 复用/退出场景替代 | 暂不能据当前材料认定原 A 全验收闭环。另经 Product 授权补 Y 模态内程序化选择 B、断言当前身份为 B、Yes仍只调用原 A；不改生产值冻结算法。当前无实现授权不执行；若直接删除/豁免此条则 awaiting_approval |
| P3 心跳分段覆盖（本次源码核对） | 计划 §4 L122：结束投递前后继续；L115异步回调/安全收束。测试 L535 保存 hb_before，L607–609 在模态返回及 pump300 后仅断言 ticks>hb_before | 这证明整个区间至少有一次心跳，不分别证明投递后推进；模态内已增的 tick 可令该 check 绿。非GUI线程断言 L592–594 与生产异步调用提供静态支持，不能替代精确投递后动态断言 | 请 Review 明确原条是否已被其他既有证据满足；本次未见分段计数证据。最小补强为 modal返回后保存新基线再等待心跳增量；豁免该验收的提议 awaiting_approval。不将此项冒称为子代理缺失项2或4 |
| P4 wall_clock 单调（本次核对） | 计划 L82“wall_clock_ns真实单调递增”；测试 L112–118 使用 steady_clock::now().time_since_epoch().count() | steady_clock 给单调时钟，但 count 单位不由函数名保证为 ns，也不保证每次严格不同；本次未执行时钟测量。实际帧相隔事件循环提供支持，非专门递增断言 | 作为实现/证据限制交 Review 判断，不能据此断言现行测试失败。若补 duration_cast/递增检查，需另授权；不新增生产修改 |
| P5 missing_partial=4 / not_asked=3 清单未展开，resolution §3/ops第14行 | 报告只给计数，§8明确帧序号/Y两项；未提供4个 missing_partial 的逐项原文与来源 | 无法可靠恢复余两项；不能把本表 P3/P4 擅自指定为原子代理另两项，也不能接受“阻断0”总数替代条款判断 | Product 要求另有授权的 Review 澄清材料展开四项逐项条款/证据/结论。当前只确认两个具名遗漏及本次发现的另外限制，不伪造完整子代理输出 |
| U1 end_confirm 插件路径/校验 | 原计划 L25允许 CMake 测试注册；旧state L2362–2456：006支持性诊断、007对照超时、008限定source修复、plugin_fix_clarification“approved A test-readiness correction”、009四类守卫纠正。当前 CMake L115–160相符 | 属历史已记录的范围内测试就绪修正，不是首次扩大方案；因果仍仅假说，不写“已证明Qt初始化挂起” | 范围内引用旧合同链即可，无需现在追认。授权证据为旧 Product state 记录，不升级为本会话亲见用户批准或动态复现 |
| U2 stale_persistence 属性，resolution §8追认建议 | 旧state L2598–2615：015明确 decision=approved A test-readiness fix；scope=WIN32里复用已校验路径+TIMEOUT120，非Windows不变；016仅新配置不回溯正在运行014；017用户单对象退出授权；018重跑后结果。当前 CMake L167–169；本次 CMake SHA=`0da19732b30093f6eb1d916f4bfbff81145c8717006e26f0f3728280ca0e6996`恰等015记录 | 历史授权和当前文件完全匹配，原断言/测试本体未改；“需 Product 追认”与已存记录冲突 | 范围内纠正引用即可；不进行追认，不把017特殊进程授权迁移至B/新运行，不把120秒属性回溯给014旧运行 |
| U3 manual/idle拒绝 | 计划 §2 L38及§5另批B；旧review-2-supp L99引用入口拒绝 exit2；本次报告为成员引用，不新运行 | 拒绝入口并未实现/执行真实helper；不扩大A危险行为，不足以完成B | 保留未测；无需为拒绝误用补B实现，整票人工门槛单列 |

**核心结论：** 既有静态与动态材料足以支持已实现的真实模态三轮、原身份传递、取消零调用等子项；不足以证明原 A 的 Y 选择变化和严格 seq 条款全部满足。不能仅靠新 PASS 总结、低风险/未来补齐意见放行“原 A 全部完成”。这是验收覆盖判断，不是 Plan 推翻或自行签发技术 Review verdict。

## 3. 三原疑点独立核对与限定

1. **预算死标志：** 原计划 L32要求记录≤16且超限失败。RecordingOps 预算截断与 Yes target_count==1（L582）、C==0（L600）在观察到16记录时必失败，足以否定“达到17次后记录截断本身令当前计数断言假绿”的说法。但计数仅在取样点读取，不能据此泛化保证任意迟到额外调用都捕获；本次没有构造超限运行。死标志不等于已证明当前场景绿是假绿，也不消除 P2。
2. **常规 frame_ok=true：** MainWindow L110→144与 model L74–77证明真实 reset 源，driver逐轮基线/队列与既有三轮日志支持 apply 发生。PID order变化也可能来自上一轮程序化sort，因此不能把 order check 泛化成逐帧精确内容验证。R/X有身份对照；常规轮的精确 seq/输入消费证据仍较弱，P1未因这一非阻断理由自动满足。
3. **R/X未冻结：** 回调 L355–361确会在确认后覆盖变量。但本次关键断言 L555–563位于点击返回后的首次后续 pump（L570）之前；drain L633与最终排空L643更晚，不能反向改变已消费的断言。既有双配置日志在该观察点均 after=0、R reuse=1、X absent=1，支持当前观察点证据。resolution §2把该结论写成“窗口不存在reset源”过强：采样timer依旧存在；empty frame等待20秒与整个场景20秒起点不同，且deadline实际在L650事后检查，不能说deadline必然先触发。可用实测 observation-point 内容，不以不可达/低概率担保。此限定不代替新的技术终审。

## 4. 证据来源、日志时序与层级

- 本次工具实际核实 head、tracked干净、批准计划 SHA；CodeGraph status initialized=true/version1.6.2、complete、pending全0、worktreeMismatch=null，查询显式 projectPath。查询曾截断 run_scenario且一次泛搜返回无关同名源码；没有采用其无关内容，针对未覆盖本体才用 Read L320–656。
- 既有 supp 两份模态日志的当前 SHA分别为 debug `7cb925bbeef48d4314f86088478f931b53c770eed7b0d45cf3683d0a6030df78`、release `25daaeb8689dcc9328e6738a143d739fbe0ca70ce1778082d24c8331b4745b5c`，等 supp §3记录；本次Grep确见三轮、文本/排序PASS、observed_modal=3、after=0、R/X身份观察、heartbeat及Test Passed。debug/release既有EXE SHA分别 `409c694bbb2f7717e5ca3db488b0507dbd6bc14935479b87ba919a0c75eeb193`、`d7fe8db95a766b56710deafc75566c0916689af8478a5070c400d8b16ed14dd5`，等旧记录。
- 上述是本次 **tool_evidence：文件内容/摘要可核对**；测试启动、退出码及作者/编译来源仍引用旧 Review **self_report** 和旧记录，不冒充本次动态复现。hash匹配不证明真实启动先后、固定SHA源码与EXE可重复构建等全部链条。
- resolution ops L1–23的00:01..00:32Z早于 Product记载实际会话约07:42Z（当前state L420–422；会话deadline L585对应）；更有00:06 receipt内 lastIndexed=05:39Z。有效JSON只证明语法结构，不证明真实UTC顺序。精确实际操作时间 unknown，不改/追认该日志，不读全局历史。
- resolution声称“无新构建/运行”与其只读证据核查叙述并不冲突；既有动态日志是 earlier supplement，绝不是 resolution 本次新运行。supp日志时间13:56/13:57本地，与supp ops各UTC条也不能据数字直接证明精确执行排序。
- supp ops L29–30声称迟到Standards已更正，但本次 Read 的 supp正文仍写“未回报”；保留这种报告/receipt不一致。resolution两轴完整回报仍为成员自报，本次不升级Skill/Agent证据级别。

## 5. 可观察验收、只读验证命令与实施顺序

本澄清交付验收：原计划未改；固定head/plan hash一致；问题矩阵区分必需/等效/未知/历史授权；输出仅3文件；真实UTC ops；不宣称新测试或技术PASS；报告摘要≤20行。

已执行/可复核的只读命令（PowerShell，主工程cwd）：

```powershell
git -C "E:/Git/TMOG-Public-WorkTree/issue-13-modal-checks-20261028" rev-parse HEAD
git -C "E:/Git/TMOG-Public-WorkTree/issue-13-modal-checks-20261028" status --short
Get-FileHash -Algorithm SHA256 "E:/Git/TMOG-Public/doc/plans/2026-10-28-issue-13-recovery-plan-v1.md"
codegraph status --json "E:/Git/TMOG-Public-WorkTree/issue-13-modal-checks-20261028"
```

MCP：`codegraph_explore(projectPath="E:/Git/TMOG-Public-WorkTree/issue-13-modal-checks-20261028", query="src/MainWindow.cpp apply_sample start_sample on_end_task src/ProcessTableModel.cpp replace_snapshot", maxFiles=2)`；专用Grep查旧state `issue13.*00[6-9]|issue13.*01[5-8]|stale_persistence`，Read仅 L2414–2477、L2598–2682。不执行编译/CTest/负例。后续严格补验的构建/运行命令沿原计划§6，并须由另有授权的Dev/Review合同限定安全fake子集，不在此重复授权。

- [x] 核固定对象及局部来源。
- [x] 按原批准条款形成矩阵，校正已有授权与时序表述。
- [x] 自查规格覆盖、命名一致、每项来源与最小动作；未知条目不填造。
- [ ] Product记账并决定范围内澄清是否充分；请Review展开缺失清单/给精确覆盖结论，不能把Plan当自审。
- [ ] 若补原A覆盖：用户/获授权协调者另给明确实现合同再执行；本会话不启动Dev。
- [ ] 若豁免P1/P2/必要分段心跳、扩大B或改验收：**awaiting_approval**，用户确认新版本/SHA后方可推进。
- [ ] 独立Review及Product完成原A剩余门槛后才评估A发布；B/第四人工确认仍不迁签，整票保持OPEN。

## 6. 风险、批准待办与版本

风险：把排序当选择变化、把driver序列当枚举结果seq、把聚合PASS当全条款满足、hash当执行时序、Product旧范围内修正当用户扩权、把B人工缺口拿来阻塞独立A。

本版为**范围内澄清**，不改变原验收或批准方案；无需用户批准“事实记录”本身。P1/P2/P3的豁免提议及任何新实施授权未批准、awaiting_approval。本版不能用作对原A未满足项的批准替代，未授予真实进程操作/发布/清理权限。版本v1独立文件，内容SHA由 `plan-1.md` 和 DONE消息记录，避免自引用hash；原批准版本SHA不变。
