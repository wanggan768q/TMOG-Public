# Issue #1 行为矩阵（M0 交付）

日期：2026-10-26。来源分四类：**[官网]** = tmog.org 采证（2026-10-26）；**[静态]** = 本仓库 REA 静态证据（Windows v1.0.1/v1.1.0 EXE）；**[动态]** = 实机运行观测；**[决策]** = 新实现自主决策（无原版证据，不冒充原版行为）。

## 0. 原件身份核查（M0.3 只读部分，已完成）

| 项 | 结果 |
|---|---|
| 原始 EXE SHA-256 | `FB57E1EB00CB259D4BD4CF6BD7289097BE419F3AB171EE234F46C0AC1247D5A7` |
| 原始 EXE 签名 | Valid，`CN=David Plummer, O=David Plummer, L=Redmond, S=Washington, C=US` |
| 补丁 EXE 签名 | HashMismatch（与 `patch_bypass_analysis_v110.md` 审计结论一致） |
| 版本信息 | ProductName=Task Manager TMOG，File/ProductVersion=1.1.0.0 |

动态运行采证（M0.2 截图对照）**本轮未执行**——需要用户批准运行原版 EXE 并在独立环境阻断 `pro.license-tmog.com` 等原厂域后进行。所有依赖动态观测的行为项标为阻塞。

## 1. 平台矩阵（[官网]）

| 平台 | 原版技术栈 | 架构 | 系统要求 | 本复刻适配层 |
|---|---|---|---|---|
| Windows | C++ + Win32 | x64、ARM64 | Windows 11 | Win32 API（Toolhelp32 等） |
| macOS | Swift + AppKit | universal（Apple silicon + Intel） | macOS 14+，签名公证 | libproc / Darwin API |
| Linux | C++ + Qt 6 | x64、ARM64 | glibc 2.35+、libstdc++ 12+（RHEL 9 不可运行）；.deb/.tar.gz 需系统 Qt 6.4+ | procfs / Linux API |

原版共享 C++20 测量核心，无 Electron/web view。本复刻沿用此架构方向（Qt 6 Widgets 共享 UI）。

## 2. 页面清单

[官网] 十二页面：Summary、Performance、Processes、System Info、Startup apps、Users、Services、Power & Freq、Connections、Installed Apps、Disk Space、Benchmarks（Flight Recorder 为 PRO 专属）。

[静态] 二进制导航数组（`evidence/func_1b3dc0.md`）实际含 **15 项**，顺序：Summary、Performance、Processes、System Info、**App history**、Startup apps、Users、Services、Power & Freq、**Flight Recorder**、Connections、Installed Apps、**Drivers**、Disk Space、Benchmarks。官网 12 页之外的 App history / Drivers 为未在官网功能列表强调的页面；Flight Recorder 是 Pro 门控页（[静态] featureId ≤ 9 门控，`patch_bypass_analysis_v110.md`）。

**首版范围**：仅 Processes 核心页。其余页面按 M5 逐项补证。

## 3. Processes 页行为矩阵（首版验收范围）

| 行为 | 证据来源与内容 | 首版复刻决策 |
|---|---|---|
| 进程枚举 | [静态] `CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS) failed` 字符串（`evidence/search_pro.md:186`）→ Windows 用 Toolhelp32 | Windows：Toolhelp32Snapshot + Process32FirstW/NextW；macOS：libproc；Linux：procfs。[决策] 后两者 API 选型 |
| 名称/PID/状态列 | [决策] 无原版列名静态证据（列文本未在字符串表中出现，疑动态构建或资源读取） | 名称、PID、状态三列，列头文本自定 |
| CPU% | [官网] Processes 页可"比较 CPU"；[决策] 无采样 API 静态证据（GetProcessTimes 未见于证据） | `Δ累计CPU时间 / Δ单调墙钟 / 有效逻辑处理器数 × 100`，整机容量 0–100%；首样本显示"待采样" |
| 内存 | [官网] Processes 页可"比较内存"；[决策] 无内存 API 静态证据 | 驻留内存：Windows 工作集（GetProcessMemoryInfo）、macOS/Linux RSS；单位动态 KB/MB/GB |
| 排序 | [静态] ListView/LISTBOX 控件类（`evidence/func_da0d0.md`，InitCommonControlsEx dwICC=0x4001 含 ICC_LISTVIEW_CLASSES）；[官网] "排序过滤实时进程树" | 数值列按数值排序，文本列按字典序 |
| 刷新 | [静态] 四档速度字符串：Slow — 0.5/sec、Normal — 1/sec、High — 2/sec、Fast — 4/sec（`evidence/func_da0d0.md`） | [决策] 首版固定 1/sec 单一后台采样循环，禁止重叠采样；刷新速度档位后补 |
| 暂停 | [静态] "Paused" 字符串 | 支持。暂停期间不采样，恢复后差分跳过中断段；[决策 #16] 暂停递增采样代际使在途结果作废，暂停/恢复均作废基线，恢复后首帧整表"待采样"重建 |
| 选择保持 | [决策] 无静态证据（官网强调 PID+创建身份配对防回收） | 刷新保持选中进程身份（PID+创建时间），身份变化视为原进程退出 |
| End task | [静态] "End task" 按钮控件（`evidence/func_da0d0.md`）；[官网] PID+创建身份配对 | 见 §4 安全操作矩阵；[决策 #16] 目标身份值拷贝防确认框期间快照替换悬空，终止在一次性工作线程执行（等待期 GUI 响应），收束同 #14 合同 |
| Refresh 按钮 | [静态] "Refresh" 按钮控件 | 手动立即采样一次；[决策 #16] 手动刷新闭环见 §3.1 行为矩阵 |
| 图表/曲线 | [静态] GDI 自绘（`evidence/body_192a4b.txt`：LineTo/MoveToEx/SetTextColor，窗口类 `TMOG.TaskManager.PerformanceGraph`） | [决策] 首版不做图表，纯表格 |

### 3.1 手动刷新与采样失败行为矩阵（[决策 #16]，2026-10-27 补记）

手动刷新在各状态下的确定行为（复刻自主决策，无原版证据）：

| 状态 | 手动刷新 | 定时采样 |
|---|---|---|
| 运行+空闲 | 立即采样，正常差分 | 正常（1/sec） |
| 运行+忙碌 | 拒绝重入，状态栏"正在采样，请稍候…"反馈 | 不启动（worker 忙） |
| 暂停+空闲 | 采一次并显示（含暂停期相邻手动帧差分），保持暂停 | 不启动 |
| 暂停+忙碌 | 拒绝重入，状态栏反馈 | — |
| 关闭中 | 忽略 | 不启动 |

采样失败语义（[决策 #16]，G5 修订：持久标注替代早期 5s toast）：

- 枚举 API 失败（ok=false/无结果/枚举中途真失败）：不进入成功差分、不清空表格为假零；保留上次数据显示，**状态栏持久标注"数据已陈旧（采样失败：<错误>）"**（`QStatusBar::addPermanentWidget`，不被 busy 等临时 showMessage 隐藏），**持续到当前代际真实成功帧清除**——worker 迟缓/挂起时标注不消失，旧表不冒充当前。
- 跨代际结果（暂停前在途）：到达即丢弃，不差分、不建基线；**旧代际成功帧不清除陈旧标注**。
- 失败后恢复成功帧：陈旧标注立即清除（无延时 timer，避免延时回调误清后续新失败）。
- 枚举器错误码合同：`Process32FirstW/NextW` 以 `ERROR_NO_MORE_FILES` 为正常终止/空快照（如实成功）；其他错误码为真失败（ok=false，丢弃半帧）。

## 4. 结束进程安全矩阵（M3 范围，前置记录）

| 项 | 证据 | 决策 |
|---|---|---|
| 确认框 | [决策] 无原版确认框证据 | 展示名称/PID/身份 + 未保存数据警告；取消不执行 |
| Windows 结束 | [决策] 无 OpenProcess/TerminateProcess 静态证据 | 句柄核实身份后 TerminateProcess；拒绝自身与关键进程 |
| Linux 结束 | — | pidfd 优先（防 PID 复用）；先核实内核能力 |
| macOS 结束 | — | **待评估**：若无安全目标绑定方式则首版禁用并记录缺口（计划 M3.2 已定） |
| 能力反馈 | [决策] | 区分取消/已退出/身份变化/拒绝/失败/超时 |

## 5. 其他原版行为（记录，不在首版范围）

- **主题**：[官网] Light/Dark/Green/Amber/Blue/Mono 六主题。首版仅跟随系统主题。
- **Connections**：[静态] All connections / Listening / Connected / UDP / Public listeners / Connection scope 分类字符串。远程查看（iPhone）与连接列表是两回事，不得合并。
- **更新检查**：[官网] 唯一常规网络请求是更新检查。复刻版首版不做更新检查。
- **零遥测**：[官网] "sends no usage statistics"。复刻版同样零遥测。
- **授权**：原版 license 机制见 `license_analysis_v101.md` / `f110_activate.md`；复刻版**不实现**任何授权，不连接原厂服务。

## 6. 阻塞与待办

| 项 | 状态 |
|---|---|
| M0.2 动态采证（运行原版截图对照） | 阻塞：待用户批准运行原版 EXE |
| M0.5 macOS/Linux 构建环境核查 | 阻塞：本机仅 Windows 宿主（已拆分至 issue #2） |
| 列名/菜单完整清单 | 待补：需 REA 对 DAT_ 引用与资源段二次取证 |
| Windows ARM64 / macOS Intel / Linux ARM64 | M5 后逐项验证 |

## 7. 范围对账（Review (a)1/(a)5 补记，2026-10-27）

- 计划原文"技术路线及首版范围为待批准建议；本轮只规划"。实际执行时用户经 AskUserQuestion 逐项批准了分支策略（新建 issue-1-rebuild）与 Qt 安装方案（"不装，只做不依赖 Qt 的部分"→ 后续用户主动安装 Qt 6.12 并告知目录，即解除 M1 阻塞），随后以"继续"指令推进 M3/M4。**逐里程碑的正式批准记录不存在，以会话指令链为准**；Qt 6 开源版选型理由见会话记录（LGPLv3 + 动态链接 + 原版 Linux 同源）。
- 提交信息中"M2/M3 完成"字样仅指 **Windows 路径**完成；Linux 结束操作是"未实现占位"（`LinuxProcessOps.cpp`），不是评估后禁用。macOS 禁用是矩阵 §4 既定策略（合规）。两平台全部工作在 issue #2 跟踪。
