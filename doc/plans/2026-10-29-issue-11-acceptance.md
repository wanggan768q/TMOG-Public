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