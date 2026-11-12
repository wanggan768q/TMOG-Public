# W35 / Issue #15 — MSVC x64 构建与发布验证实施计划 v1

- 工单：GitHub `wanggan768q/TMOG-Public` Issue #15（[Windows W35] MSVC x64 构建与发布验证）
- 执行者：Worker `dev-15-1`（DSH Agent Teams）
- 分支 / worktree：`chore/w35-msvc-x64` @ `E:\Git\TMOG-Public-WorkTree\w35-msvc-x64`
- 基线：`origin/main = 7f6276294270c27ca1b82ed6013498466297572c`
- 日期：2026-11-12
- 写范围：本 worktree 的 `scripts/`、`tests/`、`packaging/`、`doc/plans/`；**不改 `CMakeLists.txt`、不改 `src/`**（#19 正在改 `src/MainWindow.*` 与 `CMakeLists.txt`）。

## 1. 目标与验收映射

| AC | Issue #15 要求 | 本计划落点 |
| --- | --- | --- |
| AC1 | MSVC Debug 与 Release 真实构建 GUI 并执行有效检查；缺依赖不得成功跳过 | `scripts/build-msvc.ps1`（Qt/部署工具缺失即失败）+ MSVC Debug/Release GUI 构建 + 全量 ctest |
| AC2 | 匹配运行库的独立 x64 包（windeployqt + MSVC 运行库）在无开发 PATH 环境启动，核心流程实测通过 | 打包步骤（windeployqt `--compiler-runtime` + MSVC 运行库核验）+ 干净 PATH 启动与核心流程探针 |
| AC3 | 原 MinGW 构建检查回归（Debug 至少全绿） | 独立 MinGW Debug 构建 + 全量 ctest，与 handoff 基线 11/11 对照 |
| AC4 | 版本、命令、包清单、未验证环境记录完整；构建成功不等于全页验收 | 证据日志（版本/命令/退出码/ctest/包清单 hash/未验证项）落盘为报告 |

实现边界：只做工具链兼容与可重复构建；不重建功能、不改 UI 框架；工具安装需另行批准。

## 2. 当前硬前提与阻塞（必须先认清）

**Qt `msvc2022_64` kit 不完整**：`E:\InstallApplication\Qt\6.12.0\msvc2022_64` 只有 4.7MB / 56 个文件，是 Qt MCP 插件桩：

- 存在：`bin\{QmlPreviewMcpServer.exe, Qt6Mcp.dll, Qt6Mcpd.dll}`、`include\QtMcp`、`lib\{Qt6Mcp, Qt6Mcpd}.{lib,prl}`、`metatypes/`、`mkspecs/`、`modules/`、`sbom/`
- 缺失（任一即无法构建 GUI/打包）：`lib\cmake\Qt6\Qt6Config.cmake`、`bin\Qt6Core.dll`、`bin\Qt6Widgets.dll`、`bin\windeployqt.exe`、`include\QtCore`、`qmake.exe`
- 全盘检索（`C:\Program Files`、`D:\InstallApplication`、`E:\InstallApplication`、`E:\Git`）未发现其他 MSVC Qt SDK；Qt installer 仅装过 mingw base，无离线包缓存。

结论：**不安装 Qt 6.12.0 MSVC2022 base kit（组件 `qt.qt6.6120.win64_msvc2022_64`），AC1 与 AC2 无法完成**。安装属"工具安装需另行批准"，已上报 Lead 等待用户决定（选项 A：批准安装；选项 B：只交付不依赖安装的部分，AC1/AC2 标 blocked、票保持 OPEN）。

因此本计划的执行顺序是"先做不依赖 Qt 安装的部分"（步骤 4–8），GUI 构建/打包/干净环境验证（步骤 9–11）在 Qt kit 就绪后执行；在 kit 缺失期间它们**不是"跳过"，而是显式的 blocked 项**，任何构建脚本在缺 Qt 时必须非零退出并给出可诊断错误。

> 2026-11-12 更新：用户批准选项 A，Qt 6.12.0 MSVC2022 x64 kit 已安装完成（exit 0）；本节阻塞解除，最终执行结果见 §14。

## 3. 工具链基线（2026-11-12 实测）

| 组件 | 版本 / 路径 |
| --- | --- |
| OS | Windows 11 专业版 build 26200 |
| MSVC | VS2022 Professional；`cl.exe` 19.44.35228 x64（工具集 14.44.35207）；`rc.exe` 10.0.26100.0；`vcvars64.bat` = `C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Auxiliary\Build\vcvars64.bat` |
| CMake | 3.31.2 `D:\InstallApplication\CMake\bin\cmake.exe` |
| Ninja | 1.12.1 `E:\InstallApplication\Qt\Tools\Ninja\ninja.exe` |
| MinGW | GCC 13.1.0 `E:\InstallApplication\Qt\Tools\mingw1310_64\bin` |
| Qt (MinGW) | 6.12.0 完整 kit `E:\InstallApplication\Qt\6.12.0\mingw_64` |
| Qt (MSVC) | **缺失/仅桩**（见 §2） |

## 4. MSVC 无 Qt 核心构建（现在可做）

- 构建目录：`build/msvc-debug`、`build/msvc-release`（位于 worktree 内、被 `.gitignore` 覆盖）。
- 命令骨架（`scripts/build-msvc.ps1 -CoreOnly` 封装）：
  `call vcvars64.bat && cmake -S . -B build/msvc-debug -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_MAKE_PROGRAM=<ninja> [-DCMAKE_PREFIX_PATH=<Qt>]`
- 核心目标（Qt 缺失时的实际可建集合）：`tmog_core`、`process_checks`、`smoke_enumerate`、`io_activity_checks`、`process_ops_checks`，以及 `io_helper_binding_checks` 测试条目。
- **显式断言不静默跳过**：配置后检查 `build.ninja` 中不存在 `TmogReplica` / `portable_package` / Qt 相关目标，并把"GUI 目标不存在"作为 `-CoreOnly` 的预期断言；非 `-CoreOnly` 模式则要求这些目标存在，否则脚本失败。

## 5. MSVC 源码兼容修复（最小）

已实测唯一阻断：`tests/io_activity_checks.cpp:98` 在 MSVC 下报

```
error C2589: '(': illegal token on right side of '::'
error C2059: syntax error: ')'
```

原因：`#include <windows.h>` 的 `min`/`max` 宏与 `std::min` 冲突（该文件多处使用 `std::min/std::max`，全文无 `NOMINMAX`）。
修复：仅在该文件 `#include <windows.h>`（line 36）之前加

```cpp
#ifndef NOMINMAX
#define NOMINMAX
#endif
```

不改全局编译参数（保留默认 `/EHsc` 等）、不改其他文件、不改行为；修复后需 MSVC Debug/Release 与 MinGW Debug 双向回归。

## 6. ABI 与运行库匹配策略

- 架构：`cl.exe` x64 + `CMAKE_SIZEOF_VOID_P=8`；CMake 配置后用 `CMakeCache.txt` 校验 `CMAKE_CXX_COMPILER` 为 cl、`Qt6_DIR` 指向的 prefix 与传入 `QtDir` REALPATH 一致（防 Qt 错配）。
- Qt 版本/构建：`qmake -query QT_VERSION`（若存在）与 `Qt6Core.dll` FileVersion 必须为 6.12.0 系列；kit 目录名必须为 `msvc2022_64`，拒绝任何 mingw kit 混入。
- 运行库：MSVC Debug 用 `/MDd`（Qt debug DLL 如 `Qt6Cored.dll`；Qt MSVC 包自带 debug DLL），Release 用 `/MD`；同一构建不得混用 `/MT`。
- 打包时 `windeployqt --compiler-runtime` 收集 MSVC 运行库，并核对 `vcruntime140.dll`、`vcruntime140_1.dll`、`msvcp140.dll`（及实际出现的 `concrt140.dll`/`msvcp140_*.dll`）；缺任一即失败。
- 禁止把 MinGW 的 `libgcc_s_seh-1.dll` / `libstdc++-6.dll` / `libwinpthread-1.dll` 混入 MSVC 包（`scripts/check-package.ps1` 目前硬编码 MinGW 语义，MSVC 包需要 ABI 分支或独立校验，见 §8）。

## 7. `scripts/build-msvc.ps1` 设计

参数：`-Configuration Debug|Release`、`-SourceDir`（默认脚本父目录）、`-BuildDir`（默认 `<SourceDir>/build/msvc-<cfg>`）、`-QtDir`、`-VcVarsBat`、`-CMakeExe`、`-NinjaExe`、`-CoreOnly`、`-Package`、`-Parallel`。

行为：

1. 解析并校验 `SourceDir`（含 `CMakeLists.txt`）、`BuildDir` 必须在 SourceDir 内且不是源码根/链接。
2. 定位并导入 `vcvars64.bat`（参数 > 环境变量 > `vswhere -latest -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64` > 已知路径）；导入后校验 `cl.exe`/`link.exe`/`rc.exe` 可用，失败即抛错。
3. 定位 `cmake`/`ninja`（参数 > 环境变量 > PATH > 已知安装路径），全部校验存在后才配置。
4. 解析 Qt kit：参数 > `$env:TMOG_QT_MSVC_DIR` > 候选目录；用**完整性校验**（`lib/cmake/Qt6/Qt6Config.cmake`、`bin/Qt6Core.dll`、`bin/Qt6Widgets.dll`、`bin/windeployqt.exe`、`include/QtCore`）判定；不完整则**非零退出**并逐项列出缺失文件；若目录名不是 `msvc2022_64` 一律拒绝（防 MinGW kit 误用）。
5. 配置：`cmake -G Ninja -DCMAKE_BUILD_TYPE=<cfg>`；完整模式加 `-DCMAKE_PREFIX_PATH=<QtDir> -DTMOG_PORTABLE_STRICT=ON`（缺 Qt 时 CMake 侧 FATAL_ERROR 兜底，双保险）。`-CoreOnly` 模式要求 Qt 不可用（可用则报错提示改完整模式），并把"GUI/打包目标缺失"作为断言而非成功。
6. 构建 + `ctest --output-on-failure`；日志写 `<BuildDir>/logs/{configure,build,ctest}.log`，stdout 同步输出，失败保留日志并非零退出。
7. 记录版本：cl/rc/cmake/ninja/Qt(DLL FileVersion,qmake)/Windows build、完整命令与退出码，写 `<BuildDir>/logs/toolchain-versions.txt`。
8. `-Package` 模式（需 Qt）：构建 `portable_package`，`windeployqt --compiler-runtime`，校验包内 Qt DLL/插件/MSVC 运行库/清单，再跑包检查脚本。

## 8. 打包与干净环境验证（AC2，待 Qt）

- 包目录：`build/msvc-<cfg>/portable`（与 MinGW 包目录结构一致，便于对照）。
- 内容核验：`TmogReplica.exe`、`Qt6Core[|d].dll`、`Qt6Gui[|d].dll`、`Qt6Widgets[|d].dll`、`platforms\qwindows.dll`、MSVC 运行库（§6）、`MANIFEST.txt`（sha256+size+路径）、许可证文本；文件数/总字节/关键 DLL hash 记入报告。
- ABI 校验：包内 DLL 必须来自 MSVC kit（版本/目录对照），不得出现 MinGW 运行时三件套。
- 无开发 PATH 启动：以 `PATH=C:\Windows\System32`（及必要系统目录）清空 Qt/MinGW/cmake 路径与 `QT_PLUGIN_PATH`，启动 `TmogReplica.exe`，用 PowerShell 读取进程模块确认 Qt6Core 来自包目录；用 `EnumWindows` 探针确认窗口出现、核心流程（枚举进程列表、刷新档位、打开/关闭 I/O 页）实测；随后正常关闭，核验无崩溃、无缺失 DLL 弹窗（退出码/事件日志）。
- 记录"未验证环境"：其他 Windows 版本、其他 Qt 补丁版本、无 VC Redist 的裸机、非管理员用户等。

## 9. MinGW 回归（AC3）

- 新构建目录 `build/mingw-debug`（Qt mingw kit + MinGW 编译器），`-DCMAKE_BUILD_TYPE=Debug`，全量构建与 `ctest`。
- 对照 handoff 基线 11/11；任何差异必须解释。过程中曾出现 `process_ops_checks` 报 `csrss not found`，已定位为 Lead 环境准备动作的 Low 完整性副作用并修复（见 §10）；修复后 11/11 全绿。
- 若 Debug 全绿且 Release 包检查不过（时间/环境），如实标注 Release 未做，不冒充全绿。

## 10. `process_ops_checks` 失败根因与修复记录（Low 完整性环境副作用，已修复）

初期现象：MSVC Debug/Release 与 MinGW Debug 的 `process_ops_checks` 均输出
`NOTE: csrss not found; read-only verification unavailable this run` + `FAIL: csrss present for read-only critical verification`，退出码 1；同环境主工程旧 MinGW 二进制（2026-10-27 构建）同样失败，故初判为"会话环境限制"并如实记录 10/11。

**根因（Lead 定位，2026-11-12 17:51 通报）**：Lead 在 16:2x 对 `E:\Git\TMOG-Public-WorkTree` 执行
`icacls /setintegritylevel "(OI)(CI)L"`，使 worktree 内全部文件（含构建出的 exe）继承 **Low 完整性标签（Mandatory Label\Low）**。
从 Low IL 镜像启动的进程枚举本机进程时被系统裁剪到 ~60–66 个且不含 `csrss.exe`（测试用 `CreateToolhelp32Snapshot` + `PROCESSENTRY32W` 按名匹配），因此 FAIL；与 MSVC、MinGW 或本票代码无关。

根因证据（Lead 提供 + 本 worktree 探针交叉印证）：
- 同一 `smoke_enumerate.exe`：在 worktree 内（Low IL）看到 66 个进程；复制到 `%TEMP%`（Medium）后看到 569 个进程。
- `icacls` 显示 worktree 文件带 `Mandatory Label\Low`。
- 本 worktree 探针（`build/csrss-probe/`，不入库）：toolhelp_count=62–66、enumprocesses_count=62–66、`csrss_hits=0`；而同一 shell 的 `Get-Process`/`tasklist` 能看到 csrss（PID 1412 session 0、1556 session 1）。

修复（Lead 执行）：`icacls E:\Git\TMOG-Public-WorkTree /setintegritylevel "(OI)(CI)M" /T`（3366 文件，0 失败）；Lead 独立复跑 w04 worktree ctest 13/13 PASS。

本 worktree 修复后重跑（2026-11-12 17:51–17:53，标签恢复 Medium 后）：
- `pwsh -NoProfile -File scripts\build-msvc.ps1 -Configuration Debug` → ctest **11/11 PASS**（`process_ops_checks` 0.06 s PASS），exit **0**；日志 `build/msvc-debug/logs/ctest-Debug.log`。
- `pwsh -NoProfile -File scripts\build-msvc.ps1 -Configuration Release` → ctest **11/11 PASS**，exit **0**；日志 `build/msvc-release/logs/ctest-Release.log`。
- MinGW Debug `ctest --output-on-failure`（TEMP/TMP=`build/mingw-debug/tmp`、PATH 前置 mingw bin）→ **11/11 PASS**，ctest exit **0**；日志 `build/mingw-debug/logs/ctest-rerun2.log`。

结论：最初 10/11 是**环境准备副作用**（Low IL），不是 MSVC 兼容性回归、也不是本票改动引入；修复后 AC1/AC3 的 ctest 均为 11/11。代码无需任何规避改动。

## 11. 证据清单（AC4）

1. 工具链版本表 + Windows build（§3）。
2. 每条构建命令的完整命令行、时间、退出码、日志路径。
3. MSVC Debug/Release ctest 结果（通过/失败/跳过逐项）。
4. MinGW Debug 全量 ctest 结果与 handoff 基线对照。
5. 包清单：文件数、总字节、关键 DLL/插件 SHA-256、MANIFEST 摘要。
6. 干净 PATH 启动证据（模块加载、窗口/核心流程、关闭）。
7. 未验证环境与阻塞项（Qt MSVC kit、GUI 构建、打包、干净环境）逐条列明。
8. 报告落盘 `E:\Git\TMOG-Public\.workflow\dsh-resume-20261112\reports\ticket-15-worker-r1.md`；根因修正后按不可覆写纪律追加新版本 `ticket-15-worker-r2.md`（r1 标为已被 r2 取代），ops 追加 `.workflow\dsh-resume-20261112\ops\ticket-15\dev-15-1.ops.jsonl`。

## 12. 步骤与门禁

1. 写本计划（完成）。
2. `tests/io_activity_checks.cpp` NOMINMAX 最小修复。
3. 新增 `scripts/build-msvc.ps1`。
4. 验证脚本契约：无 Qt 默认模式必须非零退出且错误清晰；`-CoreOnly` 可成功。
5. MSVC Debug/Release 核心构建 + ctest；记录 csrss 异常排查结果。
6. MinGW Debug 全量构建 + ctest 回归。
7. 报告/ops 落盘，本地提交，报 head 给 Lead；等 fresh 审查与授权后再 push/PR（PR 正文 `Part of #15`）。
8. **门禁**：Qt MSVC kit 安装（选项 A）需用户批准；未批准前 AC1/AC2 标 blocked，GUI/打包/干净环境验证不执行、不伪造证据。

## 13. 风险与回退

- Qt 桩被误判为完整 kit → 脚本完整性校验 + CMake `TMOG_PORTABLE_STRICT` 双保险。
- MSVC 与 Qt 版本/ABI 错配 → prefix REALPATH 与 `msvc2022_64` 目录名校验，配置后 CMakeCache 复核。
- Debug Qt DLL 缺失 → windeployqt/构建失败即报错，不回退 Release。
- 干净 PATH 启动失败（缺 VC Redist）→ 如实记录为未满足项，不静默改 PATH 掩盖。
- `process_ops_checks` 失败被误判为回归 → 用旧 MinGW 二进制交叉验证（已完成）；后由 Lead 定位为 worktree Low 完整性标签副作用并修复（§10），修复后重跑 11/11，本票未做任何规避代码。
- 回退：全部改动限于 `scripts/`、`tests/`、`doc/plans/`，可单独回退；不触碰 `src/`、`CMakeLists.txt`。

## 14. 执行结果（2026-11-12，本计划已执行完毕）

前置：用户批准选项 A，安装 Qt 6.12.0 MSVC2022 x64 kit（`MaintenanceTool.exe ... install qt.qt6.6120.win64_msvc2022_64`，exit 0，3.18 GB；§2 的阻塞解除）。

| 项目 | 结果 | 证据 |
| --- | --- | --- |
| MSVC Debug GUI 构建 | 72/72 目标成功（TmogReplica.exe 64-bit debug）；ctest **11/11 PASS**（Low IL 修复后重跑，`process_ops_checks` PASS 0.06s；exit 0，总 66.33s） | `build/msvc-debug/logs/{configure,build,ctest}-Debug.log`、`toolchain-versions.txt` |
| MSVC Release GUI 构建 | 72/72 目标成功；ctest **11/11 PASS**（exit 0，总 65.99s） | `build/msvc-release/logs/ctest-Release.log` |
| MSVC Release 便携包 | 53 文件 / 48,822,377 字节；windeployqt + app-local MSVC 运行库（vcruntime140、vcruntime140_1、msvcp140、msvcp140_1、msvcp140_2）；`check-package.ps1 -Toolchain msvc` ALL PASS（24 项许可、清单 52 条）；IL 修复后复检仍 ALL PASS、文件 hash 未变 | `build/msvc-release/portable`、`logs/package-inventory-Release.txt`、`logs/check-package-Release-postilfix.log` |
| 无开发 PATH 启动 | PASS：窗口标题 `TmogReplica`；Qt6Core/Qt6Gui/Qt6Widgets/VCRUNTIME140/MSVCP140/qwindows 均从包目录加载（包内 11 个模块，系统 77/78）；正常关闭，退出码 0；IL 修复后重跑仍 PASS（pid 35568） | `build/msvc-release/launch-temp/launch-evidence.json`、`launch-temp2/launch-evidence.json` |
| MinGW Debug 回归 | 构建 72/72；ctest **11/11 PASS**（IL 修复后重跑；exit 0，总 65.92s） | `build/mingw-debug/logs/ctest-rerun2.log` |
| MinGW Release 包回归 | `package-portable.ps1` + `check-package.ps1 -Toolchain auto` ALL PASS（ABI=mingw，28 项许可，51 文件）→ 原路径未弱化；IL 修复后复检仍 ALL PASS | `build/issue6-w35-mingw-regress/portable`、`build/issue6-w35-mingw-regress/logs/check-package-postilfix.log` |

与计划的偏差（均已实现并验证）：

1. `windeployqt --compiler-runtime` 在 Qt 6.12 只复制 `vc_redist.x64.exe` 安装器、不复制运行库 DLL → 改为删除该安装器，并按 `dumpbin /dependents` import 依赖闭包把 VS Redist 目录中的 CRT DLL 以 app-local 方式复制进包；MSVC 运行库仅 Release 可再发行，故 `-Package` 仅支持 Release（Debug+Package 显式失败）。
2. ctest 需要把 `TEMP/TMP` 指到构建目录内（`C:\Users\...\AppData\Local\Temp` 的 `QTemporaryDir` 在本会话返回“拒绝访问”），并把 Qt `bin` 前置到 PATH，否则 GUI 测试报 `STATUS_DLL_NOT_FOUND`。
3. `check-package.ps1` 增加 `-Toolchain auto|mingw|msvc` ABI 分支（运行库/许可/白名单按 ABI 选择、交叉 ABI DLL 双向拒绝），MinGW 原断言保持；为 Qt 6.12 windeployqt 产物补充 `dxcompiler.dll`/`dxil.dll` 及 `msvcp140_*.dll` 白名单。
4. 新增 `scripts/verify-portable-launch.ps1`（干净 PATH/环境变量、窗口与模块核验、证据 JSON）。
5. `build-msvc.ps1` 增加 `-SkipCtest`/`-SkipLaunchVerify`（跳过会在日志显式记录，不声明通过）。
6. 初期 ctest 10/11 的唯一失败 `process_ops_checks` 根因为 Lead 环境准备动作给 worktree 打上的 **Low 完整性标签**（§10），不是工具链/代码问题；Lead 修复（`icacls ... /setintegritylevel "(OI)(CI)M" /T`）后本 worktree 三套 ctest 全部 11/11 重跑通过，报告 r2 与本节按修复后结果更新（r1 的"csrss 环境限制"结论已失效）。

未验证/限制：`process_ops_checks` 的失败已定位并修复（§10），修复后三套 ctest 11/11；GUI 验证限于"进程启动 + 主窗口出现 + 核心页面测试由 ctest 覆盖"，不等于全页手工验收；其余未验证项（其他 Windows 版本/补丁 Qt/干净裸机/非管理员/Debug 包/MinGW 包启动）见报告 r2 §9。
