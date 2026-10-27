# Issue #16 独立审查记录（Review）

日期：2026-10-27。审查会话：TMOG-review-stateful-truffle（原 TMOG-review，改名失败会话延续）。
对象：worktree `E:/Git/TMOG-Public-WorkTree/issue-16-sampling-recovery`，分支 `issue-16-sampling-recovery`，基线 `246be01`。
**审查 HEAD：`4ae661e`（4ae661e3d136aacb16474d1e52a5c20398878705），提交链 246be01 → 6a31a7a → 13d4f0f → 2a81b51 → 8024d46 → 2162ad5（审查记录）→ 4ae661e（G5）**（§1–§4 证据产生于 2a81b51/8024d46 源码；8024d46 仅改文档；2162ad5 仅审查记录；§5 G5 独立复跑覆盖 4ae661e 全部源码变更）。
方法：不靠记忆、不复用开发者构建产物；全部证据独立重建。证据分层：**[源码]**=静态核对、**[运行-Worker层]**=SamplingWorker/worker 层真实 QThread 执行、**[未执行-GUI]**=MainWindow 交互路径无运行事件证据。

## 1. 独立构建与自动检查（两配置）

构建目录 `review-16-dbg` / `review-16-rel`（独立于开发者 build-16*，不覆盖其指纹）。工具链只读核查先行：`Qt6Core.dll`、`g++.exe`、`ninja.exe` 实测存在后构建，无静默跳过。

```
cmake -S . -B review-16-{dbg|rel} -G Ninja -DCMAKE_BUILD_TYPE={Debug|Release} \
  -DCMAKE_PREFIX_PATH=E:/InstallApplication/Qt/6.12.0/mingw_64 ...
cmake --build review-16-{dbg|rel}
ctest --test-dir review-16-{dbg|rel} --output-on-failure
```

结果：两配置均 **5/5 通过**（process_checks / smoke_enumerate / process_ops_checks / close_lifecycle_checks 11.6s / sampling_recovery_checks 1.8s）。sampling_recovery_checks 逐项输出 C1–C5 共 12 断言全 PASS（Debug 独立提取复核）。

## 2. 负例注入（检查有效性验证）

独立程序 `review_negative_checks.cpp`（存审查会话作业目录，不进树），**直接链接生产 `src/SamplingWorker.cpp` + moc**（非复制、非 mock 框架），g++ 手工编译运行：

- **N1**：毒载荷枚举器返回 `ok=false` 且填充一条 pid=777 进程数据（"半帧当成功"攻击面）→ 生产 Bridge 拦截，`done` 未触发。证明 C1 的阻断在生产代码路径上真实成立。
- **N3**：脚本 1 失败+1 成功 → 回调计数恰为 failed=1/done=1。证明 C3 的计数断言跟踪真实投递而非硬编码常量。

结果：`review-negative-checks: ALL PASS`（exit=0）。

## 3. GUI 冒烟（review 独立构建 Release）

`review-16-rel/TmogReplica.exe`（249.3K）启动 6 秒存活 → 绑实测 PID/句柄终止 → 干净退出，`tasklist` 确认无 TmogReplica 残留。仅证明生产路径启动加载不崩溃（含 1/sec 采样循环、代际捕获回调、失败分支接线全部加载），**不是**交互验收。

## 4. 五项重点独立核实（标注证据层）

1. **API 失败完整链**：[源码] `WindowsProcesses.cpp` take_sample 三处失败分支（Snapshot 失败/First 非 NO_MORE_FILES/Next 非 NO_MORE_FILES）均 `ok=false`+错误描述，半帧不标成功；`GetLastError()` 时序核查无污染；[源码] Bridge `result && result->ok` 分别判定；[运行-Worker层] C1/C2/N1 真实 QThread 执行经生产 Bridge::run 拦截（含毒载荷半帧数据）；[源码] MainWindow failed 回调保留数据+作废基线+状态栏 5s 错误、恢复帧"已恢复"3s。静态真 API 失败处理与注入检查区分清楚。**Win32 枚举器内部错误的注入式运行证据缺口如实保留**（§G3）。
2. **代际拒绝**：[运行-Worker层] C5 在真实 QThread/事件循环驱动在途结果到达并断言拒绝；[源码] `start_sample` 捕获代际、回调比对丢弃，`on_pause_toggled(paused)` `++sample_generation_`。**MainWindow 成员级接线为静态核对**（C5 是测试内同构复制，开发者已如实声明）；快速暂停→恢复交互路径 [未执行-GUI] 待人工。
3. **busy 与暂停手动刷新**：[运行-Worker层] C4 证明 worker 层不叠加；[源码] `on_refresh_now` closing→忽略、busy→状态栏反馈不重入、暂停照采且 `paused_` 不动，`start_sample`/worker 内二级三级防线。MainWindow 层忙碌反馈 [未执行-GUI] 待人工。
4. **异步 terminate 收束**：[源码] 身份按值冻结（`const ProcessSnapshot snap = row->snapshot;` + lambda 值捕获 identity，PID 复用防御由平台层创建时间核实承接）；kill 线程单飞；完成经 QueuedConnection 回 UI；finished 清指针+deleteLater；析构防御 wait(4000)；closeEvent 先 worker shutdown(2000) 再 kill_thread_ wait(4000)，超时拒绝关闭+timer 重启。[源码] 线程化路径真实（terminate 不占 UI 线程）；**UI 响应性真实事件证据 [未执行-GUI] 待人工**。测试未结束真实关键进程（process_ops_checks 用自建 victim，[运行-Worker层]）。轻微残余：`~MainWindow` 防御 wait 超时仍析构的理论悬空窗口，仅构造后未经 closeEvent 直接销毁可达，注释已声明，不阻塞。
5. **#14/#5 回归**：[运行-Worker层] close_lifecycle_checks A–G（含 F6b、G 组 >2s）两配置独立复跑全过，本票仅适配 FailedFn 签名（加 error 参数）语义未动；Debug/Release 两配置显式构建 5/5 即 #5 回归证据。

## 5. 发现的问题

### G1（已修复，本轮复验通过）：行为矩阵同步
原发现：票面验收项 3 要求"对应行为矩阵同步"，增量只写在验收文档 §5，正式 `issue-1-behavior-matrix.md` 在 246be01..2a81b51 零变更。
开发者补交 **8024d46**（追加 commit，未 amend）：暂停条目补代际作废/基线重建语义、End task/Refresh 条目补值拷贝与工作线程终止决策、新增 §3.1 四状态×手动刷新矩阵 + 失败语义段（假零阻断、代际丢弃、恢复反馈、**Process32FirstW/NextW 错误码合同**）。与验收文档 §5 一致且更完整。[源码] 复验：矩阵各条与实际代码行为逐条对应（`on_refresh_now` 四分支、暂停代际、值拷贝、错误码合同均与 §4 核实一致）。**G1 闭环。**

### G2（整票阻塞项）：GUI 交互验收未执行
暂停可见反馈/快速恢复整表重建/忙碌反馈/结束等待拖窗响应 4 项为人工交互验收项，[未执行-GUI]。**整票 PASS 前提**，见 §7 人工点验指引。

### G3（记录性，不阻塞）：Win32 注入缺口如实标注
枚举器 First/Next 错误码分支无注入式运行证据（静态核对 + N1 的 Bridge 层毒载荷注入覆盖拦截面）。开发者未以"票面禁止钩子"推脱；本审查认可静态核对+Bridge 层负例为当前充分证据，不要求引入 detour/mock 框架。

### G4（已修复——G5 复验闭环）
票面实现边界："失败保留上次数据并**标陈旧**"。首轮评估"toast 每秒刷新不过期"论证有边界错误（协调者纠正，在案）：该论证假设失败回调及时到达——worker 挂起/查询迟缓时无新回调，toast 5s 过期，旧表失去陈旧提示；"瞬态 ~1s 替换"同样假设下一成功及时到达。原实现确无持久陈旧状态，不满足合同，Technical PASS 曾据此撤回。

### G5（已修复，本轮独立复验通过）：持久陈旧状态
开发者补交 **4ae661e**（追加 commit，基于 2162ad5），[源码]+[运行-GUI离屏] 复验：
- **实现**：状态栏持久 `QLabel`（`QStatusBar::addPermanentWidget`——不被临时 `showMessage` 隐藏/覆盖，满足"短时 busy 提示不得覆盖持久状态"）；失败置"数据已陈旧（采样失败：<错误>）"，**当前代际真实成功帧立即清除**（无延时 timer，消除延时回调误清后续新失败的竞态）；旧代际成功帧经代际守卫丢弃、不清除陈旧。构造函数 `enumerator_override` 仅检查注入用，生产路径默认值不受影响。
- **检查 C6**（`tests/stale_persistence_checks.cpp` 新增）：离屏**真实 MainWindow**（与 TmogReplica 同源编译，非镜像复制）+ 生产 SamplingWorker + 受控枚举器 Hang 步真实阻塞。**D1 实测推进 ≥5s（steady_clock 测量）**无回调断言陈旧仍在——满足"禁止假定 1 秒回调"要求；D2 busy 临时消息期间持久 widget 可见；D3 暂停窗口内释放旧代际成功帧不清除（暂停中 tick 不起帧，时序确定）；D4 当前代际真实新样本清除。取值走 widget text/visible 呈现路径，非布尔镜像。
- **独立复跑**（review-16-dbg/rel 重建，qoffscreen.dll 手动补入）：两配置 **6/6 ctest 全过**（含既有 5 项无回归），C6 逐项 9 断言 Debug 独立提取全 PASS。G5 后 GUI 冒烟 6s 存活、干净退出、无残留。
- **如实标注**（开发者）：C6 为离屏运行检查，不充当物理桌面视觉验收（人工清单保留）；qoffscreen.dll 不被 windeployqt 部署、缺失时检查静默挂起（已定位并记录验收 §9.3）；首版 D3 FAIL 为检查时序竞争非产品缺陷。
- **文档同步**：验收 §5（G5 修订语义）+ 新 §9、行为矩阵 §3.1 失败语义段均已更新一致。

**G4/G5 闭环，Technical PASS 条件解除（见 §6）。**

### #13 关系确认
#16 按值捕获与 #13 代码重叠属实（消除模态框期间模型重分配悬空引用），#13 分支/检查/人工验收确未带入本树，#13 保持 OPEN，安全拷贝不回退。开发者表述与实际一致。

## 6. 结论

**Technical PASS（对 HEAD `4ae661e`）**。G1（8024d46 行为矩阵同步）、G4/G5（4ae661e 持久陈旧标注）均复验闭环。证据分层：[源码]/[运行-Worker层]/[运行-GUI离屏]/[未执行-GUI]——1/2/5 的运行证据在 Worker 层；C6（G5）为离屏真实 MainWindow 运行证据（生产呈现路径、实测时间推进）；2/3/4 的物理桌面交互部分为静态核对 + 离屏检查，真实桌面事件证据依赖 §7 人工点验。**不称全部五项运行证据齐备**。

**整票 PASS 前提**：§7 人工交互点验通过（协调者安排，用户执行）。未验期间不集成、不关票。

未验证范围：MainWindow GUI 交互真实事件（G2，§7 待人工）；真实 Win32 API 失败注入运行证据（G3，记录性）；Linux/macOS（票面范围外）。

## 7. 人工交互点验指引（用户执行，G2）

产物（真实路径与指纹，均含 windeployqt 便携依赖目录，可直接双击运行；**均为 G5 后 HEAD 4ae661e 源码构建**）：

| 产物 | 路径 | SHA-256 |
|---|---|---|
| Review 独立构建 Release（推荐） | `E:\Git\TMOG-Public-WorkTree\issue-16-sampling-recovery\review-16-rel\TmogReplica.exe` | `26d9e15f6e6122e26bac53fb4d20f1ed654205325ff65d8d264257ea1ec0e9dc` |
| 开发者构建 Release | `E:\Git\TMOG-Public-WorkTree\issue-16-sampling-recovery\build-16\TmogReplica.exe` | （开发者构建，未复核 G5 后指纹；如使用请先 `certutil -hashfile ... SHA256` 比对） |

点验步骤（每项通过打勾，异常记截图；**步骤 3/5/8 按 G2 纠正修正**）：
1. **启动**：双击 TmogReplica.exe，确认表格 1 秒内出现进程列表、CPU/内存列有真实值（全"待采样"→ 1s 后出现数值）。
2. **暂停反馈**：点工具栏"暂停"→ 表格停止刷新；再点恢复 → 整表短暂"待采样"后重建（旧数据不闪现为当前）。
3. **快速暂停→恢复**：暂停后立即（1 秒内）恢复 → 表格不出现暂停前的旧差分数据，直接"待采样"重建。
4. **暂停中刷新**：暂停状态下点"刷新"→ 表格更新一次，暂停态保持（表格不再自动刷新）。
5. **忙碌反馈**：正常状态快速连点"刷新"→ 状态栏出现"正在采样，请稍候…"，且该短时提示**不覆盖/不清除**任何持久失败/陈旧状态（与 G5 修复联动验证）。
6. **失败反馈**（不做以 Worker 层证据为准；无安全手段在不提权下稳定触发枚举失败，跳过不影响 G2 验收）。
7. **结束任务与等待期响应**：选中一个**自建的无关进程**（**禁止选系统关键进程**；普通目标确认后通常立即退出，不产生 3s 等待——正常）→ 点"结束任务"→ 确认 → 结果反馈正常、目标进程消失。**等待期响应性（本步骤不能证明）**：正常目标立即退出时无等待期，拖窗流畅无法验证；响应性证据依赖 C 组工作线程真实耗时（process_ops_checks 自建 victim 的 terminate 等待 [运行-Worker层]）或后续受控延迟场景，点验时如实记录实际耗时。
   - Notepad 归属提醒：单实例记事本可能属于其他会话/受保护上下文，操作前在表格中核实该行 PID 与任务管理器一致、确认为用户自己启动的实例；若结束被拒绝（系统关键/身份变化/拒绝访问），该拒绝本身即安全合同正确表现，如实记录即可。
8. **关窗收束**：直接关窗 → 窗口立即关闭无卡死（如恰有结束操作在途，最多等 4 秒）。

点验 1–5、7、8 通过 → 协调者可判定整票 PASS 进入集成（G5 复验已闭环于审查记录 §5）。
