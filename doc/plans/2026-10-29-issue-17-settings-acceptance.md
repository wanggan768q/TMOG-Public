# Issue #17 任务 17S 验收记录（独立设置模块）

> 本文件是任务 17S 的局部交付记录。17S 完成**不是** #17 整票完成；窗口/导航/采样集成（17U）后续以正常限定提交迁入本模块后另行验收。

- 计划：`2026-10-29-issues-6-11-17-parallel-plan-v1.md`（v1，SHA256 `d776056e1f579c195be14b37b113c72dd8e9ffebfe7cdb10194a63cdc19899e5`）§4 任务 17S + §5.2。
- base：`0fcd051e8e62ccc4f17f990f0825a19d85e2355f`（origin/main）。
- 用户批准原文：『批准 v1，允许 6T 技术部分合并；先执行无需真实实验的开发与检查。』

## 交付内容

新增文件（未触 root CMake / MainWindow / main / model / sampler）：

| 文件 | 内容 |
|---|---|
| `src/DisplaySettings.h` | `DisplaySettings`（schema_version=1、width=1000、height=700、refresh_ms=1000、sort_column="pid"、sort_descending=false）、`SettingsLoadResult`、`is_valid_refresh/size/sort_column`、四档常量、尺寸/列白名单 |
| `src/DisplaySettings.cpp` | `load_display_settings` / `save_display_settings` |
| `tests/settings/settings_checks.cpp` | 60 项显式失败检查（17 个用例函数） |
| `tests/settings/CMakeLists.txt` | 独立局部 CMake（Qt6 Core、C++20、enable_testing、AUTOMOC OFF），无安装、不注册应用 |

接口合同（计划 §4 17S）：

- 本地 UTF-8 JSON，上限 64KiB；未知 version、损坏、数组根、错误类型、越界、未知档/列 → **整份**安全默认 + 非空 error；文件不存在 → 默认且无 error；未知额外 key 忽略。
- 档位仅 500/1000/2000/5000 ms；尺寸 640..7680 × 480..4320（加载后由 UI 另夹屏幕 availableGeometry，本模块不夹）；排序列 name/pid/cpu/memory/status/io_read/io_write 字符串存储。
- `save_display_settings`：QSaveFile，显式 `setDirectWriteFallback(false)`，全量 write + commit，失败 false+error；不弹阻塞模态。
- 生产路径由调用方提供（计划约定 `QStandardPaths::AppLocalDataLocation)/display-settings.json`）；本模块不含路径解析，测试只用自建临时目录。

## 验证证据

工具：CMake `D:/InstallApplication/CMake/bin/cmake.exe`、CTest 同目录、Qt `E:/InstallApplication/Qt/6.12.0/mingw_64`、g++ `E:/InstallApplication/Qt/Tools/mingw1310_64/bin/g++.exe`、Ninja `E:/InstallApplication/Qt/Tools/Ninja/ninja.exe`；PATH 仅当前进程注入，未改持久环境。

计划 §5.2 命令（每 cfg = Debug、Release 顺序执行，每条原生命令 exit 0）：

```
cmake -S <WT>/tests/settings -B <WT>/build/issue17s-<cfg> -G Ninja
      -DCMAKE_BUILD_TYPE=<cfg> -DCMAKE_PREFIX_PATH=<QT>
      -DCMAKE_CXX_COMPILER=<GXX> -DCMAKE_MAKE_PROGRAM=<NINJA>
cmake --build <B> --parallel 2
ctest --test-dir <B> --output-on-failure --timeout 60 -j1 -R '^settings_checks$'
```

结果：

- Debug：configure/build exit0；ctest `1/1 passed settings_checks`（0.08s）。
- Release：configure/build exit0；ctest `1/1 passed settings_checks`（0.07s）。
- 二进制直接运行（两 cfg）：`settings_checks: ALL PASS (60 checks, 0 failures)` exit 0 —— 检查数**非零**（60），非空跑假绿。
- 锁定/占用子用例真实执行：`locked target: save returns false+error`、`old bytes unchanged`、`old hash unchanged` 三项 PASS，无 SKIP —— 通过 Windows `CreateFileW` 无共享读句柄模拟占用，commit 失败后旧字节与 SHA-256 均保持。未用不存在目录冒充等价场景；cancelWriting 语义以"目录目标保存失败不留杂散文件、无关旧文件不动"用例覆盖。
- 故意失败模式：复制测试目录到 `build/issue17s-debug/failmode`（产物目录内临时），注入 `failures=1` 重新构建运行，输出 `FAILURES (60 checks, 1 failures)` 且 **exit 1**；临时目录验证后删除（`Test-Path=False`）。

## 未测 / 边界

- 真实应用保存路径（QStandardPaths 实际目录）、UI 反馈属于 17U 集成，未在本模块测。
- 加载后夹屏幕 availableGeometry 的行为属 17U UI 层，本模块只做 schema 校验。
- 锁定模拟依赖 NTFS 行为；本次环境真实触发 commit 失败，未标 SKIP。其他文件系统未测。
- `>64KiB` 用 oversized 无效内容测试（拒绝先于解析）；合法但超大的 JSON 未单独构造（解析后字段校验路径已由越界/错误类型用例覆盖）。
- CodeGraph：init（40 files/443 nodes/922 edges）→ sync 后 `pendingChanges=0, state=complete`，explore 可定位 `load_display_settings`/`save_display_settings` 及其测试引用。

## 产物归属

- 构建/测试产物仅在本任务树 `build/issue17s-debug/`、`build/issue17s-release/`（含临时 failmode 目录，已删除）。
- 测试临时配置目录由 `TempDir` 在系统 temp 下自建自清，不读写真实用户配置/注册表/系统 ACL。
- `.codegraph/` 索引为本次任务新初始化，登记于 ops 日志；`.gitignore` 未修改。
