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

**017→018 记录：** 017 受控退出（用户确认范围）：子 pid=25020 句柄先取（2452）、Path/ticks/hash 三值动作前核验一致 → CloseMainWindow 优雅退出（raw ExitCode -1073740286，原值记录不解释语义；ctest receipt 记 Exit code 0xc0000602——两独立来源同值，仅记事实）；父 ctest 38508 仅观察 60s 内自然退出，014 最终结果 3 PASS + 1 FAIL（stale，Test time 3347.95s），原始失败记录保留。018 全量重验：stale 双配置单测 Passed（Debug 8.80s / Release 8.76s，015 属性首验）+ 两配置完整四目标 4/4（22.15s/22.18s）全 exit 0。

| negative-oracle | 双配置 exit 1（oracle 有效性） | **最终**：Release exit 1（18836ms，012 组）；Debug 经 013 重验 exit 1（Start-Job 内显式环境，三证据齐备：NEGATIVE-ORACLE MODE 启动行 / `FAIL: terminate target == B` / `failures=1 (exit 1 expected)`，stdout SHA 2129dcb78606127f112b21eeae8039b64b997b8f8180e9a9e3502ff24b030d94）。012 中 Debug 首跑 0xC0000135 启动失败（PATH 未继承，调用间环境不持久）为过程记录，013 按严格证据判定通过。 |
| 非破坏性回归 | process_checks/close_lifecycle_checks/sampling_recovery_checks/stale_persistence_checks 双配置 | **最终**：Debug 4/4（22.15s）、Release 4/4（22.18s）exit 0（018）。smoke_enumerate/process_ops_checks 未运行（A 合同排除；process_ops_checks 含真实受控终止归 B/独立授权）。 |
| 真实 Windows 终止/PID 重用/物理 GUI | **未测（B 未批准）** | 不适用本轮 |

## 3. 未测项

- 真实 WindowsProcessOps 行为（真实终止、句柄核实、真实错误码）
- 真实 PID 复用（fake R 仅模拟身份变化语义）
- 物理桌面 GUI 交互（offscreen ≠ 物理视觉验收）
- helper/idle/manual 模式（B 范围，未实现）
- #13 第四验收项人工确认（维护者门槛）
