# #19 / W04 实施计划：整机 CPU／内存实时性能页

- 工单：GitHub Issue #19（`ready-for-agent`），基线 `origin/main` = `7f6276294270c27ca1b82ed6013498466297572c`。
- Worktree：`E:\Git\TMOG-Public-WorkTree\w04-system-performance`，分支 `feat/w04-system-performance`。
- 写范围：`src/`、`tests/`、`CMakeLists.txt`、`doc/plans/`（本票独占上述共享路径）。
- 证据口径：本票只交付**程序化证据**（Debug/Release 构建、ctest、离屏 UI 断言与截图、可运行计算/失败路径检查）；真实桌面 UI 验证据实标注为「待 Lead 合并前补」，不得写成通过。

## 1. 范围与不做项

做：
- 新增独立整机采集源（Windows：`GetSystemTimes` + `GlobalMemoryStatusEx`），**不累加进程数据**，也**不塞进进程枚举接口**。
- 新增「性能」页（第三个真实页面，`Ctrl+3`）：整机 CPU 使用率、物理内存总量/可用/已用/使用率、最近 5 分钟曲线、缺样与错误状态。
- 复用现有单一 `sample_timer_` 与 `SamplingWorker` 采样调度；UI 线程只接收快照并渲染。
- 历史固定 5 分钟窗口且有样本硬上限；超期/超限淘汰。
- 暂停、休眠/时间跳变、读取失败形成缺样并重建基线；曲线在缺口处断开，不伪连；错误不显示为 0。
- 检查：纯计算检查 + 离屏 GUI 检查（注入 fake 采集源）+ 构建/ctest；真实 UI 截图作为程序化证据落盘。

不做（工单明令）：磁盘、网络、GPU、传感器、基准测试；不做自动提权；不做危险系统实验；不改主工程与其他工单路径。

## 2. 采集接口（独立系统 API）

新增文件：

| 文件 | 职责 |
|---|---|
| `src/SystemMetrics.h` | `SystemTimesNs`、`SystemReading`、`ISystemMetricsSource`、`make_system_metrics_source()` 工厂声明 |
| `src/SystemMetrics.cpp` | 非 Windows 平台的诚实降级源 `UnsupportedSystemMetricsSource`（明确报错，不造假 0） |
| `src/platform/WindowsSystemMetrics.h/.cpp` | Windows 实现：`GetSystemTimes` + `GlobalMemoryStatusEx` + QPC 采样时刻 |
| `src/SystemMetricsSampler.h/.cpp` | 纯计算：CPU 差分、内存口径、缺样状态、有界历史 |

接口语义：

```cpp
struct SystemReading {
    bool times_available = false;              // GetSystemTimes 成功
    uint64_t idle_time_ns, kernel_time_ns, user_time_ns;
    bool memory_available = false;             // GlobalMemoryStatusEx 成功
    uint64_t memory_total_bytes, memory_available_bytes;
    uint64_t wall_clock_ns = 0;                // QPC 单调时钟，采样时刻
    std::string error;                         // 任一失败时的错误原文（可多项拼接）
};
```

- 两项系统 API 相互独立：CPU 时间读取失败不连累内存数值，反之亦然；只有全部失败的帧才整体成为缺样。
- `error` 保留 Win32 错误码原文，供 UI 如实显示「不可用（原因）」，绝不折算为 0。
- 非 Windows 平台返回不可用错误（`UnsupportedSystemMetricsSource`），保证跨平台构建诚实可用；本票验收平台为 Windows。

## 3. 口径与单位

### 3.1 整机 CPU

- 数据源：`GetSystemTimes(&idle, &kernel, &user)`，FILETIME 100ns 刻度。
- 口径：**整机累计时间差**，所有逻辑处理器合计：
  - `total = kernel + user`（Windows 的 kernel 时间包含 idle 时间）；
  - `busy = total - idle`；
  - `cpu% = 100 × Δbusy / Δtotal`，夹取 `[0, 100]`。
- 明确标注：不是进程求和、不是单核占用率；`0%` 是有效的「全部时间空闲」，必须显示为 `0.0%` 而不是「待采样」。
- 首样本（无基线）与计数器回退/零增量：显示「待采样」，重建基线，不给出伪造数值。

### 3.2 物理内存

- 数据源：`GlobalMemoryStatusEx` 的 `ullTotalPhys`（总量）与 `ullAvailPhys`（可用）。
- 口径：**物理内存**；`已用 = 总量 − 可用`。明确标注**非工作集，非提交量**。
- 单位：API 返回字节；界面按 1024 进制换算为 `GiB`/`MiB`（保留 2 位小数；均为标注单位的十进制文本），百分率保留 1 位小数。
- 读取失败显示「不可用」与错误原因，禁止显示 0。

## 4. 缺样语义与基线

`SystemSampleStatus { Pending, Ok, Gap }` + `SystemSample`：

- `Pending`：整机 CPU 无有效基线（首样本、暂停恢复后首帧、计数器回退/增量非法）。CPU 显示「待采样」，重建基线。
- `Ok`：有效差分；`cpu_percent` 有值（可为 0.0）。
- `Gap`：本次系统读取失败（CPU 时间或内存 API 失败导致该指标不可用）。错误原文进入 `detail` 与页面错误区，CPU 显示「不可用」，不显示 0。
- 暂停：停止采样，`system_sampler_.invalidate_baseline()`；恢复后首帧为 `Pending`。
- 失败：失败帧仍入历史（作为缺口），基线作废；下次成功帧为 `Pending` 后再进入 `Ok`。
- 曲线：CPU 与内存按各自序列独立判定可绘制性——CPU 需 `status==Ok` 且 `cpu_percent` 有值；内存只需 `memory_available` 且总量 > 0。任一 API 失败只断开自己那条曲线，不连带对方（CPU 失败时内存曲线仍连续；反之亦然）。各自缺口处 `moveTo` 断开，不跨缺口伪连。
- 进程枚举失败与系统采集**解耦**：进程失败只陈旧进程表，不影响性能页历史；系统失败只影响性能页。

## 5. 历史有界策略

- 常量：`kHistoryWindowNs = 5 分钟`；`kHistoryCapacity = 600`（最细档位 500 ms × 300 s = 600）。
- 每次采样后按采样时刻裁剪：淘汰 `latest.wall_clock_ns - front.wall_clock_ns > 5min` 的样本；同时 `size() > 600` 时淘汰最旧样本。
- 历史保存 `Pending`/`Gap` 样本（时间轴与缺口真实），但不参与连线。
- 界面标注「历史窗口：最近 5 分钟（最多 600 个样本，超期/超限淘汰）」。
- 定长窗口横向比例：右端 = 最新样本时刻，左端 = 最新 − 5 分钟。

## 6. 采样调度与线程

- 复用现有 `sample_timer_`（四档 500/1000/2000/5000 ms）与同一 `SamplingWorker`，不新建第二 worker/timer。
- `SamplingWorker::start` 增加可选参数：`ISystemMetricsSource* system_source = nullptr` 与 `SystemFn on_system = {}`；同一在途线程内先读系统数据、后 `take_sample()`；系统结果与进程结果分别队列回 UI 线程。
- 保持既有 4 参调用与检查不变（新增参数带默认值）；同一时刻仍至多一个在途采样；`shutdown` 语义不变（线程实际退出才允许销毁）。
- UI 线程仅做：接收快照 → `SystemMetricsSampler::ingest` → 刷新页面/曲线。所有跨线程数据为值语义。
- 代际：系统回调同样比对 `sample_generation_`；暂停/关闭后迟到结果丢弃。

## 7. UI 与导航

- 页面：`QStackedWidget "main_stack"` 增加第三页 `QWidget "performance_page"`（`PerformancePage`）。
- 导航：`QAction "nav_performance_action"`，文本「性能」，快捷键 `Ctrl+3`，`WindowShortcut`；切页不触发采样、不改变暂停状态。
  - 实现口径（与检查一致）：性能页是整机采样视图，**暂停/立即刷新保持可用**（体现与进程页共用同一采样调度，跨页暂停/恢复有效）；只禁用仅对进程行有意义的「结束任务」。显示设置页维持既有 `set_process_actions_enabled(false)`（三项全禁用）。
- 页面内容（objectName 供检查定位）：
  - 标题「性能」；
  - 整机 CPU 卡：`cpu_value_label`（大字号）、`cpu_state_label`、`cpu_chart`、口径说明；
  - 物理内存卡：`memory_used_label`、`memory_percent_label`、`memory_available_label`、`memory_chart`、口径说明；
  - `performance_error_label`（红字，失败/缺样原因；无错误时隐藏）；
  - 历史窗口说明。
- 首帧显示「待采样」；失败显示「不可用」+原因；成功 0 空闲显示 `0.0%`。
- 曲线自绘（`QPainter`）：0–100 纵轴、5 分钟横轴、缺口断开；无数据时显示「等待采样…」。CPU 与内存按各自序列判定缺口（互不连累）。离屏 `grab()` 保存 PNG 作为 UI 呈现证据。
- 页面内容置于 `QScrollArea`（`performance_content`）内：小窗口下可滚动，不把主窗口最小高度撑到既有设置档位（700×520）之上；`performance_checks` 增加最小尺寸守卫断言。

## 8. 检查设计

### 8.1 `system_metrics_sampler_checks`（纯计算，无 Qt）

- 首样本 → `Pending`，`cpu_percent == nullopt`；
- 第二次读取按 `kernel/user/idle` 增量计算期望值（含 25%、100%、0% 有效空闲）；
- 计数器回退/零总增量 → `Pending` 且基线重建（下一次恢复 `Ok`）；
- 内存总量/可用/已用换算与 `format_bytes` 单位（GiB/MiB、2 位小数）；
- 读取失败 → `Gap`、`detail` 保留错误原文、CPU 无数值；
- 历史窗口 5 分钟与容量 600 硬上限淘汰：默认参数（600/300s）构造 700 条断言保留最近 600 条；窗口淘汰另用 `capacity=600, window=100ns` 小参数等价验证（逻辑同一）。
- 暂停式 `invalidate_baseline()` → 下一条 `Pending`。

### 8.2 `performance_checks`（离屏 GUI + 注入 fake 采集源）

- 页面存在、`Ctrl+3` 绑定、切页禁用进程操作、切页不增加采样计数；
- 首帧 CPU「待采样」；第二帧 fake `GetSystemTimes` 增量 → 页面显示期望 CPU 百分比；
- 内存显示总量/可用/已用与单位、口径说明文本；
- fake 失败帧 → 页面显示「不可用」+错误原文，且不出现 `0.0%`；曲线缺口后恢复不伪连（断言序列中的缺口与 UI 错误区）；
- CPU 失败但内存有效 → 内存数值继续显示、内存曲线不断开；内存失败但 CPU 有效 → CPU 曲线继续（两条曲线独立判定缺口）；
- 暂停跨页/恢复 → 恢复首帧「待采样」；
- 进程枚举失败但整机读取成功 → 性能页历史继续增长、CPU/内存仍更新（解耦）；
- 关闭窗口后整机读取计数与进程枚举计数都不再增长、`history_size()` 不再变化，无异常退出；
- `grab()` 保存离屏 PNG 到构建目录，路径打印为证据。

### 8.3 既有检查同步

- `tests/navigation_settings_checks.cpp`：N1 页面数由 2 改为 3，新增 `performance_page` 断言；N2 增加性能页导航/Ctrl+3/进程操作禁用/切页不采样断言。其余 N3–N8 行为不变。

## 9. 验收证据矩阵

| 工单验收项 | 证据 |
|---|---|
| 真实整机 CPU/内存（独立 API） | Windows 平台实现源码 + `smoke`/离屏真实源路径（Lead 实机补做）；fake 注入仅用于确定性断言 |
| 首样本待采样、有效空闲真实 0 | `system_metrics_sampler_checks` + GUI 检查断言 |
| 暂停/休眠/失败缺样并重建基线 | 纯计算 + GUI 暂停/失败检查 |
| 曲线不跨缺口伪连、错误不为 0 | GUI 断言 + 自绘实现（各自缺口 moveTo 断开、CPU/内存互不连累）+ 错误标签原文 |
| 历史 5 分钟 + 硬上限淘汰 | 纯计算默认参数 600 容量构造 700 条断言 + 窗口淘汰小参数等价检查 |
| 切页/后台采样/关窗无冻结无残留 | 导航检查计数、`performance_checks` T11（关闭后整机读取/进程枚举计数停止、历史冻结）、`close_lifecycle_checks` 保持绿 |
| 与任务管理器口径趋势核对 | 口径说明 + Windows 实现；实机对照由 Lead 合并前补做（本票不伪报） |
| 可运行计算与失败路径检查 | 两个新检查目标 + Debug/Release 构建与 ctest |
| 实际 UI 验收 | 离屏 `grab()` PNG（程序化）；真实桌面 UI 待 Lead 补 |

## 10. 验证命令

```powershell
cmake -S . -B build\verify-debug -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_PREFIX_PATH=E:/InstallApplication/Qt/6.12.0/mingw_64
cmake --build build\verify-debug
ctest --test-dir build\verify-debug --output-on-failure
cmake -S . -B build\verify-release -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=E:/InstallApplication/Qt/6.12.0/mingw_64
cmake --build build\verify-release
```

## 11. 风险与限制

- 本票程序化 UI 证据为离屏渲染；真实桌面窗口、DPI、主题下的视觉验收由 Lead 合并前补做。
- 休眠/唤醒的真实系统行为无法在自动化中稳定复现；以「时间计数器回退/增量非法 → 重建基线、缺口不伪连」的等价失败路径检查覆盖，并在报告中标注限制。
- 与任务管理器趋势对照需实机观察，列为未验证项。
