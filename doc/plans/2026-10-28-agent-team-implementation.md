# 五角色协作流程实施计划

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [x]`) syntax for tracking.

**Goal:** 在当前工程落地 Product、Plan、Dev、Review、IssueWriter 的角色定义、本地配置和可恢复执行合同。

**Architecture:** 独立 Claude CLI 会话显式选择角色，Orca 只管理普通终端，Claude ListAgents/SendMessage 按会话名通信。Product 串行推进并唯一写执行状态；复用现有技能，不新增调度服务，不混入 Orca Task/Dispatch 生命周期。

**Tech Stack:** Markdown、JSON、PowerShell 7、Claude Code、Orca、Git/gh、CodeGraph。

## Global Constraints

- 本次只搭建文件并进行静态检查；不启动终端、创建任务 worktree、执行 GitHub 写操作、提交或清理。
- 计划文档仅位于当前工程 `doc/plans/`；进度与交付报告位于 `.claude/workflow/`。
- 本地 config 位于 `.claude/agent-team/config.json`；所有 settings 路径默认空，不生成或放宽权限。
- 新任务 worktree 仅创建于 `E:\Git\TMOG-Public-WorkTree` 配置根目录内；基点为新 fetch 的 origin/main。
- Plan 未关闭窗口最多 1 个；其他角色上限默认各 1；执行仍串行。
- 新任务新会话，同任务修复可复用；最多两轮修复与复审。
- 普通终端用 `claude -n <name> --agent <role> --settings <absolute-file>`；不用 /rename；窗口标题与会话名不是生命周期身份。
- 新 worktree 同步技能，角色加载必须可验证；冲突不覆盖，CodeGraph 不复制旧数据库。
- 自动发布和 merge commit 只作用于用户指定且本流程验收的任务；必要人工验收、分支保护与系统实验权限仍独立生效。
- 清理限定本流程登记的对象，正常 git worktree remove / git branch -d，未知文件、进程或历史对象保留。

---

### Task 1: 共享执行合同与本地配置

**Files:** 创建 `.claude/agent-team/README.md`、`config.json`、`config.example.json`、`.claude/workflow/README.md`。

**Interfaces:** README 是角色共用的权威运行合同；配置提供四个 Settings、三个数量上限、Worktree_Root、拆分方向和 Merge_Method。

- [x] 写出配置与结构校验要求、根路径与权限边界。
- [x] 写出普通终端启动、真实 handle、名字寻址和接收确认规则。
- [x] 写出任务合同、计划版本、单写者状态、意图日志和恢复查重规则。
- [x] 写出 PR 门槛、main 同步与分阶段清理证据。

### Task 2: 五个角色与工程入口

**Files:** 创建 `.claude/agents/{product,plan,dev,review,issue-writer}.md`；修改 `AGENTS.md` 与 `.gitignore`。

**Interfaces:** `--agent product|plan|dev|review|issue-writer`；每个角色首先读取共享合同，接受包含主工程绝对路径和执行目录的启动合同。

- [x] 定义角色职责、输入、结果及明确完成标准；所有角色用中文。
- [x] Dev 负责首次 `codegraph init -y <worktree>`、status 和真实 explore；修改后 sync；Review 核实索引与固定 SHA。
- [x] Plan 单例、计划审批与变更记录；Product 验收放行与恢复；IssueWriter 发布合并和回写。
- [x] 在 AGENTS 添加按任务触发的运行合同指针。
- [x] 只开放角色定义、README、示例配置和静态检查文件的 Git 跟踪；本地 config 和运行进度保持忽略。

### Task 3: 静态检查与报告

**Files:** 创建 `.claude/agent-team/check.ps1`。

**Interfaces:** `pwsh -NoProfile -File .claude/agent-team/check.ps1` 检查配置、角色和合同，不访问运行时或修改设置。可选 `-Ready` 检查 settings 文件存在且可解析，初始空路径应明确失败。

- [x] 检查必需字段、正整数上限、绝对 worktree 根目录、拆分方向与 merge 方法。
- [x] 检查五个角色 frontmatter name 与共享文档指针、模板与本地配置字段一致。
- [x] 默认检查预期 PASS；`-Ready` 空路径预期 FAIL，明确表示尚未配置可启动环境。
- [x] 执行 `git diff --check` 和 `git status --short --untracked-files=normal`，报告结果，不提交。

## 验证范围

静态检查只证明文件和配置合同一致，不能证明终端分屏、Claude inbox、CodeGraph 新树索引、GitHub 合并、恢复或清理在真实运行中成功。首次真实任务前须经过 README 的启动预检；本次授权不包括这些运行时实验。

## 实施与检查记录（2026-10-28）

- 文件落地于主工程，分支 `chore/agent-team-setup`，未提交。
- `pwsh -NoProfile -File .claude/agent-team/check.ps1`：退出 0，五个角色、共享文档与配置结构 PASS。
- 同命令加 `-Ready`：退出 1，`Dev_Setting 尚未配置，不能启动`；这是初始空路径的预期拒绝，不表示启动已验证。
- `git diff --check`：通过。
- `git check-ignore`：本地 config.json 与 workflow 运行状态被忽略；Git 可见五个角色、共享 README、示例配置、检查脚本及 workflow README。
- 本机 `claude --help` 确认 -n、--agent、--agents；`gh pr merge --help` 确认 --merge、--match-head-commit。未启动 CLI 会话或执行合并。
- 角色以主工程文件为源，通过会话级 --agents JSON 显式注入；不复制额外角色树，不依赖外部 worktree 的自动发现。
- 独立静态合同核查发现一处副作用前登记缺口：Dev/Review 未明确等待 Product 落盘。已将 operation_id → INTENT_RECORDED → 执行 → 结果回报规则补入共享合同和全部角色；静态脚本检查每个角色包含该确认门槛。Plan 写计划也按此规则登记。此核查不证明运行时成功。
- 未修改 settings 权限、创建实际任务 worktree、操作现有终端、执行 GitHub 写入或清理。
