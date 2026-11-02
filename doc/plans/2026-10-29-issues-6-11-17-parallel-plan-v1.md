# Issue #6 / #11 / #17 统一并行实施计划 v1

> **For agentic workers:** 仅用户批准本版固定 SHA 后，由 Product 按共享合同启动独立 Dev/Review 会话；执行者使用 `superpowers:executing-plans` 逐项落实。技能内部辅助不是独立团队验收。本文为 **awaiting_approval** 草稿，不授权现在开发、构建、实验、安装、发布或清理。

**Goal：** 复用既有便携包成果、增加真实进程 I/O 速率及实际页面导航/本地设置，并在公共写域明确排他条件下有限并行。
**Architecture：** 沿用 C++20 / Qt Widgets / 既有单后台采样循环和身份模型。先完成 #6 最小安全适配与公共 CMake 集成；#11 完整 I/O 与 #17 独立配置模块并行，之后 #17 窗口集成串行。不预建插件、数据库、服务或 MVVM。
**Tech Stack：** Windows 11 x64；CMake ≥3.21、Ninja、Qt6 Core/Widgets、MinGW；Win32 GetProcessIoCounters；Qt QSaveFile / QStandardPaths / QStackedWidget。
**Spec：** GitHub `wanggan768q/TMOG-Public` #6（W02）、#11（W10）、#17（W03）正文，2026-10-29 只读核对；本版是三票统一执行设计，未替代原验收。计划身份：run=`parallel-plan-20261029-6-11-17`，task=`parallel-plan-6-11-17`，attempt=1；主工程=`E:/Git/TMOG-Public`；规划基点=`0fcd051e8e62ccc4f17f990f0825a19d85e2355f`。

## Global Constraints

- 计划、设计、验收记录只在工程 `doc/plans/`；运行报告在主工程 `.claude/workflow/<执行ID>/<任务ID>/`。本版 SHA 在交付报告保存，不自引用。
- 不连接原厂授权/遥测、不运行原件、不复用厂商 EXE/许可证/密钥/品牌资产；不用原厂文件做检测负例，改用自行创建的无害占位文件。
- Windows 优先；非 Windows 不实现新 I/O 后端，新增字段保持不可用，不伪造零。
- 构建、fake 自动检查、真实 UI、实机实验、干净环境运行、合规签字分别验收；缺失任何必需项保留整票 OPEN。
- 本次仅规划。后续批准开发不自动授予受控读写子进程、真实终止、工具安装、外部 runner/凭据、系统服务、签名或公网发布；由 Product 单列授权。
- MaxDev=5 / Review=3 / IssueWriter=2 / Plan=3 只是上限；推荐本方案最多2个 Dev并行，测试进程串行，main逐票合并。
- 不接管旧 #6 目录/进程，不改旧索引、旧报告或历史批准文件。新的 Dev 必须在其独立任务树按共享合同核对/init/sync CodeGraph，失败不能绕过。

## Review Focus

1. 身份无法核实、字段读取失败及恢复：I/O必须不可用/重新待采样，不能以 creation_tick=0 匹配制造速率；任务11检查覆盖。
2. 实际间隔为0/倒退、累计值倒退、接近uint64上界：无假零、无溢出/跨身份差分；任务11核心检查覆盖。
3. 损坏/超大/未知版本配置及原子保存失败：安全默认、错误可见、旧文件字节不变；任务17S检查覆盖。
4. 改档位、快速暂停恢复、忙碌、关闭拒绝重试：仍只有一个采样worker，旧代际不应用，拒绝关闭后恢复所选档位；任务17U检查覆盖。
5. 旧包重复制作、缺组件/许可证、额外插件与污染输出：失败非零、只处理已登记专用输出、逐组件法律材料可追溯，开发机清PATH不冒充干净机器；任务6检查/人工清单覆盖。

## 1. 已核对事实、依赖与旧成果

### 1.1 远程状态与前置

| 票 | 当前状态 | 原生 blocked_by | 子票/评论 | 当前PR与结论 |
|---|---|---|---|---|
| #6 | OPEN | 空 | 均空 | 当前open PR查询空；按head分支/标题筛选历史PR亦无结果。不是已合并成果 |
| #11 | OPEN | #5 CLOSED | 均空 | #5关闭评论明确main@767553a、独立Debug/Release及受控安全检查；本次只读引用，不是重跑 |
| #17 | OPEN | #16 CLOSED | 均空 | #16关闭评论明确main@aa35c89、Debug/Release及维护者七项桌面点验；不迁移成新UI验收 |

本次 `gh pr list --state open` 返回全仓库空列表，故三票无当前open PR；历史搜索仅按已知head/标题筛选，不能声称穷尽所有未关联历史PR。派发和发布前 Product 仍按 repo/head/base 查重。原生依赖关闭不等于本版设计获批；三票无需按编号推断。

### 1.2 真实源码写域

主工程 CodeGraph 显式 projectPath 查询：`ProcessSnapshot`仅CPU/内存与可用性；`diff_samples`使用相邻帧实际 wall_clock_ns，`SampledRow.status`当前为CPU状态；`ProcessTableModel`仅名称/PID/CPU/内存/状态，UserRole用于数值排序。Windows入口真实文件为 `src/platform/WindowsProcesses.cpp`，同一进程句柄读取身份与CPU/内存；不存在查询初猜的 WindowsProcessEnumerator.cpp，初次查询无匹配不当“不存在后端”。

`MainWindow`目前单页table为centralWidget；timer启动及关闭失败恢复都写死1000ms；具有busy、sample_generation、失败保留/陈旧、按(pid,creation_tick)选择恢复及异步结束/有限关闭路径。#17必须替换所有恢复timer的1000ms调用，不另造worker；#11无需重写MainWindow采样循环。

CMake当前Qt可选，缺Widgets可跳GUI；主工程没有 #6 strict/staging目标及scripts/packaging新增文件。#6/#11/#17完整合同都需要根CMake注册，不能三票全程并写。#11修改模型及采样数据类型，#17消费模型列/真实interval与MainWindow；即使物理文件不完全交集也有集成依赖。

主工程索引status：version=1.6.2、complete、pending=0、worktreeMismatch=null、reindexRecommended=true、builtWithVersion=null；本次未重建。当前源码查询可用，但未来Dev须验证自己的索引版本/基点，不能直接复制此索引。

### 1.3 旧 #6 的复用与限制

只读树 `E:/Git/TMOG-Public-WorkTree/issue-6-portable-package`：HEAD=`c62992b837e20665399798a46e170b85ce5bde06`；本次 `git status --short`空。旧交付新增scripts、packaging、CMake strict/staging、.gitignore及计划/验收/审查；git log含34fe935/e79c75d/655eadf等成果，不重写整套打包器。该树CodeGraph initialized=false；未init，历史源码仅Git差分固定对象及未索引PowerShell/config专用Read，未通过不存在的索引推导C++调用链。

旧验收记录自报本机Debug/Release3/3、独立staging26文件、5负例和清PATH存活5秒；旧Review自报Technical PASS。当前main已有6个测试及采样生命周期变化，旧3/3不能当新基点通过。干净未装Qt普通用户、维护者完整合规、跨机器复现仍未验收。

最小整改（静态发现，不执行旧脚本）：
- package-portable.ps1 L71–85固定 `$env:TEMP/tmog-portable-verify`，先递归删除、随后启动/Stop-Process；默认发布必须移除此实验段，避免擅自实验及删除无法证明归属对象。不新增另一套自动启动器；清PATH运行列人工授权步骤。
- L34用SourceDir拼绝对BuildDir不可靠；明确将BuildDir规范化，要求新任务树专用构建目录，拒绝工程根/源码/链接路径，生成产物边界先登记。旧staging重建只作用于这个已归属目录，不做通用清理。
- 明确CMAKE_CXX_COMPILER及Ninja绝对路径，不依赖未存在于当前PATH的g++。检查每个原生命令退出码。
- check-package已有双向hash/运行库检查，复用；补白名单、清单size及路径合法性（绝对/.. /重复路径拒绝），检查“篡改清单加未知文件”不自证合法。未知新组件不默认许可。
- THIRD-PARTY-NOTICES将libwinpthread并入GCC例外，本机 `licenses/winpthreads/COPYING`实际含mingw-w64 MIT式声明及Lockless版权/BSD式条款；必须独立条目附完整文本，不能泛化成所有GCC组件受例外。`COPYING.RUNTIME`自身说例外仅适用于附相应声明的文件，且它不是GPL全文；随包补对应GPL文本。
- Qt旧声明只有通用源码URL和宽泛“同一6.x ABI兼容”提示。按实际发出的DLL/插件（旧记录另含Network/Svg及7类插件）逐项确认版本、版权、许可和对应源码/修改获取方式；Qt自带第三方许可不得被“Qt LGPL”总标签覆盖。未完成清单不宣称完整合法包。

## 2. 方案比较、并行矩阵与公共文件唯一写者

候选A：三票全部串行，最少协调但独立配置纯模块闲置。候选B：三票全程并行，根CMake冲突且旧打包/未合并MainWindow变化隐形叠加，不采用。**推荐C：一次打包集成开路，I/O与独立配置模块有限并行，最后窗口集成串行。** 不为并行新建通用基础层。

| 阶段 | #6 | #11 | #17 | 根CMake唯一写者/共享边界 |
|---|---|---|---|---|
| P0 用户审批/预检 | 核旧成果、输出边界、许可材料 | 核#5、开发权限 | 核#16、设置设计 | 无代码写者 |
| P1 首个集成6T | 旧成果迁入新树+安全/许可最小修正；独立技术Review | 只读准备，不写公共注册 | 可做17S独立模块与局部测试 | **6T唯一写根CMake**；17S只写settings独立文件与其局部CMake |
| P2 6T技术集成后 | 6H干净机/合规待用户，可与独立开发并行；不修改根CMake | 11完整实现+root测试注册 | 17S继续/独立Review | **11唯一写根CMake**；17S不得写MainWindow/main/model/sampler/root CMake/packaging |
| P3 11固定SHA验收/集成后 | 6H人工继续，不阻塞独立17U | Review期间Dev停写；通过后顺序合并 | 17U引入已审配置模块，实际UI/采样集成 | **17U唯一写根CMake及MainWindow/main**；11不得并行返工写公共文件 |
| P4 全量集成/包装回归 | 用最终已合并源码重新做包/清单；必要包技术复审 | 对最终SHA回归I/O | 最终UI/配置回归 | 无多写者；若CMake还需修正，Product先明确一票唯一写者，其他冻结 |

17S设置模块可以在6T未最终合并前独立工作，因为不依赖portable目标，不修改公共源清单。其独立 `tests/settings/CMakeLists.txt`仅用于自身check，不修改根注册也不调用应用。17S交付不是#17完成；17U启动前先核对11集成后列名及该模块固定SHA。

**6T/6H分层：** 用户可明确批准技术范围先合并、Issue保持OPEN，6H干净环境/维护者合规另外闭环。技术合并不证明完整分发合规，不得公网发布；#6未全关票不是#11/#17原生依赖，不因缺干净机器阻塞二者。若用户不允许部分合并，6T保留accepted不发布；#11可以从当时origin/main独立实施，CMake仍串行排他，无需等待6H，随后合入6T必须重评估集成；这是备选排程而非自动更改批准。

## 3. 候选开发合同与精确允许路径

这些是**待批准候选写域**，不是当前Plan权限；派发时Product写绝对路径、批准SHA、base/head、报告路径、具体验收及权限。

| 切片 | 精确允许修改/创建文件 | 禁止/产物边界 |
|---|---|---|
| 6T | `CMakeLists.txt`；新增/复用 `scripts/package-portable.ps1`、`scripts/check-package.ps1`、`packaging/README-PACKAGE.md`、`packaging/THIRD-PARTY-NOTICES.md`；新增 `tests/package_checks.ps1`；`doc/plans/2026-10-29-issue-6-integration-acceptance.md`、本版批准计划副本 | 不改MainWindow/model/sampler/.gitignore；旧build-release忽略增量无需搬，统一用已忽略build/。法律材料只从明确本机合法源复制到产物，不复制整个Qt/licenses。产物仅 `<WT6>/build/issue6-debug/`、`issue6-release/`、`issue6-package-checks/` |
| 11 | `src/ProcessSnapshot.h`、`src/ProcessSampler.h`、`src/ProcessSampler.cpp`、`src/platform/WindowsProcesses.cpp`、`src/ProcessTableModel.h`、`src/ProcessTableModel.cpp`、`tests/process_checks.cpp`、`CMakeLists.txt`；新增 `tests/io_table_checks.cpp`、`tests/io_activity_checks.cpp`；`doc/plans/2026-10-29-issue-11-acceptance.md`、批准计划副本 | 不改MainWindow/worker/process-ops安全实现/平台其他后端；受控helper与实验入口放同一个io_activity_checks文件，不增驱动。产物仅 `<WT11>/build/issue11-debug/`、`issue11-release/`、获批实验目录 `io-experiment/` |
| 17S | 新增 `src/DisplaySettings.h`、`src/DisplaySettings.cpp`、`tests/settings/settings_checks.cpp`、`tests/settings/CMakeLists.txt`；`doc/plans/2026-10-29-issue-17-settings-acceptance.md`、批准计划副本 | 不写根CMake/MainWindow/main/model/sampler；产物仅 `<WT17S>/build/issue17s-debug/`、`issue17s-release/`，测试配置在这些产物目录下的临时子目录 |
| 17U | `src/MainWindow.h`、`src/MainWindow.cpp`、`src/main.cpp`、`CMakeLists.txt`；迁入17S批准的上述4文件；新增 `tests/navigation_settings_checks.cpp`；范围内更新 `tests/stale_persistence_checks.cpp`（选择checkable QAction改按objectName，避免新设置action误识别暂停）；`doc/plans/2026-10-29-issue-17-acceptance.md`、批准计划副本 | 不改采样worker/process-ops/model底层；产物仅 `<WT17U>/build/issue17-debug/`、`issue17-release/`；生产配置仅用户批准的独立本地应用目录 |

Qt/编译器工具不能写；任何额外源码、通用配置接口、全局settings、工程外文件、测试权限或法律材料下载先向Product BLOCKED。角色报告/ops是派发报告目录内自己的文件，state/events唯Product写。

分支与worktree候选（创建前由Product检查真实后代/链接/不存在，不执行占位符命令）：
- 6T：`feat/issue6-integration-20261029`，`E:/Git/TMOG-Public-WorkTree/issue6-integration-20261029`。
- 11：`feat/issue11-io-20261029`，`E:/Git/TMOG-Public-WorkTree/issue11-io-20261029`。
- 17S：`feat/issue17-settings-slice-20261029`，`E:/Git/TMOG-Public-WorkTree/issue17-settings-slice-20261029`；只供模块固定SHA交付，17U以正常限定文件提交迁入并重新Review，不创建“settings完成即可关17”的PR。
- 17U：`feat/issue17-navigation-20261029`，`E:/Git/TMOG-Public-WorkTree/issue17-navigation-20261029`。

## 4. 最小任务切片、接口与可观察检查

### 任务6T：复用旧打包器，安全适配与第三方材料

**Interfaces：** `package-portable.ps1 -SourceDir <WT6> -BuildDir <WT6>/build/issue6-release -QtDir <Qt> -MinGWDir <MinGW> -CMakeExe <cmake> -NinjaExe <ninja>`；默认仅构建/staging/许可证/manifest/check，不启动或终止进程。`check-package.ps1 -PackageDir <package>`仍exit0=通过/非零=失败。root目标保留 `portable_package` 与 `TMOG_PORTABLE_STRICT`。

- [ ] 在新树核对旧固定提交相关文件差分，迁入已有脚本/config/doc内容的必要部分，不整分支合并老采样源码；记录旧来源SHA与新文件hash。
- [ ] 先新增package_checks可运行负例：缺Qt/部署/必要许可源应非零；hash篡改、size篡改、重复/../绝对清单路径、缺runtime、额外无害exe/未知DLL即使重写manifest仍失败。只污染自建package-checks目录，不碰原件。
- [ ] 实现§1.3最小修正，禁固定TEMP清理/默认启动器；输出建立组件允许清单。同命令重跑两次独立生成包；要求功能/组件清单可重复，不承诺包含生成UTC的MANIFEST或EXE逐字节可重现。
- [ ] 第三方表逐个包文件/组件列版本、版权、完整许可证、合法来源、修改状态、对应源码取得/书面offer方式、替换/重新链接和调试权利。GCC GPL全文+Exception分开，winpthreads完整文本单列；Qt第三方插件超出清单时失败，先确认材料再允许。源码获取准确版本（6.12.0及实际toolchain来源），通用首页不当对应源码交付证据。
- [ ] Debug/Release安全子集、package_checks及完整制作均通过后独立Review固定head；人工合规仍明确pending。限定文件正常commit；Product得到用户“技术部分可先合并”记录才发布该部分，不Closes #6。

### 任务6H：干净普通用户与合规（独立人工门槛）

- [ ] 用户提供未安装Qt/开发工具的Windows11x64干净机器或明确授权创建环境；当前本机安装Qt，不符合该条件，不能以清PATH代替。
- [ ] 将固定SHA包传入用户指定测试目录，记录包SHA/manifest、OS/架构/普通用户/Qt未安装、无开发PATH及完整运行环境。工具/账号信息脱敏，不收凭据。
- [ ] 从非源码目录普通用户启动，显示真实进程；观察两帧以上采样、CPU/内存与（最终包若含11）真实I/O；数值排序、选择保持、暂停/恢复/手动刷新及关闭。截图+文本结果，不做真实结束操作。
- [ ] 维护者逐项签署完整第三方材料、准确源码取得、修改/安装信息、替换库及调试/重新链接权利与分发条款；技术Review不做法律最终确认。可在明确自建实验目录验证兼容替换库，但单列用户许可，不覆盖原安装。
- [ ] 失败保留包/日志，关闭只用自己正常GUI；无安装/系统改动/公网发布/不明进程清理。6T+6H全部闭环才准整票关闭。

### 任务11：真实累计I/O→差分→数值模型

**Interfaces（自主设计待批准）：**
- `ProcessSnapshot`新增 `std::uint64_t io_read_bytes=0, io_write_bytes=0; bool io_available=false;`；仅GetProcessTimes核实有效创建身份并且GetProcessIoCounters成功后io_available=true。
- `SampledRow`新增 `std::optional<double> io_read_bytes_per_sec, io_write_bytes_per_sec; ProcessStatus io_status=ProcessStatus::FirstSample;`，保留CPU的status不混用。
- `ProcessStatus compute_io_rates(const std::optional<ProcessSnapshot>& previous, const ProcessSnapshot& current, std::uint64_t wall_delta_ns, std::optional<double>& out_read, std::optional<double>& out_write);`，双输出每次先reset。不可核实创建身份或当前不可用→Unavailable；无previous且当前有效→FirstSample；身份不同→IdentityChanged；前一字段不可用→FirstSample（恢复重建）；dt=0→Unavailable；任一累计倒退→InvalidDelta、两方向均不产值；否则 `double(cur-prev) / (double(dt)/1e9)`，不先做uint64乘1e9，有限非负后产Ok。有效Δ=0明确产0，不和不可用混淆。
- `diff_samples`复用原PID配对与每帧真实dt，调用compute_io_rates，不使用档位作分母。模型增加稳定命名 `ColIoRead/ColIoWrite`（插在ColStatus之前），Display显示B/s、KiB/s、MiB/s，UserRole始终同一double类型有效数值，无效-1.0；tooltip写“Windows进程I/O读/写；并非物理磁盘吞吐”，同时给待采样/不可用/身份变化/无效增量及全表陈旧提示。

- [ ] 在process_checks加入明确失败检查：读取Δ1000/写入Δ3000、真实dt=2e9→500/1500 B/s；dt=0.5e9→2000/6000；首次/身份复用/身份0/不可用/恢复/倒退/dt0/接近uint64边界；输出reset与真正0各有断言。Debug/Release故意失败模式exit1（检查数非0，不仅印PASS）。
- [ ] 最小实现取数和差分；WindowsProcesses同已有句柄调用GetProcessIoCounters，不增权限、不重新按裸PID取第二个不同进程句柄。当前无法读身份时不输出可信I/O。不抓文件内容/路径，不加驱动。
- [ ] io_table_checks用生产model与MainWindow既有枚举注入的fake帧，验证2/10/1000 B/s正反数值排序、无效哨兵同类型、排序/新帧后selected_identity保持、身份复用不错误选中、CPU状态不被I/O失败盖掉；禁止real terminate。
- [ ] 注册仅安全fake检查，Debug/Release执行§5。io_activity_checks为后续实机入口，不默认add_test；无显式 `--allow-controlled-io` 时exit2、无子进程/文件；预算/身份日志固定。
- [ ] 用户单独批准后执行11H：程序只创建一个持有创建身份/句柄的受控helper、在登记目录用自造数据读/写；交替idle/write/read段，记录累计值/QPC/dt/速率与同PID系统进程I/O计数口径对照。要求活动区间累计增、显示趋势与同口径累计差一致；不要求等于Disk物理吞吐，不按文件大小强推缓存策略。
- [ ] 已有process_ops_checks含真实终止，只有另有明确受控真实终止授权才运行；否则fake通过但安全实机回归pending，#11不得全关。正常退出helper优先；不能为取消实验自动强杀不明对象。
- [ ] 独立Review固定head；依赖/UI/11H/安全回归分层，限定文件正常commit。未合并/返工期间17U不得抢CMake。

### 任务17S：独立本地设置、校验与原子保存

**Interfaces（自主设计待批准）：** `DisplaySettings`字段 `schema_version=1, width=1000, height=700, refresh_ms=1000; QString sort_column="pid"; bool sort_descending=false;`。档位仅500/1000/2000/5000ms；尺寸限制640..7680 × 480..4320（加载后另夹到当前screen availableGeometry，超大值不产生不可见窗口）。排序列允许name/pid/cpu/memory/status/io_read/io_write，字符串而非易变enum序号。

`SettingsLoadResult { DisplaySettings settings; QString error; }; SettingsLoadResult load_display_settings(const QString& path); bool save_display_settings(const QString& path, const DisplaySettings& settings, QString& error);`，Qt Core足够；路径由调用方提供，不设计可注入通用存储接口。本地UTF-8 JSON，上限64KiB；未知version、损坏、错误类型、越界或未知列→整份安全默认+非空错误；不存在→正常默认无错误。未知额外key忽略，不执行内容。

生产路径：`QStandardPaths::writableLocation(QStandardPaths::AppLocalDataLocation)/display-settings.json`，已存在app/organization=TmogReplica；不写厂商路径/源码目录/注册表。测试只传自建临时路径，不读/覆盖用户真实配置。

- [ ] 新增独立tests/settings CMake（Qt Core、C++20、enable_testing）与settings_checks；先失败用例：四档roundtrip、缺文件、损坏JSON、数组根、version2、字符串尺寸、过界尺寸、未知档/列、>64KiB→默认及error；有效0.5秒恢复不变。
- [ ] 最小实现load/save，QSaveFile显式setDirectWriteFallback(false)，检查全量write及commit；目录失败/写入失败返回false+error，不能覆盖旧文件，不弹阻塞模态。
- [ ] 保存失败检查在自建目录：旧配置作为只读/被占用文件验证commit失败后旧字节/hash不变；权限/文件锁模拟不成立则标该用例未验证，不能把任意不存在目录失败当等价。另测cancelWriting放弃新文件保留旧字节；用例不修改系统ACL。
- [ ] 独立局部CMake Debug/Release检查通过后review固定模块head；不改根CMake、不注册应用、不改MainWindow。限定四文件+17S验收正常commit，待17U迁入；17S不是单独业务页面完成。

### 任务17U：只挂实际页面，设置进入真实采样/关闭路径

**Interfaces：** 保留MainWindow既有枚举注入构造方式；新增 `void set_refresh_interval(int milliseconds);`（只接收四档；非法回安全1000并反馈），成员`refresh_interval_ms_=1000`；timer启动/关闭失败恢复全用该成员。将已有table作为Processes页面，另一个真实“显示设置”页面提供四档、窗口/排序偏好反馈；QStackedWidget+Qt action导航，无未来业务空页；Processes为每次启动默认入口，不持久化未来page id。键盘Ctrl+1=Processes、Ctrl+2=显示设置、Tab正常焦点顺序；现有操作仅Processes可用，不切页自动执行结束。

- [ ] 先新增navigation_settings_checks（fake enumerator、真实MainWindow离屏），测试对象用objectName定位pause/refresh/navigation而非第一个checkable action。需构造测试配置路径时只加MainWindow末尾可选 `QString settings_path_override={}`，默认生产路径，测试不修改真实用户配置；不改进程ops权限。
- [ ] 迁入17S固定模块；root注册DisplaySettings到GUI及所有编译MainWindow的check（stale及新navigation，若13已合并还有end_confirm）；11的io_table_checks同样编译生产MainWindow/model同源，链接tmog_core/Qt6::Widgets。17U同时将settings_checks加入root CTest（复用同一tests/settings/settings_checks.cpp，不复制检查代码），设置TIMEOUT60；链接同源，不复制生产实现。
- [ ] 完成实际导航/键盘、尺寸与排序偏好、档位恢复；load失败在持久可见错误区反馈，不清掉采样stale_label。无写权限时使用安全默认且说明未保存；一次保存失败当前会话也回默认，旧配置字节保留，重启仍可读旧有效配置（不可因“默认”删除旧文件）。
- [ ] 改档位只调整同一个timer，不启动第二worker；在途样本继续按真实时间差有效，不因改档位伪造dt，保持pause/sample_generation原合同。暂停中改档不启动；手动刷新仍一次且保持暂停；关闭拒绝后timer以当前所选档重启。
- [ ] 断言四档timer值；fake忙碌期间连续导航/改档并发计数峰值=1；跨暂停旧结果拒绝；恢复首帧待采样；配置错误不隐藏陈旧；排序选择不变。分段GUI心跳证明导航/改档/关闭等待响应，不能用聚合一次tick担保每一段。
- [ ] QSaveFile保存窗口/排序/档位只在明确偏好变化或成功关闭路径；保存失败反馈，不允许损坏旧配置，也不能跳过worker/kill收束强关。采样/结束关闭等待沿既有2s/4s合同；失败取消关闭保留所有权。
- [ ] Debug/Release安全checks通过，再用户实际桌面点验鼠标/键盘/缩放、四档真实间隔/暂停/忙碌、重启恢复/错误反馈。只使用正常窗口操作，不调用真实终止；安全回归如需要独立授权。独立Review固定head，正常限定commit。

## 5. 准确验证命令、失败条件与预算

以下是**后续批准执行命令**，本Plan没有执行。PowerShell在对应任务树中运行，`$WT`替换为§3真实路径（不是旧树）；每个原生命令后检查 `$LASTEXITCODE`，非0立即失败，禁止后续打印ALL PASS。不加ExecutionPolicy Bypass，不全量ctest误跑真实终止。

工具本次只读文件核对存在：
- `$CMAKE='D:/InstallApplication/CMake/bin/cmake.exe'`、`$CTEST='D:/InstallApplication/CMake/bin/ctest.exe'`（Get-Command解析）；
- `$QT='E:/InstallApplication/Qt/6.12.0/mingw_64'`（Qt6Config与windeployqt文件存在、windeployqt资源版本6.12.0.0）；
- `$GXX='E:/InstallApplication/Qt/Tools/mingw1310_64/bin/g++.exe'`、`$NINJA='E:/InstallApplication/Qt/Tools/Ninja/ninja.exe'`；文件存在，本次没有运行版本/构建，GCC13.1.0只是旧报告及目录标识，不冒充新探测版本。普通PATH未发现ninja/g++/windeployqt；E:/Qt不存在，不代表本机缺Qt。

### 5.1 各完整任务Debug/Release安全子集

```powershell
# 仅当前进程PATH，退出会话即失效；登记后使用，不改持久环境
$env:PATH = "$QT/bin;$(Split-Path $GXX);$env:PATH"
# 票号分别6、11、17；安全测试名称精确匹配，禁止遗漏Qt目标后假绿
$Ticket = 11
foreach ($cfg in 'Debug','Release') {
  $B = "$WT/build/issue$Ticket-$($cfg.ToLower())"
  & $CMAKE -S $WT -B $B -G Ninja "-DCMAKE_BUILD_TYPE=$cfg" "-DCMAKE_PREFIX_PATH=$QT" "-DCMAKE_CXX_COMPILER=$GXX" "-DCMAKE_MAKE_PROGRAM=$NINJA"
  if ($LASTEXITCODE -ne 0) { throw "configure failed: $cfg" }
  & $CMAKE --build $B --parallel 2
  if ($LASTEXITCODE -ne 0) { throw "build failed: $cfg" }
  & $CTEST --test-dir $B -N -R '^(process_checks|close_lifecycle_checks|sampling_recovery_checks|stale_persistence_checks|io_table_checks|navigation_settings_checks|settings_checks)$'
  if ($LASTEXITCODE -ne 0) { throw 'test inventory failed' }
  & $CTEST --test-dir $B --output-on-failure --timeout 120 -j 1 -R '^(process_checks|close_lifecycle_checks|sampling_recovery_checks|stale_persistence_checks|io_table_checks|navigation_settings_checks|settings_checks)$'
  if ($LASTEXITCODE -ne 0) { throw "safe checks failed: $cfg" }
}
```

6T在其基点必有process_checks/close_lifecycle/sampling_recovery/stale四项；11另必有io_table；17另必有navigation和已集成io_table。逐项库存检查及实际失败计数必需，不以0 tests/被跳Qt为通过。离屏Widgets需在派发时明确 `QT_QPA_PLATFORM_PLUGIN_PATH=$QT/plugins/platforms`、测试内部ENVIRONMENT offscreen，不写全局；主工程stale现属性仅offscreen，既有13专用修复未合并，必须复核插件路径而非偷偷拿其旧build。CMake注册新/受影响Widgets检查时用合法Qt插件路径、TIMEOUT120，其变更各阶段唯一写者负责。若无Qt，构建通过核心也标GUI/本票BLOCKED。

### 5.2 17S无公共注册的独立检查

```powershell
foreach ($cfg in 'Debug','Release') {
  $B = "$WT17S/build/issue17s-$($cfg.ToLower())"
  & $CMAKE -S "$WT17S/tests/settings" -B $B -G Ninja "-DCMAKE_BUILD_TYPE=$cfg" "-DCMAKE_PREFIX_PATH=$QT" "-DCMAKE_CXX_COMPILER=$GXX" "-DCMAKE_MAKE_PROGRAM=$NINJA"
  if ($LASTEXITCODE -ne 0) { throw 'settings configure failed' }
  & $CMAKE --build $B --parallel 2
  if ($LASTEXITCODE -ne 0) { throw 'settings build failed' }
  & $CTEST --test-dir $B --output-on-failure --timeout 60 -j 1 -R '^settings_checks$'
  if ($LASTEXITCODE -ne 0) { throw 'settings checks failed' }
}
```

必须实际运行恰好settings_checks，故意失败模式exit1；局部CMake不安装，不涉及根目标。

### 5.3 6T完整制作/自动check

```powershell
& pwsh -NoProfile -File "$WT6/tests/package_checks.ps1" -SourceDir $WT6 -WorkDir "$WT6/build/issue6-package-checks" -QtDir $QT -MinGWDir (Split-Path (Split-Path $GXX)) -CMakeExe $CMAKE -NinjaExe $NINJA
if ($LASTEXITCODE -ne 0) { throw 'package negative checks failed' }
& pwsh -NoProfile -File "$WT6/scripts/package-portable.ps1" -SourceDir $WT6 -BuildDir "$WT6/build/issue6-release" -QtDir $QT -MinGWDir (Split-Path (Split-Path $GXX)) -CMakeExe $CMAKE -NinjaExe $NINJA
if ($LASTEXITCODE -ne 0) { throw 'portable package failed' }
& pwsh -NoProfile -File "$WT6/scripts/check-package.ps1" -PackageDir "$WT6/build/issue6-release/portable"
if ($LASTEXITCODE -ne 0) { throw 'package inventory failed' }
```

以上要求任务6T已移除旧自动启动/Stop-Process段、修正绝对BuildDir与compiler；**不得对历史旧脚本执行这些命令**。重复同命令是已登记输出重建，不授权清理未知目录。6H在干净用户机器从包目录普通用户正常启动的准确入口：`./TmogReplica.exe`；真实环境/路径由用户提供后写进派发合同，不虚构现成干净机器命令。

### 5.4 后续单独用户许可的11H/安全实机

```powershell
& "$WT11/build/issue11-release/io_activity_checks.exe" --allow-controlled-io --work-dir "$WT11/build/io-experiment" --budget-seconds 30 --max-bytes 16777216
if ($LASTEXITCODE -ne 0) { throw 'controlled IO check failed' }
# 此命令包含真实受控终止，只在另有明确授权时执行
& $CTEST --test-dir "$WT11/build/issue11-release" --output-on-failure --timeout 60 -j 1 -R '^process_ops_checks$'
if ($LASTEXITCODE -ne 0) { throw 'real controlled process safety check failed' }
```

实机还须Debug对应路径同样检查。io_activity不带授权flag退出2、无副作用；拒绝既有非空WorkDir/链接/工程根，保存PID+creation+句柄归属、idle/read/write段累计和真实dt。缺运行环境/权限/趋势或无法安全退出均FAIL/BLOCKED，不改成“不可用跳过通过”。

### 5.5 预算与取消（独立自主设计待批准，不是性能实测）

- 6T最多1个构建器，17S可同时1个，各 `--parallel 2`；最多2个Dev，测试 `-j1`，Debug/Release顺序；建议单配置构建墙钟15分钟、fake每check120s、settings60s，超时保存日志转BLOCKED，不能自动杀无归属daemon。
- 11H最多1个自建helper、1个自造文件，30s、累计读写≤16MiB；write/read/idle段各≥2个有效样本。用预算和自然退出协议，不用估算吞吐当实测。预算耗尽/用户取消设置取消标志、关闭自持句柄，等待自建helper自然退出；若不能退出记录身份等用户，不移用旧真实终止授权。
- 每树构建/实验/包建议≤2GiB；空间不足立即失败，不删除别票/历史目录。数字只是执行上限建议，尚无新资源测量。
- 人工UI建议20分钟/票、干净机和合规无自动时限；用户不提供条件只阻塞所属人工项，不占用Plan会话，不阻断不相干获批票。
- 各任务最多两轮repair→re-review；改变SHA旧PASS失效。重复失败停交用户，不降验收、不伪报取消成功。

## 6. #13 未合并增量与基点/集成门槛

已读取当前主工程 `.claude/workflow/product-20261029-recovery/state.json`任务局部与coverage会话局部：#13固定head=`9ceef0c6252f6da4b82c16009a7c8384af25981b`，coverage-adjudication为review_running/待只读覆盖判断；澄清文件SHA=`2b963fd339d9cf70c19876c787bf4a50ff0205259f20241709c6c7fb604595f3`。它指出Y当前选择变化/seq等原A覆盖缺口，B与人工未闭环；本方案不自行判#13最终PASS。

只读git固定差分证实 #13 尚未合并增量触及root CMake、MainWindow.cpp/.h及end_confirm_checks等，不只“可能返工测试”。因此：
1. 新树从最新 `git fetch origin`后的origin/main固定SHA创建；规划基点0fcd051仅是本次事实，不把9ceef0c暗当基线，不复制其EXE/build或main窗口注入源码作为前提。
2. #13如果仍只读或其获批返工仅tests/acceptance，可与11实现/17S并行；并不是B未批准就阻断新工作。其生产公共增量要合并时，Product把main合并串行，并明确CMake/MainWindow竞争评估。
3. 若#13先合并：6T重新比对Qt Core/Widgets、注册与插件属性；11回归model/采样/选择；17U消费当前MainWindow构造接口及end_confirm同源目标，不能覆盖其注入。旧stale按checkable找pause会因新UI变化误选，17U负责精确objectName修正。
4. 若#13晚于17U合并：#13作者在自身授权树正常更新分支，回归新设置/档位/导航及模态选择目标。不得由新票直接接管旧13目录修冲突。
5. 每次main变化均记录原base/新base/影响文件；由Dev正常更新提交，完整Debug/Release安全子集及受影响人工/实机回归，Review新head。无文本冲突也不能省回归。共享任务返工期间不再并派相关公共写域。
6. 推荐顺序：6T部分技术集成→11集成→17U集成；6H独立条件完成才关6；17S固定模块本身不先污染main。发布Draft/ready/merge均共享合同、固定reviewed SHA，merge逐个，不能现在启动IssueWriter。

## 7. 验收证据、批准待办与自查

证据路径约定（未来执行ID由Product固定）：主工程 `.claude/workflow/<run>/<slice>/dev-<attempt>.md`、`review-<attempt>.md`及各自ops，摘要≤20行，记录base/head/批准计划SHA、完整命令/退出码/日志hash/未测；构建日志放对应已登记build目录，报告引用固定文件。人工6H/11H/17U记录在§3精确acceptance文件，含OS/用户条件/步骤、截图路径、时间及签字来源；只有用户实际确认可写通过，维护者转述标明来源。

批准待办：
- [ ] 用户批准本版固定SHA及分阶段写域/排程，不能复用原三票历史拆分批准冒充本次方案批准。
- [ ] 确认6T允许“仅技术部分合并、整票OPEN、无外部分发”；不允许时采用§2备选排程，不让6H环境阻塞11/17。
- [ ] 确认自主设计：I/O双方向状态/恢复/units与排序哨兵；settings schema/defaults/尺寸界限/64KiB、档位、排序列、键盘导航、设置失败安全默认；预算数字。
- [ ] 用户另提供/授权干净普通用户环境与6H合规签字；缺条件保留未验收。
- [ ] 用户另授权11H受控本地I/O、既有真实终止回归；本版不自动批准危险实验。正常UI点验与真实进程终止分别批准。
- [ ] 派发前重新核依赖/PR/base/config、旧对象归属、任务树不存在及CodeGraph；任何路径扩大、验收改变/关键方案变更生成新版本和SHA再审批。

本次自查已完成：三票每个AC映射到6T/6H、11/11H、17S/17U；root CMake各阶段单写者；独立17S无需公共注册即可运行检查；差分真实dt、身份与不可用不覆盖CPU状态；QSaveFile不退化直接写；选择/暂停/关闭路径保留；全量最终包重新绑定合并SHA；缺环境/权限与技术失败分开。未执行任何构建/测试/应用/系统实验，未验收功能、未批准开发。

来源（高信任文档只支持API/许可要求，不替代本机实验或法律签字）：
- https://github.com/wanggan768q/TMOG-Public/issues/6
- https://github.com/wanggan768q/TMOG-Public/issues/11
- https://github.com/wanggan768q/TMOG-Public/issues/17
- https://learn.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-getprocessiocounters （现有limited-information句柄可用、失败零值）
- https://learn.microsoft.com/en-us/windows/win32/api/winnt/ns-winnt-io_counters （累计Read/WriteTransferCount口径，不提供物理磁盘等价担保）
- https://doc.qt.io/qt-6/qsavefile.html （同目录临时文件/commit、direct fallback破坏原子性）
- https://www.qt.io/licensing/open-source-lgpl-obligations （源码/替换/调试/通知/第三方条款义务）
- 本机 `E:/InstallApplication/Qt/Licenses/LICENSE`、`Tools/mingw1310_64/licenses/gcc/COPYING.RUNTIME`、`licenses/winpthreads/COPYING`；只读内容核对，未分发材料或确认完整包组件来源。
