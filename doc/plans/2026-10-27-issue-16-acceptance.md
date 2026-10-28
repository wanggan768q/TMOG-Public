# Issue #16 验收记录

日期：2026-10-27。执行会话：TMOG-dev-snoopy-wozniak [f0fbd5]。
Worktree：`E:/Git/TMOG-Public-WorkTree/issue-16-sampling-recovery`，分支 `issue-16-sampling-recovery`，基线 `origin/main@246be01`（246be01fd8298b2e257a40e0fcd3224e45c963f4）。
计划文档：`doc/plans/2026-10-27-issue-16-sampling-recovery.md`。

## 1. 构建（Debug + Release）

环境：Windows 11 Pro 10.0.26200；MinGW 13.10（E:/InstallApplication/Qt/Tools/mingw1310_64）；Ninja；Qt 6.12.0（E:/InstallApplication/Qt/6.12.0/mingw_64）；CMake 3.x（D:/InstallApplication/CMake）。

命令（两配置同型，build-16-debug=Debug，build-16=Release）：

```
cmake -S . -B build-16-debug -G Ninja -DCMAKE_BUILD_TYPE=Debug \
  -DCMAKE_PREFIX_PATH=E:/InstallApplication/Qt/6.12.0/mingw_64
cmake --build build-16-debug
```

结果：两配置全部目标（tmog_core、process_checks、smoke_enumerate、process_ops_checks、close_lifecycle_checks、sampling_recovery_checks、TmogReplica）编译链接成功，无错误。Release 附带 windeployqt 便携目录。

## 2. 自动行为检查（真实 QThread/事件循环运行证据）

命令：`ctest --output-on-failure`（两配置 build 目录内执行）。

Debug 结果：

```
1/5 Test #1: process_checks ...................   Passed    0.03 sec
2/5 Test #2: smoke_enumerate ..................   Passed    0.39 sec
3/5 Test #3: process_ops_checks ...............   Passed    0.16 sec
4/5 Test #4: close_lifecycle_checks ...........   Passed   11.62 sec
5/5 Test #5: sampling_recovery_checks .........   Passed    1.81 sec
100% tests passed, 0 tests failed out of 5
```

Release 结果：同 5/5 全绿（sampling_recovery_checks 1.82 sec）。

新增 `tests/sampling_recovery_checks.cpp` 覆盖（受控 ScriptedEnumerator 注入）：

| 检查 | 验证内容 | 对应票面 |
|---|---|---|
| C1 | `ok=false` 快照 → failed 带错误描述，done 不触发（假成功阻断，错误快照不进差分） | 结果存在+成功标志分别检查 |
| C2 | take_sample 返回 nullopt（枚举异常）→ failed 回调 | 同上 |
| C3 | 失败后重试：恰一次失败+一次成功，恢复成功携带新样本（唯一序号 seq==2 非旧 seq==1） | 恢复重建基线 |
| C4 | 在途时再次 start 不叠加 worker（忙碌不重入 worker 层防线） | 忙碌不重入 |
| C5 | 代际递增后迟到在途结果被拒绝（跨暂停旧结果丢弃，与 MainWindow 代际逻辑同构） | 采样代际 |

既有 #14 检查（close_lifecycle_checks A–G）全数通过：收束/超时/恢复合同未被本票破坏。

## 3. 生产 GUI 证据（生产 MainWindow 路径）

Release `TmogReplica.exe`（244.3K，windeployqt 便携目录 build-16/）启动冒烟：

```
SMOKE: alive after 6s (pid 972)
SMOKE: terminated cleanly
```

生产路径启动成功、运行期无崩溃（含 1/sec 采样循环、代际捕获回调、失败分支接线全部加载）。

> 证据边界：GUI 冒烟（存活 5–6s）仅证明启动与加载不崩溃，**不是**暂停/刷新/结束等待的交互验收（见 §4 待人工清单）。冒烟进程清理须持本次创建的进程句柄/创建身份，仅裸 PID 不可靠（PID 可复用）；首轮冒烟曾按 ps 输出 PID 终止未命中、次轮按 Get-Process 实测 PID 终止，后续清理一律绑定本次启动实测身份执行。

## 4. 人工交互验收（未验证，如实标注）

本执行会话为后台任务，无 GUI 交互输入能力。以下项**待人工验收**，不以静态/自动检查冒充：

- [ ] 状态栏"采样失败：…（保留上次数据）"实际可见（可用暂停外手段触发枚举失败验证，或 Review 认可 C1/C2 worker 层证据）。
- [ ] 暂停→快速恢复：表格显示"待采样"整表重建、旧数据不闪现（C5 为同构逻辑层证据）。
- [ ] 暂停中点刷新：采一次、保持暂停态。
- [ ] 忙碌连点刷新：状态栏"正在采样，请稍候…"。
- [ ] 结束进程确认后 3s 等待期间拖动窗口保持响应（代码路径：terminate 在 QThread::create 工作线程）。

演示路径：`E:/Git/TMOG-Public-WorkTree/issue-16-sampling-recovery/build-16/TmogReplica.exe`。

## 5. 行为矩阵增量（补记 issue-1-behavior-matrix.md §3）

| 状态 | 手动刷新 | 定时采样 |
|---|---|---|
| 运行+空闲 | 立即采样，正常差分 | 正常 |
| 运行+忙碌 | 拒绝重入，状态栏反馈 | 不启动（worker 忙） |
| 暂停+空闲 | 采一次并显示，保持暂停 | 不启动 |
| 暂停+忙碌 | 拒绝重入，状态栏反馈 | — |
| 关闭中 | 忽略 | 不启动 |

失败语义（G5 修订，替代早期"5s toast"语义）：失败帧保留上次数据（模型不动）+ **状态栏持久 widget 标注"数据已陈旧（采样失败：<错误>）"**（`QStatusBar::addPermanentWidget`，不被 busy/"正在结束进程…"等临时 showMessage 隐藏），**持续到当前代际真实成功帧清除**——worker 迟缓/挂起时标注不消失，旧表不冒充当前数据。旧代际成功帧不清除陈旧（代际守卫）；恢复成功帧立即清除陈旧，**无"恢复3秒"延时 timer**（避免延时回调误清后续新失败的竞态，协调者确认的简化）。暂停/恢复均作废基线；暂停额外递增代际使在途结果作废。

## 6. 支持限制

- Windows only（票面范围）；Linux/macOS 不在本票。
- **#13 关系澄清**（修正早期交付报告"要点4修UAF vs 要点5未实现#13"的表述矛盾）：本票为结束操作异步化所做的**按值捕获**（`on_end_task` 中 `const ProcessSnapshot snap = row->snapshot;`、kill lambda 值捕获 identity）与 #13 按值冻结存在**代码技术重叠**——两者都是消除模型行引用生命周期的值语义拷贝。但 #13 的修复、检查与人工验收**未在本票交付**：#13 分支未合入本树、其检查套件未运行、其 GUI 验收未执行。**#13 保持 OPEN**，冲突由协调者处理；本票安全拷贝不回退。
- 枚举器内部 API 失败路径（见 §8）已修复；真实 Win32 API 失败的**注入式检查本票未交付**（未引入 mock/detour 手段；不引入通用框架不等于无法做受控错误检查）：证据为静态代码核对（§8 行号）+ 正常路径 smoke_enumerate 运行通过，**未注入、不伪称已注入**；最小可验证方式由 Review 决定。
- kill 线程收束：closeEvent 等待 ≤4s，超时拒绝关闭（与 #14 拒绝关闭合同一致）；无强杀。

## 7. 变更清单

- `src/SamplingWorker.{h,cpp}`：ok 检查下移（optional+ok 分别判定）、失败信号带错误描述。
- `src/MainWindow.{h,cpp}`：start_sample 代际捕获+回调比对；失败反馈+基线作废+恢复提示；on_refresh_now 暂停采一次/忙碌反馈/关闭忽略；on_end_task 值拷贝身份+terminate 工作线程化+kill_thread_ 收束；closeEvent kill 线程有限等待；析构防御等待。
- `tests/sampling_recovery_checks.cpp` 新增；`tests/close_lifecycle_checks.cpp` 失败回调签名适配；`CMakeLists.txt` 注册新检查。
- `doc/plans/2026-10-27-issue-16-sampling-recovery.md`（计划）+ 本文件（验收）。

## 8. 补验（协调者同票反馈，2026-10-27 第二轮）

### 8.1 枚举器 API 失败静默假成功缺口（已修复）

协调者指出：Bridge 的 ok 检查只能拦截枚举器如实上报的失败；`WindowsProcessEnumerator::take_sample` 自身无条件标 `ok=true`，`Process32FirstW/NextW` 真失败时半帧/空列表照样假成功 → 表格清空假零。静态核对确认属实（原 `src/platform/WindowsProcesses.cpp:47-77`：无失败分支）。

修复（同文件）：

- `Process32NextW` 返回 FALSE 时按 `GetLastError()` 区分：`ERROR_NO_MORE_FILES` = 正常枚举终止（标成功）；其他错误码 = 真失败，`ok=false` + 错误描述，丢弃半帧（不进入差分）。
- `Process32FirstW` 失败同理区分：`ERROR_NO_MORE_FILES`（API 对空快照的正常回答）如实返回空列表标成功；其他错误码 `ok=false`。

证据边界（如实标注）：真实 Win32 枚举 API 失败的**注入式检查本票未交付**（未引入 mock/detour 手段；不引入通用框架不等于无法做受控错误检查，最小可验证方式由 Review 决定）；本轮证据 = 静态代码核对（错误码分支 + ok 语义）+ 正常路径 `smoke_enumerate` 运行通过（失败分支不影响正常枚举）。**未注入、不伪称已注入。**

### 8.2 #13 表述矛盾澄清（记录修正，无代码变更）

见 §6"#13 关系澄清"：按值捕获为 #16 异步操作所必需（修模态框期间 `replace_snapshot` 重分配导致的悬空引用），与 #13 修复代码重叠但 #13 分支/检查/验收未在本票交付，#13 保持 OPEN。

## 9. G5 修复：持久陈旧标注（审查记录 2162ad5 同票门槛，2026-10-27 第三轮）

### 9.1 实现变更

- `MainWindow`：状态栏新增持久 `QLabel`（`addPermanentWidget`）。失败回调置"数据已陈旧（采样失败：<错误>）"并显示；**当前代际真实成功帧立即清除**（无延时 timer）。临时消息（busy "正在采样，请稍候…"、"正在结束进程…"）走 `showMessage`，不隐藏/覆盖持久 widget。
- 移除早期"采样已恢复 3s"toast（协调者确认简化：真实成功即清陈旧，避免延时回调误清后续新失败）。
- `MainWindow` 构造函数新增 `enumerator_override` 参数（仅检查注入用；生产路径默认值不受影响）。
- 复查遗留：G5 前的失败 toast（5s showMessage）已整体替换为持久标注。

### 9.2 运行检查 C6（`tests/stale_persistence_checks.cpp`，新增）

离屏**真实 MainWindow**（`QT_QPA_PLATFORM=offscreen`，ctest 环境注入）+ **生产 SamplingWorker** + 受控枚举器注入（Hang 步真实阻塞，时间由检查主线程实测推进）——走生产状态呈现路径（widget text/visible 属性），非静态布尔模拟。Debug+Release 均通过：

```
PASS: D1: stale label exists in status bar
PASS: D1: stale annotation visible right after failure
PASS: D1: real time advanced >=5s (measured)          ← 实测推进≥5s（真实时间）
PASS: D1: stale still visible after >5s with no callback (persistent)
PASS: D2: permanent stale widget visible during busy temp message
PASS: D3: stale visible after failure
PASS: D3: pause action found (production path)
PASS: D3: stale NOT cleared by out-of-generation success  ← 暂停窗口释放旧代际帧（时序确定）
PASS: D4: stale cleared by current-generation real success (no timer)
```

ctest 全套：Debug 6/6、Release 6/6 通过（新增 stale_persistence_checks；既有 5 项无回归）。

### 9.3 证据边界与已知事项

- C6 为**离屏运行检查**（真实 MainWindow/SamplingWorker/事件循环/真实时间推进），不充当**物理桌面视觉验收**——状态栏标注的人工视觉确认仍在 §4 人工清单。
- 检查启动依赖 `qoffscreen.dll`：该插件由 windeployqt 为 TmogReplica 部署时未包含（仅 windows 插件），构建后需复制 `Qt/6.12.0/mingw_64/plugins/platforms/qoffscreen.dll` 到构建目录 `platforms/`（本次 Debug/Release 均已手动复制；缺失时进程静默挂起——已在开发过程如实定位）。
- 早期 D3 首版 FAIL 原因（记录）：旧代际成功帧与恢复后当前代际帧的投递时序竞争；修正为"暂停窗口内释放旧代际帧"（暂停中 tick 不起帧，断言窗口无当前代际成功）——非产品缺陷，检查时序设计问题。

## 10. 维护者桌面验收完成（2026-10-28）

维护者在本协调会话明确回报：**“7条全部验收通过”**。对应此前提供的 G5 修复后 Review Release 产物及七项安全点验：

1. 启动后进程列表与 CPU／内存正常出现。
2. 暂停停止刷新；恢复重建采样基线。
3. 快速暂停／恢复无崩溃、不把暂停前结果冒充当前值。
4. 暂停中手动刷新一次，仍保持暂停。
5. 连续刷新保持响应，忙碌反馈不产生重复采样。
6. 自建、归属明确且无重要数据目标的取消／确认结束行为正常；禁止系统关键进程实验。
7. 正常关窗安全退出，无卡死或残留窗口。

证据来源为**维护者人工验收回报**，不是协调者或开发者重新运行。未提供逐项截图、详细耗时或机器规格，不虚构附加证据。正常目标立即退出的点验不证明 3 秒等待场景；持久陈旧标注超过 5 秒及旧代际保护另由 Review 独立离屏检查证明。原 §4 的桌面人工待验状态按此回报闭环，其余已声明的特殊环境／测试局限保留。

结合 `95eaf92` 审查记录对 `4ae661e` 技术复验通过，#16 的技术与所列桌面验收门槛已满足，可按维护者持续授权集成。#13 的独立确认框跨刷新验收未由本回报覆盖，仍保留原议题状态。
