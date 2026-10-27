# 会话交接记录：TMOG-dev-snoopy-wozniak（2026-10-27 /clear 前）

用途：用户执行 `/clear` 后新任务（#16）从本文件重新读取，不靠会话记忆。此文件是交接快照，不是新任务的执行合同。

## 环境与工具链

- 工程：`E:\Git\TMOG-Public`（AGENTS.md 有计划文档规则/工具链/协作约定）
- 构建：MinGW 13.1.0（`E:\InstallApplication\Qt\Tools\mingw1310_64\bin`）+ Ninja（`E:\InstallApplication\Qt\Tools\Ninja`）+ CMake 3.31.2 + Qt 6.12（`E:\InstallApplication\Qt\6.12.0\mingw_64`）
- 构建目录：`build/`（Release）、`build-debug/`（Debug，configure 需 `-DCMAKE_PREFIX_PATH` 指向 Qt）
- 本机桌面焦点被外部窗口管理工具（Orca）托管：脚本化 GUI 前台交互不可靠，GUI 验收用 WM_CLOSE（等价点 X 的 closeEvent 路径）或留维护者人工

## 已闭环（全部合入 origin/main，已关票）

| Issue | 内容 | 最终提交 |
|---|---|---|
| #5 | Release 有效检查 + 安全测试目标（check() 替代 assert、受控子进程身份用例、is_process_critical 注入） | 合入于 main（分支 issue-5-release-checks） |
| #14 | 关窗收束采样生命周期（SamplingWorker 三分离、closeEvent 超时拒绝可重试、closing 失败复位） | `d7bc0a9` + F6b 补强，Review v5 PASS `246be01` |

**origin/main 当前 = `246be01`**；本地 main @ `c10565e` 领先远端一条交接文档提交（本文档），由 product 后续核查处理。教训：交接文档应提交到任务分支，不在 main 直接新增提交。

## #13 状态（OPEN，待维护者人工 GUI 点验）

- 分支 `issue-13-freeze-identity` @ `c1a2258`（未合入，保持不动）
- 修复：`on_end_task` 确认框前按值冻结 ProcessSnapshot（模型行引用悬空）
- 自动检查全绿（end_confirm_checks 等）；**缺 GUI 实机确认交互证据**
- 点验步骤 v3：`doc/plans/2026-10-27-issue-13-manual-verification.md`（notepad 归属核实、禁真实系统进程目标）
- Review 记录：`doc/plans/2026-10-27-issue-13-review.md`；`build/TmogReplica.exe`（ee75a1f2...0ea5）为点验产物，勿覆盖
- 人工点验通过后 Review 出完整 PASS → product 集成

## 未跟踪目录（保留勿清理，归属 Review/其他会话）

`review-build/`、`review-build-debug/`、`review-build-14/`、`review-build-14-debug/`（若存在）；另有并行会话的 issue-6/issue-7 worktree。

## 协作规则（持久化于项目记忆）

1. 清空调度：新任务前落盘交接 → 回报 → 用户执行 `/clear` → 新任务包重新读取（同票修复循环不清）
2. 无法证明归属的遗留对象只报告不清理
3. 提交署名 `Co-Authored-By: Claude Code <noreply@anthropic.com>`；不自动推送/合并/关票（product 集成）

## 下一任务：#16（采样失败、快速暂停恢复与手动刷新闭环）

前置 #5/#14 均 closed，已解锁。**等用户 /clear 并回报确认后，product 重发完整 #16 任务包**，确认前不创建分支、不编码。
