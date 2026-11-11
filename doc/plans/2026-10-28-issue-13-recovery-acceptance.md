# Issue #13 恢复验收记录（A 范围最终态）

> 状态：**A 范围验证完成**（2026-10-29 收束）。批准计划 v1
> （SHA-256 `2fcf58af3227267b6d72fa3ac7e913122bb3c016f3bff28cff3db5201db8f142`）
> 的 A 部分实际执行证据如下；**B 范围（真实 app/helper/终止/人工/真实
> process_ops 回归）未批准、未实现、未运行**，缺席项明示，#13 整体未
> completed。

## 1. 命令与真实结果

（每条命令在此登记：命令、退出码、关键输出；随执行补全）

## 2. 自动检查与人工分层

| 层 | 内容 | 状态 |
|---|---|---|
| 编译红灯 | 三参构造缺失真实编译失败（先于实现保存） | 实测：Debug build exit 1，关键错误 `no matching function for call to 'tmog::MainWindow::MainWindow(...)'`（tests/end_confirm_checks.cpp:298）+ `src/MainWindow.h:28: note: candidate expects 2 arguments, 3 provided`；同批另有测试自身缺头文件错误（363 QDateTime / 398、426、435 QAbstractButton），不构成 red 达标依据。**已知限制：完整原始 stderr 全文未保存**（曾仅存于误写并已删除的未登记临时文件），tail -30 范围外细节不可取得，证据限制由 Review 判断。 |
| fake 生产流 | end_confirm_checks C/Y/X/R/N（offscreen，双配置） | **最终**：Debug ctest Passed 18.87s exit 0；Release（009 修复后，012）ctest Passed 18.78s exit 0。过程：Release 初次 120s 超时（LastTest.log Output 空，Test time=120.04s）→ 006/007 对照诊断（设 QT_PLUGIN_PATH exit 0 18.85s / 不设 60s 未退出零输出；支持性证据，因果未唯一证实）→ 009 修复生效。 |

**008→009 修正记录（Dev 范围内澄清）：** 008 首版校验经 Product 审查指出四项缺口——①未查空值（仅 DEFINED）②仅查 plugins 分号未查 prefix 分号③"任意祖先"RELATIVE_PATH 校验可被宽 prefix 通过、`plugins../` 逃逸未防④注释把支持性推断写成因果事实。009 修正为：空值 FATAL_ERROR；双方分号校验；**精确布局核对**（REALPATH(QT6_INSTALL_PREFIX) == REALPATH(Qt6_DIR/../../..) 且 REALPATH(派生plugins) == REALPATH(prefix/plugins)，匹配当前 Qt 6 实际布局 `lib/cmake/Qt6`，不泛化任意布局）；注释改为假说/当前环境观察/支持性对照证据口径。008 与 009 为本消息流与本文档条目，无独立报告文件。

**014→015 记录（Dev 范围内澄清）：** 014 Release 回归第 4 测试 stale_persistence_checks 在途未完成（子 pid=25020，PPID=38508 ctest.exe 经 Win32_Process 实证亲子；子 creation ticks 639287972103853765，父子启动差 134300566 ticks ≈ 13.43 秒；Debug 同测试 4/4 通过 8.78s）。**日志未落盘 ≠ 进程无 stdout**（CTest 可访问输出在该阶段不可得，标 unknown）；挂点假说（插件阶段 vs worker cv 等待）均未证实，保留假说口径。015 修复（仅测试就绪）：Windows 下 stale_persistence_checks 属性覆盖为 offscreen+QT_PLUGIN_PATH（复用 009 同源派生变量，不新增校验）+TIMEOUT 120（有限等待声明变更，Plan 已评估属 A 内回归就绪修复）；测试本体零改动。

**attempt2 修复记录（repair_round=1，Review FAIL 后定向修复）：** Review_i13_20261029_1 报告 A FAIL（F-1 R 复用帧死代码/F-2 modal_resets 计数含初始帧；head cbd06d9）。红反馈先行（020）：test-only 独立观测计数（pre_modal_resets/observed_modal_resets/after_count，旧 driver 原样保留）+ R 复用实入 source / X 原A消失断言 → Debug ctest exit 8，6 FAIL 实证（observe: pre=1 observed_modal=2 frames_applied=2；reuse_visible=0；日志 attempt2_red_stdout.log SHA b72aa65ba0eaec86ebf2d1deba65f72c4be5666decd33032c20776a325af6546）。绿修（021）：①MainWindow.cpp 撤销 attempt1 越范围修改——macOS/Linux 枚举器赋值恢复 base 无条件原行为（ops guard 保留）②driver 独立显式 round1/2/3 序列（不由计数推导；每轮 baseline+期望帧真实入 source 判定 processed；第 3 帧入模型后才点击）③OpsState 16 记录硬上限（锁内 fail 标志）+ 场景数==5 硬断言。迟到 Spec 子代理增量与预算落实来源于 Product 补充合同（同 repair_round1）。首轮红反馈为直接运行确认 exit 8，后 job 重跑捕获登记日志——同组两次运行如实记录。

**attempt3 修复记录（repair_round=2，Review coverage 裁定三必需 FAIL 后定向修复）：** Review review-2-coverage.md（head 9ceef0c）裁定三必需缺口：①Y 模态内仅 sort 无当前选择变�� ②StepEnumerator 无逐消费 seq（driver round 不等效）③heartbeat 仅整段合计无投递后独立基线。红反馈先行（G2）：三裁定断言先行+观测未接通（seq stub 返回空、kSelectWired=false、heartbeat 基线未赋值 kHbUnset），Debug ctest exit 8 failures=30（裁定1=1/裁定2=20/裁定3=9；日志 red_a3_stdout.log SHA 46C069610DCA50142ACF21094C24983D703524F6D2787D938C0F160443E71083）。绿修（G3）：

- **裁定1（Y 选择变化）**：driver 每轮 processed 后程序化 `select+setCurrentIndex` 到 B 并立即断言 `proxy->mapToSource(currentIndex)` 身份==(202, tickB)——三轮各 1 次（生产 `on_end_task` 于模态打开前值冻结 `snap.identity`，MainWindow.cpp L224-226/L251 值捕获，模态内选择变化不影响 Yes 目标；`restore_selection` 锚点经 `on_selection_changed` 更新为 B，后续帧保持 B——restore 不恢复 A）。Yes 仍恰一次传最初冻结 A（既有 target 断言实测通过）。程序化 select 为测试路径（合同：程序化而非声称人工能点被禁用父表）。
- **裁定2（逐消费 seq）**：`StepEnumerator::take_sample` 真实消费 permit 处以同一 mutex 记录 `ConsumeRecord{seq, wall_ns, thread}`——seq 每次真正消费从 1 递增（含初始帧与 drain 帧，n=4）；driver 每轮 push 前记录 `last_consumed_seq()`（round_seq_prev），processed 观测点（modelReset 内 round_frame_in_source 置位处）绑定断言 `seq == prev+1`；场景级输出 `seq records: n=4 [s=1 w=…]…` 并断言 seq 连续 1..N、wall_ns 严格递增（`duration_cast<nanoseconds>` 真实纳秒；push 时钟重复则 msleep(1) 真实等待时钟前进，不伪造时间戳）、消费线程全为 worker 非 GUI。不打印 driver 轮次替代（round 行保留为既有驱动证据）。
- **裁定3（分段 heartbeat）**：模态内第一轮投递前基线 `hb_modal_before`（driver confirm_seen 分支赋值）+ `heartbeat_ticks > hb_modal_before` 模态内增量断言（实测 +46）；结束投递完成（RecordingOps.terminate 记录确认锁内读数处）建立 `hb_after_delivery` 独立基线 + pump 后 `heartbeat_ticks > hb_after_delivery` 实测增量断言（+4/+5）。模态内累计不能替代（两基线独立取值独立断言）。kHbUnset 哨兵保证未建立基线必败。
- 首轮绿测 Debug exit8 failures=4（`check(kHbUnset)` 在赋值前执行——断言顺序缺陷，非生产问题），调整赋值/断言顺序后修复。

**attempt3 验证终态（head=本 attempt 提交，构建目录 build/issue13-a3-debug/-release）：** Debug configure/build/ctest exit0，end_confirm_checks 1/1 Passed 23.84s，failures=0；Release 同链 exit0，1/1 Passed 23.84s，failures=0。三裁定观测双配置一致：每场景 round 1/2/3 seq=2/3/4（real consume seq）、`modal round N: current selection changed to B (pid 202, tick B) via proxy->source` ×3、`heartbeat advanced during modal (before delivery baseline, +46)`、`heartbeat advanced AFTER delivery (post-delivery baseline, +4/+5)`、`seq records: n=4`（初始帧 s1 + 三轮 s2-4，严格递增）。绿测完整日志：Debug end_confirm_green_debug_full.log SHA A233203CCCE1772CAFBAF32C219D7AA5070C8A798B504BD78BEB2468D98DDF0F（14321B）、Release end_confirm_green_release_full.log SHA 2693AC4737B000E5BED1EE4CADBA272F9876C7737FB1BF3F3393B96A797B4C80（14325B）。负例双配置直跑（offscreen+QT_PLUGIN_PATH）exit1 三证据齐备（Debug stdout SHA 0F26F1D9D6379B741D50E0570B1E76AE2E91C0EAFE7B331B48886B8950A54293、Release SHA 351ED3F690C019E6A464980D7705AE44B00570D3173EE867C75D478FFAEF9E05）。回归 4/4 双配置 exit0（Debug 22.21s/Release 22.17s）。EXE SHA：Debug 2C6A7FBA3789EECC86DD1CA88B0A03F7DB3087BBCC032298E073ADA10B49BFBF、Release 535C71FD97552B716638D45155BAF67866D32D6F35E0F0A64163CF3E6C0395E6。CTest 注册名核查：CMakeLists.txt 仅注册 `end_confirm_checks`（L105），无 `end_confirm_checks_negative` 目标——负例按 attempt2 先例直跑 EXE，未改 CMake。

**2026-11-11 rebase 到 main d3e9e2e 后的复验（全量，不止 A 范围 4 项）：** 构建目录 `artifacts/r13/debug`/`artifacts/r13/release`（worktree 内、被 `.gitignore` 的 `artifacts/` 覆盖，未提交）。Debug ctest 9/9 Passed（end_confirm_checks 23.84s）、Release ctest 9/9 Passed（23.87s），0 失败；`end_confirm_checks` 实跑 5 场景 C/Y/X/R/N，`end_confirm_checks: failures=0`。本次未覆盖：manual/idle 手工协调模式、真实 Windows 终止与物理桌面 GUI 交互仍属 B/维护者验收。原始日志见 `.workflow/dsh-resume-20261111/evidence/worker-r13-*.log`。

| negative-oracle | 双配置 exit 1（oracle 有效性） | **最终**：Release exit 1（18836ms，012 组）；Debug 经 013 重验 exit 1（Start-Job 内显式环境，三证据齐备：NEGATIVE-ORACLE MODE 启动行 / `FAIL: terminate target == B` / `failures=1 (exit 1 expected)`，stdout SHA 2129dcb78606127f112b21eeae8039b64b997b8f8180e9a9e3502ff24b030d94）。012 中 Debug 首跑 0xC0000135 启动失败（PATH 未继承，调用间环境不持久）为过程记录，013 按严格证据判定通过。attempt2 复验：Debug（CTest 同环境重跑）与 Release 负例均 exit1，oracle: recorded pid=101 tick=132000000000000000（原 A 冻结身份被记录而期望翻转为 B），oracle 有效性在新测试结构下保持。 |
| 非破坏性回归 | process_checks/close_lifecycle_checks/sampling_recovery_checks/stale_persistence_checks 双配置 | **最终**：Debug 4/4（22.15s）、Release 4/4（22.18s）exit 0（018）。smoke_enumerate/process_ops_checks 未运行（A 合同排除；process_ops_checks 含真实受控终止归 B/独立授权）。 |
| 真实 Windows 终止/PID 重用/物理 GUI | **未测（B 未批准）** | 不适用本轮 |

## 3. 原 A 全文逐条覆盖矩阵（attempt3 终态）

> 原计划 §4（L109-130）共同真实流 + 场景表逐条；证据引用 head=attempt3 提交、
> 双配置绿测日志（§2 attempt3 终态 SHA）。**unknown 项如实标注，不冒充闭环。**

| # | 原条款（计划 L） | 覆盖/证据 | 状态 |
|---|---|---|---|
| 1 | 共同流1（L110）：QApplication、三参 MainWindow、首帧 permit、proxy sourceModel 观察 modelReset、初始化 reset 不计 modal | 初始帧 push→`initial fixture rows visible`；pre_modal_resets=1 独立计数（observe 行实测） | 覆盖 |
| 2 | 共同流2（L111）：PID 列找 A selectRow、currentIndex 映射核对、先 CPU 排序、真实 QAction 按文案唯一查找 | `fixture-A found via proxy PID column`+`currentIndex maps to fixture-A`；`proxy->sort(ColCpu,Desc)`；`exactly one 'end task' action found by tr text` | 覆盖 |
| 3 | 共同流3（L112）：QTimer 确认真实 QMessageBox 且 parent 为本窗、记录 text、模态真实可见才计 reset、三轮 permit 经真实 worker、reset>=3 前不点击 | `real modal appeared`；observed_modal_resets=3（按可见性分段）；driver 三轮显式序列、第 3 帧真实入 source 后才 click（round_frame_in_source 门控） | 覆盖 |
| 4 | 共同流4（L113）：每轮变行容量/CPU 值/顺序；r2 扩容≤64 行；r3 去 A 或换 tick；视图位置变化验证 | frames_common：r2 62 行；r3 X 去 A/R 换 tick；`proxy order changed at round N`+程序化 sort 切换方向；attempt3 新增 Y 轮内 select B 当前选择变化断言（裁定1） | 覆盖 |
| 5 | 共同流5（L114）：modal text 每轮恒等含原 PID/名称/创建时间；三次 reset 后才 click | `modal text unchanged at round 1/2/3`+`modal initial text contains A name/PID/creation time`；点击门控如#3 | 覆盖 |
| 6 | 共同流6（L115）：等 on_end_task 返回+异步记录/回调完成；finished/GUI 回调+安全关闭收束；失败对话框由 timer 识别关闭 | `terminate recorded (Yes path)` pump_until；`teardown: no in-flight worker at destruction`（worker active==0 后才析构）；outcome_texts 由 driver 识别并 Ok 关闭 | 覆盖 |
| 7 | 数据接口（L82）：StepEnumerator mutex/cv 单次 permit、序号从1递增、wall_clock_ns 真实单调递增、20s 可收束等待 | take_sample 逐消费 seq（ConsumeRecord，mutex 保护）；wall_ns duration_cast 纳秒严格递增断言；`seq records: n=4` 场景输出；pump 收束确认 active==0（裁定2 修复实证） | 覆盖 |
| 8 | Y 场景（L122）：≥3 reset、顺序/行位置变化、额外当前选择变化、点 Yes、exactly1 原 A、3000ms、非 GUI 线程、heartbeat 投递前后继续 | 三轮 `selection changed to B`（裁定1）+`proxy order changed`；`exactly 1 ops call`+`terminate target == A (original identity)`+`timeout_ms == 3000`+`non-GUI thread`；heartbeat 模态内 +46/投递后 +4/+5 独立基线（裁定3） | 覆盖 |
| 9 | X 场景（L123）：r2 删 A、Failed("fixture exited")、Yes 仍传 A 非 B、UI 失败框 | `original A identity absent from source model before click`（orig_a_absent=1）；`terminate target == A`；`outcome text contains 'fixture exited'` | 覆盖 |
| 10 | R 场景（L124）：r3 同 PID tick+1、IdentityChanged、Yes 传原 A 创建身份、UI 警告 | `reused identity … actually present in source model before click`（reuse_visible=1）；`terminate target == A (original creation identity, not reused)`；`outcome text contains '身份已变化'` | 覆盖 |
| 11 | N 场景（L125）：注入枚举器/ops 真实 Yes、RecordingOps 实际收到调用 | N 场景 target_count==1（注入未被平台分支覆盖的运行时证明） | 覆盖 |
| 12 | C 场景（L121）：≥3 reset、顺序变化、点 No、ops targets 空、模型仍 A、text 不变 | 三轮 reset/顺序断言同共同流；`cancel: zero ops calls`+`cancel: fixture-A still in model`+`modal text unchanged` | 覆盖 |
| 13 | 输出（L127）：场景/seq/reset数量/目标身份/线程结果/失败数 | 场景行 `== scenario X ==`；`round N seq=… (real consume seq)`+`seq records: n=… [s= w=…]`；`observe: pre/observed_modal/after/frames_applied`；`terminate target == …`；`non-GUI thread`/`all consume records from worker thread`；末行 `failures=0` | 覆盖 |
| 14 | 预算（L32/L127）：≤8 场景、fake 记录≤16、行≤64、单场景 20s、CTest 120s | `scenario count within 8 budget`+`exactly 5 scenarios`；OpsState 16 硬上限（budget_exceeded 锁内置位）；62 行；`scenario within 20s deadline`；TIMEOUT 120 属性 | 覆盖 |
| 15 | 负例（L129）：--negative-oracle 期望翻转 B、exit1、默认 exit0；不回退 snap 伪造 UAF | 双配置 exit1 三证据（NEGATIVE-ORACLE 行/FAIL terminate target B/failures=1）；默认双配置 exit0；snap 值语义未动 | 覆盖 |
| 16 | 测试基建（L80）：check 计数非 assert；context 绑定连接；退出前停 timer、释放 worker、等待实际退出、不超时直接析构 | check() 计数 failures；connect 以 &win 为 context；driver.stop/heartbeat.stop/raw->stop+pump active==0 后 win 析构 | 覆盖 |
| 17 | missing_partial4 另两项（resolution §3 计数 4，仅具名 2） | **unknown**——原文无法恢复（resolution ops seq14 仅存 key_points 计数，无逐项原文）；review-2-coverage 裁定4 同口径。本 16 条矩阵已覆盖原 §4 全部可读文本条款；若余两项含必需内容，需 Product/用户取得原文后另裁定 | unknown（非豁免） |

**矩阵结论：** 原 A 可读文本条款 16/16 覆盖（三裁定缺口本轮修复闭环）；missing_partial4 余两项 unknown 不冒充。

## 4. 未测项

- 真实 WindowsProcessOps 行为（真实终止、句柄核实、真实错误码）
- 真实 PID 复用（fake R 仅模拟身份变化语义）
- 物理桌面 GUI 交互（offscreen ≠ 物理视觉验收；程序化 select≠人工点验）
- helper/idle/manual 模式（B 范围，未实现；入口拒绝保留）
- #13 第四验收项人工确认（维护者门槛）
- missing_partial4 另两项原文（unknown，见 §3 #17）
