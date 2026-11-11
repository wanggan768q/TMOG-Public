# Issue #17 任务 17S 验收记录（独立设置模块）

> 本文件是任务 17S 的局部交付记录。17S 完成**不是** #17 整票完成；窗口/导航/采样集成（17U）后续以正常限定提交迁入本模块后另行验收。

- 计划：`2026-10-29-issues-6-11-17-parallel-plan-v1.md`（v1，SHA256 `d776056e1f579c195be14b37b113c72dd8e9ffebfe7cdb10194a63cdc19899e5`）§4 任务 17S + §5.2。
- base：`0fcd051e8e62ccc4f17f990f0825a19d85e2355f`（origin/main）。
- 用户批准原文：『批准 v1，允许 6T 技术部分合并；先执行无需真实实验的开发与检查。』
- attempt=2（repair_round=1）：修复 review-1 裁定三项，head=`0131ca397eb3e4a74c33078bb1831b5676f4450c`（parent `1f5ae522c07f997ab821f209faa8e2dae91232c1`）。

## 交付内容

新增文件（未触 root CMake / MainWindow / main / model / sampler）：

| 文件 | 内容 |
|---|---|
| `src/DisplaySettings.h` | `DisplaySettings`（schema_version=1、width=1000、height=700、refresh_ms=1000、sort_column="pid"、sort_descending=false）、`SettingsLoadResult`、`is_valid_refresh/size/sort_column`、四档常量、尺寸/列白名单 |
| `src/DisplaySettings.cpp` | `load_display_settings` / `save_display_settings` |
| `tests/settings/settings_checks.cpp` | 71 项显式失败检查（19 个用例函数；attempt=2 由 60/17 增至 71/19） |
| `tests/settings/CMakeLists.txt` | 独立局部 CMake（Qt6 Core、C++20、enable_testing、AUTOMOC OFF），无安装、不注册应用；`add_test` 显式传 `$<TARGET_FILE_DIR:settings_checks>` 作为测试根 |

接口合同（计划 §4 17S）：

- 本地 UTF-8 JSON，上限 64KiB；未知 version、损坏、数组根、错误类型、越界、未知档/列 → **整份**安全默认 + 非空 error；文件不存在 → 默认且无 error；未知额外 key 忽略。
- 档位仅 500/1000/2000/5000 ms；尺寸 640..7680 × 480..4320（加载后由 UI 另夹屏幕 availableGeometry，本模块不夹）；排序列 name/pid/cpu/memory/status/io_read/io_write 字符串存储。
- `save_display_settings`：QSaveFile，显式 `setDirectWriteFallback(false)`，全量 write + commit，失败 false+error；不弹阻塞模态。
- 生产路径由调用方提供（计划约定 `QStandardPaths::AppLocalDataLocation)/display-settings.json`）；本模块不含路径解析，测试只用自建临时目录。

### attempt=2 修复明细（review-1 裁定三项）

1. **cancelWriting 直接用例**（`test_cancel_writing_direct`）：测试内直接构造 QSaveFile（`setDirectWriteFallback(false)`）打开、写入新 JSON 后显式调用 `cancelWriting()`；断言旧文件字节与 SHA-256 均不变、目标父目录文件集合前后一致（无临时残留）、QSaveFile 生命周期结束后无杂散（内层作用域保证析构完成）；并做**正对照**——随后真实 write+commit 确实替换旧字节，证明断言机制非空跑。不用锁定 commit 失败/目录失败替代，不为测试新增通用生产接口。
2. **TempDir 根约束**：所有自建临时目录必须位于显式传入的 test root 内；test root 必须位于测试可执行文件所在目录（当前配置 build 目录）内，且显式拒绝系统 TEMP 与用户主目录（含子目录，按路径分量前缀比较）。main 强制读 argv[1]：缺参或非法根打印原因并 exit 2。CTest 经 `add_test` 传 `$<TARGET_FILE_DIR:settings_checks>`；直跑必须显式传同一 build 目录——CTest 与直跑均不再默认落系统 TEMP。
3. **杂散检测可失败**（`test_stray_detection_selfcheck` + 集合比较）：杂散检测改为目标父目录**前后文件集合快照**（直接条目排序）`set_difference` 比对，取代 tests:299 恒真断言（已删除）。自检用例在检测函数逻辑缺失（stub 恒空，RED 阶段实测 exit 1 / 3 failures）时必失败、真实实现下捕获故意植入的 `planted_stray.tmp` 而通过；目录目标用例同按集合比对。所有植入只在自建 build 临时目录内。

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

结果（attempt=2，REFACTOR 后最终全量复跑）：

- Debug：build exit0；ctest `1/1 passed settings_checks`（0.15s）；直跑 `settings_checks: ALL PASS (71 checks, 0 failures)` exit 0（日志 `build/issue17s-debug/final-debug.log`）。
- Release：build exit0；ctest `1/1 passed settings_checks`（0.11s）；直跑 71 checks/0 failures exit 0（`build/issue17s-release/final-release.log`）。
- 两 cfg 直跑输出逐行一致（green-run3.log 与 direct.log SHA-256 同为 `31ef324f8a9035ad04354bf22382117c28e42a84da5b3d8a8b1c613a93ab88d4`）；检查数**非零**（71），非空跑假绿。
- **锁定/占用子用例真实执行**：`locked target: save returns false+error`、`old bytes unchanged`、`old hash unchanged` 三项 PASS，无 SKIP（Windows `CreateFileW` 无共享读句柄真实触发 commit 失败，旧字节与 SHA-256 保持）。
- **cancelWriting 直接用例**：`cancelWriting: QSaveFile opens draft`、`old bytes unchanged`、`old hash unchanged`、`no stray temp file left`、正对照两项全部 PASS（两 cfg 均验证）。
- **根约束负例**（直跑，均 exit 2 并打印拒绝原因）：无参数、`C:/Windows/Temp`（系统 TEMP）、`C:/Users/Ambition`（用户主目录）、`C:/nonexistent-dir-xyz`（不存在目录）全部拒绝（日志 `build/issue17s-release/neg-*.log`）。
- **TDD 证据**：RED 阶段（校验/检测 stub 恒真/恒空）实测 exit 1、71 checks/3 failures（`build/issue17s-debug/red-run.log`），3 个 FAIL 恰为预期项（TEMP 未拒、home 未拒、植入未捕获），其余 68 项 PASS（既有 60 项回归完好）；GREEN 后全过；REFACTOR 移除 stub 开关后套件保持全绿。
- **故意失败模式**：测试源码副本注入 `failures=1`，在 `build/issue17s-debug/failmode/`（产物目录内临时）独立配置构建运行，输出 `FAILURES (71 checks, 1 failures)` 且 **exit 1**（log SHA256 `c3934fc7f4e983e4a0f6cc25bb00587a5a283c0ca07306686e06255d68c28af9`）；副本目录验证后删除（`Test-Path=False`）。
- CodeGraph：已有索引先 status（complete/pending=0），探查受影响符号（`TempDir` 13 调用点、`save_display_settings` 4 调用点，全在测试内），改动后 sync `pendingChanges={0,0,0}`、state=complete、worktreeMismatch=null。

## 未测 / 边界

- 真实应用保存路径（QStandardPaths 实际目录）、UI 反馈属于 17U 集成，未在本模块测。
- 加载后夹屏幕 availableGeometry 的行为属 17U UI 层，本模块只做 schema 校验。
- 锁定模拟依赖 NTFS 行为；本环境真实触发 commit 失败，未标 SKIP。其他文件系统未测。
- `is_within` 前缀比较基于 `weakly_canonical` 规范化路径；符号链接别名指向同一 build 目录的场景未单测（本环境测试路径均为真实路径）。
- failmode 副本首次配置因 CMakeLists 相对路径 `../../src` 与 include 目录在副本位置不成立而失败，属副本操作问题（非生产/测试代码缺陷），修正副本内路径后达成 exit 1；已记 ops receipt。
- `>64KiB` 用 oversized 无效内容测试（拒绝先于解析）；合法但超大的 JSON 未单独构造（解析后字段校验路径已由越界/错误类型用例覆盖）。

## 产物归属

- 构建/测试产物仅在本任务树 `build/issue17s-debug/`、`build/issue17s-release/`；本轮新增：两 cfg 的 final/ctest 日志、Debug 的 red-run/green-run 日志、Release 的 direct/neg-*.log（均保留供 Review 核对）；failmode 临时目录已删除。
- 测试临时配置目录由 `TempDir` 在显式 test root（二进制所在 build 目录）下自建自清，不落系统 TEMP、不读写真实用户配置/注册表/系统 ACL。
- `.codegraph/` 索引沿用 attempt=1（attempt=2 仅 status/sync，未重 init）；`.gitignore` 未修改。
- attempt=1 遗留的 `build/issue17s-review-debug/`、`issue17s-review-release/` 为 Review 产物，本轮未触碰、未删除。
