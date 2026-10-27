# TMOG-Public

对 Windows 应用 "Task Manager v1.1.0" 的逆向分析工程（原始文件与补丁文件对比）。

## 计划文档规则

- 所有计划文档（含计划模式草稿、设计方案与实施计划）必须放在当前工程的 `doc/plans/` 目录下。
- 禁止将计划文档写入用户目录的 `.claude/plans/` 或其他工程外目录。
- 技能的默认计划路径与此规则冲突时，以本规则为准。

## 工具链

逆向分析使用 REA（MCP 工具集）。入口技能：`reverse-engineer-anything`。

## Agent skills

### Issue tracker

Issues 在 GitHub Issues（`wanggan768q/TMOG-Public`）追踪，使用 `gh` CLI。See `docs/agents/issue-tracker.md`.

### Triage labels

五个标准 triage 角色使用默认标签字符串（needs-triage / needs-info / ready-for-agent / ready-for-human / wontfix）。See `docs/agents/triage-labels.md`.

### Domain docs

Single-context 布局：根目录 `GLOSSARY.md` + `docs/adr/`（按需惰性创建）。See `docs/agents/domain.md`.
