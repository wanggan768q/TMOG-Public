# Issue #16 验收记录

日期：2026-10-27。执行会话：TMOG-dev-snoopy-wozniak [f0fbd5]。
Worktree：`E:/Git/TMOG-Public-WorkTree/issue-16-sampling-recovery`，分支 `issue-16-sampling-recovery`，基线 `origin/main@246be01`（246be01fd8298b2e257a40e0fcd3224e45c963f4）。
计划文档：`doc/plans/2026-10-27-issue-16-sampling-recovery.md`。

## 1. 构建（Debug + Release）

环境：Windows 11 Pro 10.0.26200；MinGW 13.10（E:/InstallApplication/Qt/Tools/mingw1310_64）；Ninja；Qt 6.12.0（E:/InstallApplication/Qt/6.12.0/mingw_64）；CMake 3.x（D:/InstallApplication/CMake）。

命令（两配置同型，build-16-debug=Debug，build-16=Release）：

```
cmake -S . -B build-16-debug -G Ninja -DCMAKE_BUILD_TYPE=Debug \
  -DCMAKE_PREFIX_PATH=E:/InstallApplication/Qt/6.12.0/mingw_64
cmake --build build-16-debug
```

结果：两配置全部目标（tmog_core、process_checks、smoke_enumerate、process_ops_checks、close_lifecycle_checks、sampling_recovery_checks、TmogReplica）编译链接成功，无错误。Release 附带 windeployqt 便携目录。

## 2. 自动行为检查（真实 QThread/事件循环运行证据）

命令：`ctest --output-on-failure`（两配置 build 目录内执行）。

Debug 结果：

```
1/5 Test #1: process_checks ...................   Passed    0.03 sec
2/5 Test #2: smoke_enumerate ..................   Passed    0.39 sec
3/5 Test #3: process_ops_checks ...............   Passed    0.16 sec
4/5 Test #4: close_lifecycle_checks ...........   Passed   11.62 sec
5/5 Test #5: sampling_recovery_checks .........   Passed    1.81 sec
100% tests passed, 0 tests failed out of 5
```

Release 结果：同 5/5 全绿（sampling_recovery_checks 1.82 sec）。

新增 `tests/sampling_recovery_checks.cpp` 覆盖（受控 ScriptedEnumerator 注入）：

| 检查 | 验证内容 | 对应票面 |
|---|---|---|
| C1 | `ok=false` 快照 → failed 带错误描述，done 不触发（假成功阻断，错误快照不进差分） | 结果存在+成功标志分别检查 |
| C2 | take_sample 返回 nullopt（枚举异常）→ failed 回调 | 同上 |
| C3 | 失败后重试：恰一次失败+一次成功，恢复成功携带新样本（唯一序号 seq==2 非旧 seq==1） | 恢复重建基线 |
| C4 | 在途时再次 start 不叠加 worker（忙碌不重入 worker 层防线） | 忙碌不重入 |
| C5 | 代际递增后迟到在途结果被拒绝（跨暂停旧结果丢弃，与 MainWindow 代际逻辑同构） | 采样代际 |

既有 #14 检查（close_lifecycle_checks A–G）全数通过：收束/超时/恢复合同未被本票破坏。

## 3. 生产 GUI 证据（生产 MainWindow 路径）

Release `TmogReplica.exe`（244.3K，windeployqt 便携目录 build-16/）启动冒烟：

```
SMOKE: alive after 6s (pid 972)
SMOKE: terminated cleanly
```

生产路径启动成功、运行期无崩溃（含 1/sec 采样循环、代际捕获回调、失败分支接线全部加载）。

## 4. 人工交互验收（未验证，如实标注）

本执行会话为后台任务，无 GUI 交互输入能力。以下项**待人工验收**，不以静态/自动检查冒充：

- [ ] 状态栏"采样失败：…（保留上次数据）"实际可见（可用暂停外手段触发枚举失败验证，或 Review 认可 C1/C2 worker 层证据）。
- [ ] 暂停→快速恢复：表格显示"待采样"整表重建、旧数据不闪现（C5 为同构逻辑层证据）。
- [ ] 暂停中点刷新：采一次、保持暂停态。
- [ ] 忙碌连点刷新：状态栏"正在采样，请稍候…"。
- [ ] 结束进程确认后 3s 等待期间拖动窗口保持响应（代码路径：terminate 在 QThread::create 工作线程）。

演示路径：`E:/Git/TMOG-Public-WorkTree/issue-16-sampling-recovery/build-16/TmogReplica.exe`。

## 5. 行为矩阵增量（补记 issue-1-behavior-matrix.md §3）

| 状态 | 手动刷新 | 定时采样 |
|---|---|---|
| 运行+空闲 | 立即采样，正常差分 | 正常 |
| 运行+忙碌 | 拒绝重入，状态栏反馈 | 不启动（worker 忙） |
| 暂停+空闲 | 采一次并显示，保持暂停 | 不启动 |
| 暂停+忙碌 | 拒绝重入，状态栏反馈 | — |
| 关闭中 | 忽略 | 不启动 |

失败语义：失败帧保留上次数据（模型不动）+ 状态栏错误 5s；下个成功帧重建基线 + "采样已恢复" 3s。暂停/恢复均作废基线；暂停额外递增代际使在途结果作废。

## 6. 支持限制

- Windows only（票面范围）；Linux/macOS 不在本票。
- #13 按值冻结未实现（独立分支待 GUI 验收，票面排除项）。
- 枚举器实现（WindowsProcesses.cpp）"单进程失败只影响该字段"原已满足，未改动。
- kill 线程收束：closeEvent 等待 ≤4s，超时拒绝关闭（与 #14 拒绝关闭合同一致）；无强杀。

## 7. 变更清单

- `src/SamplingWorker.{h,cpp}`：ok 检查下移（optional+ok 分别判定）、失败信号带错误描述。
- `src/MainWindow.{h,cpp}`：start_sample 代际捕获+回调比对；失败反馈+基线作废+恢复提示；on_refresh_now 暂停采一次/忙碌反馈/关闭忽略；on_end_task 值拷贝身份+terminate 工作线程化+kill_thread_ 收束；closeEvent kill 线程有限等待；析构防御等待。
- `tests/sampling_recovery_checks.cpp` 新增；`tests/close_lifecycle_checks.cpp` 失败回调签名适配；`CMakeLists.txt` 注册新检查。
- `doc/plans/2026-10-27-issue-16-sampling-recovery.md`（计划）+ 本文件（验收）。
