# Issue #11 guard 独占覆盖最小补齐 Implementation Plan v1

> **For agentic workers:** **awaiting_approval**。用户只授权制定本计划，未授权实施。用户批准本文件 SHA-256 与新预算后，Product 派独立 Dev/Review；实施者使用 `superpowers:executing-plans`，不在本 Plan 会话实施。

**Goal：** 仅补齐 write/read 发送前 deadline guard 的独占、可失败命名 oracle，使 M2/M3 单独删除 guard 必然失败。
**Architecture：** 复用既有 SgClock、SgSampleScript、SgRecord、SegmentIo 与同源 run_activity_segments；在目标段最后一次有效 log_sample 内推进 fake 时钟，随后由真实 drive_segment 自行增加第二个有效差分。无需修改生产接口/算法，也不新增 mock 框架。
**Tech Stack：** Windows x64、现有 C++20/Win32、Qt 6.12.0 MinGW 13.1、CMake/Ninja；不新增依赖或 CMake 目标。
**Spec：** `.workflow/parallel-plan-20261029-6-11-17/issue11-guard-coverage-replan/plan-1-contract.md`；旧 SG v1 SHA-256=`c820732680dbe6b2d04a70bcaf582433413aac6dd4423f7ea06179b0d87ae086`，旧批准版本不改。

## Global Constraints

- run=`parallel-plan-20261029-6-11-17`；Plan task=`issue11-guard-coverage-replan`；attempt=1；本版 v1 尚未批准。
- 固定研究对象/推荐未来基点=`4361d8e9723e398bf100e506bca26626e1528e53`；父/HBC=`8510ee90fb44d5b07554c86462f30fc86959bb1d`。推荐使用既有登记 WT=`E:/Git/TMOG-Public-WorkTree/issue11-io-20261030`；Product 核归属、HEAD/clean、无其他写者后另签实施合同，不自动 fresh main 集成，不开启 T11T。
- 当前只静态规划：不构建、不运行 exe/实验、不改源码/旧报告/state/events/BOARD/配置、不提交发布。
- 推荐新阶段 `guard_coverage_stage` 预算 **1 Dev + 1 独立 Review / 0 自动返工**，旧预算不清零。每配置构建≤15分钟、每安全 check≤120秒、每角色新产物≤2GiB；超限或 FAIL 交 Product，不省略必需项凑 PASS。计划与预算均需用户另批。
- 未来 tracked 只允许三个文件：`tests/io_activity_checks.cpp`（仅 SG fake/断言/必要注释）、`doc/plans/2026-10-29-issue-11-acceptance.md`（仅追加）、本新批准计划的 WT 同名副本。
- 禁 CMake/**、src/**、HB 生产算法/API、生产 guard/run/drive/classify、helper 循环、宽链、原 io_table、配置/.gitignore、旧计划/历史报告。确需接口/生产变化即 BLOCKED、关键方案另批。
- 保留六项安全回归、HB/SG 双配置与授权 gate、M1..M5；不运行全量 CTest、`--allow-controlled-io`、真实 helper/I/O/EOF、受控终止/UI/smoke或发布。

## Review Focus

1. 最后有效 log 回调耗时跨 deadline，但已取得两个有效差分且未取消：必须由发送 guard 独占拦截，不能由采样不足代替（GC-W0/W-1、GC-R0/R-1）。
2. 剩余 1ms 的 send 必须可调用，不能把 `<=0` 错改为 `<=1`（GC-W1/R1）。
3. send 同步返回后到期，不发送下一命令、不撤回已发送命令（GC-W1/R1）。
4. fake 脚本必须局部复位、未脚本化采样显式失败，不能靠 static q、伪造 out/取消标志或镜像控制获得 PASS（每 GC case）。
5. 未变异 archive 原件与每单变异必须实际编译自身源码，编译失败不算 RED、WT normal 不算 archive 对照（独立 GC-R 矩阵）。

## 1. 逐发现、来源与处置

| ID | 查证事实/来源 | 影响与范围内建议 | 任务 |
|---|---|---|---|
| F1 | 旧 Review §5/6、ops sgr-6/7：M2/M3 双配置编译0但安全入口0、无命名 FAIL | 旧 Review **FAIL 保持**；新增 guard 独占场景，不改正确生产 guard | GC-D/R |
| F2 | 固定对象 drive_segment :812–849、run_activity_segments :863–904；SG4-D :2530附近 | deadline=1200：idle完成600；write q4@600、sleep→900、q5@900仅差分1、sleep→1200；while退出→样本不足取消，read 外层跳过，guard未执行。旧注释“guard拦截”不成立；纠正此 SG 注释并补独占场景 | GC-D |
| F3 | 固定 SG4-A/B、SG2/3及 Review ops sgr-7 | 已取消或初始到期由 drive/外层 if 拦截，不证明 send guard。保留这些旧覆盖，新增最后有效 log 推进时钟 | GC-D/R |
| F4 | Review 摘要 reviewed1/skipped2；正文§4 reviewed3/skipped0 | OCR 筛选与替代文档核对混用统计口径；保留历史，未来分开记录筛选1/2与实际核对文件，不扩大为流程整改 | GC-R |
| F5 | Review ops sgr-5 与正文§2：normal直接从 clean WT构建，非archive | 旧 WT复验仍是成员历史证据；未来另建 normal 未变异 archive，不能冒称旧证据已满足该要求 | GC-R |
| F6 | Review ops 更正引用 sgr-2b/sgr-4-first，不等于现存 sgr-2/sgr-4；更正行 utc与文本锚点亦不一致 | 真实历史时序不能精确重建；不补造、不改旧日志。未来即时取得 UTC、operation_id 成对、输出/退出码落盘 | GC-D/R |
| F7 | dev-1.md、product-dev-handoff.md：无持久运行/命名RED，旧ops未配对/硬编码UTC | 不继承为本轮运行证据、不洗掉缺陷。新阶段保留真实 RED/GREEN/独立日志 | GC-D/R |

研究来源：当前 WT HEAD 与固定对象相同，源码 git blob=`b9eba18132f1f3b0cd83bdd18ae8250be148b03d`，hash-object 与固定对象相同，status clean。CodeGraph 明传 WT 取得上述调用链，但工具返回正文错选无关 etw-probe 文件；不把该正文当目标证据。改用只读 `git show 4361d8e…:tests/io_activity_checks.cpp` 精确行段查证。查询/静态推导不是本轮运行 PASS。

## 2. 最小 fake 方案与精确时钟推演

保留 `sg4_deadline_boundaries()` 调用入口；在其 SG 区域增加六个顺序局部 case，可用局部 lambda `(bool read_guard, std::int64_t remaining_ms)` 去重复，不新增全局框架或生产接口。每 case 独立 `SgClock clock{}`、`SgRecord rec`、`sg_samples({1,2,3,10,11,12,20,21,22})`；`g_sg_clock` 只挂载本 case，退出复位 nullptr；失败也不得遗留悬空指针。复用 ops.now_ms=&sg_now_ms、sleep=&sg_sleep_ms；now 查询只读、只由 sleep/log/send 推进时钟，不按 now 调用序伪造跳变。

**固定 D=3000、max_bytes=16777216；目标时刻 T=D-rem，rem∈{0,-1,1}。** sample 每次记 qpc/clock与次数；log 每次记段名、前后qpc、clock前后；send 进入即记命令/clock/实际次数（即使误发过期命令也记录并返回 true，不能由 fake send 再次拦截掩盖 guard 缺失）。每 case 只在目标段 `prev.qpc=2/current=3`（idle）或 `11/12`（write）的第二次 log 回调将 clock推进到 T；断言目标推进恰1次。有效计数由真实 drive自行++，fake不设置 out/valid/cancelled。每次 sample/send/log 用 rec.try_begin，结合 sleep_calls 核总操作≤2000；未脚本化采样返回 false，全部状态局部复位。

### 2.1 展开后的调用序（每次 now 返回值）

每正常段起点 s 的六段查询模式如下；sample/log无附加耗时，除指定最后log：

| 调用 | now/clock值 | 有效计数（真实drive） |
|---|---|---|
| drive进入 now0、第一次while now | s、s | 0 |
| sample(q第一项)；remain now；sleep300 | s；s；s→s+300 | 0 |
| 第二次while now；sample第二项；第一次log；remain now；sleep300 | s+300；s+300；s+300；s+300；→s+600 | log后1 |
| 第三次while now；sample第三项；第二次log；remain now | s+600；s+600；目标log后T（非目标为s+600） | log后2 |
| 下一次while | **不调用now**：valid_count<2 为false短路 | 达标且cancelled=false，即使remain≤0也不置取消 |
| 下一发送guard now | T（非目标为s+600） | guard是此处唯一阻止send的机制 |

idle正常 q1@0→sleep到300→q2@300/log差分1→sleep到600→q3@600/log差分2。write正常 q10@600→900→q11@900/log1→1200→q12@1200/log2。每次样本qpc递增，日志顺序与差分数一致。目标log耗时合理地模拟生产同步日志/采样耗时跨界，不需要生产改动；guard读取的clock与最后remain查询一致。

### 2.2 六个命名 oracle 与单 guard 变异后必须失败项

| case | 目标log后的T、guard剩余 | 原件必须观察 | 单guard删除后的必需命名FAIL |
|---|---|---|---|
| GC-W0 | idle q3最终log：600→3000，0ms | idle_samples=2、write/read=0；send_calls=0、命令空；推进一次；cancelled=true；确认exit0观测分类Incomplete/6 | M2：`GC-W0: write guard alone blocks expired send`（实际send_calls=1） |
| GC-W-1 | idle q3：600→3001，-1ms | 与W0相同；过期write不可发送 | M2：`GC-W-1: write guard alone blocks expired send` |
| GC-W1 | idle q3：600→2999，1ms | guard允许write恰1次，send入口clock=2999、命令`write 8392704\n`，回调advance(1)→3000；write drive now0/while=3000不采样，write/read=0、无read；requested_write_bytes=8392704、cancelled=true、Incomplete/6 | 原件必须PASS；作为阈值对照，非M2必败项 |
| GC-R0 | idle完成600，write guard600；write q12最终log：1200→3000，0ms | idle/write=2、read=0；write恰1次入口600；无read、命令只write；请求量8392704；cancelled=true、Incomplete/6 | M3：`GC-R0: read guard alone blocks expired send`（send_calls=2） |
| GC-R-1 | write q12：1200→3001，-1ms | 与R0相同 | M3：`GC-R-1: read guard alone blocks expired send` |
| GC-R1 | write q12：1200→2999，1ms | write入口600、read入口2999，read send advance(1)→3000；read drive now0/while=3000零采样；命令恰write/read各1顺序；idle/write=2、read=0；cancelled=true、Incomplete/6 | 原件必须PASS；作为阈值对照，非M3必败项 |

W0/-1 的 M2变异：idle达标未取消→guard绕过→实际发送write（入口3000/3001）→write drive零样本取消→不发送read。R0/-1 的 M3变异：write已达标未取消→guard绕过→实际发送read（入口3000/3001）→read drive零样本取消。故**最终cancelled/分类仍可能和原件相同，不能只断言结果6；必须以实际send次数/命令命名失败**。正常截止负例各0/1次、变异各1/2次；idle/write=2证明非样本不足先行取消。已发送命令不得追溯从账本移除。

旧 SG4-D 保留“write样本不足时不发read”的覆盖并修正注释/断言标签，不伪称它测guard；SG4-C伪称跨deadline的首注释也改成预算内两命令对照。不顺带重构其他 SG/static q/SG1死代码；这些旧低级发现保留未修。

## 3. 任务拓扑、空闲派发与看板

局部 DAG 不修改全局批准路线。Product仅按批准拓扑派发；本 Plan交付即关闭，不留等批准，不占用窗口阻塞无关就绪任务。

| task_id | Issue | 角色 | depends_on | 允许修改路径 | 验收摘要 |
|---|---|---|---|---|---|
| GC-P | #11 | plan | 无 | 主工程本计划及本task plan-1报告/ops/前缀附件 | 静态推演与hash交付，awaiting_approval |
| GC-G | #11 | product | GC-P | Product自身共享合同记录；不编辑本计划 | 用户批准本版hash/新预算，核固定WT可写 |
| GC-D | #11 | dev | GC-G | §Global三tracked（WT路径）；WT/build/issue11-guard-dev/**；主工程新task issue11-guard-coverage/dev-1* | 新测试独占oracle、真实RED/GREEN与双配回归、冻结H |
| GC-R | #11 | review | GC-D | tracked只读；WT/build/issue11-guard-review/**；主工程新task issue11-guard-coverage/review-1* | 固定H、normal archive + M1..5双配、来源和命名FAIL |
| GC-Q | #11 | product | GC-R | Product自身共享合同记录 | 核结论及未测；不自动发布/实验/集成 |

WT/build具体根：`E:/Git/TMOG-Public-WorkTree/issue11-io-20261030/build/issue11-guard-dev`、`.../build/issue11-guard-review`；新角色报告根：`E:/Git/TMOG-Public/.workflow/parallel-plan-20261029-6-11-17/issue11-guard-coverage`。Product另合同登记全新存在性/边界，不覆盖旧SG/HBC产物。同tracked范围有GC-D→GC-R依赖，Review只读且Dev停止；GC-P→GC-D经批准复制计划，绝不并行写同名版本。

```mermaid
graph LR
  P["GC-P 静态计划交付"] --> G["GC-G 用户批准hash与预算"]
  G --> D["GC-D 最小fake补齐 冻结H"]
  D --> R["GC-R 固定H独立archive与变异"]
  R --> Q["GC-Q 技术裁定 保留人工门槛"]
```

表为文本等价，不加自选配色；图渲染未验证。Product统计空位/就绪/派发及未派发原因，遵循共享合同；本版不授权Plan写看板。

## 4. 实施顺序与RED/GREEN

- [ ] D1：批准hash、1D1R0预算和WT基点/归属核验，按共享合同CodeGraph status/explore；基点变化暂停重评，不用动态索引证明旧对象。
- [ ] D2：只写§2 fake/断言及SG4必要注释；在Dev新产物根对这份候选源码做单处M2/M3探针（复制候选受信源码到各全新source，不修改工作树生产guard），双配必须编译0、run1且W0/W-1或R0/R-1明确命名FAIL，保存实际RED日志/diff。无guard生产改动可实施，因此RED是测试对变异的杀伤证据，不强求正确原件先失败；不能以编译错误代替。
- [ ] D3：工作树未变异版本双配GREEN、六安全/HB/SG/gates；原件全部GC命名PASS。追加acceptance（保留旧字节前缀），复制批准计划；记录新SHA/日志hash/未测。精确三文件正常提交、hooks保留，冻结H，禁止推送。
- [ ] R1：独立核固定H/批准计划hash/三文件diff/production函数未变/acceptance前缀；使用工程首选 `open-code-review-delegate` preview/rule+host只读审查，OCR筛选与替代文档核对分开计数。
- [ ] R2：从H重新生成**normal、M1、M2、M3、M4、M5各自独立git archive快照**；normal零源码变异，每case各自Debug/Release；正常原件全部安全验证，变异只构建io_activity目标并跑安全入口。
- [ ] R3：逐配置normal退出0；M1..5编译0、安全入口1、对应命名FAIL（M2必须W0/W-1，M3必须R0/R-1；M1 SG1、M4既有SG结果失败、M5 SG5-B/C/D）；单变异仍绿/只编译失败/只别名FAIL均FAIL，无自动返工。原件前后hash/status一致。

变异只发生在专用快照的生产函数，不改断言/fake：M1 `out.cancelled = cancelled;`→`out.cancelled = true;`；M2 `run_activity_segments` write_cmd之后唯一guard条件→`if(false)`；M3 read_cmd之后唯一guard条件→`if(false)`；M4 classify入口固定`return ActivityResult::Ok;`；M5 `if (!obs.exited || !obs.exit_code_known || obs.wait_result != WAIT_OBJECT_0)`→`if(false)`。M2/M3相同条件各一处，必须按函数内write/read邻接上下文定位并assert匹配恰1，不能全局replace两处。保留其他语句并保存单处diff，后续H行号漂移用上述语句定位。

## 5. 未来准确验证命令（本轮未执行）

以下在角色合同中绑定 `$H`=冻结开发新head（完整40位SHA），WT固定；Dev候选RED用候选source而非旧archive，独立Review必须用H archive。已有工具先核存在/版本，不安装或切版本。

```powershell
$WT='E:/Git/TMOG-Public-WorkTree/issue11-io-20261030'
$CMAKE='D:/InstallApplication/CMake/bin/cmake.exe'
$CTEST='D:/InstallApplication/CMake/bin/ctest.exe'
$QT='E:/InstallApplication/Qt/6.12.0/mingw_64'
$GXX='E:/InstallApplication/Qt/Tools/mingw1310_64/bin/g++.exe'
$NINJA='E:/InstallApplication/Qt/Tools/Ninja/ninja.exe'
$env:PATH="$QT/bin;$(Split-Path $GXX);$env:PATH"
$env:QT_QPA_PLATFORM='offscreen'
$env:QT_QPA_PLATFORM_PLUGIN_PATH="$QT/plugins/platforms"
$rx='^(process_checks|close_lifecycle_checks|sampling_recovery_checks|stale_persistence_checks|io_table_checks|io_helper_binding_checks)$'
# 仅会话内函数；Log父目录先专用工具建立并登记。
function Invoke-Logged([string]$Exe,[string[]]$Arguments,[string]$Log,[int]$Want=0) {
  $start=[DateTime]::UtcNow.ToString('o')
  & $Exe @Arguments 2>&1 | Tee-Object -FilePath $Log
  $actual=$LASTEXITCODE
  $end=[DateTime]::UtcNow.ToString('o')
  [pscustomobject]@{utc_start=$start;utc_end=$end;exe=$Exe;args=$Arguments;exit=$actual;want=$Want;log=$Log}
  if ($actual -ne $Want) { throw "unexpected exit $actual expected $Want" }
}
# stdout记录/元信息由角色专用报告/ops保存，函数不以最后throw制造假的正常退出。
```

Dev：`$ROOT="$WT/build/issue11-guard-dev"`；工作树GREEN以`$S=$WT`、`$CASE='green'`调用下述循环。Review：`$ROOT="$WT/build/issue11-guard-review"`；`$CASE`依次normal、M1..M5，每case先全新登记父目录，然后：

```powershell
$S="$ROOT/$CASE/source"
$ZIP="$ROOT/$CASE/source-$H.zip"
Invoke-Logged 'git' @('-C',$WT,'archive','--format=zip',"--output=$ZIP",$H) "$ROOT/$CASE/archive.log" 0
Expand-Archive -LiteralPath $ZIP -DestinationPath $S -ErrorAction Stop
# 专用编辑工具在M1..5的S里仅施加上述单处变异；normal不编辑。
# 保存source初始hash/变异后hash与git diff --no-index相对normal源码（diff退出1是有差异，不是编译成功）。
foreach ($cfg in 'Debug','Release') {
  $B="$ROOT/$CASE/$($cfg.ToLower())"
  Invoke-Logged $CMAKE @('-S',$S,'-B',$B,'-G','Ninja',"-DCMAKE_BUILD_TYPE=$cfg","-DCMAKE_PREFIX_PATH=$QT","-DCMAKE_CXX_COMPILER=$GXX","-DCMAKE_MAKE_PROGRAM=$NINJA",'-DCMAKE_EXPORT_COMPILE_COMMANDS=ON') "$ROOT/$CASE/configure-$cfg.log" 0
  # normal/Dev GREEN完整构建；M1..5/Dev RED仅目标，不因省略target而运行旧exe。
  $argsBuild=@('--build',$B,'--parallel','2')
  if ($CASE -ne 'normal' -and $CASE -ne 'green') { $argsBuild += @('--target','io_activity_checks') }
  Invoke-Logged $CMAKE $argsBuild "$ROOT/$CASE/build-$cfg.log" 0
  $want=($CASE -eq 'normal' -or $CASE -eq 'green') ? 0 : 1
  Invoke-Logged "$B/io_activity_checks.exe" @('--check-helper-binding-only') "$ROOT/$CASE/sg-$cfg.log" $want
  # 专用Read/Grep逐名核GC PASS/FAIL，与Want一起验收，不能只看退出码。
  if ($want -eq 0) {
    Invoke-Logged $CTEST @('--test-dir',$B,'-N','-R',$rx) "$ROOT/$CASE/inventory-$cfg.log" 0
    # 恰6项且逐名正确；缺项/Skipped/Qt缺失不算PASS。
    Invoke-Logged $CTEST @('--test-dir',$B,'-j','1','--timeout','120','--output-on-failure','-R',$rx) "$ROOT/$CASE/ctest-$cfg.log" 0
    Invoke-Logged "$B/io_activity_checks.exe" @() "$ROOT/$CASE/gate1-$cfg.log" 2
    Invoke-Logged "$B/io_activity_checks.exe" @('--helper') "$ROOT/$CASE/gate2-$cfg.log" 2
    Invoke-Logged "$B/io_activity_checks.exe" @('--check-helper-binding-only','extra') "$ROOT/$CASE/gate3-$cfg.log" 4
  }
}
```

每次循环产物父目录先用专用工具确认/建立，不能覆盖既有目录；该代码不授权当前执行。future Dev RED `$S`为独立候选复制源，CASE为M2/M3，用同样loop，不能运行旧4361d8e测试冒称新增RED。每个配置逐条核 `compile_commands.json` 中实际 `file`=本case `$S/tests/io_activity_checks.cpp`，去除非目标mocs条目，不接受WT/别case源码泄漏。保留实际命令/args、stdout/stderr、exit、即时UTC、ZIP/源码/单处diff/exe/log SHA256、原件前后status/hash。日志文件和ops operation_id前后配对；对截止边界的fake账本需逐case输出，不能只有总ALLPASS。

## 6. 人工门槛、风险、审批待办

批准待办：用户批准本v1 **SHA-256**、新guard_coverage_stage **1D+1R/0自动返工**、固定WT基点使用及新增独占验收。该验收扩大/强化必须重新独立验收新H，旧SG Review FAIL不得转PASS；不清旧预算、不把“制定最小补齐计划”当实施批准。

guard仅保证发送检查看到取消/剩余≤0不开始下一命令；同步已开始WriteFile/sample/log/helper I/O无硬墙钟上限，send后的实际副作用不可撤销；guard检查与同步send之间也不提供原子硬截止。本计划不是协议ACK/实际字节、绝对超时或安全架构整改。

真实helper/EOF/有效I/O、受控终止/UI/集成T11T/发布仍分别另批，保留旧SG/HB全部人工条件。fake与变异成功不证明真实实验成功、不关闭Issue、不创建Issue/PR。若新预算耗尽、无法达到M2/M3命名FAIL或生产改动成为必要，交Product决定，停止自动返工。

自查：六case从真实drive顺序推导，最后log后计数达到2再短路，send账本为决定性oracle；0/-1与1ms对照；三tracked与依赖串行；normal archive+M1..5双配和精确源验证齐备；旧缺陷保留；无当前构建/运行/实现。技能与事实证据清单见本task plan-1.md。
