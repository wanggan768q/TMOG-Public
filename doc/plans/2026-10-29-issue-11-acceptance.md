# Issue #11 验收记录（Windows 累计 I/O → 真实差分速率 → 数值模型）

任务：issue11-io（run=parallel-plan-20261029-6-11-17，attempt=1）
计划：doc/plans/2026-10-29-issues-6-11-17-parallel-plan-v1.md v1
      SHA-256 d776056e1f579c195be14b37b113c72dd8e9ffebfe7cdb10194a63cdc19899e5
Base：eec156463e02813877f888bf2c0410cb41b133d9（origin/main，前置 11→5 closed 已核实）
分支：feat/issue11-io-20261030

## 已实现（按计划 §4任务11）

1. `ProcessSnapshot` 新增 `io_read_bytes/io_write_bytes`（uint64 累计）+ `io_available`。
2. `SampledRow` 新增 `optional<double> io_read/write_bytes_per_sec` + 独立 `io_status`
   （不覆盖 CPU `status`）。
3. `compute_io_rates(previous,current,wall_delta_ns,out_read,out_write)`：双输出每次
   reset；creation_tick==0 或当前 io 不可用→Unavailable；无 prev 且当前有效→
   FirstSample（无 prev 且当前无效→Unavailable）；身份不同→IdentityChanged；
   prev 字段不可用→FirstSample（恢复重建）；dt=0→Unavailable；任一累计倒退→
   InvalidDelta 两方向无产值；否则 `double(cur-prev)/(double(dt)/1e9)`（不先做
   uint64 乘 1e9，防溢出）有限非负→Ok；有效 Δ=0 显式 0。
4. `diff_samples` 沿既有 PID 配对与每帧真实 wall 差调用 compute_io_rates；刷新档位
   不作分母。
5. `WindowsProcessEnumerator::take_sample`：同一已有句柄（PROCESS_QUERY_LIMITED_
   INFORMATION）在有效创建身份核实后调 GetProcessIoCounters；不增权限、不按裸 PID
   取第二句柄。
6. `ProcessTableModel`：`ColIoRead/ColIoWrite` 插在 ColStatus 前；Display
   B/s、KiB/s（1 位小数）、MiB/s（2 位小数）；UserRole 恒为 double，无效哨兵
   -1.0；tooltip 注明"并非物理磁盘吞吐"及待采样/不可用/身份变化/无效增量/无速率。
7. `io_table_checks`：生产 model + 同源 proxy 配置（UserRole 排序，复刻
   MainWindow.cpp 构造）+ 生产 MainWindow（构造注入受控枚举器，G5 模式）；
   8 组检查：2/10/1000 正反数值排序、B/s KiB/s MiB/s、哨兵同类型(-1.0)排序稳定、
   排序+新帧后选中身份保持（PID=2）、身份不复用（creation_tick=1）、CPU 状态不
   被 I/O 失败覆盖、tooltip、diff_samples 首帧双状态 FirstSample。无 real
   terminate/真实枚举/受控 IO。
8. `io_activity_checks`：仅受控实验入口。argv gate（--allow-controlled-io）在一切
   框架/副作用之前；无 flag exit 2、无子进程/文件副作用。授权路径 exit 3 未实现
   （11H 待用户单独批准，计划 §5.4/§5.5）。构建目标存在但**不** add_test。

## 验证证据（§5.1）

工具：CMake/CTest（D:/InstallApplication/CMake/bin）、Qt 6.12.0 mingw_64、
GCC 13.1.0、Ninja（E:/InstallApplication/Qt/Tools）。

Debug（build/issue11-debug）与 Release（build/issue11-release）各自执行：
- configure（-G Ninja，前缀/编译器/make 程序显式字面路径）→ exit 0
- `cmake --build --parallel 2` → exit 0
- ctest -N 库存正则精确 5 项（process/close_lifecycle/sampling_recovery/
  stale_persistence/io_table）→ exit 0，Total Tests: 5
- ctest -j1 --timeout 120 --output-on-failure 同正则 → 5/5 Passed，exit 0
- `io_activity_checks.exe`（无 flag）→ exit 2，无文件副作用

故意失败模式：向 process_checks 注入错误断言（51→50 期望），Debug exit 1 与
Release exit 1 均确认显式失败检查未被优化掉；随后还原源文件并重建双配置
ALL PASS（51 checks）exit 0。

## 边界遵守

- 写域精确 12 文件（8 改 + 4 新增）；MainWindow.cpp/.h、SamplingWorker、
  process-ops、其他平台后端、.gitignore 均未改。
- 构建产物仅在 WT/build/issue11-debug、issue11-release（windeployqt 输出在
  目标目录内）；未创建 io-experiment 目录；未写系统 TEMP（临时调试目录已清理）。
- 未执行 11H 受控 I/O、真实 process_ops_checks、smoke、真实 app 启动、真实终止。
- Issue #11 不全关（安全实机回归与人工项 pending）。

## 执行中的裁决（Rulings）

1. 计划 §124 原文"无 previous 且当前有效→FirstSample"：无 prev 且当前无效归
   Unavailable（首版测试断言写反，改测试不改实现）。
2. io_table T1/T2 断言必须经 proxy 视图行读取（排序作用于 proxy，读源 model
   无效）——测试缺陷修正。
3. T2 升序哨兵 -1.0 排最前（-1 < 100），非"最底"。
4. T3 枚举器改为每帧全 3 进程在场，选择保持才可验证。
5. stale/io_table 两 test 属性补 QT_QPA_PLATFORM_PLUGIN_PATH（生成器表达式）：
   第二轮 ctest 漏外部插件环境变量导致 offscreen 挂起 120s 超时；计划 §5.1
   "合法 Qt 插件路径"要求落实，根治环境依赖。

## 未完成（pending，不阻塞本次交付）

- 11H 受控本地 I/O 实验（需用户单独授权，§5.4 命令形态已就绪）。
- process_ops_checks 真实终止回归（需单独受控授权）。
- 实际桌面 UI 人工点验（I/O 列显示/排序/tooltip 的视觉验收）。
- Issue #11 整票关闭：以上三项完成后由 Product 决定。


## 返工 attempt=2（repair_round=1，head 9281643 → 本轮新提交）

- R1（裁定方案B，用户扩准 MainWindow.cpp 接线）：ProcessTableModel 新增最小 `bool table_stale_` + `set_table_stale(bool)`（dataChanged 仅发 I/O 列 ToolTipRole，不全表 reset）；tooltip 经 with_stale 追加"数据已陈旧"后缀，不隐藏各 I/O 具体状态。MainWindow 失败回调置 true、当前代际成功回调清 false；跨暂停旧代际成功经既有代际守卫丢弃不清陈旧；stale_label 行为不变。
- R2：T4b 真实 PID 复用可失败场景（帧1 旧身份 PID101 tick=1 累计稳定可选；帧2 起 tick=777000 累计跳变）——pid-only 匹配实现下断言 `!wrong_reuse` FAIL；正确实现下选中消失（合法分支）。枚举器非恒 tick1（777000 帧 + 失败帧注入）。
- R3（仅编写，未执行授权路径）：io_activity_checks 完整实验入口——argv gate exit2（无 flag 零副作用）；参数解析（未知/相对/非法预算 exit4）；WorkDir 拒绝（非空/链接/reparse/工程根及直接子目录/缺 --work-dir）；helper 身份 PID+creation+自持句柄日志；idle/write/read 段协议（各 ≥2 有效样本、真实 QPC dt、差分速率、实际累计非文件尺寸假推）；取消/预算收束自然退出协议（stdin EOF），不强杀。静态与动态分列：动态仅验证 exit2 与副作用前参数负例（exit4），授权路径零执行。
- 验证：Debug/Release configure/build exit0；两配置库存恰 5 项、j1 timeout120 全 5/5 PASS；process_checks 故意失败探针 exit1 后还原复绿（ninja 时间戳陈旧需 touch 重编译，源 md5 前后等于 HEAD）；无 flag exit2 双配置零文件/子进程副作用。
- 未执行（保持原验收不豁免）：11H 受控 I/O 实验、process_ops 真实终止回归、实机 UI 人工点验。


## 返工 attempt=3（repair_round=2 最后轮，head 68a301a → 本轮新提交）

范围：仅 R3 缺口；R1/R2 保持不动。允许修改文件：tests/io_activity_checks.cpp、
本验收文档、CMakeLists.txt（仅实验 target WIN32 门）。

- 预算真实消费：新增纯函数 `check_budget_request(request,used,cap)`（io_activity_checks.cpp:55）
  与 `count_pending_loop_iterations(max_iters,per_iter,done,used,cap)`（:63，减法防 uint64
  溢出，双约束计数+字节预算真控循环）；父进程 write 段请求字节数由该函数计算
  （:562-566），wall deadline 由 `--budget-seconds` 真实推导（:506），段 deadline 取
  剩余预算与 5s 小者（:511-524），预算算法经无副作用自检锚定（:268-278）。
- 取消标志真实置位：`cancel.store(true)` 四处（采样失败 :530、段未凑足样本 :554、
  命令发送失败 :573/:586），取消后跳过后续段并进入收束（非死标志/注释）。
- CreateProcess 单 helper spawn：父进程 GetModuleFileNameW 取自身 EXE 绝对路径
  （:379-383），CreateProcessA 以 `--allow-controlled-io --helper --work-dir …`
  完整引号 argv 重启本 EXE 唯一 helper（:424-430，不 shell/外部程序）；保留
  pi.hProcess 并用 GetProcessTimes 独立核实 helper 自报 PID+creation_tick 双字段
  （:436-492），身份不符/不可核实即真实失败退出 8；身份核实通过后写归属日志
  （:495-501）。
- 段协议经 helper：idle/write/read 三段采样全部基于 helper 的 hProcess
  GetProcessIoCounters 同口径累计（:217/:529），真实 QPC dt/差分速率写日志，
  不与物理 Disk 等价；write 段 helper 侧写唯一自造 data.bin（4096B 块，受
  max_bytes 约束），read 段读回同文件；父/助手 stdin/stdout 管道协议
  （identity/ping/write/read），helper 未知命令忽略。
- 收束协议：CloseHandle(stdin_write) 触发 stdin EOF → helper getline 失败自然退出
  （:328/:594）；父 WaitForSingleObject 持有句柄等退出（:598），GetExitCodeProcess
  确认退出码；自然退出未确认时报告身份（PID+creation_tick+句柄）保留资源不强杀
  （:624-632，TerminateProcess 全文仅出现于该注释）；不按 PID/名字清理。
- 句柄生命周期：父端 stdout_read/stdin_write 在 spawn 前经 SetHandleInformation
  去继承（:409-411）防"子进程持写端致 stdout 永不 EOF"；子端 stdin_read/
  stdout_write 在 CreateProcess 返回后立即由父关闭（:427-428）；成功路径 pi.hThread
  先于 pi.hProcess 关闭（:607-608），所有失败分支逐一关闭已开句柄后退出。
- gate 保留：argv gate 最先（:285-291）；无 flag exit2 零副作用（默认路径不跑自检，
  自检在授权路径参数解析后、任何文件/进程副作用前 :293-301）；--helper 子模式须
  显式授权 flag 齐（parse_args :95-98）；WorkDir 拒绝相对/已存在非空/链接/reparse/
  工程根（:105-148）；helper 不打开父未指定路径、不创建额外子进程。
- CMakeLists.txt：io_activity_checks 从 Qt6::Widgets 块移入 WIN32 门内（纯 Win32
  源文件不依赖 Qt；review-2 Standards 硬违规修复），其余 target 属性未改，仍不
  add_test。
- 无副作用自检（exit 前纯内存）：check_budget_request/count_pending_loop_iterations
  7 断言；自检失败 return 7。开发中自检曾抓到测试装置缺陷（断言期望写反 + check()
  计数器参数遮蔽），修复后全 PASS——自检可失败性已动态验证。

## attempt=3 验证证据

- 双配置 configure exit 0（CMake 改动后完整 re-configure）+ build --parallel 2 exit 0。
- 库存 ctest -N 精确 5 项（两配置）；ctest j1 timeout120 同正则 **5/5 PASS exit 0**
  （Debug/Release，R1/R2 安全回归不退化）。
- io_activity 无 flag：Debug exit 2 / Release exit 2，stdout 仅授权提示，零文件/子进程。
- 参数负例单列：budget=0 / max-bytes 超限 / 未知 flag → exit 4（双配置 6 例）；
  相对 work-dir → exit 5（授权路径自检先跑全 PASS 再拒绝，拒绝在任何文件/进程副作用前）。
- ��执行（合同禁止，不豁免）：--allow-controlled-io 授权路径、--helper、真实
  CreateProcess spawn、受控 I/O、io-experiment 目录、真实 app/smoke/terminate。
- 授权路径动态行为（spawn/身份核实/段协议/收束）仅有静态编译+审查证据。

## helper_binding_stage attempt=1（新阶段 HB-D，head 0627ab4 → 本轮新提交）

范围：仅 helper 映像/Unicode 绑定修复；R1/R2/R3 保持不动。计划：doc/plans/
2026-10-30-issue-11-helper-binding-repair-plan-v1.md v1（SHA afd0a9a3d97dadccaf
5617f3269bd99ad1ee5b4f5299c3c722f88e213f8a1990），用户"批准限定实施"。允许四
文件：tests/io_activity_checks.cpp、CMakeLists.txt、本验收文档、批准计划 WT 副本。

- 宽入口（D2）：main 保留窄签名；GetCommandLineW→CommandLineToArgvW 宽 argv 进
  parse_args（const wchar_t* const*）；数值 wcstoull/wcstoll + end 完整消费检查
  （parse_wide_number：拒绝空白/负号于无符号/溢出 ERANGE/尾垃圾/零/超限），budget
  1..300、max 1..67108864 原范围保持；LocalFree 配对。
- own_executable_path（D3/HB3）：GetModuleFileNameW 256 WCHAR 倍增至 32768 上限，
  仅 0<n<size 接受；返回 0/持续截断均无可用路径 → exit 8，spawn 前拒绝。
- quote_windows_arg（HB1/HB2）：始终带引号；字面引号前累积反斜杠翻倍+1（2n+1）+
  单个转义引号；闭引号前 2n。注：CommandLineToArgvW 对 argv[0] 有特殊规则（开引
  号后字面取到闭引号，不还原 2n），转义语义经 argv[1] 位置验证；生产 argv[0] 为
  真实 EXE 路径（HB1 9-token 往返覆盖）。
- helper_command_line（D4）：固定 9 token（argv0/allow/helper/work-dir+值/budget+值/
  max+值）；嵌入 NUL 拒绝；含终止符总长 >32768 拒绝（32767 边界内可构造）。
- 启动核验分离（D5/HB5）：CreateProcessW 显式宽 lpApplicationName（无引号、不搜
  PATH）+ lpCurrentDirectory=work_dir.native()；STARTUPINFOW/NUL 结尾可写宽缓冲。
  spawn 后 QueryFullProcessImageNameW(flags0) 对自身与 pi.hProcess 各自完整读取，
  lexically_normal 后逐 UTF-16 相等 + pi.dwProcessId 非零 + GetProcessTimes 真实
  非零 tick——任一失败不发 write/read、不写可信身份日志、走统一收束（8/9）。
- 有界握手（D6/HB6）：identity 命令 WriteFile 全量核验；PeekNamedPipe 轮询 ≤10ms
  累积到换行，最多 255 字节，握手 ≤5s 且 ≤ 剩余预算（总预算从准备启动前计时）；
  只有数据可读才 ReadFile；检测子退出/管道断开/过长。响应严格完整数字解析
  （parse_wide_number 同源）后与父端独立核实值比对。
- 统一收束 bounded_teardown（D6/HB6）：取消 → 关 stdin 写端 EOF → WaitForSingle
  Object ≤10s 自然退出 → GetExitCodeProcess 确认；确认退出→8，未确认→9（进程句
  柄保留+身份记 stderr、目录保留、转用户，绝不强杀）。第二 CreatePipe 失败关闭已
  持第一对；SetHandleInformation 失败/写入失败/解析失败全部经同一收束出口。
- HB1..6 检查（D1）：run_helper_binding_checks() 纯参数/状态/CommandLineToArgvW
  解析检查，无文件/进程/窗口/IO 采样；48 断言全 PASS；不使用 assert（Release 可
  失败，HB_exit=1 实测于开发中转义缺陷）。--check-helper-binding-only 仅当唯一
  参数时进入；混用 exit 4；其余路径先授权 gate（无 flag 与单独 --helper 均 exit 2
  零副作用）。
- CMakeLists：io_activity_checks 链接 shell32（CommandLineToArgvW）；新增
  add_test io_helper_binding_checks（io_activity_checks --check-helper-binding-
  only）TIMEOUT 120；实验入口仍不 add_test。

## helper_binding_stage 验证证据

- 构建：build/issue11-binding-dev/{debug,release}（本阶段唯一登记构建目录）。
  Debug/Release 各 configure exit 0 + build --parallel 2 exit 0（0 error/FAILED）。
- HB 检查：Debug 与 Release `io_activity_checks --check-helper-binding-only` 均
  48 PASS / 0 FAIL / exit 0（GREEN）；开发中首跑 3 FAIL→exit 1（可失败性实测），
  根因两段：①quote 字面引号多输出一对 \"（生产 bug，修复）②argv[0] 特殊解析规
  则（测试位置修正，非生产缺陷）。修复探针在登记构建目录内（quote_probe.cpp，
  用后可弃），tracked 文件外无源码残留。
- Gate：两配置 no-flag exit 2、--helper 单独 exit 2（零文件/子进程副作用）；
  检查 flag 混用 exit 4。
- 库存：ctest -N 六项正则两配置均 Total Tests: 6（process/close_lifecycle/
  sampling_recovery/stale_persistence/io_table + 新 io_helper_binding）。
- 安全回归：ctest -j1 --timeout 120 --output-on-failure 同正则两配置均 6/6
  passed exit 0（R1/R2/R3 安全项不退化）。
- RED 基线：旧 HEAD 代码构建后 --check-helper-binding-only → exit 4（入口不存
  在），新实现后 48 PASS（RED→GREEN 完整链）。
- 未执行（合同禁止，不豁免）：--allow-controlled-io 授权路径、真实 CreateProcess
  spawn/EOF、真实 I/O、TerminateProcess、真实 GUI、smoke、全量 CTest。授权路径动
  态行为仅有静态编译+审查证据；真实 helper/实机门槛按计划 §6 另批。
## hb_coverage_stage（HBC-D）验证证据

- 计划：doc/plans/2026-10-30-issue-11-hb-coverage-repair-plan-v1.md v1（SHA-256
  b2614b353cca24151a3dc597b5f64f2656980e695183be1ae34edad767828fb9，主工程批准
  文件与 WT 副本字节一致）。base=53fd43efd85308133adfb6acc7812c1495c5410f。
- 同源改造（§2 三接口全部落地，main 与检查同调用）：
  HelperOps（13 个 Win32 函数指针 + now_ms/sleep_ms/write_identity 回调，生产
  默认真实 API）/ prepare_helper→own_executable_path / start_verified_helper
  （main :997-1188 真实语句移入）/ read_helper_identity（完整 WriteFile、可读
  后 ReadFile、255 上限、≤5s 且 ≤剩余预算、精确前缀 `helper-identity pid=` 与
  分隔符 ` creation_tick=` 切纯数字解析——修复旧 :1162 尾空格进数值解析的协议
  缺陷）/ bounded_teardown（TeardownObservation 由函数填写）/ query_full_image
  _path / helper_failure_diagnostic（UTF-8 映像或 unknown）。
- 可信日志次序修正（D5/HB5）：write_identity 移至 start_verified_helper 内
  映像/PID/tick gate 与握手响应全部核实成功之后；之前任何失败零日志。
  main 删除 gate 通过后的独立日志块。
- 末 --work-dir 小 guard（D4）：无授权末 --work-dir → exit 2（授权 gate 一致
  性）；有授权但缺值 → exit 4。纯解析，未以 allow 运行真实入口。
- exit9 诊断（D5）：main 失败出口统一 helper_failure_diagnostic（pid/tick/
  handle + UTF-8 映像或 unknown）；删除恒空 image_chars 字段。
- 删除旧镜像断言（PathReadProbe/probe_own_path/SpawnVerificationInputs/
  verify_spawn_gate、旧 HB6 常量断言 true/8-9、旧 PipeTeardown 局部模拟、旧
  3 分片字符串拼接检查）；删除未使用的 query_creation_tick/sample_segment。
- HB 检查（--check-helper-binding-only）：113 PASS / 0 FAIL，Debug 与 Release
  均 exit 0。fake HelperOps API 脚本驱动真实同源函数：16 fake API 全记账
  （2000 调用护栏、唯一 token、双关/未持句柄/未脚本化即 FAIL）、fake 时钟仅
  sleep/脚本推进、子进程存活建模（EOF 关 stdin 写端→自然退出；可脚本挂起）。
- 验收映射（§4 表逐项）：
  HB3-A GetModuleFileNameW 返回 0→无 PreparedHelper+error+CreatePipe/Process 0
  ✓；HB3-B 持续截断 8 次调用（256..32768）零 pipe/spawn ✓、256→512 成功逐
  UTF-16 等值 ✓；HB5-A 全匹配 ready+日志恰 1 次且在最终核实 ReadFile 后+零活
  动命令 ✓；HB5-B 五类不符（映像不同/查询失败/PID0/tick0/响应不符）ready=
  false+零日志+stdin 写端 CloseHandle 恰 1+真实 teardown API 证明 ✓；HB6-A 第
  二管道失败两句柄各关 1+CreateProcess 0 ✓、SetHandleInfo 失败四句柄各关 1 ✓；
  HB6-B 分片握手 2 次真实 ReadFile 解析成功 ✓、PID/tick 替换失败 ✓；HB6-C
  avail 0 时 100ms/5s 到期失败（sleep+wait 推进 ≤ 预算+轮询容差）✓、子提前退
  出/断管/ReadFile 失败/超长均失败 ✓；HB6-D WAIT_OBJECT_0+exit 成功(0/非0)→
  8、持续 TIMEOUT→9、WAIT_FAILED→9、exit 查询失败→9（observation 由函数填
  写，返回值来自真实 exit 查询——7 观测值断言）✓、timeout ≤10000ms+100ms 容
  差 ✓；HB-DIAG Unicode 映像非空路径+unknown 明确+PID/tick/句柄存在 ✓。
- Gate（双配置）：无 flag exit 2、--helper 单独 exit 2、检查 flag 混用 exit 4。
- 库存与回归（双配置）：ctest -N 六项正则恰 6 项；ctest -j1 --timeout 120
  --output-on-failure 同正则 6/6 passed exit 0（R1/R2/R3 安全项不退化，各
  ~30s）。
- 产物：仅 build/issue11-hb-coverage-dev/{debug,release}（本阶段唯一登记构建
  目录）；日志/探针均在该目录；无 TEMP/build 根/工程外写入。
- 未执行（合同禁止，不豁免）：真实 helper spawn/EOF/有效 I/O、--allow-
  controlled-io 授权路径动态行为、TerminateProcess、真实 GUI、smoke、全量
  CTest、推送发布。§7 段协议问题（取消后仍发活动命令、最终成功必然 false）
  按批准范围不含本轮，保持阻塞记录。
