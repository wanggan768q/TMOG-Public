# Issue #5 审查记录（TMOG-Review 独立审查）

日期：2026-10-27 ｜ 审查会话：TMOG-review-stateful-truffle ｜ 结论：**PASS**

## 审查对象

- Issue：[#5 [Windows W01] Windows Release 有效检查与安全测试目标](https://github.com/wanggan768q/TMOG-Public/issues/5)
- 基线：`06fd043`（= origin/main，开工时干净）
- 分支：`issue-5-release-checks`，审查提交：`37107db`（实现）→ `e2f218d`（验收记录）→ `0674959`（记录修正，唯一阻塞项修复）
- diff 规模：5 文件 +243/-173（含验收记录与 .gitignore）

## 验收标准逐条核对

| 验收条 | 结论 | 证据 |
|---|---|---|
| Debug/Release 均执行必需检查；故意失败时非零退出且不打印通过 | ✅ | 审查方自行注入 `*pct==51` 负例：Release 与 Debug 均打印 `FAIL: NEGATIVE-PROBE` + `FAILURES`，直接退出码实测均 =1（不经管道）；源码已无 `<cassert>` 依赖，8 项语义 16 条检查全部为显式 `check()` 计数式 |
| 受控子进程错误身份精确返回 IdentityChanged 且子进程存活；恢复后可清理 | ✅ | 自建 `CREATE_SUSPENDED` 子进程 + `creation_tick+1` → 精确 `IdentityChanged`；`WaitForSingleObject(0)` 确认存活；随后正确身份 terminate 返回 `Ok`。不再任取系统 PID，无跳过分支 |
| 关键性/自身/身份拒绝有明确通过证据，不静默跳过；失败路径同样清理 | ✅ | 关键性拒绝经构造注入 `always_critical` 在受控子进程上精确断言 `CriticalTarget` 且子进程存活；csrss 仅 `PROCESS_QUERY_LIMITED_INFORMATION` 只读核实 BreakOnTermination=true，全程未对真实系统进程调用 terminate；`VictimGuard` 析构兜底（存活则 Terminate+Wait+Close），spawn 失败也走 `check(false)` 显式 FAIL |
| 既有采样差分、首次采样、不可用字段、正常受控终止回归通过 | ✅ | 两配置独立复现 process_checks ALL PASS(16)、process_ops_checks ALL PASS(10)、smoke PASS |

## 审查方独立复现（未复用开发者构建产物）

独立构建目录 `review-build/`（Release）与 `review-build-debug/`（Debug），Qt/MinGW 13.1.0 + Ninja + CMake 3.31.2，Win11 26200：

- Release：`process_checks` ALL PASS(16) exit0；`process_ops_checks` ALL PASS(10) exit0；`smoke_enumerate` PASS（812 进程 / 810 matched / 27 nonzero）
- Debug：三者同 ALL PASS / PASS（810 matched）
- 负例（审查方自行注入后还原，还原后 `git diff` 为空、重建回归全绿）
- Release 二进制字符串核验：含新版精确断言文本（`returns exactly IdentityChanged` / `returns exactly CriticalTarget`、`csrss BreakOnTermination verified read-only`），不含旧版用例文本（`IdentityChanged or AccessDenied`）——确认实际运行的是新检查而非残留旧二进制
- 复跑后 `ping.exe` 残留 0（只读核查）

## 生产代码改动评估

- `WindowsProcessOps`：关键性判定抽为 `is_process_critical` 自由函数 + 构造注入（`CriticalityFn`），默认仍为真实 `NtQueryInformationProcess(ProcessBreakOnTermination)`，查询失败保守拒绝——生产行为不变，仅测试边界可替换。注入仅影响 terminate 内部判定点，不影响身份核实与自身拒绝顺序（自身 → 身份 → 关键性）。
- 测试子进程 `CREATE_SUSPENDED` 且从不 ResumeThread，目标命令实际永不执行，测试对象完全自控——设计正确。

## 记录修正复核（0674959，唯一阻塞项）

原记录称清理的 4 个旧 cmd 为"旧版测试遗留"——归属仅为命令行/时段特征匹配，未证实。维护者要求：不得追认为已证实清理成果，也不得抹去已执行操作。修正后表述如实记录：疑似特征匹配、归属无审计证据、清理在核实前执行属操作过早、不作为清理成果、今后此类对象只报告不清理、本次复跑 ping 残留 0（只读核查）。**复核通过，事实完整、无虚构。**

## 未验证项（随票声明，非阻塞）

- MSVC 工具链未构建（本机为 Qt/MinGW 工具链；MSVC x64 验证属 #15 范围）
- GUI 实机人工验收不在本票自动检查范围（本票为检查有效性修复，不涉及 GUI 行为变更）

## 审查权限边界声明

未推送、未合并、未关闭 Issue、未代表用户做任何提权操作；对疑似遗留进程仅只读报告，未按命令行匹配杀任何进程。审查构建产物 `review-build/`、`review-build-debug/` 为未跟踪目录，留待维护者处置（可删）。
