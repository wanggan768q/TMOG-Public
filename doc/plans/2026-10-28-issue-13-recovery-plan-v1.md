# Issue #13 最小专项恢复实施计划 v1

> **执行者须知：** 使用 superpowers:executing-plans 逐任务执行并记录复选框；Product派发前须用户批准本计划/SHA及相应运行边界。Plan不派发、不自行批准。当前 **awaiting_approval**。

**Goal：** 在当前已集成值冻结实现上补齐真实生产Qt模态事件路径检查、可丢弃目标人工指引和固定SHA证据，不重复旧修复或合并旧分支。
**Architecture：** MainWindow仅新增一个可选IProcessOps构造注入，默认路径不变；单一end_confirm_checks测试EXE驱动真实MainWindow/枚举worker/QMessageBox，fake ops记录调用。该测试EXE另含自建idle子模式和手工协调模式，真实受控终止/物理桌面另批准，绝不以fake或offscreen替代人工。
**Tech Stack：** C++20、现有Qt Core/Widgets、Windows CreateProcess/句柄身份、现有CMake/MinGW/Ninja；不安装新库，不新建服务/通用框架。

## 1. 身份、来源与边界

run_id=product-20261028-issue8；task_id=issue13-recovery-plan；attempt=1；Plan_i8_20261028_1；project_root/cwd=E:/Git/TMOG-Public。

本次远程只读main与origin/main均 `54596d28d96ac497b6100901dcd093e5954ef07c`，本地HEAD `e822792dc1b32864dc9564735e5c7811d0f02a83` 仅团队提交；两者指定业务文件diff空。后续Product重新fetch确认fresh基点，不从本地未推团队提交或旧分支建树。旧#13 `c1a225813430183ac96be4d7b68385999b656a6c`仅参考；不整分支恢复、不覆盖当前MainWindow/CMake。

**2026-11-11 rebase 后状态（补充，不改上文历史记录）：** 交付分支 `fix/issue-13-modal-checks-20261028` 已 rebase 到 `origin/main` = `d3e9e2e6c68d75f60d4cd2aa2af1303b04ec36d4`（PR #51 合并点），rebase 零冲突；新 tip `3b5cc14`，相对新 base 仅 6 文件（MainWindow.cpp/.h 注入参数、tests/end_confirm_checks.cpp、CMakeLists.txt、3 份 doc/plans）。#51 未改 `src/MainWindow.cpp/.h`（其 diff 仅 DisplaySettings/settings 测试与团队文档），故第 1 节所述注入接口与 #51 的 I/O 列无同文件语义交叉；双配置全量 ctest 9/9 通过，见 `.workflow/dsh-resume-20261111/reports/worker-R13-integration-r1.md`。

#13当前OPEN、comments空；唯一原生前置#5 CLOSED。用户继续修复开发由Product转达，只授权制定本票计划，不默认为注入接口、helper或真实终止实验批准。总优先级v1只是导航，#8审批也不迁移。

源码事实：MainWindow.cpp:221为`const ProcessSnapshot snap = row->snapshot`；246异步lambda值捕获identity。#14/#16单在途/持久陈旧/关闭收束保留。旧end_confirm_checks缺于当前main；旧取消是常量bool、独立vector替换不执行on_end_task；不能复用旧PASS为当前生产覆盖。旧dangling地址关系比较也不迁入，禁止读取/操作已失效指针或故意UAF。

### 允许修改与产物

| 路径 | 责任/边界 |
|---|---|
| src/MainWindow.h/.cpp | 仅可选ops注入构造参数与各平台默认ops初始化守卫；不改确认内容/值冻结/异步终止/关闭/刷新算法 |
| tests/end_confirm_checks.cpp | 新生产事件路径测试、fake ops、idle/manual模式；不复制旧模拟检查为主验收 |
| CMakeLists.txt | Windows+Qt Widgets条件下注册此目标/CTest offscreen，保留所有现有目标/Qt Core/AUTOMOC |
| doc/plans/2026-10-28-issue-13-manual-verification-v4.md | 新固定源码/产物对应、安全目标和A..E人工步骤 |
| doc/plans/2026-10-28-issue-13-recovery-acceptance.md | 命令/真实结果/自动与人工分层/未测项 |
| 本批准计划同名副本 | 同步任务树入限定提交，不覆写主工程批准版本 |

IProcessOps.h、WindowsProcessOps、SamplingWorker、ProcessTableModel默认只读；新检查发现生产缺陷先回Product修订范围/计划，不能顺带改。历史三md通过固定Git读取引用，旧报告不覆写；不额外复制全旧分支资料。

所有build/日志/人工运行目录仅Product登记新任务树内：`build-debug/`、`build-release/`、`artifacts/issue13/`；禁止主工程build、共享TEMP、无归属review-build覆盖。日志每文件<=4MiB、累计<=32MiB；fixture行<=64、场景<=8、fake调用记录<=16；自动单场景20秒deadline，CTest总timeout120秒。超限/超时失败退出，不静默skip。数值是本票设计建议待批准，非原版实测。

## 2. 方案比较与用户门槛

推荐单ops注入：沿现有enumerator_override模式，真实QMessageBox响应和线程路径，不加“确认结果bool”捷径。替代不改生产只做人工：缺自动生产回归；替代单独确认服务/抽象框架：范围过大，不采用。

须分别批准：A最小接口+fake/offscreen自动检查；B真实app+本次自建helper/句柄验证/必要受控终止和物理桌面人工；缺B只交付技术检查，#13仍OPEN。Product范围反馈不是用户批准。

## 3. Task 1：先失败反馈，再最小构造入口

- [ ] Product登记fresh main任务树、计划SHA和共享写域；与#17的MainWindow/CMake修改串行，#8文档不冲突。
- [ ] 新测试首先构造三参数MainWindow并驱动取消场景（Task2），构建前确认目标必须发现；原代码缺第三参数应编译失败，保存此失败。无需回退生产值冻结或运行旧UAF证明红灯。
- [ ] 添加确切签名（默认调用与现有两参数测试不变）：

```cpp
explicit MainWindow(QWidget* parent = nullptr,
    std::unique_ptr<IProcessEnumerator> enumerator_override = nullptr,
    std::unique_ptr<IProcessOps> process_ops_override = nullptr);
```

cpp对应签名增加第三参数，构造体开始：
```cpp
process_ops_ = std::move(process_ops_override);
```

Windows现有 `process_ops_ = std::make_unique<WindowsProcessOps>();`改为：
```cpp
if (!process_ops_) process_ops_ = std::make_unique<WindowsProcessOps>();
```
macOS/Linux各对应默认ops赋值同样`if (!process_ops_)`守卫，绝不覆盖已注入实例。枚举器初始化保持原分支行为，不借机修其他平台采集；默认生产构造行为保持。必须注释override仅检查注入，所有权仍MainWindow持有至在途线程退出。外部不保留销毁后raw指针。

- [ ] CMake在Windows且Qt Widgets存在时新增（AUTOMOC/现有core先前规则不变）：
```cmake
if(WIN32)
    add_executable(end_confirm_checks
        tests/end_confirm_checks.cpp
        src/MainWindow.cpp
        src/ProcessTableModel.cpp)
    target_link_libraries(end_confirm_checks PRIVATE tmog_core Qt6::Widgets)
    add_test(NAME end_confirm_checks COMMAND end_confirm_checks)
    set_tests_properties(end_confirm_checks PROPERTIES
        ENVIRONMENT "QT_QPA_PLATFORM=offscreen" TIMEOUT 120)
endif()
```
只默认运行fake场景；manual/idle模式不注册CTest，不默认创建真实目标。独立测试EXE不是GUI业务入口，不增加生产菜单。

## 4. Task 2：真实生产模态检查（fake ops，无真实终止）

测试采用显式check计数/非零返回，不能assert/NDEBUG移除；QObject连接以局部有效context绑定，退出前停止测试timer，释放受控枚举worker并等待实际退出，不能超时直接析构MainWindow。

**数据接口：** `StepEnumerator : IProcessEnumerator`使用mutex/condition_variable与单次permit返回一帧SampleResult，序号从1递增，wall_clock_ns真实单调递增；默认20秒可收束等待，测试结束唤醒全部等待。fixture A=(pid101,creation_tick132000000000000000,name=fixture-A)，B=(pid202,creation_tick132000000000000001,name=fixture-B)；是假身份，fake模式不得实例化真实WindowsProcessOps。

**记录器最小实现核心：**
```cpp
struct OpsState {
    std::mutex mutex;
    std::vector<tmog::ProcessIdentity> targets;
    std::vector<QThread*> threads;
    int timeout_ms = -1;
    tmog::KillOutcome outcome{tmog::KillResult::Ok, {}};
};
class RecordingOps final : public tmog::IProcessOps {
public:
    explicit RecordingOps(std::shared_ptr<OpsState> s) : state_(std::move(s)) {}
    tmog::KillOutcome terminate(const tmog::ProcessIdentity& id, int ms) override {
        std::lock_guard<std::mutex> lock(state_->mutex);
        state_->targets.push_back(id);
        state_->threads.push_back(QThread::currentThread());
        state_->timeout_ms = ms;
        return state_->outcome;
    }
private:
    std::shared_ptr<OpsState> state_;
};
```
测试读取/更新state全部加锁；持有shared state供MainWindow析构后检查，不访问已释放ops。

**所有场景必须走以下共同真实流，不只检查成员值：**
1. 建QApplication；创建MainWindow(nullptr,StepEnumerator,RecordingOps)并show；首帧permit，事件循环等待table真实model行出现。通过`findChild<QTableView*>`取得表，proxy的sourceModel观察`QAbstractItemModel::modelReset`；初始化reset不计入modal数量。
2. 按proxy的PID列寻找A并selectRow，核对`currentIndex`映射显示PID。先排序一次（CPU列），arm QTimer后触发真实“结束任务”QAction（按tr文案唯一查找，0或多个都fail），不要直接调用fake confirm函数。
3. QTimer在QApplication::activeModalWidget确认真实QMessageBox且parent为此MainWindow，记录text；只有modal真实可见才开始计`modelReset`。在三个轮次分别发enumerator permit并经真实worker返回，由source modelReset证明实际apply_sample发生；reset>=3前不能点No/Yes。
4. 每轮改变fixture行容量/CPU排序值/顺序：1轮A/B，2轮额外最多64行，3轮可去掉A或同PID换creation_tick；从proxy显示/排序验证视图位置已变化。使用真实proxy sort或header sortIndicator请求切换顺序，确认layout/行序变化；modal不允许人工点击父表，程序化sort为测试路径，不能写成人工交互。
5. 每次modal text与初始精确相等，包含A原PID/名称/创建时间；三次已观察reset后点击QMessageBox::button(No/Yes)->click，真正让question返回。不得用`const bool cancelled`或直接返回结果。
6. 等原on_end_task返回且异步记录/回调完成；以线程finished/GUI回调及窗口安全关闭确认收束。失败对话框由测试timer识别并关闭，避免无限模态等待，但不得替代断言实际KillResult。

### 场景与准确断言

| 场景 | modal期间输入 | 动作/必须输出 |
|---|---|---|
| C取消 | >=3 source modelReset、proxy顺序/行位置变化，A保留 | 点No；ops targets空，worker线程没有被误启动为kill；模型仍A；text不变 |
| Y确认 | 同上，额外当前选择/顺序变化 | 点Yes；exactly1目标等原A，timeout_ms=3000，记录线程!=QApplication::instance()->thread；主循环heartbeat在结束投递前后继续 |
| X退出 | 第2轮删A，第3轮保留B；fake outcome=Failed“fixture exited” | Yes仍传A，非B；UI显示失败，不能声称已退出或终止B；fake模式不证明Windows实际退出错误码 |
| R同PID复用 | 后续帧A同PID但creation_tick+1/name=fixture-reused，fake outcome=IdentityChanged | Yes目标仍原A创建身份；一次调用，非新身份；UI身份变化警告真实出现 |
| N无注入覆盖 | 注入枚举器/ops在构造后真实Yes路径 | RecordingOps实际收到调用；防止平台分支覆盖注入，不能只检查constructor形参 |

C/Y/X/R每场景至少3实际reset与稳定modal文本；测试输出场景/seq/reset数量/目标身份/线程结果/失败数，自动最多8场景。缺对话框/缺reset/超时/空目标/多次调用/错误身份全fail退出1，不skip。Qt offscreen不是物理桌面验收，也不证明操作系统真实PID复用。

- [ ] 完成后检查能拒绝错误预期：测试自检模式`--negative-oracle`只把确认期望改为B（仍fake、正常生产值冻结不动），预期exit1；默认测试恢复exit0。禁止临时回退snap为引用执行UAF；负例只是验证oracle有效，不能称“原缺陷已动态复现”。
- [ ] 保留#14/#16全现有实现与回归；新检查路径不能因fake ops建立而改生产危险策略。

## 5. Task 3：专用helper与新人工指引（另批准后执行）

测试EXE在建QApplication/测试前解析argv：默认fake；`--negative-oracle`负例；`--idle-child <parentPID> <manualToken>`专用子进程；`--manual <absolute-app-path> <scenario>`人工协调。拒绝未知参数、相对app路径、外部app或不在当前批准build目录；manualToken只在本次运行生成，不能当权限凭证；不写入全局设置。

**helper：** 由manual进程CreateProcessW使用准确本测试EXE绝对路径与参数，不经shell、不notepad/ping；立即GetProcessTimes取得creation_tick、记录EXE SHA/父子PID/句柄创建身份，保留PROCESS_INFORMATION.hProcess直到实际退出。helper等待父进程句柄或最多300秒Sleep循环后自然退出，不创建网络/文件/子进程，不拦截终止；启动失败/身份无法核对就fail，不拿其他进程代替。

**manual协调：** CreateProcessW启动同build的TmogReplica.exe并保存app句柄/hash。前后身份核对无问题才显示目标PID/FILETIME换算UTC时间（100ns tick，不用进程名猜归属）。流程完成先app正常WM_CLOSE，只向本次app PID且创建身份匹配的顶层窗口发送；5秒未退出报告，不按名称杀、不自动去关其他窗口。helper仍活则先等自然截止或在已批准受控清理边界内仅对持有本次hProcess且GetProcessTimes仍一致的helper TerminateProcess并WaitForSingleObject确认；失败/未退出保留句柄与资源并报，不删除build/日志。不得把裸PID当清理权；关闭句柄不等于退出。

**人工scenario：** cancel/confirm/exited。cancel自建helper持续存活；confirm新建独立helper用于真正Yes；exited允许协调器在**持有本次helper句柄**的已批准受控清理路径让helper退出后，用户在仍打开确认框点Yes，验证不误操作其他对象。真实PID复用不强行制造，fake R只模拟；真实拒绝/目标退出返回允许Failed/AccessDenied等实际码，记录不伪造IdentityChanged必然发生。

在新v4指引记录固定源码HEAD、Debug/Release配置、EXE及helperSHA、独立任务路径。人工命令（批准B后，cwd为任务树）：
```powershell
./build-release/end_confirm_checks.exe --manual "$((Resolve-Path ./build-release/TmogReplica.exe).Path)" cancel
./build-release/end_confirm_checks.exe --manual "$((Resolve-Path ./build-release/TmogReplica.exe).Path)" confirm
./build-release/end_confirm_checks.exe --manual "$((Resolve-Path ./build-release/TmogReplica.exe).Path)" exited
```

A选择行前核对PID/创建时间/名称与本次helper日志。B先CPU排序，打开确认框；停留时观察其他活跃行实际变化>=3次，记录时点/变化（不可仅等待5秒），对话框PID/名/创建时间始终不变。C No后helper仍alive且无退出，D新helper Yes后Wait句柄确认退出、对应行消失，E exited确认不转向新进程。取消的操作次数自动fake能精确证明为0，真实手工仅句柄仍活/UI结果为对应场景证明，不假称直接观测系统所有终止调用。

若CPU变化无法观察、遮挡/焦点丢失或目标归属不明，人工B为未验证，不靠等待替代；不干预Orca/关键系统进程，不把offscreen reset证据挪成物理视觉证据。#13第四验收项必须维护者明确确认，#16旧七项不转签。

## 6. 构建、验证准确命令与权限

本次只读Test-Path和版本命令已确认：Qt路径E:/InstallApplication/Qt/6.12.0/mingw_64，qmake QT_VERSION=6.12.0；g++13.1.0；Ninja1.12.1；CMake3.31.2。没有运行app或构建。后续新任务树cwd由Product登记，重新确认工具文件，首次build/artifacts握手。仅当前执行进程PATH设定，禁止持久环境/ExecutionPolicy Bypass/安装。

```powershell
$env:PATH='E:/InstallApplication/Qt/Tools/mingw1310_64/bin;E:/InstallApplication/Qt/6.12.0/mingw_64/bin;'+$env:PATH
& 'D:/InstallApplication/CMake/bin/cmake.exe' -S . -B build-debug -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_PREFIX_PATH=E:/InstallApplication/Qt/6.12.0/mingw_64 -DCMAKE_MAKE_PROGRAM=E:/InstallApplication/Qt/Tools/Ninja/ninja.exe
& 'D:/InstallApplication/CMake/bin/cmake.exe' --build build-debug --target TmogReplica end_confirm_checks
& 'D:/InstallApplication/CMake/bin/ctest.exe' --test-dir build-debug --output-on-failure -R '^end_confirm_checks$' --no-tests=error
& 'D:/InstallApplication/CMake/bin/cmake.exe' -S . -B build-release -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=E:/InstallApplication/Qt/6.12.0/mingw_64 -DCMAKE_MAKE_PROGRAM=E:/InstallApplication/Qt/Tools/Ninja/ninja.exe
& 'D:/InstallApplication/CMake/bin/cmake.exe' --build build-release --target TmogReplica end_confirm_checks
& 'D:/InstallApplication/CMake/bin/ctest.exe' --test-dir build-release --output-on-failure -R '^end_confirm_checks$' --no-tests=error
```
每条立即核对退出码，任一配置/GUI/目标缺失失败，不用最后命令掩盖。两组预期各实际发现1测试、exit0；Debug/Release默认fake不创建真实helper，不调用WindowsProcessOps。必须只在命令进程环境设置QT_QPA_PLATFORM=offscreen执行负例，退出后恢复：
```powershell
$env:QT_QPA_PLATFORM='offscreen'
./build-debug/end_confirm_checks.exe --negative-oracle
./build-release/end_confirm_checks.exe --negative-oracle
```
负例各预期exit1（记录两条分别返回码）；不能不核验就继续。手工前清除本次设置或恢复原值，使用物理桌面，不把offscreen继承进人工app。

回归目标包括process_checks/smoke_enumerate/process_ops_checks/close_lifecycle_checks/sampling_recovery_checks/stale_persistence_checks：
```powershell
& 'D:/InstallApplication/CMake/bin/cmake.exe' --build build-debug --target process_checks smoke_enumerate process_ops_checks close_lifecycle_checks sampling_recovery_checks stale_persistence_checks
& 'D:/InstallApplication/CMake/bin/ctest.exe' --test-dir build-debug --output-on-failure -R '^(process_checks|smoke_enumerate|process_ops_checks|close_lifecycle_checks|sampling_recovery_checks|stale_persistence_checks)$' --no-tests=error
& 'D:/InstallApplication/CMake/bin/cmake.exe' --build build-release --target process_checks smoke_enumerate process_ops_checks close_lifecycle_checks sampling_recovery_checks stale_persistence_checks
& 'D:/InstallApplication/CMake/bin/ctest.exe' --test-dir build-release --output-on-failure -R '^(process_checks|smoke_enumerate|process_ops_checks|close_lifecycle_checks|sampling_recovery_checks|stale_persistence_checks)$' --no-tests=error
```
process_ops_checks已有真实受控终止与关键进程只读查询；归入B/独立回归运行授权，不因默认fake测试许可自动运行。构建可以先做，运行权限明确后才ctest该组。缺环境项精确blocked，不跳过假PASS。

## 7. 独立Review、人工与最终门槛

- [ ] Dev报告区分编译红灯、默认fake生产流、negative oracle、offscreen线程/3reset、真实helper/桌面、回归；每项日志/退出码/源码HEAD/EXE SHA。不规范化历史原文或继承旧ee75...产物hash。
- [ ] 限定文件提交另intent，正常hook；冻HEAD后独立Review按原票四验收逐项核对源码/实际测试和人工receipt；作者不自审，Review不自修。
- [ ] 接口所有平台默认ops不得覆盖注入；无confirmbool捷径；生产snap/identity值捕获/异步shutdown不退化；fixture fake不能误调用真实ops；检查超时仍安全收束，不terminate线程。
- [ ] 人工cancel/confirm/exited实际结果与维护者确认绑定固定SHA/EXE；没做真实PID复用记录未测，不假称物理完整复现。若生产路径变化使旧人工观察无效，重验。
- [ ] #17共享写域直到本票Dev冻结；若#17后改模型/刷新/安全路径，集成定向回归与必要专项重验。#8文档发布可并行但merge/main同步由Product串行放行，fresh main变化重核。
- [ ] 技术与人工全部门槛完成后Product才accepted并给IssueWriter固定SHA发布放行；required CI/审批/无冲突/未解决线程/真实merge核对按团队合同，#13第四项未闭环保持OPEN，不以研究或技术报告关闭。

## 8. 风险、未测与批准待办

本轮未构建/运行测试/app/helper、未创建进程/终止/网络/安装/写环境/GitHub/Git，未复验旧Review；实际模态刷新/线程/取消/退出/真实桌面仍未测。现值冻结源码已存在不等于本票动态已验收；fake只验证生产调用绑定，不替代Windows真实PID重用或安全终止边界。

用户需批准本计划最小三参接口、Windows测试目标/预算、A fake/offscreen运行与B真实受控helper/人工/回归各权限。如新增测试入口、改变验收或生产修复范围，另版本/SHA并重新审批，不覆写本v1。优先级导航和Product设计反馈不能自批。
