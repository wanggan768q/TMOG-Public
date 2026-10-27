# Triage Labels

The skills speak in terms of five canonical triage roles. This file maps those roles to the actual label strings used in this repo's issue tracker (GitHub Issues, `wanggan768q/TMOG-Public`).

| Label in mattpocock/skills | Label in our tracker | Meaning                                  |
| -------------------------- | -------------------- | ---------------------------------------- |
| `needs-triage`             | `needs-triage`       | Maintainer needs to evaluate this issue  |
| `needs-info`               | `needs-info`         | Waiting on reporter for more information |
| `ready-for-agent`          | `ready-for-agent`    | Fully specified, ready for an AFK agent  |
| `ready-for-human`          | `ready-for-human`    | Requires human implementation            |
| `wontfix`                  | `wontfix`            | Will not be actioned                     |

When a skill mentions a role (e.g. "apply the AFK-ready triage label"), use the corresponding label string from this table.

## 标签含义详解与示例

### `needs-triage` — 待分诊

**含义**：问题刚进来，还没有人评估过它是否真实、是否值得做、优先级如何。维护者需要先看一眼再决定去向。

**判断标准**：任何新提交、未经人工评估的 issue 都从这里开始。

**示例**：
- 用户报告："Task Manager 补丁版运行后进程列表显示为空" —— 无法确定是补丁引入的 bug、环境问题还是误报，需要先复现。
- 一个模糊的功能想法："希望能支持深色模式"，没有说明范围和验收标准。

**去向**：评估后要么转 `needs-info` / `ready-for-agent` / `ready-for-human`，要么直接 `wontfix`。

### `needs-info` — 等待更多信息

**含义**：问题本身信息不足，无法继续，必须等报告者补充细节。此时 issue 处于挂起状态。

**判断标准**：缺少复现步骤、环境信息、期望行为等关键字段。

**示例**：
- "程序崩溃了" —— 没有崩溃时的操作步骤、没有堆栈/日志、没有 Windows 版本，必须向报告者追问。
- "分析某个 exe 时 REA 工具报错" —— 缺少目标文件格式、REA provider、完整报错文本。

**去向**：报告者补充后重新评估；长期无回应可关闭（备注原因）。

### `ready-for-agent` — 可交给 agent 执行

**含义**：问题已被完整描述（目标、范围、验收标准、涉及的文件/模块），一个脱离人工监督的 agent（AFK agent）可以直接开工并自行验证完成。

**判断标准**：照着 issue 内容做，不需要再问任何人问题。

**示例**：
- "在 `docs/` 下为 REA 分析流程写一份操作手册，包含 open_binary → analyze_function → export_evidence_bundle 的顺序和每步的命令模板。"
- "给 `.gitignore` 追加 `*.log` 规则，验证 `git status` 不再显示日志文件。"

### `ready-for-human` — 需要人工实现

**含义**：问题已经明确，但存在 agent 无法独立完成的环节 —— 需要人在机器上做交互操作、需要账号权限、需要只有人能做的物理/合规决策等。

**判断标准**：任务里至少有一个步骤只有人能通过。

**示例**：
- "在 GitHub 仓库设置里配置 Actions 的 deploy key" —— 需要仓库管理员在网页上操作。
- "确认补丁后的 exe 分发是否涉及授权合规问题" —— 需要人做法律/合规判断。
- "在本机 BIOS 里关闭安全启动以调试驱动" —— 物理交互步骤。

### `wontfix` — 不予处理

**含义**：评估后决定不做。可能超范围、与现有决策冲突、投入产出不成立，或与项目目标无关。

**判断标准**：关闭 issue 时必须附一句理由。

**示例**：
- "希望支持 Windows 7" —— 项目只面向 Win10/11，成本不成比例。
- "把逆向产物直接发布到公网" —— 与本仓库的合规边界冲突，拒绝。

---

*技能引用规则：当某个技能提到一个 triage 角色（如 "apply the AFK-ready triage label"）时，使用上表 "Label in our tracker" 列对应的字符串。*
