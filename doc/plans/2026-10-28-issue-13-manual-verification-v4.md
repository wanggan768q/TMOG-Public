# Issue #13 人工验证指引 v4（B 范围，另批后执行）

> **状态：本文件仅是指引，本轮不执行任何人工步骤。** 真实 app/helper/终止/
> 物理桌面人工验证（原计划 Task 3 / B 范围）**未获批准、未实现、未交付**；
> 本文件不构成 B 能力已完成的证明。

## 1. 固定源码/产物对应（执行前填写，不得预先捏造）

- 源码 HEAD（执行 B 前核对）：`<待B阶段绑定>`
- Debug/Release 配置：build-debug / build-release（本任务树）
- TmogReplica.exe SHA-256：`<待B阶段绑定>`
- end_confirm_checks.exe SHA-256：`<待B阶段绑定>`
- 任务树：`E:/Git/TMOG-Public-WorkTree/issue-13-modal-checks-20261028`

## 2. 安全目标

- 只对**本次运行自建 helper** 的真实 PID 且 GetProcessTimes 创建身份匹配的
  对象操作；不按进程名猜归属，不触碰 Orca/系统关键进程。
- manualToken 仅为本次运行生成的协调值，不是权限凭证。
- 目标退出/拒绝返回实际平台码（Failed/AccessDenied），不伪造结果。
- 真实 PID 复用不强行制造；fake R 场景只模拟身份变化语义。

## 3. helper 交付状态（B 未批，未实现）

计划 Task 3 要求：`--idle-child <parentPID> <manualToken>` 专用子进程、
CreateProcessW 直启不经 shell、GetProcessTimes 身份记录、≤300s 自然退出、
不拦截终止。**以上均未实现**——`end_confirm_checks.exe` 当前对
`--idle-child`/`--manual` 直接打印 NOT AVAILABLE 并退出（exit 2）。

## 4. 人工步骤 A..E（B 批准后按此执行并逐条记录）

- A：选行前核对 PID/创建时间/名称与本次 helper 日志。
- B：CPU 排序打开确认框；停留期间观察其他活跃行实际变化 ≥3 次（记录时点，
  不可仅等待）；对话框 PID/名/创建时间始终不变。
- C：No 后 helper 仍 alive 且无退出。
- D：新 helper + Yes → Wait 句柄确认退出、对应行消失。
- E：exited 场景确认不转向新进程。
- 缺人工观察条件（遮挡/焦点丢失/归属不明）→ 该项未验证，不靠等待替代。

## 5. 命令（B 批准后、cwd=任务树；当前运行将 exit 2）

```powershell
./build-release/end_confirm_checks.exe --manual "$((Resolve-Path ./build-release/TmogReplica.exe).Path)" cancel
./build-release/end_confirm_checks.exe --manual "$((Resolve-Path ./build-release/TmogReplica.exe).Path)" confirm
./build-release/end_confirm_checks.exe --manual "$((Resolve-Path ./build-release/TmogReplica.exe).Path)" exited
```

## 6. 分层声明

- A 范围（本轮）：fake/offscreen 自动检查——证明生产调用绑定、模态值冻结、
  线程收束；**不等于**真实 Windows 终止/PID 重用/物理 GUI 验收。
- B 范围（未批）：本文件 §4/§5 的人工步骤 + helper 实机运行。
- #13 第四验收项必须维护者明确确认；B 缺席时整票不得 close。
