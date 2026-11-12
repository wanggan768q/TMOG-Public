# Issue #17（Windows W03）页面导航与本地显示设置 — 验收记录

- 工单：GitHub Issue #17「[Windows W03] 页面导航与本地显示设置」
- 分支：`feat/issue17-navigation-20261029`
- 基线：main `9be2ec9f90767afef08e5f35377b2498e840f680`
- 实现范围（17U）：`QStackedWidget` 两页导航（Processes 默认 + 显示设置）、Ctrl+1/Ctrl+2、四档刷新（500/1000/2000/5000 ms）、`DisplaySettings` 持久化（窗口尺寸/刷新档位/排序）、CMake 集成、离屏行为检查。
- 验证日期：2026-11-12
- 验证环境：Windows（Qt 6.12.0 mingw_64，编译器 mingw1310_64 g++，CMake `D:\InstallApplication\CMake\bin\cmake.exe`，Ninja）。

## 交付摘要

| 项 | 变更 |
| --- | --- |
| 导航 | `MainWindow` 的 central widget 改为 `QStackedWidget`（`main_stack`）：`processes_page`（原表格页，启动默认）与 `settings_page`（真实四档刷新、窗口尺寸/排序偏好、设置错误区）。工具栏 `nav_processes_action`（Ctrl+1）与 `nav_settings_action`（Ctrl+2）互斥；切页不持久化 page id。 |
| 安全操作合同 | 设置页禁用暂停/刷新/结束任务（`pause_action`/`refresh_action`/`end_task_action`），切页本身不触发任何操作（刷新不采样由 N2 计数断言；结束任务路径需选中目标并弹模态确认，切页不触发该路径为代码审查确认，未自动断言）；暂停状态跨页保持。 |
| 刷新档位 | 新增公共 `set_refresh_interval(int)` / `refresh_interval_ms()`；仅 500/1000/2000/5000 合法，非法值回落 1000 并在状态栏给出非模态反馈；只调整同一个 `sample_timer`，不新建 worker。 |
| 持久化 | 生产路径为 `QStandardPaths::AppConfigLocation` + `display-settings.json`（`main.cpp` 已设 organization/application 名 `TmogReplica`）；JSON 契约复用 `DisplaySettings`（`schema_version/width/height/refresh_ms/sort_column/sort_descending`）。加载损坏/越界/未知版本 → 整份安全默认 + 可见错误；保存经 `QSaveFile` 原子替换，失败给出错误且旧文件不变。 |
| 测试 | 新增 `tests/navigation_settings_checks.cpp`（真实 `MainWindow` + fake 枚举器，全程 offscreen，使用临时设置文件）；`tests/stale_persistence_checks.cpp` 改为按 objectName 定位 `stale_label`/`pause_action`。 |
| CMake | `src/DisplaySettings.cpp` 编入所有编译 `MainWindow` 的目标；`tests/settings/settings_checks.cpp` 复用同源文件注册进 root CTest（TIMEOUT 60）；新增 `navigation_settings_checks`（offscreen/插件 ENV，TIMEOUT 120）。 |

## Acceptance criteria 逐条映射

### AC1 — Processes 默认可用，鼠标和键盘导航、窗口缩放正常，切页不丢失已有安全操作合同

- 自动检查（offscreen，真实 `MainWindow` + fake 枚举器）：`navigation_settings_checks`
  - N1：启动后 `main_stack` 当前页为 `processes_page`；`process_table` 存在且在其父页可见（`table->isVisibleTo(processes_page)`；断言不依赖顶层窗口的 `isVisible()` 映射）；四个刷新 radio 存在且 `refresh_1000` 默认选中。
  - N2：`nav_processes_action`/`nav_settings_action` 的快捷键分别为 Ctrl+1/Ctrl+2；触发 action 与 `QTest::keyClick` 键序列均切换页面（无 Qt Test 时回退校验 shortcut 绑定 + action 触发）；设置页上暂停/刷新/结束任务三个 action 均为 disabled；切页不产生额外采样——先把档位设为 5000 ms，再在 action 与 Ctrl 键两条切页路径的前后比较 fake 枚举器采样计数不变，且 `refresh_interval_ms()` 保持 5000（断言消息「N2: page switch itself does not trigger sampling」）。
  - 窗口缩放：N5 中 `resize(700, 520)` 后关闭并重启式构造，窗口尺寸恢复为 700×520；加载尺寸会按 `screen()->availableGeometry()` 夹取，N6 对默认尺寸 `qMin(1000, availableWidth)` × `qMin(700, availableHeight)` 做断言。
- 命令与结果（Debug/Release 均执行）：
  - `ctest --test-dir build/issue17-debug -R navigation_settings_checks --output-on-failure` → Passed（10.77 s）
  - `ctest --test-dir build/issue17-release -R navigation_settings_checks --output-on-failure` → Passed（10.82 s）
- 限制：GUI 实机视觉未验证（离屏自动检查已跑）；真实鼠标点击、Tab 焦点走查与窗口拖拽/缩放体验待用户实机验收。

### AC2 — 切换刷新档位按真实间隔采样，忙碌时不重入，暂停行为符合前置票合同

- 自动检查：
  - N3：点击 `refresh_500`/`refresh_1000`/`refresh_2000`/`refresh_5000` 后 `sample_timer->interval()` 与 `refresh_interval_ms()` 均为对应毫秒；非法值 1234 → 1000 且状态栏消息含「无效」「1000」；窗口中始终只有一个 `sample_timer`。
  - N3 并发：把档位调到 500 ms、枚举器单次采样 sleep 120 ms，pump 1.6 s，断言采样次数增长且 `max_active == 1`（无重入/无重叠）。
  - N4：暂停后切到设置页再切回，暂停 action 仍 checked；暂停期间 1.2 s 内无新采样；恢复后采样继续。
- 命令与结果：同 AC1（`navigation_settings_checks` 在 Debug/Release 均 Passed）。
- 限制：间隔断言基于事件循环与离屏计时，生产环境的长时抖动/系统负载未做实测。

### AC3 — 重新启动恢复有效设置；损坏配置、越界配置和无写权限时使用安全默认并反馈错误

- 自动检查：
  - N5：设置 2000 ms、尺寸 700×520、按内存列降序，关闭窗口后直接读取 JSON 校验字段；再以同一路径重启式构造 `MainWindow`，断言档位/尺寸/排序均恢复。
  - N6：用两个 fixture：`corrupt.json`（损坏 JSON）与 `out_of_range.json`（合法 JSON，但同时含非法 `refresh_ms=1234` 与 `sort_column=bogus`）后构造窗口：断言 `refresh_interval_ms()==1000`、`horizontalHeader()->sortIndicatorSection()==ProcessTableModel::ColPid` 且 `sortIndicatorOrder()==Qt::AscendingOrder`、窗口宽高为 `qMin(1000, availableWidth)` × `qMin(700, availableHeight)`（与实际 `apply_loaded_settings()` 的夹取逻辑一致）；`settings_error_label` 可见且状态栏 `showMessage` 含「加载失败」。
  - N7：只读设置文件写入失败 → `settings_error_label` 含「保存失败」，旧文件逐字节不变；设置路径父级为普通文件（无效目录，`mkpath` 失败）→ 同样给出错误反馈。
- 命令与结果：同 AC1（Debug/Release 均 Passed）。
- 限制：只读/无权限用文件属性模拟（未用 ACL 受限账户实测）；真实用户目录权限异常场景待人工验收。

### AC4 — 安全写入失败不会损坏旧配置；关闭资源清理和现有排序选择回归通过

- 自动检查与回归：
  - N7 旧配置保护：写失败前后读取文件字节，断言完全一致（`QSaveFile` 原子提交）。
  - N8：`win.close()` 后 `sample_timer` 不再 active，继续 pump 1.2 s 无新采样；`close_lifecycle_checks` 通过（关闭失败/成功路径资源收束）。
  - 既有排序/选择/陈旧/结束确认回归：`stale_persistence_checks`、`io_table_checks`、`end_confirm_checks` 全部 Passed；其中 `stale_persistence_checks` 已改为按 objectName 定位控件，避免新导航 checkable action 干扰。
- 命令与结果：
  - Debug 全量：`ctest --test-dir build/issue17-debug --output-on-failure` → **11/11 passed，0 failed**（65.07 s）
  - Release 全量：`ctest --test-dir build/issue17-release --output-on-failure` → **11/11 passed，0 failed**（65.28 s）
- 限制：关闭路径的 Windows 句柄/线程级资源审计依赖现有检查，未做额外 ETW/Process Explorer 实机核对。关闭瞬间（`closeEvent` 内 `save_preferences()` 失败）的错误反馈写入设置页 label 与 8 秒状态栏消息后窗口立即 `accept()` 关闭，当前实现中用户基本不可感知；非阻断，已记录（代码审查确认，未自动断言）。

## 构建与测试实测记录

环境变量前缀（Ninja/编译器/Qt DLL）：

```
E:\InstallApplication\Qt\Tools\mingw1310_64\bin;
E:\InstallApplication\Qt\Tools\Ninja;
E:\InstallApplication\Qt\6.12.0\mingw_64\bin
```

Debug：

```
cmake -S . -B build/issue17-debug -G Ninja -DCMAKE_BUILD_TYPE=Debug \
  -DCMAKE_PREFIX_PATH=E:/InstallApplication/Qt/6.12.0/mingw_64 \
  -DCMAKE_CXX_COMPILER=E:/InstallApplication/Qt/Tools/mingw1310_64/bin/g++.exe
cmake --build build/issue17-debug
ctest --test-dir build/issue17-debug --output-on-failure
```

- configure rc=0；build rc=0（72 个目标，含 `windeployqt` 部署步骤）。
- ctest：11/11 passed，0 failed，65.07 s。
  - process_checks 0.03、settings_checks 0.08、smoke_enumerate 0.36、io_helper_binding_checks 0.03、process_ops_checks 0.05、close_lifecycle_checks 11.53、sampling_recovery_checks 1.77、stale_persistence_checks 8.76、io_table_checks 7.91、navigation_settings_checks 10.77、end_confirm_checks 23.76。

Release：

```
cmake -S . -B build/issue17-release -G Ninja -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_PREFIX_PATH=E:/InstallApplication/Qt/6.12.0/mingw_64 \
  -DCMAKE_CXX_COMPILER=E:/InstallApplication/Qt/Tools/mingw1310_64/bin/g++.exe
cmake --build build/issue17-release
ctest --test-dir build/issue17-release --output-on-failure
```

- configure rc=0；build rc=0（72 个目标）。
- ctest：11/11 passed，0 failed，65.28 s（navigation 10.82、end_confirm 23.86）。

## 失败、重试与修复记录

1. 首轮 Debug 编译失败（3 类）：`QString::empty()` 不存在 → `isEmpty()`；`std::string` 传给 `QString&` 形参 → 改 `QString`；`QFile::open` 返回值被忽略（`[[nodiscard]]` 告警升级为错误）→ 用 `check()` 包裹。修复后 build rc=0。
2. 首轮 Debug ctest 10/11：`end_confirm_checks` 五个场景均 `FAIL: proxy order changed at round 1`。
   - 用 main base 源码另建基线构建（`build/baseline-main*`，未提交）与既有 reviewer 二进制对照，均为 `failures=0`，确认由本分支引入。
   - 根因：`apply_loaded_settings()` 在设置文件不存在时也用 `DisplaySettings` 默认值 `sortByColumn(ColPid, Ascending)`，改变了 Qt 默认（Name 降序）初始行序，使既有测试「等键重排必然换序」的假设失效。
   - 修复：首次启动（文件不存在）仅同步刷新档位/偏好标签，不覆写排序与窗口尺寸；文件存在时才恢复排序/尺寸。`apply_loaded_settings(..., bool apply_sort_and_size = true)`。
   - 复测：`end_confirm_checks` 连续两次 `failures=0`；Debug/Release 全量 11/11 通过。
3. 既有测试副作用（未改动、已知）：`io_table_checks` 等既有测试构造 `MainWindow` 未传设置路径，进程名即 applicationName，会在 `%LOCALAPPDATA%\<测试 EXE 名>\display-settings.json` 产生测试配置；不污染真实 `TmogReplica` 配置目录（本次实测 `%LOCALAPPDATA%\TmogReplica` 不存在）。新增 `navigation_settings_checks` 全部使用临时路径，避免该副作用。

## 与计划文本的差异

- 计划 §17U 写本地目录为 `QStandardPaths::AppLocalDataLocation`；本实现按 17U 派发合同改用 `AppConfigLocation`（语义为「应用配置目录」，Windows 下仍在当前用户 LocalAppData 下的应用目录内）。JSON 契约与文件名不变。
- `src/main.cpp` 未改动：现有代码已设置 `organizationName/applicationName = "TmogReplica"`，满足 `AppConfigLocation` 生产路径需要。

## 支持限制与未验证项

- GUI 实机视觉未验证（离屏自动检查已跑）：真实屏幕上的布局、字体、Dpi 缩放、暗色主题表现未逐项核对。
- 人工键鼠/重启体验待用户验收：鼠标点击导航、Tab 焦点顺序、真实重启后的窗口位置/尺寸恢复需维护者实机确认。
- 只读/无权限用文件属性模拟，未用受限 ACL 账户或系统策略实测。
- 采样间隔的长时间稳定性、系统高负载下的 timer 抖动未做长时实测。
- 关闭瞬间保存失败的反馈不可感知：`closeEvent` 中 `save_preferences()` 失败时只写设置页 label 与 8 秒状态栏消息，窗口随即 `accept()` 关闭；当前实现中用户基本看不到（非阻断，已记录；代码审查确认，未自动断言）。
- 本次未运行原厂程序，无像素级对比诉求；不涉及网络/遥测/提权。
