# Issue #14 验收记录：关闭窗口收束后台采样生命周期

日期：2026-10-27 ｜ 分支：`issue-14-close-lifecycle`（基线 main `767553a`，不含 #13 未验收改动）｜ 环境：Windows 11 Pro 10.0.26200，MinGW 13.1.0（Qt Tools）/ Ninja / CMake 3.31.2 / Qt 6.12

**修订 v2**（集成暂停后按协调者/Review 质疑补验）：新增 >2s 用例（F/G 组，2500/3000ms）与失败恢复语义验证；修复 shutdown 失败路径 `closing_` 永久置位 bug（原"恢复 timer"实际不恢复采样）；修正注释与记录表述。检查为场景样例非穷举，未测排列不作全测声明。

## 源码核查发现的缺陷（修复前）

旧 `closeEvent`（MainWindow.cpp）三处生命周期语义缺陷：

1. **超时后伪报安全**：`wait(2000)` 失败时仍 `event->accept()` → 窗口销毁 → `enumerator_` 析构 → 在途线程 `take_sample` 仍持有 `enumerator_.get()` → **悬空引用（UAF）**。旧提示语"程序即将退出"掩盖了枚举器已随窗口析构的事实。
2. **`in_flight_` 标识不清空**：超时路径不清空；正常路径 `finished → deleteLater` 异步清理，wait 返回时（同步阻塞）清理回调尚未投递，标识滞后。
3. **迟到回调访问已销毁资源**：`closing_` 置位在 wait 之后；超时路径下线程稍后完成采样 → `done` 队列回调 → 访问已析构的窗口成员。

**第 4 处缺陷（v2 补验发现，集成暂停触发）**：初版修复的 `shutdown` 失败路径 `closing_ = true` **永久置位**（无复位），而 `start` 守卫拒绝 closing 状态——closeEvent 拒绝关闭后恢复 timer，但每秒 tick 被 worker 内部静默拒绝，**采样停摆不恢复**，"请稍后重试"承诺不成立。修复：失败路径 `closing_` 复位回运行态（窗口未销毁，迟到结果应用安全）；成功路径 closing_ 保持终态（线程已确认退出，accept 后迟到回调丢弃）。检查 A/B 断言随之修正（旧断言基于"closing 永久"的错误语义），新增 F/G 组覆盖票面 >2s 要求与恢复序列。

## 修复（src/SamplingWorker.{h,cpp} 新增 + MainWindow 改用）

生命周期抽成独立类 `SamplingWorker`（UI 解耦，可检查），语义三分离：

- **采样完成**：`done/failed` 队列回调回 owner 线程；`closing_` 时**直接丢弃**（迟到回调不访问任何已销毁资源）。
- **线程实际退出**：`shutdown(timeout)` → `quit()` + `wait(timeout)`；成功才清 `in_flight_`（wait 同步返回时 finished 队列清理尚未投递，直接清理 + finished 回调 `in_flight_==thread` 守卫防重复）；**失败不清空标识、保留枚举器所有权**。
- **资源销毁**：`shutdown` 返回 true 后调用方才可销毁枚举器。

`closeEvent` 新语义：`shutdown(2000)` 成功 → `closing_=true` + accept；**失败 → 提示"已取消关闭" + `event->ignore()` + 恢复采样循环**——不伪报已安全销毁，用户可重试。不强杀线程、不靠加长固定等待（超时即拒绝，所有权保证代替时间赌注）。`on_sample_tick` 简化为 `worker_.start(...)`（busy/closing 由 worker 内部拒绝重叠与关闭期采样）。

## 受控生命周期检查（新增 tests/close_lifecycle_checks.cpp，CMake `close_lifecycle_checks`，需 Qt Core）

注入 `SlowEnumerator`（take_sample 内 `QThread::msleep`，**sleep 注入非生产系统慢载荷**）。**以下为场景样例，非穷举**：

| 组 | 验证 |
|---|---|
| A | 1.5s 慢枚举在途时 `shutdown(100ms)` 返回 **false**（不伪报安全），`busy()` 仍 true（所有权保留）；失败后 `closing_` 复位（可恢复）；迟到结果在恢复运行态下安全应用（窗口未销毁）；线程随后自然退出（不强杀） |
| C | `shutdown(5000)` 确认线程实际退出返回 true，状态清空，枚举器此后析构无悬空 |
| D | 正常完成顺序：恰好一次 done 回调；完成后 shutdown 立即成功；closing 终态下 start 被拒绝 |
| **F（>2s 票面用例）** | **2500ms** 慢枚举完整序列：`shutdown(300ms)` false → 所有权保留 → `closing_` 自动复位 → 线程自然 finished（finished 队列清理与旧 queued 结果交错，守卫防错清）→ 迟到结果安全应用 → **重新 start 实际接受** → **F6b：第二次 take_sample 真实完成且第二个 done 已投递**（SlowEnumerator 递增唯一序号放进结果，断言收到 seq==2 而非旧 seq==1，排除旧结果冒充；8s deadline 超时即失败）→ 再次 `shutdown(8000)` 成功（closing 终态、busy 清空） |
| **G（>2s 票面用例）** | **3000ms** 慢枚举 + 充足超时一次收束成功、状态清空 |

**检查两次驱动出修复**：首跑暴露缺陷 2（wait 同步/队列清理时序）；v2 首跑暴露缺陷 4（closing 永久置位 → F8 初版断言按错误语义写，修正实现后按正确语义断言通过）。

## 检查命令与实际结果

构建：`build/`（Release）、`build-debug/`（Debug，需 `-DCMAKE_PREFIX_PATH` 指向 Qt）。

- **Release**：close_lifecycle_checks **ALL PASS(22)** / process_checks ALL PASS(16) / process_ops_checks ALL PASS(10) / smoke PASS，全 0 error
- **Debug**：四检查同 ALL PASS / PASS
- #5 检查全部保留并通过

## 正常 GUI 关窗证据

本会话桌面焦点被外部工具托管（#13 已记录），鼠标点击不可靠；改用 **WM_CLOSE 消息**——与用户点标题栏 X 走完全相同的 `closeEvent` 路径（Qt 将其转为 QCloseEvent），不依赖桌面焦点：

- GUI 正常采样 4 秒后 `PostMessageW(WM_CLOSE)` → 进程 3 秒内干净退出（exit code 0）
- 窗口可见后 0/500/1500/2600ms 四组时序（覆盖首采样在途、多次刷新、空闲交错）各启一个 GUI 实例 → WM_CLOSE → **全部 `exit=0` 干净退出**，无挂起（10s 超时守卫未触发）
- 全部实例为本会话启动的自建 GUI 进程，退出即无残留；`ping -n 600` 特征残留 0

## 安全边界

- 慢载荷为检查进程内的 sleep 注入，未对生产系统施加负载；未强杀任何线程；未触碰外部进程（含 Orca）。
- GUI 关窗验证的对象全部是本会话 `Popen` 启动并持有句柄的 TmogReplica 实例，HUNG 时 kill 的也是自建实例。
- 未对真实关键进程做任何操作。

## 未验证项 / 限制

- 真实鼠标点击标题栏 X 与 WM_CLOSE 在 Qt 事件层的等价性依据为 Qt 文档行为（WM_CLOSE → QCloseEvent → closeEvent）；本会话无可靠桌面焦点无法用真实点击复证。如维护者人工点验，双击运行后直接点 X 即可，预期行为：立即退出、无警告框（正常 <2s 采样收束）。
- MSVC 工具链（属 #15）。
- #16 的采样失败/错误语义未动；#13 的确认框实现未改（本分支不含 #13 改动）。
