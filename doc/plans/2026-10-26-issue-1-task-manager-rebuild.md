# Issue #1：Task Manager v1.1.0 多平台独立复刻计划

日期：2026-10-26。状态：根据新增多平台要求修订，技术路线及首版范围为待批准建议；本轮只规划。

## Context：背景与目标

Issue #1 要求依据逆向成果独立重建 Task Manager v1.1.0。仓库目前只有 Windows 原始／补丁 EXE、逆向记录和证据，没有可复用的应用源码、构建或测试工程。授权逆向成果不能视作全应用功能规格。

**已确认要求**：
- 独立重新实现，功能与交互对照原版，不恢复原始源码、不修改原 EXE。
- 不连接原厂授权服务、不复用许可证、不依赖授权绕过；首版不做商业授权。
- 支持多平台，以官网列出的 Windows、macOS、Linux 桌面平台为目标。
- 所有计划文档放在当前工程 `doc/plans/`，禁止使用工程外的 `.claude/plans/`。

此前 C#／WPF 的单平台建议已撤回。推荐改为 **C++20 + Qt 6 Widgets + CMake，共享核心与 UI，分别实现三个系统的数据采集与操作适配**。这是新的推荐方案，不代表原版就是同一套 Qt UI，也不是用户已批准选型。

## 1. 官方事实与证据边界

官网来源：https://www.tmog.org/#platforms（2026-10-26 查阅）。

| 平台 | 官网原版技术栈 | 官网平台范围 |
|---|---|---|
| Windows | C++ + Win32 | Windows 11；x64、ARM64 |
| macOS | Swift + AppKit | macOS 14+；Apple silicon、Intel x64 |
| Linux | C++ + Qt 6 | x64、ARM64；glibc 2.35+ 等发行包要求 |

官网描述三个原生应用与共享 C++20 测量核心；未列出移动端应用。新项目需要三平台桌面支持，不把远程查看当作本地多平台支持。

官网功能候选：Summary、Performance、Processes、System Info、Startup apps、Users、Services、Power & Freq、Connections、Installed Apps、Disk Space、Benchmarks，以及 Flight Recorder、主题、自监控。该列表不是每个平台都具备相同行为的证明，必须分别核对可用性、权限与指标。

现有本地证据可复用：
- `docs/reverse-tutorial/README.md`：归档索引及外置快照位置。
- `docs/reverse-tutorial/patch_bypass_analysis_v110.md:75–86`：Windows 既有观测及未实测项目。
- `docs/reverse-tutorial/evidence/`：定向静态证据。
- `Raw/Task Manager v1.1.0 - 原始文件.exe`：原件身份与合法可访问行为对照。

Windows 授权审计不证明完整功能已还原；官网宣传不代替运行验收；macOS／Linux 尚无本地原版产物与运行证据。外置快照和工具未验证，属于可选研究材料，不是构建依赖。

## 2. 推荐首版边界与架构

### 首版建议

三平台均可本地运行：真实进程列表、进程 CPU／内存采样、排序、刷新／暂停、选择保持、安全结束进程和明确错误反馈。先不扩展所有页面。

首轮实机目标建议：Windows 11 x64、macOS 14+ Apple silicon、Linux Ubuntu 22.04+ x64；后续在具备对应 runner／实机后验收 Windows ARM64、macOS Intel、Linux ARM64。上述六种平台／架构组合是目标矩阵，**首版三平台不等于六组合已经通过**。

### 最小架构

`系统适配 → 统一进程快照／采样计算 → Qt 表格与交互 → 平台操作结果`

- 共享 C++20 核心：快照字段、身份、可用性、单位、CPU 差分计算及错误语义。
- Qt Widgets：共享窗口、表格模型、排序、确认对话框及基础系统主题。采用原生桌面控件，不引入浏览器运行时。
- 三个适配器：Windows API；macOS libproc／系统 API；Linux procfs／系统调用。编译时选择平台，不建运行时插件系统。
- CMake 管理构建，CTest 管理最小检查；优先标准库／系统 API，不预建后台服务、数据库、驱动或完整 MVVM 框架。
- 新应用采用独立名称与资源，不冒用原厂身份或签名，不直接分发原厂资产。
- Qt 模块及动态链接分发方式先核查许可证义务，保留必要声明和替换库等合规条件；不能仅因仓库公开就宣称合规。

权衡：一套 Qt UI 比分别维护 Win32、AppKit、Qt 三套 UI 更小，便于首版实现；代价是不承诺每个平台原版界面的像素级一致。若以后明确要求系统原生 UI 精确复刻，再单独评估，不现在预建三套外壳。

## 3. 分阶段实施

### M0：三平台规格与环境核查

1. 记录官网版本、平台／架构、系统要求、页面和功能说明；原件下载必须另获批准，每个平台产物放独立空目录，不执行下载物中的脚本。
2. 对合法可访问原版核心页采证：截图、入口、列名／单位、刷新与排序、窗口缩放、权限不足和进程退出／操作失败。
3. 动态运行前检查身份、签名与风险，限定独立测试环境并阻断原厂授权连接；不依赖补丁打开未授权页面。不可观察的状态标为阻塞。
4. 建立三平台行为矩阵，区分官网声明、已有观测、静态线索与未验证项；缺证据时明确列为新实现决策，不编造原版行为。
5. 核查 C++20 编译器、CMake、Qt 稳定版本及三平台构建环境。当前仅有 Windows 宿主，macOS／Linux runner 未验证；不承诺本机可完成三平台实测。本轮不安装或配置工具。

交付：`doc/plans/issue-1-behavior-matrix.md`，包含平台／架构、指标与可用性、采证来源及首版验收范围。

### M1：共享窗口与 Windows 真实纵向闭环

1. 建立最小 CMake／Qt 工程，显示名称、PID、CPU%、驻留内存与状态，最终列以 M0 结果为准。
2. 实现 Windows 枚举 → 两次采样 → 共享快照 → 表格，禁止假数据填充。
3. 使用单一后台采样循环，建议每秒刷新，禁止重叠采样，UI 线程只提交快照；关闭时取消并释放资源。
4. 数字列按数值排序，刷新保持选中身份，支持暂停／恢复。

交付：Windows 可运行核心页与最小核心检查。Windows 先行是验证切片顺序，不是缩减多平台目标。

### M2：macOS／Linux 适配并完成三平台核心闭环

1. 实现 macOS、Linux 进程枚举、累计 CPU 时间、身份和驻留内存读取。
2. 统一指标语义，不强求不同系统提供相同底层数据。不可用数据显式显示，不猜测。
3. 每个平台验证创建／退出竞态、权限失败、刷新及排序；共享 UI 不证明系统适配正确。
4. 在各自实际系统上完成构建与运行，未实测平台标记未验证，不称为已支持。

交付：三平台首轮目标的真实数据闭环，平台差异与权限限制记录。

### M3：安全结束进程

1. 确认框展示名称、PID、目标身份和未保存数据可能丢失的警告，取消不得执行操作。
2. Windows 使用同一核实身份的进程句柄检查并结束；Linux 优先 pidfd 避免 PID 复用，核实当前内核能力。macOS 必须评估可用的安全目标绑定方式：不能把“检查创建时间后按 PID 发信号”声称为无竞态；若无法提供安全保证，首版禁用结束操作并记录验收缺口，不能静默降级。
3. 拒绝自身及平台关键／受保护目标，不仅靠名称黑名单；身份、关键性或安全目标绑定无法核实时拒绝。
4. 普通用户运行，不自动提权、不申请调试特权、不绕过系统保护；首版不做批量或进程树结束。
5. 区分取消、已退出、身份变化、访问拒绝、失败与等待超时；发出请求不等于已经退出。

交付：各平台明确能力边界的进程操作。成功测试仅针对专门创建的可丢弃子进程；不实际尝试结束系统关键进程。macOS 安全操作若阻塞，三平台结束功能不能标为全量完成。

### M4：检查、平台打包与首版验收

- 核心检查：CPU 差分与归一化、首次采样、无效增量、身份变化、不可用状态；少量平台集成检查验证读取与测试子进程操作。
- UI 人工验收：真实列表、排序、暂停恢复、选择保持、缩放、键盘操作、错误反馈与关闭清理。
- 分别与 Windows 任务管理器、macOS Activity Monitor、Linux 系统工具核对口径与趋势，不要求异步采样瞬时值相等。
- Windows 交付含 Qt／必要运行库的便携目录；macOS 交付 `.app`；Linux 首版一个明确基线发行版的便携包。Linux 不能在较新系统构建后假定 glibc 向后兼容，也不捆绑替换系统 glibc。
- 检查 Qt 插件、运行库、许可证与包内容，发布包不带原厂 EXE、license、抓包或研究快照。
- 在各平台未预装开发环境的机器上验证。macOS 签名／公证使用项目自己的身份，正式分发前另行授权配置；开发包明确记录 Gatekeeper 限制，不能要求绕过系统安全作为交付证明。
- 三平台检查可使用现有 runner；缺少 runner 时说明阻塞。未经授权不创建 CI、不申请外部服务或凭据。

交付：源码、各平台发布包、检查命令及 `doc/plans/issue-1-acceptance.md`。

### M5：补齐其他架构与页面

1. 逐一验证 Windows ARM64、macOS Intel、Linux ARM64；构建、启动和功能分别记录结果。
2. 按“补证 → 确认范围 → 实现 → 对照”扩展 System Info、系统汇总／性能、磁盘空间、应用／启动项／用户／服务，以及 Connections、Power & Freq、Benchmarks、Flight Recorder 等候选页面。
3. 区分网络连接列表与远程查看，两者不能仅凭名称 Connections 合并理解；远程功能若纳入范围需独立协议和安全设计，不连接原厂服务。
4. 功耗／温度／能效核信息按系统和硬件能力决定。CPU 利用率不能代替真实功耗，不承诺所有设备支持；未知显示不可用。

## 4. 关键新文件建议

现有研究材料不改。仅在实施需要时新增：
- `CMakeLists.txt`：Qt Widgets 应用、平台源文件选择、检查与安装规则。
- `src/main.cpp`、`src/MainWindow.*`、`src/ProcessTableModel.*`：共享窗口、表格与入口。
- `src/ProcessSnapshot.h`、`src/ProcessSampler.*`：统一字段／状态及差分采样。
- `src/platform/WindowsProcesses.cpp`、`MacProcesses.cpp`、`LinuxProcesses.cpp`：系统适配及安全操作；接口只表达三平台实际共同需求。
- `tests/process_checks.cpp`：最小核心／受控子进程检查，必要时增加少量平台检查。
- `doc/plans/issue-1-behavior-matrix.md`、`issue-1-acceptance.md`：行为证据与验收矩阵。

不提前建立空文件、服务端、驱动、插件或六套构建配置。

## 5. 验证方法与完成标准

实施后在配置好各平台稳定 Qt 工具链的环境中执行，当前不执行：
```text
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
ctest --test-dir build -C Release --output-on-failure
cmake --install build --config Release --prefix artifacts/TmogReplica
```

Qt 包发现路径和部署规则按实际安装版本设置，不虚构已具备环境。命令成功只是构建／检查证据，还必须启动各平台发布包并记录真实采样、错误状态、安全操作和资源清理。

CPU口径：`Δ累计进程 CPU 时间 / Δ单调墙钟 / 有效逻辑处理器数 × 100`，采用整机容量 0–100%。首次样本、基线中断、无效增量显示待采样／不可用。超过64核、处理器组和容器 CPU 配额另做明确支持测试，未验证不能宣称全部硬件适用。

内存统一为驻留内存语义，但注明平台具体来源（Windows 工作集、macOS／Linux RSS等），不等同私有内存或提交量。系统总 CPU／内存若纳入范围单独采集，不对可访问进程求和。

完成标准：三平台首轮目标真实运行通过、数据口径明确、异常不崩溃、安全限制透明且发布包独立可启动；其余架构和页面逐项标记。任一平台未测试或操作被禁用必须列为未完成／限制，不能以“跨平台可编译”替代支持承诺。

## 6. 顺序与本轮边界

`M0 行为与环境 → M1 Windows 切片 → M2 三平台采样 → M3 安全操作 → M4 三平台交付 → M5 架构及页面扩展`

本轮仅更新计划与用户要求的 AGENTS.md 路径规则，不实现、不运行原版、不安装工具、不下载其他平台应用、不改 GitHub、不提交或推送。

## 参考来源

- 官网平台与功能：https://www.tmog.org/#platforms
- Qt CMake 部署：https://doc.qt.io/qt-6/cmake-deployment.html
- Qt 部署脚本（Windows／macOS／Linux）：https://doc.qt.io/qt-6/qt-generate-deploy-app-script.html
- Issue #1：https://github.com/wanggan768q/TMOG-Public/issues/1
