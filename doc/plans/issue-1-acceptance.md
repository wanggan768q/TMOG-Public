# Issue #1 验收记录（M4，持续更新）

日期：2026-10-27。范围：本轮在 **Windows 11 x64 宿主**完成的验收项。macOS / Linux 相关项全部标记**未验证**，不得视为已支持。

## 1. 构建与检查

| 项 | 命令 | 结果 |
|---|---|---|
| 配置 | `cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=<Qt>/6.12.0/mingw_64` | ✅ |
| 构建 | `cmake --build build` | ✅（TmogReplica.exe + tmog_core + 3 个检查） |
| 核心检查 | `ctest --test-dir build --output-on-failure` | ✅ 3/3（process_checks 8 断言、smoke_enumerate、process_ops_checks 4 断言） |

工具链：Qt 6.12.0 开源版（MinGW 组件）+ MinGW 13.1 + Ninja + CMake（均来自 Qt 安装）。**MSVC 组件未安装**，MSVC 工具链构建未验证。

## 2. Windows 实机验收（本轮完成）

| 验收项 | 结果 | 证据 |
|---|---|---|
| GUI 启动、窗口响应 | ✅ | 进程存活、Responding=True |
| 真实进程列表 | ✅ | 600 进程（smoke 检查断言 ≥5） |
| CPU 采样 | ✅ | 599 个差分计算成功；空闲窗口全零属正常（已打印 NOTE） |
| 逻辑处理器数 | ✅ | 20 |
| 结束进程（安全路径） | ✅ | 拒绝自身、可丢弃子进程正常结束+退出码确认、不存在 PID 优雅失败 |
| 自身开销 | ✅ | 3 秒 0.078 秒 CPU（≈2.6% 单核） |
| 关闭清理 | ✅ | Stop-Process 后无残留进程 |
| 便携目录自包含 | ✅ | windeployqt 产物复制到独立目录启动成功（无 PATH 依赖） |
| 排序/暂停/恢复/选择保持/键盘操作 | ⚠️ 人工项 | 构建+自动化检查通过；**交互项需人工点验**（本轮以截屏辅助，见 §5） |
| 与 Windows 任务管理器口径对照 | ⚠️ 未做 | 待人工并排比对（进程 CPU/内存趋势、排序口径） |
| 结束系统关键进程的拒绝行为 | ✅ | process_ops_checks 第 5 项：csrss.exe 真实身份 → CriticalTarget/AccessDenied（不实际终止）；另 is_critical 查询失败→拒绝为代码路径 review 确认 |

## 3. 口径定义（已实现）

- **CPU%**：`Δ累计进程CPU时间 / (Δ单调墙钟 × 有效逻辑处理器数) × 100`，整机容量 0–100%。首样本显示"待采样"；暂停/恢复后首帧同理；身份变化（PID 复用）显示"身份变化"；累计时间倒退显示"无效增量"；API 失败显示"不可用"。不造零（对齐原版 "never shows a zero it did not measure"）。
- **内存**：驻留内存 = Windows 工作集（WorkingSetSize）。不等同私有内存或提交量；显示时注明。
- **>64 核 / 处理器组 / 容器配额**：未验证。`logical_processor_count()` 用 GetSystemInfo，处理器组场景可能偏小——M5 项。
- **策略性暂停的进程**（效率模式）：CPU 时间不增长，显示 0% 而非特殊状态——与任务管理器对照时统一处理，M5 项。

## 4. 未验证 / 限制清单（诚实边界）

| 项 | 状态 | 原因 |
|---|---|---|
| macOS 全部（构建/运行/结束操作） | ❌ 未验证 | 无 macOS 宿主；结束操作按计划首版禁用 |
| Linux 全部（构建/运行/pidfd 结束） | ❌ 未验证 | 无 Linux 宿主 |
| Windows ARM64 | ❌ 未验证 | M5 |
| MSVC 工具链构建 | ❌ 未验证 | Qt MSVC 组件未装 |
| glibc 兼容 / Linux 发行包 | ❌ 不适用 | 无 Linux 产物 |
| 更新检查、遥测 | — | 设计上为零（对齐原版零遥测承诺） |
| 授权功能 | — | 按计划不实现 |

## 5. 待人工完成

1. 启动 `build\TmogReplica.exe`，与 Windows 任务管理器并排比对：选 2–3 个活跃进程核对 CPU% 趋势与内存量级
2. 点验交互：列头排序（数值列按值）、暂停→恢复后首帧"待采样"、选中行跨刷新保持、结束任务确认框（对一个可丢弃进程，如记事本）
3. 窗口缩放、键盘导航（Tab/方向键）走查

## 6. 交付物清单

- 源码：`CMakeLists.txt`、`src/`（核心 + 平台适配 + GUI）、`tests/`（3 个检查）
- 构建产物：`build/`（不入库）；便携包 = build 目录剔除构建中间物，或按 §1 重新构建
- 文档：`doc/plans/issue-1-behavior-matrix.md`（M0）、本文件（M4）

## 7. 许可证义务（M4 要求，本机核查）

| 项 | 结果 |
|---|---|
| Qt 许可证 | LGPLv3 开源版（安装时已勾选接受，`E:\InstallApplication\Qt\Licenses\`） |
| 链接方式 | 动态链接（windeployqt 部署 Qt6*.dll），满足 LGPL 重链接要求 |
| 发布包义务 | 随包附带：a) LGPLv3 文本副本 b) Qt 版权声明 c) 指向 Qt 源码获取方式的说明（https://www.qt.io/download/open-source ） |
| 本仓库自身源码 | 公开（本仓库即源码分发），无额外闭源义务 |
| 第三方组件 | MinGW 运行库（GCC runtime exception 许可，windeployqt 已收集 libgcc/libstdc++/libwinpthread） |
| 待办 | 正式发布前在便携包根目录创建 `licenses/` 目录放置上述文本（首版发布动作，非代码阻塞） |
