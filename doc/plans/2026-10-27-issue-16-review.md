# Issue #16 独立审查记录（Review）

日期：2026-10-27。审查会话：TMOG-review-stateful-truffle（原 TMOG-review，改名失败会话延续）。
对象：worktree `E:/Git/TMOG-Public-WorkTree/issue-16-sampling-recovery`，分支 `issue-16-sampling-recovery`，基线 `246be01`。
**审查 HEAD：`8024d46`（8024d46524457e7a0bf8f56afc91f3f8aff26d45），提交链 246be01 → 6a31a7a → 13d4f0f → 2a81b51 → 8024d46**（§1–§4 证据产生于 2a81b51；G1 补交 8024d46 仅改行为矩阵文档，未触任何源码/测试，§1–§4 证据对该 HEAD 继续有效）。
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

### G4（改判——本审查首轮评估有误，协调者纠正）：陈旧状态非持久，违反票面合同
票面实现边界："失败保留上次数据并**标陈旧**"。首轮评估称"持续失败期 toast 每秒刷新不过期，瞬态失败 ~1s 被新帧替换，可接受，行级 Stale 属 YAGNI"——**该论证有边界错误**：
- "每秒重试重新 showMessage" 只在后续 tick 的失败回调**及时到达**时成立。若下一 worker 挂起/查询迟缓（take_sample 迟迟不返回），没有新失败回调，toast 5s 后过期，旧表完全失去陈旧提示，看似当前数据。
- "瞬态失败 ~1s 被替换" 同样假定下一采样成功及时到达；失败后连续无结果时窗口无限延长。
- 这不是可用 YAGNI 跳过的额外行级抽象，是票面合同"失败保留旧数据**明确陈旧**"的直接要求。
[源码] 现状：无任何持久陈旧状态（状态列 ProcessStatus 无 Stale 值、状态栏消息全部限时）。**判定：不满足票面合同，Technical PASS 相应撤回（见 §6）。**
最低修复要求（已退回开发者，G5）：失败/陈旧状态**持续显示直到真实新样本成功**再清除；短时 busy 等临时提示不得覆盖持久状态；附检查"失败→超 5 秒无结果→仍标陈旧→真实恢复清除"，禁止用"假定 1 秒回调到达"代替时间推进证据。

### G5（新增，阻塞 Technical PASS）：持久陈旧状态最小修复
内容即 G4 最低修复要求：MainWindow 持久陈旧/失败状态（实现方式由开发者定，不要求每行 Stale 徽标；如用状态栏需解决临时消息覆盖问题），加检查 C6：注入失败后**实测推进超 5 秒无任何回调**，断言陈旧提示仍在；真实成功帧到达后断言清除。

### #13 关系确认
#16 按值捕获与 #13 代码重叠属实（消除模态框期间模型重分配悬空引用），#13 分支/检查/人工验收确未带入本树，#13 保持 OPEN，安全拷贝不回退。开发者表述与实际一致。

## 6. 结论

**Technical PASS 撤回（G4/G5）→ 待修复复验**。G1 已闭环（8024d46）；G4 改判：现有实现无持久陈旧状态，不满足票面"失败保留旧数据并标陈旧"合同（首轮"toast 每秒刷新"论证错误假设失败回调及时到达，协调者纠正，本审查记录在案）。等开发者 G5 最小修复（持久陈旧状态直到真实新样本成功 + C6 超时检查）后针对新 commit 复验。

证据分层不变：[源码]/[运行-Worker层]/[未执行-GUI]——1/2/5 的运行证据在 Worker 层；2/3/4 的 MainWindow 交互部分为静态核对；GUI 真实事件证据依赖 §7 人工点验。

**整票 PASS 前提**：① G5 修复复验通过；② §7 人工交互点验通过。两项未齐不集成、不关票。

未验证范围：MainWindow GUI 交互真实事件（G2，§7 待人工）；真实 Win32 API 失败注入运行证据（G3，记录性）；Linux/macOS（票面范围外）。

## 7. 人工交互点验指引（用户执行，G2）

产物（真实路径与指纹，均含 windeployqt 便携依赖目录，可直接双击运行；**注意：下表为 8024d46 产物，G5 修复合入后需用新 commit 重建的点验产物替换，届时更新指纹**）：

| 产物 | 路径 | SHA-256 |
|---|---|---|
| Review 独立构建 Release | `E:\Git\TMOG-Public-WorkTree\issue-16-sampling-recovery\review-16-rel\TmogReplica.exe` | `de5f800ffba753b3ef289747dde0a23352332a13e86cd58f4fff846ac4adf4ca` |
| 开发者构建 Release | `E:\Git\TMOG-Public-WorkTree\issue-16-sampling-recovery\build-16\TmogReplica.exe` | `a4eaa63fa93a0a50e362e97227ce387402fc818bc7d540562b638b7813a7844b` |

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

点验 1–5、7、8 通过 + G5 复验通过 → 协调者可判定整票 PASS 进入集成。
