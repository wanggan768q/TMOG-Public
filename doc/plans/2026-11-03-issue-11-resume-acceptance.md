# Issue #11 恢复验收记录（R-11/a1，fresh main 集成与全新取证）

- run：resume-20261103-594d70；ticket R-11；assignment a1；owner Dev_R_11_a1
- 日期：2026-11-03；协调者：Product [594d70]
- 分支：feat/issue11-io-20261030
- 共享计划 doc/plans/2026-10-29-issues-6-11-17-parallel-plan-v1.md 本轮只读（B-17
  写域收紧）；本文档为独立 #11 验收载体，不修改共享计划。

## 1. 恢复调查结论（原树/Issue/旧 state/历史报告）

- Issue #11（W10 进程磁盘 I/O 指标）OPEN；blocked-by #5 已 closed。唯一 issue 评论为
  B1 文档归档说明（PR #46），无业务进展要求。
- 旧 run parallel-plan-20261029-6-11-17 state：issue11-io phase=blocked
  （head 0627ab4，旧记录），经后续 HB/SG/GC 阶段至 978b1d8。
- GE-R（issue11-guard-evidence-review review-1.md）：12 配置矩阵全 PASS，技术层 PASS
  （绑定固定对象）；B 静态核验（issue11-guard-disposition-static-review review-1.md）
  四层结论：技术=支持；机器证据完整性=部分支持（不可恢复缺口保留）；执行授权合格=
  不支持（重试/覆盖写/晚补）；验收效力=不构成 GE-R 全合同 PASS。旧 head 未 accepted。
- 历史证据缺口（6 不唯一组、7 旧 receipt 覆盖、2 晚补、4 旧 stdout hash 不符）永久
  保留，不补造；本轮以全新取证替代历史过程证明。

## 2. 本轮范围与边界

- 允许路径：Assignment R-11/a1 候选 + 新增独立验收文档
  doc/plans/2026-11-03-issue-11-resume-acceptance.md。
- doc/plans/2026-10-29-issues-6-11-17-parallel-plan-v1.md：只读（Product B-17 收紧），
  未修改。
- 不恢复其他票代码；#13/17U 公共 MainWindow/root CMake 串行，本轮后释放。
- 不合并/不 close Issue/不清理；提交后由 Product 安排固定 SHA IssueWriter 代办。
- 未执行 11H 受控 I/O 实验、process_ops 真实终止回归（各自仍需用户单独授权）。

## 3. fresh main 集成

- fetch 后 origin/main = ae5cc44902d7a55c0a22c945fe3a3b22bfc6f7fd（14 commits 领先：
  agent-team 合同、B1 文档归档、.workflow 迁移；src/tests/CMake 零触及）。
- 共享 5 份计划文档 HEAD 与 origin/main blob 逐一相等；acceptance 文档仅本分支有
  （合并即新增），无冲突。
- merge --no-ff ae5cc44 → merge commit 33663e434fc2c6a2ec736fb46083e6bfbe187256
  （parents 978b1d8e + ae5cc44），conflict 0，porcelain clean。

## 4. 全新取证（不复用旧 PASS）

工具链：CMake/CTest 3.31.2（D:/InstallApplication/CMake/bin）、Ninja 1.12.1
（E:/InstallApplication/Qt/Tools/Ninja）、g++ 13.1.0 MinGW-Builds
（E:/InstallApplication/Qt/Tools/mingw1310_64/bin）、Qt 6.12.0 mingw_64。

### 4.1 合并前（build/issue11-resume-dev，基线 head 978b1d8）

| 项 | Debug | Release |
|---|---|---|
| configure exit | 0 | 0 |
| build --parallel 2 exit | 0（0 error/FAILED） | 0 |
| ctest -N 六项正则 | Total Tests: 6 | 6 |
| ctest -j1 --timeout 120 | 6/6 passed exit 0 | 6/6 passed exit 0 |
| gate 无 flag / --helper / 混用 | 2 / 2 / 4 | 2 / 2 / 4 |
| --check-helper-binding-only | 244 PASS 0 FAIL exit 0 | 244 PASS 0 FAIL exit 0 |

逐名计数（debug，release 同值）：GC-W0=5、GC-W-1=5、GC-W1=10、GC-R0=7、GC-R-1=7、
GC-R1=10、公共 GC:=24、SG=63、HB=113。

RED/GREEN 可失败性（当次原始输出保留）：
- RED：process_checks.cpp:54 `*rd == 500.0` → `499.0`；重建 exit 0；ctest exit 8，
  命名 FAIL "io read 1000/2s = 500 B/s"（Debug/Release 双确认，red-run-*.log）。
- 还原 `git checkout -- tests/process_checks.cpp`；md5 前后一致
  （3266D1E0693F4F386545125B050D5F1C）。
- GREEN：重建 exit 0；ctest 6/6 passed exit 0 双配置（green-run-*.log）。

### 4.2 合并后（build/issue11-resume-postmerge，head 33663e4）

| 项 | Debug | Release |
|---|---|---|
| configure / build exit | 0 / 0 | 0 / 0 |
| ctest -N | 6 | 6 |
| ctest -j1 --timeout 120 | 6/6 passed exit 0 | 6/6 passed exit 0 |
| gate 2/2/4 | ✓ | ✓ |
| --check-helper-binding-only | 244 PASS 0 FAIL | 244 PASS 0 FAIL |

合并未破坏 #11 行为；安全回归（process/close_lifecycle/sampling_recovery/
stale_persistence/io_table/io_helper_binding）全部通过。

## 5. 真实 UI 证据（Release TmogReplica.exe）

- 真实启动 4 次（head 33663e4 的 release 构建产物）；每次窗口句柄/标题
  "TmogReplica" 确认；PrintWindow 真实截图 window-final.png（272x274，窗口
  GetWindowRect 632,245）。
- UIA（UIAutomation）真实窗口树（uia-tree.txt，UTF-8）：表头
  名称/PID/CPU/内存/I/O 读/I/O 写/状态；真实进程行（ztsmwscsrv.exe 等）；工具栏
  暂停/刷新/结束任务。
- 退出事实（经独立 Review R-11-local-r1 v2 补核的三分口径，原"每次干净退出"
  表述不成立，此处更正）：
  - 第 1 轮（alive.txt）：经 Stop-Process 结束；是否先调 CloseMainWindow 前置
    调用 unknown（首版脚本未落盘）。
  - 第 2/3 轮（alive2/alive3.txt）：记录 closed=True/exited=True，但所走脚本版本
    unknown。
  - 可确证走最终版脚本（CloseMainWindow→等待→必要时兜底）的仅第 5 轮
    （window-final.txt，pid 19756，closed=True exited_final=True）。
  - 另有第 4 轮（脚本缺陷 Add-Type 失败，无有效记录）。
  - Review_R11_local_1 独立复现 1 次：pid=74908，CloseMainWindow=True，
    10s 内自然退出 exitcode=0，无残留（receipt evidence/R11-local/ui-close-repro/）；
    单次样本不外推"生产关闭可靠"。
  - 会话首版 RELEASE_READY 后发现的 pid 19156 残留（UIA 轮次孤儿）处置原始输出
    未落盘：unknown 维持，不追认任何根因。
- tasklist 复验 0 残留（RELEASE_READY 时点）。
- 限制：CopyFromScreen 全透明（会话隔离）已弃用改 PrintWindow，如实记录；
  I/O 列数值变化的视觉人工点验仍 pending 用户。
- 证据：evidence/R-11/a1-ui-smoke/（window-final.png、window-final-view.png、
  uia-tree.txt、alive*.txt、capture-window.ps1）；Review 独立复现
  evidence/R11-local/ui-close-repro/。

## 6. Issue #11 验收映射（对照 GitHub 正文四条）

1. 有效累计值→真实差分速率、排序/选择正常：实现+io_table_checks 8 组 +
   stale_persistence/io_table 生产 MainWindow 检查 PASS（自动化）；真实速率趋势见
   UIA 树与截图（视觉确认 pending）。
2. 首帧/身份变化/倒退/拒绝访问→待采样/不可用：compute_io_rates 全分支
   （FirstSample/IdentityChanged/InvalidDelta/Unavailable）测试 PASS。
3. 受控子进程 I/O 趋势+口径交叉验证：io_activity_checks 受控实验入口完整实现
   （spawn/身份核实/段协议/预算/收束，244 项 fake 检查 PASS）；**授权路径真实执行
   （11H）仍未运行**——需用户单独批准，本轮未执行、不豁免。
4. 差分/身份/失败检查及回归：process/io_table/io_activity(静态)/close_lifecycle/
   sampling_recovery/stale_persistence 六库存双配置 6/6。

## 6b. F3 真实 Before/After UI 对照（F-3 缺口补齐，R-11/a1 F1-F3 轮）

共享合同要求同版本同场景真实对照；本轮以独立构建取证，不模拟、不隐藏列。

| 项 | Before（基线） | After（本票） |
|---|---|---|
| 源码版本 | ae5cc44902d7a55c0a22c945fe3a3b22bfc6f7fd（origin/main，detached worktree baseline-main-20261103） | be6ad14993c14975ea4671da546ab6e0fa2bd966（本分支，F1 文案修正含） |
| src/tests/CMake tree hash | 56e102fc8899b2488e5639cf2090eb826eaeee36 | 6093f209c2d413d0908831ddfc881e80e3cd12d8 |
| TmogReplica.exe SHA-256 | BDECC5274A8BBF70F2D1641ADA928057E5BE6E3FAFA0E52F8292659822EEBA24（256571 B） | 8EBBCFBF5F917181014ACEEF6D34583B24C6E58A04ABCFE76C2595EDA78FDF77（265876 B） |
| 构建命令/工具链 | cmake -S <wt> -B <build> -G Ninja -DCMAKE_BUILD_TYPE=Release + 显式 ninja/g++/ar/ranlib/Qt 路径；cmake3.31.2+ninja1.12.1+g++13.1.0+Qt6.12.0 | 同左（同工具链同参数，仅源码树不同） |
| 启动命令 | Start-Process 无参数，同工作目录模式，Qt 运行时同路径 | 同左 |
| 场景 | 主屏原生显示、无 DPI/主题覆盖；窗口 GetWindowRect 632,245 尺寸 272x274 | 同左（同尺寸同位置模式） |
| 截图 | before-window.png（PrintWindow flags=2） | after-window.png（同脚本同参数） |
| UIA 真实文本 | 31 元素；表头 5 列：名称/PID/CPU/内存/状态（**无 I/O 列**） | 33 元素；表头 7 列：名称/PID/CPU/内存/**I/O 读/I/O 写**/状态 |
| 关闭 | CloseMainWindow=True，10s 内自然退出，无兜底，残留 0 | 同左 |
| 进程归属 | pid 9208 自建自关（before-meta.txt） | pid 76628 自建自关（after-meta.txt） |

- 逐对元数据（含每文件 SHA-256 与场景同一性）：evidence/R-11/a1-f3-pairs.json；
  两侧机器输出各自落档 evidence/R-11/a1-f3-{before,after}/（version-meta.txt、
  configure/build log、exits.txt、*-meta.txt、*-window.png、*-uia.txt、capture-side.ps1）。
- **截图证据效力更正（local-r2 v2 补核 + 本轮根因调查，原"像素差异由两列渲染引起"
  表述撤回）**：After 与 Before 截图在表头/数据区**逐像素一致（0 差异）**，唯一差异
  在状态栏 56 像素——截图**不能证明 I/O 列视觉呈现**，截图证据降级为视觉 unknown。
- **根因（本轮探针 D/E/G/H/I 确立，高置信机制）**：PrintWindow+PW_RENDERFULLCONTENT
  对无人值守 Qt/DWM 合成窗口返回**冻结首帧**表面（resize 失效/前台激活+移动/最小化
  还原均无法刷新捕获表面）；UIA 读的是活控件树——同刻配对取证（探针 I）显示 UIA
  报 7 表头而截图仍为冻结帧，矛盾直接复现并归档。CopyFromScreen（地面真值路径）在
  本执行环境不可用（宿主无桌面输入绑定，handle invalid）。原始图未覆盖，全部探针
  输出在 evidence/R-11/a1-shot-probe/。
- **仍有效的 F3 证据**：UIA 文本对照（Before 5 表头无 I/O ↔ After 7 表头含
  I/O 读/I/O 写，插状态列前）、meta 场景同一性（尺寸/显示/Qt 运行时/启动/关闭）、
  exe/源码树 hash 链 8/8、双侧自然退出。**视觉呈现（像素级）回归用户人工点验**。
- F1 修正注：process_checks 汇总文案 51→53（真实 check 数，Review_R11_pr_1 独立直跑
  核验），head be6ad14 双配置 ctest 6/6 当次验证。

## 7. 未完成与限制（保留，不豁免）

- 11H 受控 I/O 实验（--allow-controlled-io 真实路径）：未执行，需用户单独授权。
- process_ops_checks 真实终止回归：未执行，需单独受控授权。
- 实机 UI 人工点验（I/O 列显示/排序/tooltip 视觉确认）：待用户。
- 历史执行纪律缺口（旧 run）：永久保留不追认。
- 同步已发操作无硬墙钟、guard 非原子截止、fake 不证明真实 I/O：原计划 §6 范围
  声明保留。

## 8. 本轮命令与日志索引

- 证据根：E:/Git/TMOG-Public/.workflow/resume-20261103-594d70/evidence/R-11/
  （a1-baseline、a1-ui-smoke）。
- 构建日志：WT/build/issue11-resume-dev/logs/、WT/build/issue11-resume-postmerge/logs/
  （configure/build/ctest-N/ctest-run/gate/hbsg-gc/red/green，全部当次原始输出）。
- ops：.workflow/resume-20261103-594d70/logs/Dev_R_11_a1.ops.jsonl
  （R11A1-investigate-done、R11A1-build-fresh、R11A1-red-probe、R11A1-merge-main、
  R11A1-postmerge-verify、R11A1-ui-smoke intent/receipt 配对）。
