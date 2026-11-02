# Issue #11 HB 同源覆盖最小补齐 Implementation Plan v1

> **For agentic workers:** **awaiting_approval**。本版仅规划；须用户批准本文件 SHA-256 与独立新阶段预算，Product 才可派新的 Dev/Review。执行者使用 `superpowers:executing-plans`，遵循共享合同的独立会话/工作树要求，不由 Plan 执行开发或派发。

**Goal：** 使 HB3/HB5/HB6 的安全故障注入调用实际生产路径，并用删调用/常量替换的独立快照负例证明其能拒绝真实回归。
**Architecture：** 在既有单文件内抽取真实启动、握手及失败收束语句，生产与安全检查调用同一函数，仅替换其局部 Win32 操作和时钟/日志写入。fake 只提供 API 结果与记录调用，不自写算法、EOF 计数或固定退出结论。
**Tech Stack：** 既有 Windows x64、C++20、Win32 显式 W API、Qt 6.12.0/MinGW 13.1、CMake/Ninja；不新增依赖、公共后端或全局配置。
**Spec：** `doc/plans/2026-10-30-issue-11-helper-binding-repair-plan-v1.md` v1，SHA-256 `afd0a9a3d97dadccaf5617f3269bd99ad1ee5b4f5299c3c722f88e213f8a1990`，尤其 HB3/HB5/HB6 与第105行；本请求 `.workflow/parallel-plan-20261029-6-11-17/issue11-hb-coverage-replan/plan-1-contract.md`。

- run=`parallel-plan-20261029-6-11-17`；Plan task=`issue11-hb-coverage-replan`；attempt=1。
- 静态基线及建议未来限定实施树：`E:/Git/TMOG-Public-WorkTree/issue11-io-20261030`，fixed head=`53fd43efd85308133adfb6acc7812c1495c5410f`。
- 用户只选择制定同源补齐计划，未批准实施。原 repair_rounds=2、helper_binding_stage 的1 Dev+1 Review均耗尽，不能清零或自动续轮。

## Global Constraints

- 本轮不改代码/CMake/配置/state/BOARD/旧文档，不构建、spawn、helper、I/O、终止、UI、提交或发布。仅指定新计划及本任务报告/ops/前缀附件可写。
- 后续推荐单独登记 `hb_coverage_stage`：最多 **1 Dev + 1 独立 Review，0自动返工**，失败交用户。每配置构建≤15分钟、每安全check≤120秒、每角色产物≤2GiB；此预算也 awaiting_approval。
- 不改变全局 v3A 与 #13A 许可；本链只补既有 T11R 技术验收，**T11T仍未解锁**。fresh origin/main 集成仍按后续既有 T11T 合同，不在本版迁移/发布。
- Unicode、显式 CreateProcessW 应用名/宽cwd、同款映像查询逐UTF-16比较、HB1/HB2/HB4与旧 R1/R2/R3 安全检查保留。fake不证明真实Windows进程行为。
- 真实 helper/EOF/I/O、受控终止、人工UI分别需另授权；技术通过不等于 #11 关闭。新增段协议问题见§7，**批准本版HB主链不批准§7可选修复**。
- Review tracked原件全程只读；快照、日志、负例仅在新登记专用build子树。不得把旧报告 self_report 升格为本轮 tool_evidence，不补写历史ops。

## Review Focus

1. 映像失败或PID/tick响应不符，不能在握手之前写可信日志；HB5日志次序及零活动断言覆盖。
2. 第二pipe失败只关闭实际已持的两个句柄，各一次，不能以“一组关闭”掩盖漏句柄；HB6资源账本覆盖。
3. 无可读数据不得 ReadFile；分片必须由真实轮询与解析函数消费，不以字符串拼接替代；HB6握手覆盖。
4. WAIT_FAILED、持续WAIT_TIMEOUT、exit-code查询失败不能被常量8/9替代；HB6收束及快照变异覆盖。
5. HB3的失败/扩容必须从同一GetModuleFileNameW读取循环发生；不能真实成功后伪报截断；HB3 API序列与变异覆盖。

## 1. 事实与问题来源（行号均为 fixed53fd43e）

| 来源/位置 | 查证事实 | 影响及最小建议 | 受影响任务 |
|---|---|---|---|
| Product合同；HB5 :711-748 | :737测试自行令 eof_teardown_count=1；verify_spawn_gate :509只被测试调用，main :1051-1087另写判断 | 不证明拒绝后生产EOF发生；用同源启动函数驱动真实bounded_teardown | HBC-D/R |
| HB6 :752-807；main :997-1188 | PipeTeardown局部模拟、三片直接拼接、true与固定8/9断言；真实pipe/握手在main，未被检查调用 | 全部换API脚本驱动同源函数，禁止保留这些作为验收项 | HBC-D/R |
| HB3 :473-489、620-642；own_executable_path :211-231 | fail直接返回；truncate在真实读取成功后伪拒绝；spawn_prepare_count=1不是零spawn证据 | 注入GetModuleFileNameW本身；记录256→512→…32768，调用真实准备函数，失败零CreatePipe/CreateProcess | HBC-D/R |
| main :1089-1100→1102-1188 | log_helper_identity :1095先于握手/响应PID-tick验证 | PID/tick失败已产生可信日志，直接违背HB5；移至全部验证成功后，Product本轮确认纳入 | HBC-D/R |
| main :1304-1313；Review F3 | image_chars后无值，早期失败还缺统一exit9归属诊断 | 保存查询到的实际宽映像，未知明确unknown；失败出口同源格式化 | HBC-D/R |
| parse_args :155-158；Review F1 | 末--work-dir提前返回Options，跳过:200授权检查；Review例子带allow，不能据它断言未授权 | 本轮仅小guard：无allow的末--work-dir→2，有allow但缺值→4；纯解析验证，不实际allow运行 | HBC-D/R |
| 新发现main :1195-1321 | 取消后活动及最终结果问题，详见§7 | 单独待用户决定；不能因未实机而豁免 | Product、后续11H/11T |

历史 review-1 的“技术PASS”不是本版批准或完整HB验收：Product已因覆盖缺失未接受。旧Debug/Release日志、T9/HB1负探针及49 PASS计数只作历史来源，本轮Plan未复跑。

## 2. 精确修改域与最小同源接口

未来 HBC-D 仅允许三个 tracked 路径：
1. `tests/io_activity_checks.cpp`：本节同源函数/局部操作缝/HB3/5/6断言、可信日志顺序、必要归属诊断与末work-dir小guard。
2. `doc/plans/2026-10-29-issue-11-acceptance.md`：只追加新阶段固定SHA/覆盖/命令/结果/限制与§7阻塞，不覆盖历史。
3. `doc/plans/2026-10-30-issue-11-hb-coverage-repair-plan-v1.md`：主工程批准hash的字节相同WT副本。

**不改 CMakeLists.txt**（已有 `io_helper_binding_checks` target/test及shell32）、src/**、io_table_checks.cpp、settings/.gitignore、旧计划。不得顺带LOW清理、通用RAII框架、全局进程抽象。若三文件不能完成，BLOCKED交Product而非扩大域。

接口在同一匿名命名空间，名称/职责固定，细节可用现有C++类型：
- `HelperOps`：仅本路径需要的 Win32 函数指针，签名用 `decltype(&::API)` 保持 ABI：GetModuleFileNameW、QueryFullProcessImageNameW、GetProcessTimes、CreatePipe、SetHandleInformation、CreateProcessW、CloseHandle、WaitForSingleObject、GetExitCodeProcess、WriteFile、PeekNamedPipe、ReadFile、GetLastError；`now_ms()`为单调int64毫秒回调，`sleep_ms(DWORD)`回调；`write_identity(const HelperIdentity&, const fs::path&) -> bool`局部日志回调。生产默认全部绑定真实API、steady_clock、Sleep及log_helper_identity，无模式flag/环境开关。fake只在check入口注入，不调用真实创建/文件API。
- `own_executable_path(std::string& error, const HelperOps& ops)`：现有读取循环直接用ops.get_module_file_name_w，保留256起步、32768上限及0<n<capacity；删PathReadProbe/probe_own_path镜像。
- `PreparedHelper { fs::path exe_path; std::wstring command_line; }`；`std::optional<PreparedHelper> prepare_helper(const Options&, std::string&, const HelperOps&)`：真实父入口复用的纯路径读取＋helper_command_line准备，不创建目录或pipe。main随后仍保留原目录校验。
- `query_full_image_path(HANDLE process, std::string& error, const HelperOps&) -> std::optional<std::wstring>`：保留既有完整读取/扩容逻辑，仅通过同一ops调用QueryFullProcessImageNameW/GetLastError，main启动函数与检查共用。
- `bool read_helper_identity(PROCESS_INFORMATION&, HANDLE stdin_write, HANDLE stdout_read, std::int64_t wall_deadline_ms, DWORD expected_pid, std::uint64_t expected_tick, std::string& error, const HelperOps&)`：从main移入identity完整WriteFile、可读后ReadFile、分片/换行/255字节限制、≤5秒且≤剩余预算、严格数字解析和PID/tick比对；不是接收一个已拼好字符串的假握手。协议必须按精确前缀 `helper-identity pid=` 与分隔符 ` creation_tick=` 切出纯数字再parse_wide_number，不把分隔空格送入数值解析：现有:1162包含尾空格，而:118-120拒绝任何空白，真实合法响应会失败。此修正是HB6三片成功验收的必要同源修复；不宽松接受任意前缀/尾垃圾。
- `struct TeardownObservation { bool exited; bool exit_code_known; DWORD child_exit_code; DWORD wait_result; };`；`int bounded_teardown(PROCESS_INFORMATION&, HANDLE& stdin_write, HANDLE& stdout_read, const HelperOps&, TeardownObservation* observation = nullptr)`：现有真实EOF/≤10秒等待/退出码查询/句柄归属算法移入ops调用，返回实际8/9；保留原未确认句柄归属语义，不强杀。observation由函数填，不由测试替它补写。
- `HelperStartResult { bool ready; int failure_exit; std::uint64_t creation_tick; std::optional<std::wstring> observed_image; std::string error; }`；`HelperStartResult start_verified_helper(const PreparedHelper&, const Options&, const fs::path& identity_log, std::int64_t wall_deadline_ms, PROCESS_INFORMATION&, HANDLE& stdin_write, HANDLE& stdout_read, const HelperOps&)`：把main :997-1188真实语句移入；所有持资源失败在此关句柄/调用bounded_teardown，映像失败→EOF，握手/响应PIDtick失败→EOF，**全部通过后才write_identity**，成功ready仅main可进入活动段。保留显式W应用名和宽cwd；失败ready=false。
- `std::string helper_failure_diagnostic(const HelperIdentity&, const std::optional<std::wstring>& image)`：从已观测数据格式化PID/tick/句柄及UTF-8映像（用现有Win32转换，仅日志），无映像写unknown；不能只写恒空image_chars，也不把“父退出后OS收回句柄”说成可跨进程保留。early exit9和既有末段诊断复用；不改变§7段协议。

同源调用链必须可查：`main→prepare_helper→own_executable_path`；`main→start_verified_helper→query_full_image_path/read_helper_identity/bounded_teardown/write_identity`；`run_helper_binding_checks→HB3/HB5/HB6→上述相同函数`。main在ready=false时返回failure_exit，不进入idle/write/read；fake的WriteFile记录实际命令，日志回调记录实际调用。成功fake只验证ready与日志/握手顺序，不执行采样、目录或活动协议。

## 3. 局部拓扑、空闲派发与归属

以下只补T11R，不改全局v3A。Product后续按批准表派发；G未通过不启动D。相同源码路径的Dev/Review以及可选段协议阶段必须依赖串行。

| task_id | Issue | 角色 | depends_on | 允许修改路径 | 验收摘要 |
|---|---|---|---|---|---|
| HBC-P | #11 | plan | - | 主工程本版计划、本task plan-1报告/ops/前缀附件 | 固定hash待批准；本轮不执行 |
| HBC-G | #11 | product | HBC-P | 仅共享合同自身状态/决策记录 | 用户批准HB主链hash与新预算；§7另题 |
| HBC-D | #11 | dev | HBC-G | §2三文件；WT/build/issue11-hb-coverage-dev/**；自己报告/ops | 同源HB3/5/6与六项双配置安全检查，冻结head |
| HBC-R | #11 | review | HBC-D | tracked只读；WT/build/issue11-hb-coverage-review/**；自己报告/ops | 原件双配置＋独立快照变异FAIL/正常GREEN＋新head审查 |
| HBC-Q | #11 | product | HBC-R | 仅共享合同自身记录 | 核实全部门槛后才能认定T11R；§7仍阻塞11H，不自动解锁11T |

```mermaid
graph LR
  P["HBC-P 计划交付"] --> G["HBC-G 用户批准HB与预算"]
  G --> D["HBC-D 同源补齐"]
  D --> R["HBC-R 固定SHA独立复审"]
  R --> Q["HBC-Q 技术裁定与未决门槛"]
```

图只编码依赖，不使用类别色或状态色；同表提供文本等价，不依赖颜色。无图形渲染/浏览器实验。Product仍按全局就绪前沿派无关任务，本Plan交付立即关闭，不等批准占额度。

## 4. HBC-D：RED→同源实现→GREEN

- [ ] D1用fake API脚本新增下表可失败断言。每个fake句柄有唯一token、实际创建/关闭次数账本；出现未脚本化操作、真实API落入、双关或对未持句柄关闭均FAIL。fake时钟只在sleep/脚本时推进；每场景最大API调用数2000，超过立即FAIL，不能让测试无限等待。测试不自行设置EOF或活动计数。
- [ ] D2运行安全入口确认新增断言RED（exit1且相应FAIL；旧函数不支持缝可先得到编译RED，需记录原因）；不要把旧入口exit4再次当本阶段覆盖证据。
- [ ] D3按§2抽取main真实语句，main与check同调用；仅Win32操作可替换，算法不复制。移可信日志至全部响应核实成功后，替换HB3/HB5/HB6镜像断言。
- [ ] D4末work-dir小guard：无授权token输入 `prog --work-dir`、`prog --helper --work-dir`→nullopt/2；带授权但缺值→nullopt/4；正常Unicode解析与HB4原数值范围不变。纯parse测试，禁止以allow运行真实入口。
- [ ] D5统一必要exit9诊断：已知实际映像含Unicode时可见非空路径；未查询到为unknown；PID/tick/持句柄如实，不补造tick。删除日志仅格式上的空字段，不改§7结果算法。
- [ ] D6按§5双配置安全验证和静态同源调用检查，追加验收、新计划副本；精确三文件add，正常commit保留hooks、不amend、不push，固定新head交Product。

### 必须验收映射（每项有可观察oracle，不用PASS总数代替）

| ID | 同源生产函数/API输入 | 正负可观察断言 | 对应快照负例 |
|---|---|---|---|
| HB3-A | prepare_helper→own_executable_path；GetModuleFileNameW返回0 | 无PreparedHelper、有error、CreatePipe/CreateProcess实际调用0 | M3：n==0路径伪返回非空路径→FAIL HB3-A |
| HB3-B | API依次capacity返回256、随后512容量返回完整Unicode路径；另持续n==capacity至32768 | 成功路径逐UTF-16等值、容量序列256/512；持续截断无路径且共8次调用、零pipe/spawn | M3b：首次n==capacity直接接受→FAIL HB3-B |
| HB5-A | start_verified_helper；same-image与PID/tick匹配，identity真实分片读 | ready=true；identity完整写一次；日志恰一次且发生在最终ReadFile/核实后；未发送write/read活动命令 | M5：将write_identity提前至握手前→FAIL HB5-A/B |
| HB5-B | self/child image查询失败或不同；进程PID0、times失败/tick0；响应PID不符、tick0/不符 | ready=false；日志0；实际stdin写端CloseHandle恰1；无活动命令；失败后真实bounded_teardown被API等待/关闭记录证明 | M1：删除失败分支bounded_teardown调用→FAIL HB5-B |
| HB6-A | 第二CreatePipe失败；SetHandleInformation/创建进程失败另负例 | 首对两个已持句柄各关闭1；第二pipe失败CreateProcess0；无伪“组”计数，无双关 | M2：删除第一对任一CloseHandle→FAIL HB6-A |
| HB6-B | read_helper_identity通过Peek/Read依次得到 `helper-identity pid=`、`12345 creation_`、`tick=13300000000000\n`；expected=相同值 | 三次真实ReadFile调用、完整解析成功；替换PID/tick任一值失败且日志0/EOF；读每次必须有avail>0 | M4：忽略响应PID/tick比对→FAIL HB6-B |
| HB6-C | avail持续0；wall剩余100ms及剩余≥5000ms两例；子进程提前WAIT_OBJECT_0、pipe断、ReadFile0/失败、identity部分/零写、256字节过长 | 无响应ReadFile0；100ms/5000ms到期失败（sleep≤10ms，不越剩余预算）；所有异常ready=false/日志0/EOF；不能只检查字符串长度 | M4b：握手强制成功/去掉超长或deadline检查→相关FAIL或2000调用护栏FAIL |
| HB6-D | bounded_teardown输入 WAIT_OBJECT_0＋GetExitCode成功(0及非0)、WAIT_TIMEOUT持续、WAIT_FAILED、GetExitCode失败 | 返回分别8/8、9、9、9；成功包含实际退出码，关闭顺序stdin→wait→exit-query→process；timeout≤10000ms+100ms轮询容差；失败不调用TerminateProcess，实际资源归属与原语义一致 | M6：return固定8、固定9、忽略exit-query失败各独立快照→FAIL HB6-D |
| HB-DIAG | 同源failure_diagnostic；实际Unicode映像与unknown输入 | 路径非空且信息等价、未知明确unknown、PID/tick/句柄存在；exit9每早期分支含诊断 | M7：映像字段置空→FAIL HB-DIAG |

HB5/HB6不要求失败路径零“identity”命令；要求零 `write ...`/`read` 活动命令与零可信日志。失败在映像阶段可无identity；身份核验失败可已发送identity，但不能发活动命令。不得把WriteFile总次数=0作为错误oracle。

## 5. 精确未来安全验证命令（本Plan未执行）

工具路径取既有报告，本轮未核其版本或安装；执行者预检存在，不安装/切版本绕过。`$WT`为后续获批登记树（建议上述fixed树），`$H`为Product冻结的新head。每角色先登记全新 `$BROOT`，Dev=`$WT/build/issue11-hb-coverage-dev`，Review=`$WT/build/issue11-hb-coverage-review`；不复用旧binding产物。

```powershell
$CMAKE='D:/InstallApplication/CMake/bin/cmake.exe'
$CTEST='D:/InstallApplication/CMake/bin/ctest.exe'
$QT='E:/InstallApplication/Qt/6.12.0/mingw_64'
$GXX='E:/InstallApplication/Qt/Tools/mingw1310_64/bin/g++.exe'
$NINJA='E:/InstallApplication/Qt/Tools/Ninja/ninja.exe'
$env:PATH="$QT/bin;$(Split-Path $GXX);$env:PATH"
$env:QT_QPA_PLATFORM='offscreen'
$env:QT_QPA_PLATFORM_PLUGIN_PATH="$QT/plugins/platforms"
$rx='^(process_checks|close_lifecycle_checks|sampling_recovery_checks|stale_persistence_checks|io_table_checks|io_helper_binding_checks)$'
foreach ($cfg in 'Debug','Release') {
  $B="$BROOT/$($cfg.ToLower())"
  & $CMAKE -S $WT -B $B -G Ninja "-DCMAKE_BUILD_TYPE=$cfg" "-DCMAKE_PREFIX_PATH=$QT" "-DCMAKE_CXX_COMPILER=$GXX" "-DCMAKE_MAKE_PROGRAM=$NINJA" -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
  if ($LASTEXITCODE -ne 0) { throw 'configure failed' }
  & $CMAKE --build $B --parallel 2
  if ($LASTEXITCODE -ne 0) { throw 'build failed' }
  & $CTEST --test-dir $B -N -R $rx
  if ($LASTEXITCODE -ne 0) { throw 'inventory failed' }
  # 库存逐名恰6项；0项、跳过、缺Qt均失败。
  & $CTEST --test-dir $B -j 1 --timeout 120 --output-on-failure -R $rx
  if ($LASTEXITCODE -ne 0) { throw 'safe regression failed' }
  & "$B/io_activity_checks.exe" --check-helper-binding-only
  if ($LASTEXITCODE -ne 0) { throw 'HB failed' }
  & "$B/io_activity_checks.exe"
  if ($LASTEXITCODE -ne 2) { throw 'authorization gate changed' }
  & "$B/io_activity_checks.exe" --helper
  if ($LASTEXITCODE -ne 2) { throw 'helper gate changed' }
  & "$B/io_activity_checks.exe" --check-helper-binding-only extra
  if ($LASTEXITCODE -ne 4) { throw 'mixed gate changed' }
}
```

保持旧R1陈旧/清除/代际拒绝、R2复用选择/数值排序、R3原7预算断言及消费/取消/EOF静态检查。R3旧纯断言通过不能否定§7的新生产问题。不得全量ctest/smoke/process_ops或实际allow入口。

### HBC-R 独立审查与快照变异

- [ ] R1核head/hash、原件tracked前置hash与status、CodeGraph `status --json` 和定向 `explore --path $WT --max-files 1 'start_verified_helper read_helper_identity bounded_teardown prepare_helper'`；已有索引不init/sync写源码，不自动修改配置。使用工程 `open-code-review-delegate` preview/rule及host独立审查，禁止fix。
- [ ] R2在全新review根从 `$H` `git archive`，M1/M2/M3/M3b/M4/M4b/M5/M6各子例/M7各用独立正常快照，仅一处生产变异，**不反转测试断言冒充生产敏感性**；保留旧T9/HB1反转探针（独立快照，不触碰io_table tracked）。每变异记录精确diff/hash，不能组合变异后凭一个FAIL宣称覆盖全部。
- [ ] R3每例Debug/Release均编译成功exit0、check运行exit1且命名FAIL对应§4；编译失败不算可失败验证，固定true/8/9后仍PASS即验收失败。正常未变异快照重建exit0；每例全新构建避免时间戳旧obj假复绿。

```powershell
# $CASE逐例固定M1/M2/...及M6-constant8/M6-constant9/M6-ignore-exitquery等。
$S="$BROOT/$CASE/source"
git -C $WT archive --format=zip "--output=$BROOT/$CASE/source-$H.zip" $H
if ($LASTEXITCODE -ne 0) { throw 'archive failed' }
Expand-Archive -LiteralPath "$BROOT/$CASE/source-$H.zip" -DestinationPath $S
# 用专用Write仅改此S中已读io_activity源的一处生产调用/判断；逐例保存diff。
foreach ($cfg in 'Debug','Release') {
  $PB="$BROOT/$CASE/$($cfg.ToLower())"
  & $CMAKE -S $S -B $PB -G Ninja "-DCMAKE_BUILD_TYPE=$cfg" "-DCMAKE_PREFIX_PATH=$QT" "-DCMAKE_CXX_COMPILER=$GXX" "-DCMAKE_MAKE_PROGRAM=$NINJA" -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
  if ($LASTEXITCODE -ne 0) { throw 'probe configure failed' }
  & $CMAKE --build $PB --target io_activity_checks --parallel 2
  if ($LASTEXITCODE -ne 0) { throw 'probe must compile' }
  & "$PB/io_activity_checks.exe" --check-helper-binding-only
  if ($LASTEXITCODE -ne 1) { throw 'production mutation did not fail' }
}
```

每个case父目录须先专用工具确认/登记并创建，zip在同case目录，源/构建分开；不从解包目录运行脚本解释器。正常快照用同样命令但预期exit0；T9反转另build io_table_checks并预期exit1，正常预期0。
- [ ] R4解析每例compile_commands.json：io_activity对象绝对源等于该 `$S/tests/io_activity_checks.cpp`，不得是WT原件或别的case；原model/MainWindow同固定快照，0原件tests源泄漏。保存zip/source/diff/log/编译命令hash与原件前后hash及只读过程证据。
- [ ] R5独立原件按上段六项回归；全部覆盖oracle、生产调用链、负例、资源账本成立后才建议技术PASS。任一缺失FAIL/BLOCKED；新预算无自动返工。报告必须分开HB技术结果与§7/真实实验阻塞。

## 6. 人工与集成门槛

- 用户批准HB主链固定文件hash与新1Dev+1Review预算，是后续开发门槛；不继承旧审批，也不自动授权§7。
- 真实helper/EOF/I/O仍按旧计划§6单独批准可信EXE、Unicode/非ACP/空格/尾分隔符的EXE/WorkDir、30秒/16777216字节、一个helper与data.bin、各段≥2有效样本；PID/tick、观测映像/实际cwd/日志均须实证。不能把fake或映像路径相等当签名/hash/防TOCTOU证明。
- 真实process_ops受控终止、实际UI分别另批；11H遇§7不得宣告通过。后续T11T新main基点集成需重新评估并复审固定新SHA，原#13A许可/全局顺序不变。

## 7. 新增待批准子项：段协议生产风险（不包含在HB主链实施授权）

**来源：** 本Plan只读main :1190-1321；Product本轮消息要求独立列出，不自动扩大R3整改。

1. **最终成功必然为false（生产可达，不是仅未测）：** 授权宽parse→目录验证→start成功/身份核验→drive_segment idle/write/read→:1272无条件 `cancel.store(true)`→:1295与:1317使用 `!cancel.load()`。中间无清除，因此所有抵达末段的运行即使helper退出码0且样本足够也记INCOMPLETE、:1321返回6，授权实验exit0验收不可能通过；未退出仍返回9。技术fake通过不能消除此阻塞。
2. **取消/耗尽后仍发活动命令：** :1207采样失败或:1231不足样本将cancel=true；调用者:1236返回后仍无guard执行:1246 WriteFile(write)，:1257随后无guard执行:1260 WriteFile(read)。同理剩余预算≤0时段循环不跑并取消，但下一命令仍可能发送。helper :916-934可真实写入data.bin，:937-946可真实读取，违反“取消后不推进”。count_pending_loop_iterations或max限制并不能保证总墙钟预算；同步WriteFile无额外超时，因此不能证明取消后不额外I/O/总运行≤budget（另有既定10秒收束容差）。不据此断言一定超max-bytes。

**最小可选修复边界（须另批准、不是本版执行步骤）：** 仅同一tests文件 :1190-1321与既有acceptance追加；分离“请求EOF收束”和“活动失败取消”标志，保留进入收束前的真实成功状态；每次活动命令前检查cancel和剩余预算，失败不发下一命令；以同源小段控制/结果判定函数注入命令回调/时钟，覆盖全部成功→0、idle失败→后续write/read0、write失败→read0、预算到期→无新命令、EOF后退出非0→6/未知→9。若需解决同步写绝对硬超时、helper读取超预算或扩大架构，另规划而非顺带添加通用框架。

可选阶段若获用户批准，应另独立合同与预算，在 HBC-R 完成后串行（允许路径重叠）；**没有批准时不进入本DAG、不派Dev、不把HB批准当R3批准**。Product将“批准HB主链与预算”及“是否另规划/批准段协议修复”分成独立用户决定。#11与11H完成必须保留该明确阻塞。

## 8. 交付自查与实施顺序

- [ ] 用户待批准：本版HB固定hash；独立hb_coverage_stage预算；§7独立决定；真实实验/终止/UI仍另批。
- 自查已完成：HB3/5/6均映射生产函数/API与正负oracle；三个tracked路径、无CMake变更；表图依赖一致，Review与Dev串行；旧批准版保留；§7不混入HB授权；未来命令非本轮执行结果。
- 顺序：计划交付/关闭Plan→用户批准HB及预算→RED同源故障检查→最小抽取与GREEN→冻结head→独立快照单变异与双配置Review→Product技术裁定；§7及11H/11T仍按各自门槛推进，不自动豁免。

## 来源与证据层级

- 主工程AGENTS与共享README、本task contract；旧批准helper v1 hash本轮Get-FileHash核实一致。
- 指定WT CodeGraph MCP定向query及CLI status v1.6.2：projectPath正确、complete、pending0、mismatch=null；git HEAD实测固定53fd43e，status --short为空。MCP首个宽query遗漏目标源码，不用它证明完整调用链；随后pin文件查询及未覆盖main段专用Read补齐。
- `.workflow/parallel-plan-20261029-6-11-17/issue11-helper-binding/{dev-1,review-1}.md`及两份ops：仅历史来源，原自报/工具证据级别不改；本Plan未运行其构建与检查。
- 技能精确调用、来源、内容hash/版本及tool/self_report区分详见本task `plan-1.md`；没有本轮开发成功或运行PASS声明。
