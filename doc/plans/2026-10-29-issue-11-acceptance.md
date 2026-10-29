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
