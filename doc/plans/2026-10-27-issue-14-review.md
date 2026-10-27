# Issue #14 审查记录（TMOG-Review 独立审查）

日期：2026-10-27 ｜ 审查会话：TMOG-review-stateful-truffle ｜ 结论：**代码、自动检查与 GUI 关窗事件路径通过；PASS（附 2 项未验证限制）**

## 审查对象

- Issue：[#14 [Windows W33] 关闭窗口收束后台采样生命周期](https://github.com/wanggan768q/TMOG-Public/issues/14)
- 基线：`767553a`（不含 #13 未验收改动）；分支 `issue-14-close-lifecycle`，提交 `123a2f6`（7 文件 +370/-74）

## 缺陷核实（源码级逐条确认）

旧 `closeEvent` 三处缺陷与交付描述一致，均属实：
1. **超时伪报安全**：`wait(2000)` 失败仍 `accept()` → 窗口析构 → `enumerator_.get()` 悬空 → 在途线程 UAF。旧代码 `ponytail:` 注释自认"理论 UAF 窗口"并预留"改为拒绝关闭"的升级路径——本票即该升级的正确实现。
2. **`in_flight_` 清理时序**：`wait()` 同步返回早于 `finished → deleteLater` 队列投递，标识滞后。
3. **`closing_` 置位晚于 wait**：超时路径下线程稍后完成 → `done` 队列回调 → 访问已析构窗口成员（lambda 捕 `this`）。

## 修复核实（SamplingWorker 三分离语义）

逐行核实 `src/SamplingWorker.{h,cpp}`：
- **完成与收束分离**：`done/failed` 队列回调经 `closing_` 守卫丢弃（`SamplingWorker.cpp:41,47`）；`start` 在 `in_flight_ || closing_` 时拒绝（`cpp:31`）。
- **线程实际退出**：`shutdown` = `quit()` + `wait(timeout)`；成功且 `in_flight_==thread` 时清标识，finished 队列清理回调带 `in_flight_==thread` 守卫防重复清理（`cpp:56-60,74-75`）——缺陷 2 的时序处理正确。
- **所有权**：超时返回 false 不清 `in_flight_`、枚举器不可销毁；`closeEvent` 失败路径 `event->ignore()` + 恢复 `sample_timer_`——**拒绝关闭后可重试、采样循环实际恢复**（源码可核实）。
- 不强杀线程；析构防御性 `shutdown(5000)` 兜底。
- `closeEvent` 成功路径 `closing_=true` 在 wait 确认之后置位——缺陷 3 消除。

## 自动检查独立复现（独立构建目录 review-build-14 / review-build-14-debug，未复用开发者产物）

- Release：close_lifecycle_checks **ALL PASS(12)** exit0；process_checks(16) / process_ops(10) / smoke 全绿
- Debug：同 ALL PASS
- 检查设计核实：SlowEnumerator 为检查进程内 `QThread::msleep` 注入，非生产系统载荷；A/B 检查覆盖"1.5s 慢枚举 + 100ms shutdown 超时"——**超时不伪报、所有权保留、迟到回调零次调用、线程自然退出**四项核心语义均有直接断言；C/D/E 覆盖正常完成与 closing 拒绝。
- 检查首跑 FAIL 暴露缺陷 2 真 bug 的说法与检查代码结构吻合（"state cleared after successful shutdown" 直接断言该时序）。

## GUI 关窗事件路径独立复现（审查方自查，非转述）

`CloseMainWindow()`（投递 WM_CLOSE → Qt 转 QCloseEvent → closeEvent，与点标题栏 X 同一事件路径）对**审查方独立构建**的 TmogReplica：
- 正常采样约 4s 后关窗：`CloseMainWindow=True` → exit=0 干净退出
- **句柄出现后 0/500/1500/2600ms 四组时序**（覆盖首采样在途/多帧完成/空闲交错）：全部 `close=True → exit=0`，无挂起（10s 守卫未触发）
- 附带发现（非缺陷）：窗口句柄创建约 2.3s 晚于进程启动，此前 `CloseMainWindow` 返回 False——时序测量须以句柄出现为锚点，开发者记录的四组时序若以进程启动计时，实际覆盖的窗口相位可能整体后移，但四组 + 正常路径的结论不受影响。
- 复查 TmogReplica/ping 残留 0（只读）。

## 事件证据覆盖评估（应协调者要求逐项核对）

| 验收条 | 证据 | 结论 |
|---|---|---|
| >2s 受控枚举关窗交错无悬空/残留线程 | 检查 A/B（1.5s+100ms 超时）+ 线程自然退出断言 | ✅ 自动检查覆盖 |
| 完成/线程退出/关闭不同顺序安全，迟到回调不访问已销毁资源 | 检查 A-E 全排列 + closing 丢弃守卫 | ✅ 语义层覆盖 |
| 普通关闭完成退出且释放资源；超时行为清楚不伪报 | 检查 C/D + GUI 五组 WM_CLOSE exit=0 + closeEvent 拒绝分支源码核实 | ✅（超时分支的 GUI 动态复现受慢载荷注入方式限制，由检查 A 以语义层覆盖） |
| 受控生命周期检查 + 实际正常关闭回归；不强杀实验 | 四检查回归 + 五组 GUI 关窗，全程无强杀 | ✅ |

**剩余缺口（不阻塞，如实声明）**：
1. 真实鼠标点击标题栏 X 未复证（WM_CLOSE→QCloseEvent 为 Qt 文档行为，本机桌面焦点受外部工具托管）。维护者可选人工复核：双击运行 → 点 X → 预期立即退出无警告框。
2. 检查未实例化真实 MainWindow（closeEvent 仅有源码静态核实 + WM_CLOSE 动态路径间接覆盖）；GUI 层的 shutdown 超时拒绝分支无动态复现（需向真实进程注入 >2s 枚举，无安全外部手段，属合理限制）。

## 未验证项

- 上述两项剩余缺口；MSVC 工具链（属 #15）。

## 权限边界

未推送、未合入、未关票；未触碰外部工具进程；#13 产物与 review-build*/ 未动；审查构建产物 review-build-14*/ 为未跟踪目录。
