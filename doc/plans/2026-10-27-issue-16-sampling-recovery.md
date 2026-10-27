# Issue #16 实施计划：采样失败、快速暂停恢复与手动刷新闭环（W34）

日期：2026-10-27。执行会话：TMOG-dev-snoopy-wozniak。Worktree：`E:/Git/TMOG-Public-WorkTree/issue-16-sampling-recovery`，分支 `issue-16-sampling-recovery`，基线 `origin/main@246be01`。

前置：#5（W01，进程身份/安全操作）、#14（W33，SamplingWorker 生命周期）已 closed 并集成。

## 1. 现状缺陷清单（源码逐条核实）

| # | 位置 | 缺陷 | 票面条款 |
|---|---|---|---|
| D1 | `src/SamplingWorker.cpp:14-17` `Bridge::run` | 只检查 optional 存在（`if (result)`），`ok=false` 的 API 失败快照被当成功投递 `apply_sample` → **假成功**：错误快照进入成功差分、覆盖表格、污染基线 | "同时检查结果存在及成功标志，区分正常枚举结束与API失败" |
| D2 | `src/MainWindow.cpp:73-76` | 失败回调为空操作，无任何用户可见反馈 | "错误／恢复反馈可见" |
| D3 | `src/MainWindow.cpp:79-95` `apply_sample` | 暂停/关闭期间在途结果返回后仍被应用（`paused_` 只在启动时检查）→ 跨暂停旧结果污染新基线 | "用采样代际等最小状态拒绝跨暂停旧结果" |
| D4 | `src/MainWindow.cpp:133` `on_refresh_now` | 直接转发 `on_sample_tick`：暂停时刷新**无任何动作**；忙碌时 `worker_.start` 内部静默拒绝，无反馈 | "手动刷新在暂停时采一次但仍保持暂停；忙碌时不重入且明确反馈" |
| D5 | `src/MainWindow.cpp:149-173` `on_end_task` | (a) `terminate(3000)` 同步 `WaitForSingleObject` 在 UI 线程 → 冻结 GUI 最多 3s；(b) `row`/`snap` 指向 `model_->rows_` 内部，模态确认框期间 `sample_timer_` 继续采样，`replace_snapshot` 重分配 `rows_` → **UAF** | "结束操作的有限退出等待不冻结GUI，维持冻结目标身份和资源安全合同" |

单进程失败只影响该字段（OpenProcess 失败 → 该进程字段 unavailable、进程仍在列表）已在 `src/platform/WindowsProcesses.cpp:54-71` 满足，不改动。

## 2. 设计

### 2.1 ok 检查下移到 worker 桥（D1）

`Bridge::run` 同时检查 optional 与 `ok`：

```cpp
auto result = enumerator->take_sample();
if (result && result->ok) emit done(std::move(*result));
else emit failed(result ? std::move(result->error)
                        : std::string("take_sample returned no result"));
```

`FailedFn` 由 `std::function<void()>` 改为 `std::function<void(std::string)>`（错误描述透传 UI）。现有测试的 `[] {}` 回调仍兼容。Qt6 信号参数自动注册 metatype，`std::string` 跨线程队列连接可用。

### 2.2 采样代际（D3）

`MainWindow` 新增 `std::uint64_t sample_generation_ = 0`。启动采样时捕获当前代际；回调先比对，不匹配即丢弃：

- 暂停（`on_pause_toggled(true)`）：`++sample_generation_` → 暂停前所有在途结果作废（覆盖"快速暂停恢复"场景：恢复无需再递增，一次暂停即失效所有暂停前在途结果）。
- 恢复（`on_pause_toggled(false)`）：`invalidate_baseline()` → 暂停期间手动帧建立的基线也作废，恢复后首帧重建基线（不跨暂停段差分）。
- 失败回调：代际匹配才反馈；`invalidate_baseline()`（下帧成功重建，不跨失败期稀释 CPU%）+ 状态栏错误提示；**不改动模型**（显示保留上次数据）。
- 成功帧若前一帧失败过（`last_sample_failed_` 标志）：状态栏"采样已恢复，基线已重建"。

### 2.3 手动刷新闭环（D4）

```cpp
void MainWindow::on_refresh_now() {
    if (closing_) return;
    if (worker_.busy()) { statusBar()->showMessage(tr("正在采样，请稍候…"), 2000); return; }
    start_sample();   // 暂停中也允许：采一次，保持 paused_ 不变
}
```

行为矩阵增量（补记于 `issue-1-behavior-matrix.md` §3 刷新/暂停行，由本票验收文档承载）：

| 状态 | 手动刷新 |
|---|---|
| 运行+空闲 | 立即采样，正常差分 |
| 运行+忙碌 | 拒绝重入，状态栏反馈 |
| 暂停+空闲 | 采一次并显示（含暂停期相邻两帧差分），`paused_` 不变 |
| 暂停+忙碌 | 拒绝重入，状态栏反馈 |
| 关闭中 | 忽略 |

暂停中手动帧可建立基线（暂停期相邻手动帧差分合法）；恢复时 invalidate 保证跨暂停不差分。

### 2.4 结束操作不冻结 + 身份安全（D5）

- **身份值拷贝**：`on_end_task` 进入即 `const ProcessSnapshot snap = row->snapshot;`（值语义），模态框期间快照替换不再悬空。
- **terminate 移到一次性工作线程**：`QThread::create` 执行 `process_ops_->terminate(identity, 3000)`，结果经 `QMetaObject::invokeMethod(Qt::QueuedConnection)` 回 UI 线程显示。`WaitForSingleObject` 在工作线程，GUI 保持响应。
- **资源安全合同**：`kill_thread_` 成员跟踪在途线程；`closeEvent` 在 worker shutdown 后等待 kill 线程（≤4s，超时拒绝关闭，与 #14 同合同）；`~MainWindow` 防御性 wait。重入防护：`kill_thread_` 非空时再次点击 → 状态栏反馈。

### 2.5 复用与边界

- 复用 #14 `SamplingWorker`，不改其收束/超时/不强杀合同；仅扩展失败信号签名。
- 不实现 #13 按值冻结（独立分支，待 GUI 验收）。
- 不做 Linux/macOS；不改 UI 框架；不添加状态栏以外的持久 UI 元素。

## 3. 验证设计

### 3.1 自动行为检查 `tests/sampling_recovery_checks.cpp`（新增，挂 CMake）

受控枚举器注入，全部为运行证据（真实 QThread/事件循环交错）：

- C1 `ok=false` 快照 → failed 回调收到错误描述，done 不触发（假成功阻断）。
- C2 无结果（nullopt）→ failed 回调（optional 存在性检查保留）。
- C3 暂停代际：start → 暂停（generation++）→ 在途结果返回 → UI 层拒绝（在 MainWindow 逻辑层验证：以等效回调代际比对语义在检查中直接驱动 SamplingWorker+回调计数；MainWindow 私有逻辑经生产路径 GUI 冒烟覆盖，见 3.3）。

> 边界声明：SamplingWorker 层检查（C1/C2）是自动化运行证据；MainWindow 内部代际/暂停/忙碌分支无法脱离 GUI 单测（Qt Widgets 私有槽），其运行证据 = 生产 exe 启动冒烟 + 人工交互验收。静态模拟不冒充 UI 交互证据。

### 3.2 构建

- Debug + Release 两个配置：`cmake --build` 全目标 + `ctest` 全检查（含既有 process/smoke/ops/close_lifecycle）。

### 3.3 生产路径 GUI 证据

- 构建生产 `TmogReplica.exe`（Release，windeployqt 后便携目录），启动冒烟：进程存活 ≥5s、无崩溃退出；记录命令与退出码。
- 人工交互验收（暂停/恢复/忙碌连点/结束等待响应性）：**待人工**，本会话为后台任务无交互输入，按约束如实标注，不伪报。

## 4. 验收映射

| AC（票面） | 证据 |
|---|---|
| 错误快照/枚举异常不清空假零、不进成功差分；错误/恢复反馈可见 | C1/C2 + 失败回调不改模型 + 状态栏提示（实现 + 人工） |
| 暂停快速恢复，在途结果拒绝，新样本重建基线 | 代际设计 + 暂停 invalidate + GUI 冒烟/人工 |
| 暂停手动刷新一次保持暂停；忙碌不重入 | on_refresh_now 行为矩阵 + GUI 冒烟/人工 |
| 受控检查通过 + 结束等待不冻结 | Debug/Release ctest 全绿 + terminate 工作线程化 + 人工交互待验收 |

## 5. 交付物

- 计划/验收文档：本文件 + `2026-10-27-issue-16-acceptance.md`（含命令输出）。
- 代码：`src/SamplingWorker.{h,cpp}`、`src/MainWindow.{h,cpp}`、`tests/sampling_recovery_checks.cpp`、`CMakeLists.txt`。
- 提交于 `issue-16-sampling-recovery` 分支；不 push、不集成、不关票（协调者负责）。
