# Issue #14 审查记录（TMOG-Review 独立审查）

日期：2026-10-27 ｜ 审查会话：TMOG-review-stateful-truffle ｜ 结论：**待补验证（2026-10-27 修订，撤回此前 PASS；理由见 §修订）**

> **修订记录**：v1 曾给出 PASS。协调者复核指出两处证据缺口（>2s 时长不满足、"实际恢复"仅为源码推断），经审查方源码深挖确认属实且第二点更严重（closing_ 永不复位 → 采样不可恢复），故撤回 PASS，改为待补验证。§1–§4 的核实事实仍有效，§5 为修订说明与补验要求。

## 审查对象

- Issue：[#14 [Windows W33] 关闭窗口收束后台采样生命周期](https://github.com/wanggan768q/TMOG-Public/issues/14)
- 基线：`767553a`（不含 #13 未验收改动）；分支 `issue-14-close-lifecycle`，交付提交 `123a2f6`（7 文件 +370/-74），审查提交 `3703505`（v1 记录，已被本修订取代）

## 缺陷核实（源码级逐条确认，维持有效）

旧 `closeEvent` 三处缺陷与交付描述一致，均属实：
1. **超时伪报安全**：`wait(2000)` 失败仍 `accept()` → 窗口析构 → `enumerator_.get()` 悬空 → 在途线程 UAF。
2. **`in_flight_` 清理时序**：`wait()` 同步返回早于 `finished → deleteLater` 队列投递，标识滞后。
3. **`closing_` 置位晚于 wait**：超时路径下线程稍后完成 → `done` 队列回调 → 访问已析构窗口成员（lambda 捕 `this`）。

修复的 SamplingWorker 三分离语义源码核实维持有效：closing 守卫丢弃迟到回调、`quit()+wait()` 实际退出确认、超时不清 `in_flight_` 枚举器所有权保留、finished 回调 `in_flight_==thread` 守卫防重复清理、析构防御性 shutdown 兜底、不强杀线程。

## 自动检查独立复现（独立构建目录 review-build-14 / review-build-14-debug，维持有效）

- Release：close_lifecycle_checks ALL PASS(12) exit0；process_checks(16) / process_ops(10) / smoke 全绿
- Debug：同 ALL PASS
- SlowEnumerator 为检查进程内 `QThread::msleep` 注入，非生产系统载荷；检查 A/B/C/D/E 的 12 项断言如交付所述通过。

## GUI 关窗事件路径独立复现（维持有效）

审查方自查（`CloseMainWindow` = WM_CLOSE → QCloseEvent → closeEvent，与点标题栏 X 同一路径）对**审查方独立构建**的 TmogReplica：
- 正常采样约 4s 后关窗：exit=0 干净退出
- 句柄出现后 0/500/1500/2600ms 四组时序：全部 exit=0 无挂起（10s 守卫未触发）
- 附带发现：窗口句柄创建约 2.3s 晚于进程启动，时序测量须以句柄出现为锚点
- 复查 TmogReplica/ping 残留 0（只读）

协调者确认：WM_CLOSE 证据保留有效；真实鼠标点 X 可非门槛。

## 修订说明：撤回 PASS 的两点证据缺口

### 缺口 1：">2s 受控枚举"时长不满足（验收第 1 条）

验收原文："**超过2秒**的受控枚举在窗口关闭交错时无悬空引用或残留线程"。现有检查 A/B 的 SlowEnumerator 为 **1.5s**、shutdown 超时 100ms——模式上覆盖"慢枚举→超时→拒绝销毁"，但**不满足验收明确的 >2s 时长**。v1 记录将该验收条标 ✅ 属证据不足，已修正。

**补验要求**：最低增加一个 >2s（如 2500ms 或 3000ms）受控慢枚举用例，覆盖"枚举时长超过 shutdown 2000ms 生产超时"的真实形态：shutdown(2000) 返回 false → 所有权保留 → 线程自然退出 → 迟到回调丢弃。

### 缺口 2："拒绝关闭后实际恢复"无运行证据，且源码深挖表明采样不可恢复

v1 记录将 `closeEvent` 失败分支（`event->ignore()` + `sample_timer_.start(1000)`）的源码核实表述为"恢复采样循环实际恢复（源码可核实）"——这是**推断而非运行证据**，且经进一步源码深挖，该表述与实际行为矛盾：

- `SamplingWorker::shutdown` 开头 `closing_ = true`，**失败后从不复位**（`SamplingWorker.cpp:65`，无任何复位路径）。
- `SamplingWorker::start` 守卫 `if (in_flight_ || closing_) return;`（`cpp:31`）——closing_ 为 true 时**即使线程已退出、in_flight_ 已清空，start 仍被永久拒绝**。
- 因此拒绝关闭后的实际行为是：窗口存活、`sample_timer_` 恢复跳动，但每秒 tick 的 `worker_.start` 均被 worker 内部 closing_ 静默拒绝——**采样停摆不恢复**；用户再次关窗时第二次 `shutdown` 因 in_flight_ 已空返回 true，可退出。
- 即当前生产逻辑是"**可再次关窗退出，但采样不恢复**"——与 closeEvent 注释"下个 tick 正常重试"及提示语境"恢复采样循环"不符（timer 恢复 ≠ 采样恢复）。
- 检查 E（closing 后 start 被拒绝）反而从侧面印证了这一点，但交付与 v1 审查均未指出该恢复语义矛盾。

**补验要求**（按协调者指示，二选一或准确描述）：
1. **修复**：shutdown 超时失败后复位 closing_（或将 closing 语义限定为"已确认退出后的终态"），使线程自然退出后采样可实际恢复；补运行证据：shutdown 短超时失败 → 自然 finished → 重新 start 成功且有回调 → 重试 shutdown 成功。
2. **准确描述**：若维持现状（仅可再次关窗、采样停摆），修改 closeEvent 注释与用户提示语，明确"采样暂停、可再次关闭退出"；补运行证据：shutdown 失败 → start 被拒 → 线程退出后仍拒 → 重试 shutdown 成功可退出。

### 声明修正

v1 的"12 项检查覆盖全排列"类表述一律改为"若干样例路径"；实际覆盖为上述 A–E 五组场景样例，非穷举。

## 待补验证清单（提交新修复/检查后审查方独立复跑再出结论）

1. [ ] >2s（≥2500ms）受控慢枚举用例（两配置）
2. [ ] shutdown 短超时失败 → 所有权保留 → 自然 finished → （恢复或准确描述的）运行证据
3. [ ] 若修复：重新 start 实际触发回调 + 重试 shutdown 成功；若仅描述：拒绝语义运行证据 + 文案修正
4. [ ] 全部既有检查回归

## 未验证项（随票声明）

- 真实鼠标点击标题栏 X（可非门槛，维护者可选复核）
- MSVC 工具链（属 #15）

## 权限边界

未推送、未合入、未关票；未触碰外部工具进程；#13 产物与 review-build*/、review-build-14*/ 未动。
