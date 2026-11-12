# W04-fix / Issue #57 — PerformancePage.h 前向声明导致 MSVC C2027 修复计划 v1

- 工单：GitHub `wanggan768q/TMOG-Public` Issue #57（[Windows W04-fix] PerformancePage.h 前向声明导致 MSVC x64 构建 C2027）
- 执行者：Worker `dev-57-1`（DSH Agent Teams）
- 分支 / worktree：`fix/w04-msvc-forward-decl` @ `E:\Git\TMOG-Public-WorkTree\w04-msvc-fix`
- 基线：`33c16adebb620ec9f349d96ae89f4af02cb23fe8`（= `origin/main`，已含 #19 性能页与 #15 MSVC 构建脚本）
- 日期：2026-11-12
- 写范围：本 worktree 的 `src/PerformancePage.h`、`src/PerformancePage.cpp`（仅删除冗余 include，审查 r1 后经 Lead 授权）、`doc/plans/`；不改 `tests/`、`CMakeLists.txt`、其他 `src/` 文件、脚本与打包文件。

## 1. 目标与验收映射

| AC（Issue #57） | 要求 | 本计划落点 |
| --- | --- | --- |
| AC1 | MSVC x64 Debug 与 Release 构建 92/92 目标通过，ctest 13/13（两个配置各一次） | 步骤 3：`scripts/build-msvc.ps1 -Configuration Debug` / `-Configuration Release` |
| AC2 | MinGW Debug 构建 + ctest 13/13 回归 | 步骤 4：cmake+ninja `build\verify-debug` + `ctest` |
| AC3 | MSVC Release `-Package`：便携包、check-package、干净 PATH 启动验证通过 | 步骤 3：`-Configuration Release -Package` |
| AC4 | 无行为/UI/接口/默认值变更；只改 `src/PerformancePage.h`（必要时加 `doc/plans`） | 改动为 +2/−1（删除 1 行前向声明，新增 1 行 include 与 1 个空行）；审查 r1 后另删除 `src/PerformancePage.cpp` 的冗余 include（−2） |
| AC5 | 本地提交后由 Lead 派 fresh 独立审查；未授权不 push、不建 PR | 步骤 6–7 |

## 2. 根因（Issue #57 已定位，本票复核）

`src/PerformancePage.h` 在 `namespace tmog` 内只有前向声明 `struct SystemSample;`（第 11 行），
而类成员 `std::deque<SystemSample> history_`（第 40 行）要求 `std::deque` 的实例化看到完整元素类型。
MSVC STL 在类模板实例化时强制元素类型完整，报 `error C2027: use of undefined type 'tmog::SystemSample'`；
libstdc++（MinGW）容忍不完整类型，因此 #19 合入时 MinGW 全绿、MSVC 才暴露。

## 3. 修复方案（最小）

`src/PerformancePage.h`：

- 删除第 11 行 `struct SystemSample;`；
- 在现有本地 include 区新增 `#include "SystemMetricsSampler.h"`；
- 审查 r1 low 项：头文件已包含该头后，`src/PerformancePage.cpp` 的同类 include 冗余，予以删除（无副作用）。

`src/SystemMetricsSampler.h` 只依赖 `<cstddef>/<cstdint>/<deque>/<optional>/<string>` + `"SystemMetrics.h"`，
无 Qt、无线程、无平台 API，加入该头不引入新依赖或编译负担；`tmog::SystemSample` 与
`tmog::SystemSampleStatus` 的定义都在其中，语义与原前向声明完全一致。

`MainWindow.*`/测试/CMake 不改；`PerformancePage.cpp` 仅在审查 r1 后删除冗余 include；
`set_history` 签名与调用点不变，无行为、UI、接口、默认值变更。

## 4. 验证矩阵（全部真跑并留日志）

| # | 命令（worktree 根执行） | 期望 |
| --- | --- | --- |
| V0 | `pwsh -NoProfile -File scripts/build-msvc.ps1 -Configuration Debug`（修复前，失败复现） | exit≠0，日志含 `C2027` / `PerformancePage.h(11)` |
| V1 | 同上（修复后） | 92/92 目标 + ctest 13/13，exit 0 |
| V2 | `pwsh -NoProfile -File scripts/build-msvc.ps1 -Configuration Release -Package` | 92/92 + ctest 13/13 + 便携包 + check-package + 干净 PATH 启动，exit 0 |
| V3 | MinGW：`cmake -S . -B build\verify-debug -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_PREFIX_PATH=E:/InstallApplication/Qt/6.12.0/mingw_64` → `cmake --build build\verify-debug` → `ctest --test-dir build\verify-debug --output-on-failure` | 构建成功 + ctest 13/13，exit 0 |
| V4 | 审查 r1 low 项处理后复验：MSVC Debug、MSVC Release（不带 `-Package`）、MinGW Debug 各自构建 + ctest | MSVC 两种配置 92/92 + ctest 13/13，MinGW ctest 13/13，exit 0 |

日志：脚本自带日志在 `build/msvc-<cfg>/logs/`；命令级原始输出（含退出码）另存
`.workflow/dsh-resume-20261112/evidence/ticket-57/`。报告记录每条命令 exit code、关键输出行、包字节数、日志路径。

## 5. 提交与交付

1. 本地提交（计划 + 修复，1–2 个），精确 add，不 amend、不 force push、不跳 hooks。
2. r1：不 push、不建 PR，报 head 等 Lead 派 fresh 本地独立审查。
3. r2：审查 r1 PASS 后按 Lead 授权 publish——`git push -u origin fix/w04-msvc-forward-decl`（不 force）+ `gh pr create --base main`；不合并、不关票、不改标签。
4. 报告 `E:\Git\TMOG-Public\.workflow\dsh-resume-20261112\reports\ticket-57-worker-r1.md`；
   ops `...\.workflow\dsh-resume-20261112\ops\ticket-57\dev-57-1.ops.jsonl`。

## 6. 风险与回退

- 风险：`SystemMetricsSampler.h` 传递依赖 `SystemMetrics.h`（已有头，无平台/线程依赖）——已核实，无新增链接或宏影响。
- 风险：MSVC 全量 Debug+Release+Package 约 8–12 分钟；中途如遇 502/中断，先 `git status` 确认构建目录与源码状态再续跑，不重复提交。
- 风险：并行票 #20 正在改 `MainWindow.*`/`SystemInfo`；本票不触碰这些文件，避免写冲突。
- 回退：改动为 3 个文件（`src/PerformancePage.h` +2/−1、`src/PerformancePage.cpp` −2、计划 1 个），`git revert` 或单独回退相关提交即可；无数据/配置迁移。

## 7. 未验证项（预期）

- 真实桌面手工 UI 验收：本票无 UI/行为变更，不做；以 ctest 13/13 与既有 #19 验收为准。
- 其他 Windows 版本/其他 MSVC 工具集/其他 Qt 补丁版本未验证。
