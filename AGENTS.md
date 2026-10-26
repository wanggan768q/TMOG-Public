# TMOG-Public

对 Windows 应用 "Task Manager v1.1.0" 的逆向分析工程（原始文件与补丁文件对比）。

## 工具链

逆向分析使用 REA（MCP 工具集）。入口技能：`reverse-engineer-anything`。

## Agent skills

### Issue tracker

Issues 在 GitHub Issues（`wanggan768q/TMOG-Public`）追踪，使用 `gh` CLI。See `docs/agents/issue-tracker.md`.

### Triage labels

五个标准 triage 角色使用默认标签字符串（needs-triage / needs-info / ready-for-agent / ready-for-human / wontfix）。See `docs/agents/triage-labels.md`.

### Domain docs

Single-context 布局：根目录 `GLOSSARY.md` + `docs/adr/`（按需惰性创建）。See `docs/agents/domain.md`.
