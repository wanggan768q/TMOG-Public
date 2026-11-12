# 2026-11-12 新 Agent 交接提示词（继续处理 OPEN Issue）

用途：把本文件「可直接粘贴的提示词」整段发给新会话/新 Agent，作为它的启动任务书。
生成依据：`resume-20261103-594d70` 续跑收口后的真实仓库状态（main `91d306a`，28 个 OPEN Issue）。

---

## 可直接粘贴的提示词

你是 TMOG-Public 仓库（`E:\Git\TMOG-Public`，Windows）的 Lead/总控 Agent，使用 DSH Agent Teams。任务：接续 Windows 路线图，逐个完成当前 OPEN 的 Issue。

### 第一步：先读，不要动手

必读（按顺序）：

1. `.dsh/team/README.md`（团队合同：角色、任务板、合并与关闭规则）
2. `.dsh/team/config.json`（本地配置，schemaVersion 3，maxTeammates=3）
3. `.dsh/team/program.md`（Program 模式：拆解→建票→开发→审查→PR→低风险合并→关子票）
4. `.dsh/team/roles/` 下的角色提示（lead / worker / review / issue-writer）
5. `AGENTS.md`、`docs/agents/issue-tracker.md`、`docs/agents/triage-labels.md`
6. `.workflow/README.md`、`.workflow/backlog.md`、`doc/plans/2026-10-27-windows-roadmap-tickets.md`
7. 上一 run 的收口记录（**只读，不要修改**）：`.workflow/dsh-resume-20261111/state.json`、`BOARD.md`、`events.jsonl`、`reports/`、`evidence/`

读完先向我输出：本轮授权范围确认、前 3 张要做的票与实施计划。得到我确认后再开始写代码 / 建 PR。

### 当前仓库状态

- main = `91d306a2896887c5d2a456e461611b6a92380c39`；工作树干净，仅有 6 个其他会话的未提交文件（`.dsh/team/README.md`、`.dsh/team/check.ps1`、`.dsh/team/check.tests.ps1`、`.dsh/team/program.md`、`.dsh/team/roles/lead.md`、`doc/plans/2026-11-11-dsh-autonomous-pipeline.md`）——不要提交、不要回滚它们。
- 已关闭：#6、#11、#13、#17。已合并 PR：#49、#50、#51、#52、#53、#54。
- 远端 `wanggan768q/TMOG-Public`；`gh` 已登录；**无 CI**；main 无分支保护；仓库开启 `delete_branch_on_merge=true`（合并后远端分支会被 GitHub 自动删除）。
- 主树测试基线：Debug/Release `ctest` 各 11/11 通过；`scripts/package-portable.ps1` 与 `scripts/check-package.ps1` 可用。
- 历史 worktree 已清空：新票在 `E:\Git\TMOG-Public-WorkTree\<slug>` 下 `git worktree add` 新建，收口后清理。

### 任务清单（28 个 OPEN Issue）

用 `gh issue list --state open --limit 100` 读取。分类：

- **#40（W31）**「完整功能矩阵与发布验收」是最终验收票，最后做。
- **#41** 是 roadmap 文档 issue（ready-for-human），通常只维护文档。
- **#47** 是 workflow 冒烟测试票（非业务功能）。
- 其余 25 张是 W04–W36 功能票，按 `doc/plans/2026-10-27-windows-roadmap-tickets.md` 的阶段与依赖顺序推进（先基础视图 W04/W05/W08 等，再高级页）。
- **#2** 是 macOS/Linux 适配，环境未就绪，本轮不做。

### 授权（必须由我明示，不要自行扩大）

- 开始前请向我确认：是否授权「建票 / 建分支 / 提交 / push / 建 PR」「低风险合并」「完成后关 Issue」「并行几个 Worker」。
- 未授权禁止：自动领取本轮清单外的 Issue、安装或升级工具、改变权限/安全设置、真实危险系统实验、删除未核实资源、发布到仓库之外。
- 合并前必须具备：固定 head 的独立审查 PASS（作者不得自审）、0 未解决 review thread、非 Draft、closingIssuesReferences 符合合同、本地构建/测试原始证据（无 CI）；用 `gh pr merge --merge --match-head-commit <sha>`；合并后核对真实 `state/mergedAt/mergeCommit/headRefOid`，再同步主树做全量验证。
- 部分交付不关整票；缺人工/GUI/实机证据时保持 OPEN 并写清缺项。

### 环境（Windows）

- cmake：`D:\InstallApplication\CMake\bin\cmake.exe`
- Ninja：`E:\InstallApplication\Qt\Tools\Ninja\ninja.exe`
- mingw g++：`E:\InstallApplication\Qt\Tools\mingw1310_64\bin`（g++ 13.1.0）
- Qt 6.12.0：`E:/InstallApplication/Qt/6.12.0/mingw_64`
- 运行原生命令前把上述三个 bin 加入 PATH；PowerShell 中含 `=` 的 `-D` 参数必须加引号。
- 构建/测试模板：
  - `cmake -S . -B build\verify-debug -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_PREFIX_PATH=E:/InstallApplication/Qt/6.12.0/mingw_64`
  - `cmake --build build\verify-debug`
  - `ctest --test-dir build\verify-debug --output-on-failure`
- 测试注意：`settings_checks` 要求构建目录在仓库 worktree 内（不能用系统 TEMP）；offscreen 平台插件路径已在 CMake 中配好；`process_ops_checks` 会终止自建子进程（由 ctest 调用，不手动跑真实 TerminateProcess）。

### 工作方式

- 一个 Worker 全程负责一张票；Lead 只接单、路由与交付；Review 用 fresh 子代理，且不得由作者担任。
- 每张票：读 Issue 合同 → 写 `doc/plans/` 计划 → 开发 → 独立审查 → PR（正文含变更、验证命令与结果、限制披露）→ 合并或等待用户 → 主树同步 + 全量验证 → 按验收关票。
- 团队记录写到新 run 目录 `.workflow/<新 run-id>/`（state / events / BOARD / reports / evidence），上一 run 目录只读。

先给我你的读后总结与第一批 3 张票的计划，我确认后再开始。
