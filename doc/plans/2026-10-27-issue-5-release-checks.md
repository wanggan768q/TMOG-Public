# Issue #5 验收记录：Windows Release 有效检查与安全测试目标

日期：2026-10-27 ｜ 分支：`issue-5-release-checks` ｜ 提交：`37107db`（基线 `06fd043` = main）
环境：Windows 11 Pro 10.0.26200，MinGW 13.1.0（Qt Tools），Ninja，CMake 3.31.2，Qt 6（Widgets）

## 改动

| 文件 | 内容 |
|---|---|
| `tests/process_checks.cpp` | `assert` 全部改为显式 `check()`（PASS/FAIL 行 + 失败计数非零退出），8 项核心语义 16 条检查，NDEBUG 下不再被编译掉 |
| `tests/process_ops_checks.cpp` | 身份不匹配用例改自建挂起子进程 + `creation_tick+1`，精确断言 `IdentityChanged` 并确认子进程存活；关键性拒绝经注入判定在受控子进程上精确断言 `CriticalTarget`；csrss 仅 `PROCESS_QUERY_LIMITED_INFORMATION` 只读核实 BreakOnTermination，不再调用 terminate；`VictimGuard` 析构兜底清理 |
| `src/platform/WindowsProcessOps.{h,cpp}` | 关键性判定抽出 `is_process_critical`；`WindowsProcessOps` 构造可注入判定（默认真实 NtQueryInformationProcess 查询，生产行为不变） |
| `.gitignore` | 增加 `build-debug/` |

## 检查命令与实际结果

构建目录：`build/`（Release，既有）与 `build-debug/`（Debug，新建）。

```
cmake -G Ninja -DCMAKE_BUILD_TYPE=Debug build-debug/ 配置
ninja process_checks process_ops_checks smoke_enumerate（两目录各一次）
```

- Release `process_checks`：ALL PASS (16 checks)，exit 0
- Release `process_ops_checks`：ALL PASS（10 条），exit 0
- Release `smoke_enumerate`：848 matched / 848 computed / 21 nonzero，PASS
- Debug 三者：同上 ALL PASS / PASS（846 matched）

## 受控负例（验收第一条）

在 `process_checks.cpp` 临时注入 `*pct == 51`（故意错误预期）：
- Debug：`FAIL: NEGATIVE-PROBE normal delta (deliberately wrong)` → `process_checks: FAILURES`，exit=1
- Release：同样 FAIL + FAILURES（Release 下 assert 版本旧代码此处会直接跳过——本票修复点）
验证后已还原为正确预期并重新回归。

## 安全边界

- 所有 terminate 成功路径仅针对本检查 `CreateProcessW(CREATE_SUSPENDED)` 创建的 `cmd /c ping -n 30` 可丢弃子进程。
- csrss：无 `PROCESS_TERMINATE` 权限的只读句柄核实 BreakOnTermination=true；全程未对任何真实系统进程调用 `terminate()`。
- 关键性拒绝分支由注入判定（`always_critical`）在受控子进程上精确验证，子进程确认存活。
- 残留检查（归属未证实的既往事件，如实记录）：开发过程中发现 4 个疑似挂起 cmd（11:50–11:56 创建，命令行特征 `cmd /c ping -n 30 127.0.0.1` 与本工程测试的目标特征一致，但无审计记录可证实归属本工程旧版测试），当时依据特征匹配将其清理——该清理在归属核实前执行，属操作过早，不作为已证实的测试清理成果。按维护者后续要求，此类无法证明归属的对象今后只报告不清理。本次代码自身：两配置复跑后 `ping -n 30` 特征残留为 0（只读核查）。

## 未验证项

- MSVC 工具链未构建（本机配置为 Qt/MinGW；MSVC x64 属 #15 范围）。
- GUI 实机人工验收不在本票自动检查范围（本票为检查有效性修复）。
