# Issue #11 固定 SHA 审查证据补齐 Implementation Plan v1

> **For agentic workers:** **awaiting_approval**。仅静态计划已获授权；本版 SHA-256、新预算及未来验证必须另获用户批准。由 Product 另开独立 Review，会话不得复用；不派 Dev、不在本 Plan 会话实施。未来 Review 按角色合同执行，不使用实现技能取得写业务代码权限。

**Goal：** 在固定 H 上重新产生可核验的独立 Review 原始证据，不修生产代码，不修饰历史 PASS/FAIL。
**Architecture：** 复用已提交测试；normal 与 M1..M5 每个配置独立从 H archive 构建。一个受信证据脚本负责命令采集、单处变异和只读核对，原始 stdout/stderr 与真实退出码先落盘，再作验收。
**Tech Stack：** Windows、现有 C++20/Qt 6.12.0 MinGW/CMake/Ninja、PowerShell 7、Python 标准库；不新增框架、依赖、目标或安装工具。
**Spec：** `E:/Git/TMOG-Public/.workflow/parallel-plan-20261029-6-11-17/issue11-guard-coverage/plan-evidence-contract.md`；原批准 guard coverage v1 SHA-256=`4a7d3fefda168c27baa3a67f53cbb9289775c397a5204ba2e654c8b7e6d6f208`，旧版与历史报告保留原文。

## Global Constraints

- run=`parallel-plan-20261029-6-11-17`；Plan task=`issue11-guard-evidence-replan`；attempt=1；version=v1；状态 awaiting_approval。
- 固定 H=`978b1d8e6b68a9b4c0d678043ad04bbbb8e92ce3`；base=`4361d8e9723e398bf100e506bca26626e1528e53`。WT=`E:/Git/TMOG-Public-WorkTree/issue11-io-20261030`，仅只读参考及未来 archive 来源。
- 当前只写本新计划与本 task `plan-1*`；不构建/运行、改代码/配置/旧文件/state/events/BOARD、提交/推送/发布。
- 推荐新增 **1 独立 Review / 0 Dev / 0 自动返工**，旧 1Dev+1Review 已耗尽，不清零。新预算未批准，不启动。
- 未来每配置 configure+build 累计≤15分钟，每安全 check≤120秒，角色新产物总计≤2GiB；build parallel2、test j1。无权限、结果未知、资源超限即 BLOCKED，不靠省略验收凑 PASS。
- 禁止全量 CTest、`--allow-controlled-io`、真实 helper I/O/EOF/受控终止/UI/smoke、T11T、发布/安装/环境或权限修改。测试 gate 允许既有 `--helper` 拒绝入口，不授权真实 helper spawn。

## Review Focus

1. gate3 预期 exit4 与进程启动/日志包装失败区分：先保存 raw exit，再按 expected 验收。
2. 编译失败不算变异 RED；M2/M3 必须指定 GC 名称 FAIL，不能只有总 exit1。
3. M2/M3 下 W1、R1 **双向**对照逐名 PASS，不能只测被变异的一侧。
4. PASS 等式不等于打印原始账本；映射到固定源码具体断言，说明未打印部分。
5. 缺 UTC/原始 argv/退出码/完整 hash 不由 CMakeCache 或事后 hash 补证；未配对日志与未知结果阻塞交付。

## 1. 来源、影响与最小处置

| ID | 来源/事实 | 影响与建议 | 受影响任务 |
|---|---|---|---|
| E1 | product-gc-q 摘要；review-1-clarification §1 承认多数 UTC 估计/占位 | 原 PASS 为成员自报，Product blocked，不是代码失败；未来即时机器采集，不重建旧时序 | GE-R/Q |
| E2 | clarification §2：完整命令/exit 未持久化；review ops gr-20 仅短 hash，与澄清“完整值”矛盾 | 新日志必须持久化 argv、cwd、环境摘要、stdout/stderr、raw exit、时间及64位 SHA-256 | GE-R |
| E3 | review摘要§17、clarification §4、Product裁定 | OCR total3/reviewable1/excluded2 与额外两个文档核对分列，不报 OCR reviewed3/100% | GE-R/Q |
| E4 | clarification §3；固定 H 的 gc_guard_case | 已有断言可复用，不改测试；等式证明只覆盖所比较字段，不声称完整原始账本打印 | GE-R |
| E5 | review摘要§18、ops gr-17；Product保留Dev非法JSON/未配对史 | 原文件只读，新证据自己解析配对；不能给Dev旧操作补造receipt | GE-R/Q |
| E6 | 原预算1D+1R/0已用尽；用户仅批准制定计划 | 新1R/0预算另批；任何必改发现移交Product，不自动返工 | GE-G/Q |

已静态核 HEAD=H、父提交=base、WT porcelain为空；复算原计划 hash 相符。CodeGraph 明传 WT 返回 sg4→run_activity_segments→drive_segment 调用链，但正文错选 etw-probe；该正文不作目标源码证据。用只读固定 `git show H:tests/io_activity_checks.cpp` 核对实际 guard、GC断言与变异锚点；不宣称本轮测试通过。所有历史 FAIL/PASS/夸大表述保持原文；新证据只证明未来新运行。

## 2. 文件与资源边界

本轮输出：本计划；主工程 `.workflow/parallel-plan-20261029-6-11-17/issue11-guard-evidence-replan/plan-1.md`、`plan-1.ops.jsonl` 及同前缀附件。

未来推荐 task=`issue11-guard-evidence-review`，attempt=1（新 task 的 attempt1，并非复用旧 review-1）；Product 必须签独立合同与登记以下**全新**根：

- `$ROOT=E:/Git/TMOG-Public-WorkTree/issue11-io-20261030/build/issue11-guard-evidence-review-a1`。
- 主工程 `$REPORT=E:/Git/TMOG-Public/.workflow/parallel-plan-20261029-6-11-17/issue11-guard-evidence-review`，仅 `review-1*`；报告 `review-1.md`，日志 `review-1.ops.jsonl`。
- `$ROOT/trusted/evidence.py`：唯一标准库脚本；`trusted` 从受信主工程静态方案新建，不能从 archive 复制脚本。解释器固定系统已安装的绝对路径，首次记录版本；未知或不可用停止，不安装。
- `$ROOT/{normal,M1,M2,M3,M4,M5}/{Debug,Release}/source-H.zip,source/,build/`：**12个配置各自全新 archive/source/build**；`logs/` 保存命令原始输出/元信息；`diffs/` 保存每配置单处diff；manifest与oracle结果也只在 ROOT。
- tracked、旧产物根 `build/issue11-guard-review`、历史报告/ops、CodeGraph原索引均不改。源码变异只在新 archive 副本指定文件；不复制旧exe/cache/日志。

先核父目录存在、解析路径无越界链接/reparse point、根不存在、WT Git注册与归属一致、无写者；冲突 BLOCKED。创建和每组副作用前后即时 intent/receipt，不等待逐操作确认。读取 CodeGraph 先只读 status/explore；不在本方案用 sync/init 改索引，查询缺失如实披露，固定 git blob为核验依据。运行后核WT HEAD/status/原件hash无变。产物不由Review删除；Product后续按共享合同核归属清理。

## 3. 局部拓扑、空闲派发与看板

不修改全局DAG；下表是本补齐阶段的唯一局部顺序，所有路径重叠由依赖串行解决。

| task_id | Issue | 角色 | depends_on | 允许修改路径 | 验收摘要 |
|---|---|---|---|---|---|
| GE-P | #11 | plan | 无 | §2本轮新计划与本task plan-1* | 静态方案/版本/hash/报告交付，awaiting_approval |
| GE-G | #11 | product/用户门槛 | GE-P | Product自身state/events/看板批准记录；不改本计划 | 用户批准新计划hash、1R/0预算与账本等式口径，核新根 |
| GE-R | #11 | review | GE-G | §2全新ROOT与新task review-1*；tracked只读 | 固定H、12配置、完整机器证据及命名oracle，独立结论 |
| GE-Q | #11 | product | GE-R | Product自身state/events/看板裁定记录；不改成员报告 | 原始证据/技能级别/门槛核验；不自动发布或关闭Issue |

```mermaid
graph LR
  P["GE-P 静态计划"] --> G["GE-G 用户批准版本和新预算"]
  G --> R["GE-R 新独立Review证据"]
  R --> Q["GE-Q Product裁定"]
```

图为文字等价关系图，无自选配色；表是可访问文本替代，未渲染验证。Plan交付后由Product关闭，不留Plan窗口等审批；Product按共享合同记录角色空位/就绪/派发/未派发原因，待批准不阻塞无关就绪任务。GE-G/Q重叠Product记录路径已有GE-G→GE-R→GE-Q依赖。

## 4. 最小证据包装接口（未来编写，本轮不执行）

只创建一个 `evidence.py`，不引入测试框架。以下接口是未来Review的明确交付，不是假称已有工具：

- `run --id ID --cwd ABS --logs ABS --ops ABS --expected N --timeout SEC -- EXE ARGS...`：EXE使用核实后的绝对路径；argv JSON数组原样记录（不拼shell字符串），`subprocess.Popen(shell=False)`。stdout、stderr分别以二进制文件重定向，不tee丢exit，不读至内存；即时UTC start/end及monotonic耗时、完整cwd、脱敏环境摘要、PID/进程归属、expected和raw_exit持久化。meta/stdout/stderr完整hash写receipt。exit匹配返回包装器0，即使子进程预期2/4；不匹配返回包装器1；spawn异常raw_exit=null、error原文、包装器2；timeout标记不伪造raw exit。运行记录完整后才返回。
- `prepare --case NAME --config CFG --source ABS --reference ABS --diff ABS`：normal只核对；M按§5固定函数唯一锚点变异，断言匹配恰1，写before/after完整hash、单处diff；`reference`是同配置normal的H原件。不改fake/断言；异常停止，不自动修锚点重试。
- `audit --root ABS --wt ABS --head H --base BASE --plan ABS --old-plan ABS --ops ABS`：解析所有JSONL/命令meta，校验ID唯一且各1 intent+1 receipt，raw_exit/时间/完整hash对应文件；校验12配置来源、oracle、编译源、预算、固定对象；生成机器可读 `audit.json`，失败非0。只读取历史文件，不修复。

`run` 每次intent先append+flush+fsync；每条记录即时取 `datetime.now(timezone.utc).isoformat()`，不手写或估计。receipt必须在stdout/stderr关闭后计算hash、原子写meta后append+fsync；严重记录写失败停止，不宣告完成。记录schema含 `kind/operation_id/utc`，receipt含 `utc_start/utc_end/raw_exit/expected/timeout/elapsed_seconds/argv/cwd/env_summary/files[{path,bytes,sha256}]`；只记录PATH、Qt变量、locale等白名单摘要，不记录凭证或全环境。

configure开始置配置monotonic deadline=900秒，configure与build共用剩余额度；外部脚本持续累计新根字节，达到2GiB停止并保存失败。单check timeout120；CTest顺序执行且`--timeout120`逐test生效，整个六test命令上限720秒，不把6项总时长错当一个check120秒。构建后无授权重试。

超时先落超时记录；只能按本次Popen仍存活对象及登记进程树身份停止本次子树，不按名称/历史裸PID杀进程。终止权限不明/失败/子树无法确认退出即BLOCKED，保留现场，不开始下个配置。该watchdog是验证预算控制，不声称生产同步I/O具有硬截止。

包装器自身最小检查：首次运行预期0、2、4的 `Python -I -c "import sys;sys.exit(N)"`，各记录 raw_exit=N、包装器0；另一个异常退出预期不匹配必须包装器1。全是标准库无I/O空进程，仅在新预算批准后执行。解析日志检查argv、UTC、3个完整hash及操作配对；失败停止，不验证目标。这些检查不替代目标 gate。

## 5. 固定验收矩阵与准确命令（未来执行）

### 5.1 固定静态项

- `git -C WT rev-parse HEAD`=H、`git -C WT rev-parse H^`=base；`git -C WT status --porcelain=v1`为空，前后均核。
- `git -C WT diff --name-status BASE H`恰三tracked：`tests/io_activity_checks.cpp`、`doc/plans/2026-10-29-issue-11-acceptance.md`、旧批准guard coverage计划同名副本。
- 将 `git show BASE:path`/`git show H:path`原始bytes经run存档：acceptance的base全bytes等于head相同长度前缀；生产区段从 `struct SegmentIo` 至 `run_no_side_effect`起点前逐字节不变，边界唯一且打印长度及完整hash。区段外生产修改也由完整diff审查，不只靠区段hash。
- 原旧计划主工程/提交副本均等于给定旧hash；本新计划hash等于用户批准值。固定源码/acceptance/旧计划/新计划各完整hash前后不变。
- 新Review调用 `open-code-review-delegate`，记录实际版本、`ocr delegate preview --format json --from BASE --to H`与`ocr delegate rule --format json tests/io_activity_checks.cpp`原始输出，host逐文件审查。OCR total3/reviewable1/reviewed1/excluded2；reviewable覆盖1/1；额外文档核对2/2分列，不冒称OCR三文件100%。不可用记录原始错误及替代方法，由Product裁定。

### 5.2 每配置流程

`$PY/$GIT`、OCR/CodeGraph路径在未来预检记录实际已有绝对路径，未核实不运行；工具版本变化交Product，不切版本。以下PowerShell均从受信主工程cwd发起，仅未来新ROOT内写入：

```powershell
$WT='E:/Git/TMOG-Public-WorkTree/issue11-io-20261030'
$H='978b1d8e6b68a9b4c0d678043ad04bbbb8e92ce3'
$BASE='4361d8e9723e398bf100e506bca26626e1528e53'
$ROOT="$WT/build/issue11-guard-evidence-review-a1"
$RUNNER="$ROOT/trusted/evidence.py"
$OPS='E:/Git/TMOG-Public/.workflow/parallel-plan-20261029-6-11-17/issue11-guard-evidence-review/review-1.ops.jsonl'
$CMAKE='D:/InstallApplication/CMake/bin/cmake.exe'
$CTEST='D:/InstallApplication/CMake/bin/ctest.exe'
$QT='E:/InstallApplication/Qt/6.12.0/mingw_64'
$GXX='E:/InstallApplication/Qt/Tools/mingw1310_64/bin/g++.exe'
$NINJA='E:/InstallApplication/Qt/Tools/Ninja/ninja.exe'
$env:PATH="$QT/bin;$(Split-Path $GXX);$env:PATH"
$env:QT_QPA_PLATFORM='offscreen'
$env:QT_QPA_PLATFORM_PLUGIN_PATH="$QT/plugins/platforms"
$rx='^(process_checks|close_lifecycle_checks|sampling_recovery_checks|stale_persistence_checks|io_table_checks|io_helper_binding_checks)$'
# $PY/$GIT由预检绑定真实绝对路径；根/父目录已登记，不从source运行解释器。
function Run-E([string]$Id,[int]$Expected,[int]$Seconds,[string]$Exe,[string[]]$Argv) {
  & $PY -I $RUNNER run --id $Id --cwd 'E:/Git/TMOG-Public' --logs "$ROOT/logs" --ops $OPS --expected $Expected --timeout $Seconds -- $Exe @Argv
  $wrapperExit=$LASTEXITCODE
  if ($wrapperExit -ne 0) { throw "evidence failure id=$Id wrapper_exit=$wrapperExit; stop" }
}
foreach ($case in 'normal','M1','M2','M3','M4','M5') {
  foreach ($cfg in 'Debug','Release') {
    $C="$ROOT/$case/$cfg"; $S="$C/source"; $B="$C/build"; $id="$case-$cfg"
    # 已确认C不存在，登记后创建；12个独立zip/source，不复用构建缓存。
    Run-E "$id-archive" 0 120 $GIT @('-C',$WT,'archive','--format=zip',"--output=$C/source-H.zip",$H)
    # evidence.py的prepare在全新S用zipfile标准库解包；拒绝绝对/../逃逸及链接条目。
    & $PY -I $RUNNER prepare --case $case --config $cfg --source $S --reference "$ROOT/normal/$cfg/source" --diff "$ROOT/diffs/$id.diff"
    if ($LASTEXITCODE -ne 0) { throw "prepare failed $id; stop" }
    $clock=[Diagnostics.Stopwatch]::StartNew()
    Run-E "$id-configure" 0 900 $CMAKE @('-S',$S,'-B',$B,'-G','Ninja',"-DCMAKE_BUILD_TYPE=$cfg","-DCMAKE_PREFIX_PATH=$QT","-DCMAKE_CXX_COMPILER=$GXX","-DCMAKE_MAKE_PROGRAM=$NINJA",'-DCMAKE_EXPORT_COMPILE_COMMANDS=ON')
    $remaining=[int][Math]::Floor(900-$clock.Elapsed.TotalSeconds)
    if ($remaining -le 0) { throw "config budget exhausted $id" }
    $buildArgs=@('--build',$B,'--parallel','2')
    if ($case -ne 'normal') { $buildArgs+=@('--target','io_activity_checks') }
    Run-E "$id-build" 0 $remaining $CMAKE $buildArgs
    $want=($case -eq 'normal') ? 0 : 1
    Run-E "$id-safe" $want 120 "$B/io_activity_checks.exe" @('--check-helper-binding-only')
    if ($case -eq 'normal') {
      Run-E "$id-inventory" 0 120 $CTEST @('--test-dir',$B,'-N','-R',$rx)
      Run-E "$id-ctest" 0 720 $CTEST @('--test-dir',$B,'-j','1','--timeout','120','--output-on-failure','-R',$rx)
      Run-E "$id-gate1" 2 120 "$B/io_activity_checks.exe" @()
      Run-E "$id-gate2" 2 120 "$B/io_activity_checks.exe" @('--helper')
      Run-E "$id-gate3" 4 120 "$B/io_activity_checks.exe" @('--check-helper-binding-only','extra')
    }
  }
}
```

prepare接口补充：读取其source同父 `source-H.zip`，每条解包路径核实际后代及链接，根不存在才创建；normal解包后不变异，以H blob核bytes；M解包后按下表改且与normal对照。所有prepare/create/archive/hash副作用也由同脚本即时配对记录。上面循环外层逐配置核oracle/compile_commands/预算后才继续，不能延迟到末尾隐藏失败；最后运行：

```powershell
& $PY -I $RUNNER audit --root $ROOT --wt $WT --head $H --base $BASE --plan 'E:/Git/TMOG-Public/doc/plans/2026-10-31-issue-11-guard-evidence-repair-plan-v1.md' --old-plan 'E:/Git/TMOG-Public/doc/plans/2026-10-31-issue-11-guard-coverage-repair-plan-v1.md' --ops $OPS
if ($LASTEXITCODE -ne 0) { throw 'audit failed; no PASS' }
```

### 5.3 变异、命名oracle和来源

| case | archive内唯一生产变异 | 双配必需结果 |
|---|---|---|
| normal | 无 | 全量构建0；safe0、所有SG/GC/HB逐名PASS且无FAIL；库存六项准确，六项6/6且无Skipped；gates raw2/2/4 |
| M1 | run_activity_segments 尾 `out.cancelled = cancelled;`→`out.cancelled = true;` | compile0/safe1，SG1对应命名FAIL |
| M2 | write_cmd定义之后唯一邻接 `if (cancelled || wall_deadline_ms - ops.now_ms() <= 0)`→`if (false)` | compile0/safe1；`GC-W0: write guard alone blocks expired send`及`GC-W-1: write guard alone blocks expired send`各FAIL；**GC-W1与GC-R1各全部命名PASS、零FAIL** |
| M3 | read_cmd定义之后同条件唯一邻接→`if (false)` | compile0/safe1；`GC-R0: read guard alone blocks expired send`及`GC-R-1: read guard alone blocks expired send`各FAIL；**GC-W1与GC-R1各全部命名PASS、零FAIL** |
| M4 | classify_activity_result函数入口插入 `return ActivityResult::Ok;` | compile0/safe1，既有SG分类结果命名FAIL（SG2/3/4-D/5/6-B对应源码oracle），不能只靠GC失败 |
| M5 | classify入口的多行 `if (!obs.exited || !obs.exit_code_known\n            || obs.wait_result != WAIT_OBJECT_0)`→`if (false)` | compile0/safe1；SG5-B/C/D既有命名FAIL |

每个配置保留同源zip、解包前后源码、单处diff、exe、compile_commands、命令日志/元信息完整64hex SHA-256及bytes；manifest对应case/config/operation_id。zip与H archive来源一致，normal源码等于H原件；M与normal只有表中1处变异，fake与断言零改动。编译数据库目标 `file`解析规范路径必须恰本配置 `source/tests/io_activity_checks.cpp`，同时审查directory/command或arguments实际编译输入；WT/别case/别配置泄漏即FAIL，不能只看CMakeCache。

### 5.4 可观察账本（不增加测试输出）

最小口径：固定H源码断言表达式 + 新运行每一命名PASS/FAIL原始行 + 自动生成oracle映射JSON（case、label、source行/表达式、stdout行号、结果）。每GC检查有效样本、log次数、推进恰1、send次数/命令/入口clock、requested_write_bytes、取消/分类、总操作护栏≤2000；公共GC标签结合6个case执行顺序映射，重复标签不得随意归属。

normal必须W0/W-1/R0/R-1禁发及W1/R1允许1ms命令、返回到期无后续命令逐名通过。W1/R1每case10个命名断言全部PASS；M2和M3四组对照每配置都核10PASS/0FAIL（不是只汇总双配20）。W0/W-1每case5、R0/R-1每case7命名断言，结合公共budget/promote/log/guardrail各6条与源码校验，缺/多/重复异常即FAIL，不盲信历史244总计。

边界：现有GC fake没有逐sample qpc日志，也没有每次log完整原始字段、全部send账本数值打印；PASS说明对应等式成立，不恢复每步原始轨迹，不伪称已全量打印。源码核实际脚本 `{1,2,3,10,11,12}`、第二个目标log推进到D-rem、真实drive计数、send入场记账且不二次阻止；不同于旧设计文本含9样本的理论展开。现有断言足以证明本次guard oracle，推荐用户批准此明确口径；若要求全原始sample/log/send数值输出，属于另需测试输出增强/Dev预算与新H/复审，本计划不实施也不隐式授权。

## 6. 实施顺序、审批与交付门槛

- [ ] GE-P：本计划及报告静态自查、hash落盘，DONE交Product，Plan关闭。
- [ ] GE-G：用户批准本新v1 hash、1R/0D/0自动返工、固定H、全新根及§5.4等式证据口径；Product记录批准后另建Review会话/合同。
- [ ] GE-R1：READY/ACK，预检工具/权限/归属/HEAD/旧计划hash；机器证据包装自检；独立静态审查及OCR分列。
- [ ] GE-R2：12配置按normal双配→M1双配→…→M5双配，逐配置来源/预算/oracle检查，记录真实失败，0自动返工。
- [ ] GE-R3：最终audit、WT前后不变、报告摘要≤20行，PASS/FAIL/BLOCKED与原始证据完整hash、技能清单落盘；报告写操作receipt后再独立解析配对（报告hash不包含自己的末尾receipt，不作循环hash）。通知Product，关闭新Review。
- [ ] GE-Q：Product独立核完整原始exit/UTC/命令/hash/配对/矩阵和统计口径。合格只给新Review技术验收，不改变旧PASS自报的效力；不授权发布/实验/关闭#11。

风险与停止条件：固定对象或工具变化、权限未知、脚本或记录失效、超预算、命名oracle不符均停止，交Product；不同日志相同hash可能确定性输出，不等于共享产物，须由独立路径/archive/命令证明。损坏记录不得删改，新增失败receipt；无receipt的未知操作不得自动重跑。Review发现必改代码/输出时提出原因、路径、新H与预算，另请批准。

保留人工门槛：同步已开始的WriteFile/sample/log/helper I/O无硬墙钟，已发操作不可撤回，guard与send非原子截止；fake/变异证据不证明真实Windows I/O、helper/EOF、UI、集成或发布成功。#11保持OPEN；T11T、真实实验、外部发布和权限改变分别另批。

自查覆盖：E1/E2→§4机器证据；E3→§5.1统计；E4→§5.4口径；E5→§4/6配对与历史保留；E6→GE-G预算；normal+M1..5双配、两边阈值对照、源泄漏、production/acceptance/计划hash、预算与禁令均有验收落点。方案代码未执行，脚本未实现，图未渲染；证据等级与技能清单见本task plan-1.md。
