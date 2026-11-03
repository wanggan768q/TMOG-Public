# Windows 首批优先级与遗留恢复方案 v1

> **执行者须知：** 本轮是 Product 管理的调度/恢复方案，不是全部功能的实施授权。后续每票需独立批准计划、任务合同与副作用握手，可用 superpowers:executing-plans 逐项执行；Plan 不启动角色、不创建 Issue、不改业务代码。步骤以复选框记录。

**Goal：** 以安全收口与 #17 解锁主线为优先，在依赖和共享写域允许时并行准备 #13/#6，不重开发已关闭任务。

**Architecture：** 先核对固定历史工件和当前 main，形成三个可批准单票计划；允许独立文档/人工准备与功能计划并行，MainWindow/CMake 等共享写域串行。旧成果最小迁移，新任务从 fresh origin/main 建树，新 SHA 独立Review和人工验收，不整旧分支覆盖当前安全管线。

**Tech Stack：** 现有 C++20、Qt Widgets/Core、CMake、Windows 进程身份/单在途采样；Git/gh/PowerShell只读核查。未引入框架、服务、插件、数据库或工具安装。

## 1. 身份、来源与授权边界

- run_id=`product-20261028-issue8`；task_id=`windows-priority-recovery-plan`；attempt=1；Plan_i8_20261028_1；project_root/cwd=`E:/Git/TMOG-Public`。
- 状态 **awaiting_approval**。用户允许处理计划与对应GitHub任务、要求优先级/条件允许并行，由Product转达；广泛授权不代替本方案或单票计划批准、专项人工、实验及发布门槛。
- 本次读取主工程HEAD=`e822792dc1b32864dc9564735e5c7811d0f02a83`；origin/main及只读远程main=`54596d28d96ac497b6100901dcd093e5954ef07c`。本地领先是团队并发合同相关8文件提交，非功能基点，不推送/合并/丢弃它。业务代码差异未混入该提交。
- #8批准计划v1 SHA=`0fd4828aa09b316428bab1476a24221beedd8f66b0ebe3b50ffb0ddc69977249`；运行中独立文档树`E:/Git/TMOG-Public-WorkTree/issue-8-contract-v2-20261028`，分支`docs/issue-8-contract-v2-20261028`，核验HEAD=54596d2；其ACK/预检状态由Product报告，不接管写入/索引或Review。
- 本次允许写入只有本计划和自己的 `.claude/workflow/product-20261028-issue8/windows-priority-recovery-plan/plan-1.md`；不改旧计划/报告/state/events，不运行原件/网络/系统危险实验，不安装、不提权、不清理、不提交、GitHub只读。
- 全部新计划位于主工程doc/plans；Max_Plan当前1，同计划唯一活动写者；独立任务的数量上限不是同时写MainWindow/CMake或真实并行能力的证明。

### 阅读来源与可信层

本次完整读取#41/#17/#11/#13/#6/#15/#12正文评论（均无comments）；原生依赖；`doc/plans/2026-10-27-windows-development-order.md`、`docs/handoff/2026-10-28-windows-development-handoff.md`、旧clear交接；#6完整计划/acceptance/review；`c1a2258`的#13三文档及end_confirm_checks.cpp、固定Git diff；CodeGraph当前MainWindow/模型/安全接口/检查；当前CMake通过git show读取。

- #41/开发顺序的未勾选框与“逐票”是历史推荐，不覆盖新共享合同的条件并行或实时Issue状态；本轮不改#41旧正文。
- 主交接main@165793f、禁止新功能的旧要求、旧产物/hash、会话地址均是历史快照；当前Product转达恢复计划授权与实时Git/Issue优先。不是自动恢复旧功能/清理授权。
- 旧Review文档只证明历史报告存在，其执行声明标historical self_report；当前固定代码读取/diff是tool_evidence，但未重跑旧测试、未拿旧PASS充当新HEAD验收。

## 2. 实时队列与人工阻塞表

| 优先 | 任务/工作 | 实时依赖与状态 | 当前下一动作 | 不可越过的门槛 |
|---|---|---|---|---|
| 在途保留 | #8合同v2文档 | #8 OPEN；批准v1；Dev已由Product派发 | 完成现有文档任务/固定SHAReview/维护者合同确认 | 不接管旧树/已运行Dev；#8不等于#26实现 |
| P0收口 | #13确认框安全专项 | #13 OPEN，原生#5 CLOSED，open blockers=0 | 先新单票恢复计划，最小专项检查/新指引；人工对象与观察项准备优先 | 不合c1a2258整分支；旧#16验收不替代#13模态期间实际刷新专项 |
| P1主线 | #17导航/显示设置 | #17 OPEN，原生#16 CLOSED；直接blocking12 | 单票计划优先完成；#13必要检查写入冻结后再动共享CMake/MainWindow | 只挂已实现Processes，无虚假其他页；实际设置/刷新/安全回归与人工UI |
| P1并行准备 | #6便携包恢复 | #6 OPEN、无原生依赖；旧c62992b，旧Review9a59d4d | 可并行收集人工条件/只读迁移分析；源码迁入待共享CMake写域空闲 | 干净Win11 x64、跨机可重复、维护者第三方义务确认；旧技术通过不是整票PASS |
| P2排队 | #11进程I/O | #11 OPEN，原生#5 CLOSED | #17稳定集成后独立计划 | 与#17共享MainWindow/ProcessTableModel/采样数据结构/CMake，不因树独立盲并行 |
| 阻塞 | #15 MSVC/#12 ARM64 | 原生#5 CLOSED、#6 OPEN | 仅条件清单，首批不启动实现 | #6未关闭；匹配ABI工具链/设备/runner安装另批准；缺ARM64实机不叫原生验收 |
| 阻塞 | #26 Connections | 原生#17 OPEN/#8 OPEN | 保留已批准范围，等前置与单票实现计划 | 不运行网络实验、不自动解锁 |
| 非开发候选 | #7/#9/#10/#16（及#5/#14） | 本轮gh全部CLOSED；历史成果集成 | 用户要求IssueWriter处理四票由Product独立查重核对 | 不重复发布/合并/关闭/重开发；不删旧树 |

#17直接blocking12为#19/#20/#21/#22/#23/#24/#25/#26/#27/#28/#29/#30；它们的其他前置和合同仍需各票核查。解锁12票不是授权12个并行Dev。本轮不制定全部32票巨型计划、不扩大#37/#27/#28研究批准范围。

## 3. 方案与并行边界

**推荐：分层并行、共享写域串行。** 保持#8文档Dev；Plan单例串行产出#13恢复→#17功能→#6恢复计划，人工资料收集可同时推进；#13最小检查冻结/必要集成后#17取得MainWindow/CMake写域；#6包装材料准备可并行，完整CMake迁入排共享写域；#11排#17后。

替代A全串行：冲突最少，但干净机器/法律确认等人工等待会拖住可独立主线，不推荐。替代B按Max_Dev=5直接启五个功能：worktree独立仍冲突MainWindow/CMake，旧人工对象对应SHA变化且集成不可预测，不采用。

| 可并行组合 | 条件与边界 |
|---|---|
| #8文档Dev + Plan首批计划 | 输出文件/报告/任务树完全独立；Plan不改合同v2或操作其索引 |
| #13人工材料/只读检查准备 + #17计划 + #6材料收集 | 不修改共享代码/CMake，不使用同一GUI实例或同一手工目标；各自固定SHA、产物/报告；缺环境如实blocked |
| #13固定SHA只读Review + #17 Dev | #13已停止写入，#17计划批准；Review结果只适用于#13SHA，#17改安全路径后必须重新集成回归/专项必要重验 |
| #17 Dev + #6文档材料任务 | 后者严格只写packaging说明/新验收材料，不改CMake/scripts共享行为；完整包生成等#6全票恢复计划批准/代码复审 |
| #17 + #6完整代码迁移 | **默认排队**：两票涉及CMake，#6包必须对应最新#17集成HEAD；只有重新拆出真正独立范围并分别批准，才能例外并行 |
| #17 + #11 / #13生产修复 | **排队**：共享MainWindow、模型/采样或测试注册；发现#13安全真缺陷优先冻结#17并回Product |

独立树/分支/build/report是必要条件，不是充足条件。Product为每任务登记精确共享写域、活动占用、报告SHA，未知/失联写者继续占用；同一任务Dev停写/冻结后Review，返工时该Review停止验收。同目标main的合并/快进串行，最新main变化重核集成；当前主工程有未跟踪#8计划与本地独立提交，不擅自stash/reset/clean。

## 4. 单票计划路径、范围与交付建议（须后续各自批准）

本总方案批准只批准优先级/准备分工；下面文件尚未创建，更不代表任务已派发。

### 4.1 #13安全专项最小恢复

**计划输出：** `doc/plans/2026-10-28-issue-13-recovery-plan-v1.md`。
**未来成果：** 新任务树`doc/plans/2026-10-28-issue-13-manual-verification-v4.md`、`doc/plans/2026-10-28-issue-13-recovery-acceptance.md`、`tests/end_confirm_checks.cpp`、CMake目标注册。历史三文档原字节按固定c1a225813430183ac96be4d7b68385999b656a6c附引用或批准后原字节迁入，不能覆写旧报告。业务 `src/MainWindow.cpp/.h` 初始**只读**；若新检查发现生产缺陷，范围修订与计划批准后才允许定向修。

**已存在不重做：** main `on_end_task:221`按值ProcessSnapshot，`246`异步lambda按值捕获identity，句柄核验复用WindowsProcessOps；#16已覆盖方向。旧#13diff只是一行snap复制及测试注册，整旧分支会倒退当前#14/#16生命周期与测试。

**最小剩余：** 旧end_confirm_checks main不存在；它的取消是`const bool user_cancelled=true`，模型替换是独立vector模拟，未驱动生产MainWindow；无实际模态刷新证据。本轮不能宣布安全缺陷仍在或生产动态已通过。新计划应保留有效值冻结/身份拒绝检查，替换不严谨悬空指针关系比较为有效存储/值语义检查，不执行UAF。必要的生产路径自动检查可用现有枚举器注入+真实Qt对话框事件循环，是否新增IProcessOps注入必须在该单票计划明确小接口/路径并获批准，不能为覆盖偷偷扩MainWindow。

**验收要求：**
- 自动检查Debug/Release显式非零失败；真实调用取消若未自动驱动就明确仅人工，不冒充常量模拟覆盖。
- 新人工A显示PID/名/创建身份与本次句柄记录一致；B至少3个**已观察模型替换/其他活跃行变化**且对话框身份不变，不用等5秒推定；C取消目标仍活/零终止；D新一轮确认只终止自建可丢弃目标；退出/身份变化拒绝不能重定向他人。
- 原指引v3的notepad存在单实例转交风险；新v4只用本次创建、持句柄与创建身份的独立测试子进程，不能按名称或裸PID清理。不复制历史ping命令运行网络，推荐现有CREATE_SUSPENDED受控子进程方案或新专用idle测试helper，准确创建/退出命令在单票计划写全。
- 桌面焦点受限停并记录，不能关Orca或猜测其机制；缺人工就#13保持OPEN，不拿#16七项转签。
- 被测app固定源码HEAD/build配置/EXE SHA；旧ee75...hash不假定仍有效。#17后若安全路径/模型/刷新改变，重跑专项集成回归，必要重做人机观察。

**准确未来检查命令（在Product登记任务树cwd，目标存在/环境核实后）：**
```powershell
cmake --build ./build-debug --target TmogReplica end_confirm_checks
ctest --test-dir ./build-debug --output-on-failure -R '^end_confirm_checks$' --no-tests=error
cmake --build ./build-release --target TmogReplica end_confirm_checks
ctest --test-dir ./build-release --output-on-failure -R '^end_confirm_checks$' --no-tests=error
Get-FileHash -Algorithm SHA256 ./build-release/TmogReplica.exe
```
这些目标本轮未创建/运行；构建配置命令由单票计划对已存在Qt/MinGW路径核实后提供，不复用旧CMakeCache。人工无具体目标不执行；自动测试包含受控终止须对应单票实验边界批准。

### 4.2 #17页面入口与偏好纵向切片

**计划输出：** `doc/plans/2026-10-28-issue-17-navigation-settings-plan-v1.md`。
**允许路径建议：** `src/MainWindow.cpp/.h`、新增`src/DisplayPreferences.cpp/.h`、`tests/display_preferences_checks.cpp`、`tests/navigation_settings_checks.cpp`、`CMakeLists.txt`、新`doc/plans/2026-10-28-issue-17-acceptance.md`。`ProcessTableModel`、`SamplingWorker`默认只读，确有必要再报最小扩范围；不改Windows采集与安全终止算法，不实现其他页、不新建通用page registry/MVVM。

**架构建议：** Qt现有控件做Processes可用唯一入口，键盘可达；没有第二业务页就不造假tab来“证明切页”。偏好是小值类型+固定文件读写，用Qt原子安全保存，注入显式测试文件路径；刷新档位转统一1000/500/2000/5000ms变量。当前closeEvent失败路径两处`sample_timer_.start(1000)`必须复用当前档位，不能改设置后超时关闭又回到1秒。

**下一单票必须确定并批准的细则：** 数据schema版本、用户独立应用目录、大小上界（建议64KiB）、窗口尺寸/屏幕恢复越界规则、保存排序列/方向是否纳入显示偏好、缺文件默认与损坏/未知版本/无写权限错误提示、保留旧配置的原子失败处理、暂停状态是否持久（建议不持久，启动恢复采样），不写厂商/全局环境或旧配置路径。不把这些本方案建议当已批准。

**可观察验收：**
- Processes默认，窗口/鼠标键盘/resize正常，不挂未实现页；本票能实现的导航能力与未来多页面挂载范围准确分开。
- 四档有效真实间隔请求、busy至多一采样、暂停手动一次仍暂停、档位变化旧代际不污染、关闭超时恢复仍原档；模型排序/选择身份/持久陈旧/结束确认不退化。
- 重启恢复允许偏好；缺文件默认，损坏/超限/越界/未知版本安全默认并错误反馈；写失败保持旧字节，不能truncate旧配置，不能静默成功。
- Debug/Release都跑新增纯设置检查和真实MainWindow事件循环检查，GUI人工核查与自动offscreen分开；受限屏幕环境不伪报。

**未来命令合同（目标必须由该票建立，当前不运行）：**
```powershell
cmake --build ./build-debug --target TmogReplica display_preferences_checks navigation_settings_checks
ctest --test-dir ./build-debug --output-on-failure -R '^(display_preferences_checks|navigation_settings_checks)$' --no-tests=error
cmake --build ./build-release --target TmogReplica display_preferences_checks navigation_settings_checks
ctest --test-dir ./build-release --output-on-failure -R '^(display_preferences_checks|navigation_settings_checks)$' --no-tests=error
```
重复当前#5/#14/#16及已迁入#13检查（§5），一票一固定SHA独立Review。用户人工Processes确认交互是门槛；#17不需要#6先关票，但包实机证明另属#6。

### 4.3 #6便携包迁移与人工材料

**计划输出：** `doc/plans/2026-10-28-issue-6-portable-recovery-plan-v1.md`。
**允许路径建议：** `CMakeLists.txt`定向新增strict/install/staging；`scripts/package-portable.ps1`、`scripts/check-package.ps1`；`packaging/README-PACKAGE.md`、`packaging/THIRD-PARTY-NOTICES.md`；新`doc/plans/2026-10-28-issue-6-recovery-acceptance.md`；历史三md仅原字节新增。`.gitignore`如需只增加确切任务构建目录规则，不能整旧文件覆盖。`src/`、现有tests全只读，包装不回退GUI/采样。

**固定来源：** c62992b837e20665399798a46e170b85ce5bde06（分支HEAD，包含历史Review），技术审查对象9a59d4d；共同base=767553af8d58ffd1842e59010cf5e3eddef447cd。旧README/验收只能视为历史，迁移后新包按当前HEAD生成，不搬build-release旧产物。

**必须修订新合同冲突：** 当前固定脚本`$env:TEMP/tmog-portable-verify`若存在即Remove-Item递归删除，是共享且未知归属对象，不符合任务树独立输出/清理合同。旧Technical PASS未检查新合同；恢复须把近似启动副本改为任务树专用唯一新目录，已存在拒绝，解析实际父路径/链接，记录文件hash/创建身份；只清确证本次创建且退出的对象，无强制递归覆盖未知目录。不按裸PID/名称杀进程；保持进程对象/句柄及创建身份，先正常关闭与退出核验，必要受控终止的权限在恢复计划明确。**当前不能运行旧脚本补证。**

CMake迁移保留当前 `find_package(Qt6 COMPONENTS Core Widgets)`、AUTOMOC先于target、SamplingWorker链接、close_lifecycle/sampling_recovery/stale_persistence以及后续#13/#17目标。严禁从767553a整份CMake覆盖。旧plan的`portable_package`只做staging无许可证/清单，不等于完整包；完整命令走修正后的编排脚本和独立checker。缺Qt/deploy/runtime/licenses非零失败，不把默认核心only当GUI打包通过。负例用自建标记文件/副本，不再复制原厂EXE污染包。

**未来准确命令形态：** 在Product登记任务树，已核实工具版本/路径并授予生成产物与应用运行后：
```powershell
pwsh -NoProfile -File ./scripts/package-portable.ps1 -SourceDir . -BuildDir build-release -QtDir E:/InstallApplication/Qt/6.12.0/mingw_64 -MinGWDir E:/InstallApplication/Qt/Tools/mingw1310_64 -CMakeExe D:/InstallApplication/CMake/bin/cmake.exe -NinjaExe E:/InstallApplication/Qt/Tools/Ninja/ninja.exe
pwsh -NoProfile -File ./scripts/check-package.ps1 -PackageDir ./build-release/portable
ctest --test-dir ./build-release --output-on-failure --no-tests=error
```
路径是**历史实查工具路径**，本轮未确认安装当前可用；单票Plan要先Test-Path/Get-Command/版本核查，不装、不使用ExecutionPolicy Bypass、不换失败CLI。`build-release`、staging、负例和唯一验证副本都限该任务树，首次生成先intent；MinGW PATH仅明确进程内配置，不写持久环境。

**验收三层：**
1. 新固定SHA独立构建/完整包清单双向hash/依赖版本/组件许可资料/纯负例/含空格路径/本机重复；每次打包产物与依赖来源hash可取得。预期缺任何依赖/删文件/加文件/改字节必非零。进程存活5s只叫近似启动，不叫GUI或干净机器证明。
2. 维护者提供未装Qt/开发工具的干净Win11 x64普通token环境；记录OS、app包hash、依赖manifest、无开发PATH与实际真实进程/采样/排序/暂停/刷新/关闭。同机清PATH不替代；另一构建环境重复命令核对内容/版本（生成时间差不宣称byte-identical复现），共享包在第二环境运行与第二环境重建分别记录。
3. 维护者按确切Qt/GCC/mingw-w64组件、版本、许可证原文、源码供应方式/库替换/修改披露等适用义务确认分发材料，技术Review不替代法律/维护者判断；证据不充分保持OPEN。

#6实际技术迁移可准备但不叫整票accepted；人工不足时不自动关票、不借包能启动掩盖安全检查。新包在#17合并后按新main重建/回归，旧实机hash不可套用。

## 5. 共用验证、基点与固定SHA门槛

### 只读恢复核验（本轮实际已执行的核心命令）
```powershell
git -C E:/Git/TMOG-Public rev-parse HEAD origin/main
git -C E:/Git/TMOG-Public worktree list --porcelain
git -C E:/Git/TMOG-Public ls-remote origin refs/heads/main
git -C E:/Git/TMOG-Public show c1a2258:doc/plans/2026-10-27-issue-13-review.md
git -C E:/Git/TMOG-Public show c1a2258:tests/end_confirm_checks.cpp
git -C E:/Git/TMOG-Public diff 767553a c1a2258 -- src/MainWindow.cpp CMakeLists.txt
git -C E:/Git/TMOG-Public diff 767553a c62992b -- CMakeLists.txt .gitignore
git -C E:/Git/TMOG-Public show c62992b:scripts/package-portable.ps1
gh issue view 41 --repo wanggan768q/TMOG-Public --json number,title,body,comments,state,url
gh api repos/wanggan768q/TMOG-Public/issues/17/dependencies/blocked_by --jq '[.[] | {number,state}]'
gh api repos/wanggan768q/TMOG-Public/issues/17/dependencies/blocking --jq '[.[] | {number,state,title}]'
```

### 后续每票基点策略
- [ ] 用户批准单票计划后，Product重新fetch origin（当前Plan不做），取得fresh origin/main全SHA、远程与本仓库身份，登记唯一worktree/branch/output；不从本地e822792或旧c1a2258/c62992b建功能树。
- [ ] 新树从main最小恢复文件/片段；未知已有文件/链接冲突停；不能git restore整旧MainWindow/CMake/.gitignore。历史参考hash不变。
- [ ] 同步批准计划/工程技能和初始化独立CodeGraph按共享合同握手/清单；不复制旧索引、settings、build。当前主工程.role读取不证明旧启动prompt已更新。
- [ ] 先建立失败反馈再实现；Debug/Release显式check，测试发现零个须失败。每条命令记录实际cwd、参数、退出码和日志；不以最后分号退出0代替中途失败。
- [ ] Dev限定文件正常提交，冻结head后独立Review；绑定计划版本/SHA、成果SHA、build/EXE SHA和人工场景。作者不自审；新HEAD旧PASS失效。
- [ ] 合并main串行放行；上一PRmerge核实后fresh main改变须重新集成检查，MainWindow/CMake变化触发#13/#17定向回归、#6新包重建。必要维护者重新确认，不直接把无冲突当安全。
- [ ] #7/#9/#10/#16仅由Product独立安排IssueWriter只读查重核对已集成/closed信息；未经具体查重缺口和新intent不增重复评论或PR，不重开开发。

### 现有回归准确命令（后续执行，本轮未跑）
```powershell
cmake --build ./build-debug --target process_checks smoke_enumerate process_ops_checks close_lifecycle_checks sampling_recovery_checks stale_persistence_checks
ctest --test-dir ./build-debug --output-on-failure -R '^(process_checks|smoke_enumerate|process_ops_checks|close_lifecycle_checks|sampling_recovery_checks|stale_persistence_checks)$' --no-tests=error
cmake --build ./build-release --target process_checks smoke_enumerate process_ops_checks close_lifecycle_checks sampling_recovery_checks stale_persistence_checks
ctest --test-dir ./build-release --output-on-failure -R '^(process_checks|smoke_enumerate|process_ops_checks|close_lifecycle_checks|sampling_recovery_checks|stale_persistence_checks)$' --no-tests=error
```
当前已注册这六目标的条件需Qt Core/Widgets、Windows成立；缺GUI目标不能当成功跳过。`process_ops_checks`包含自建受控终止/真实关键进程只读查询，需单票允许边界，不运行未知对象实验；本轮完全未运行。#13迁入后的end_confirm_checks/#17新增目标同样需准确发现、Debug/Release非零负例和实际生产路径覆盖。

## 6. 推进顺序与可观察总方案验收

- [ ] Product向用户展示本方案v1+SHA及§2队列/§3并行约束，确认只首批范围，不默认所有页面开工。
- [ ] Plan单例先产出#13恢复单票合同，细化测试/人工安全对象与是否需生产注入，用户批准后交Product；再#17单票计划（刷新/存储/导航边界）；#6人工条件可由Product同时收集，但其单票迁移计划也必须批准。
- [ ] #8按既有合同继续；#13必要检查/CMake写入冻结后#17开始，#13人工若等待可并行#17，但只给#13当时SHA通过，集成后定向重验不能省。
- [ ] #6文档准备与上面并行；完整包装迁入排CMake写域空闲，最好#17集成之后生成当前版本包。若用户优先分发，可以调序为#6先冻CMake，再#17，但新main仍要重打包；调序不取消人工门槛。
- [ ] #17确切完成并集成后再从主线#19与独立页面挑一到两片，逐票核验依赖/采集/GUI注册范围；#11可优先队列但不与#17同时修改共享文件。本轮不预定后续32票实现。

**本总方案验收仅为文档层：** 实时依赖/历史与当前分清、首批优先表/并行冲突表/单票路径与允许修改范围/准确验证命令/人工条件/固定SHA策略完整；计划无新角色/代码/实验/Git写入；用户明确批准优先级/分工。审批不是功能或法律验收，缺任一子计划批准禁止实施对应票。

## 7. 风险、未测与批准待办

风险：旧c1a2258覆盖当前安全管线；旧CMake迁入丢Qt Core/AUTOMOC/测试；#6固定TEMP删除未知对象；#17硬编码close恢复1000ms导致偏好失效；#13常量取消测试与实际模态覆盖不同；多个独立tree仍共享MainWindow/CMake与全局包验证目录；人工结果跨SHA误复用。均有相应最小边界/排队/新测试门槛，不新增通用锁服务或调度daemon。

本轮未构建、未运行GUI/子进程/采样/打包/网络、未复测旧Review、未检查旧ignored资源或清理归属，未确认任何工具当前安装/干净机器/第二环境/ARM64/LGPL材料完成；不伪报功能、安全动态或分发合规通过。

批准待办：本总方案优先级与条件并行；分别批准#13恢复/#17功能/#6恢复三个新计划及精确资源路径；#13专项人机与自建终止、#6包运行与干净/跨机/合规确认；后续#11/#19等另立计划。#8批准不挪给本方案，关闭研究票不挪给功能或实验。共享合同更新/新Max_Plan配置读取是tool_evidence，不是自动重载旧启动角色prompt证明。
