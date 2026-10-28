# Issue #10 交叉审查记录（W24 Benchmarks 行为与安全测试合同）

- **日期**：2026-10-28
- **审查会话**：TMOG-Dev-wobbly-aho（非 #10 作者——会话为用户 /clear 后新上下文，协调者另行核实本会话此前执行 #9）
- **对象**：worktree `E:/Git/TMOG-Public-WorkTree/issue-10-benchmark-contract`，分支 `issue-10-benchmark-contract`，基线 `246be01`，已审 HEAD `a74f83c`（c2c0311→a74f83c 为合同修订 v2），工作树干净
- **任务包**：协调者 TMOG-product 派发，仅 Review，不修代码/合同，不 commit/push
- **边界遵守**：未运行原检查二进制（经静态证实含 2^30 步满载，见 F1）；未跑 4096-pass 满参数/5 s 满载/温升压力实验；未写用户磁盘（自建驱动放会话临时目录）；未装工具；未清理任何对象

## 1. 已读材料（不靠旧聊天）

- Issue #10 全文（gh issue view，OPEN，含共用约束与验证要求）
- 合同 `doc/plans/2026-10-27-issue-10-benchmark-contract.md`（v2，239 行）
- `src/BenchAlgo.h`（102 行）、`src/BenchAlgo.cpp`（122 行）
- `tests/benchmark_algo_checks.cpp`（206 行）
- `CMakeLists.txt` diff（+6：BenchAlgo.cpp 入 tmog_core、benchmark_algo_checks 测试目标）
- c2c0311→a74f83c 增量 diff（仅合同文档 66 行改动 + BenchAlgo.h 注释 8 行——v2 未动 .cpp/测试/CMake）

## 2. 关键静态计数（协调者要求的精确核算）

**检查 4（`test_rate_with_injected_clock`）实际负载**：

- 输入：`std::vector<std::uint32_t> keys(kCpuKeys)` = 262144 元素（1 MiB），**非缩小输入**
- `run_cpu_int`（BenchAlgo.h:91）无 pass 数参数；循环上限为常量 `kCpuPasses = 4096`（BenchAlgo.h:27）
- CountingClock 只伪造 `now_seconds()` 返回值（每次 +0.5 ms）；cancel 未置位；4097 次时钟调用累计计时 2.048 s < 5 s，永不触发超时
- **结论：检查 4 每次运行真实执行 4096 × 262144 = 2^30 = 1,073,741,824 步哈希计算**。注入时钟不减少计算量，只伪造计时读数

**其余检查实际负载**：检查 5 = 1 pass（262144 步）；检查 6 = cpu 单 pass + mem_bw 完整 5×64×1M（合同 §11 已如实披露后者）；检查 3 = 零计算取消路径（但分配 24 MiB mem 向量）。

**断言计数**：`check(` grep 计 25 = 24 处断言调用 + 1 处函数定义——与开发者声称"24 项断言"一致。

## 3. 发现

### F1【记录失实，阻断 PASS】合同 §11 声称与检查实际负载矛盾

§11 原文："合同 §2.2 的完整 cpu_int 总功（4096 passes）**未在检查中运行**（属真实负载实验，须用户主动批准，留给 #28 实机验收）"。

静态证实为假：检查 4 调用 `run_cpu_int` 走满 4096 pass 循环，2^30 步真实计算在开发者机器上每次跑检查都执行了（Debug+Release 各至少一次）。同族失实：

- 测试文件头（`benchmark_algo_checks.cpp:2`）："总检查时长 < 2 s，**工作集 < 1 MiB**"——检查 3/5/6 各分配 3×8 MiB mem 向量，工作集 24 MiB
- 合同 §5："总检查时长 < 3 s"——含 2^30 步 + mem_bw 完整运行，该数字无实测支撑（当时无时钟计录）

实际危害很小（单核 1–2 s 纯计算），但违反项目记录纪律（"过程记录如实"/"实测零值…禁止假数据"同一纪律族）：验收记录中"未运行"的陈述与事实相反，且使"真实负载须用户主动批准"边界在不知情中被越过。

**处置要求（一句话修正即可，代码无需改动）**：§11 与 §5 记录改为如实陈述——"检查 4 经注入时钟执行了完整 2^30 步计算（时钟仅伪造计时读数）；工作集 24 MiB + 1 MiB keys；真实时钟部分为 cpu 单 pass + mem_bw 完整 5 trials"。修正后本项即解除。

### F2【范围，开发者已自行披露，待协调者裁定】参考实现编入生产库 tmog_core

c2c0311 将 `BenchAlgo.{h,cpp}` 加入 `tmog_core` 并改生产 CMakeLists，超出"研究合同 + 受控小输入检查"的范围解读。开发者已在 §12 如实披露并交 Review 裁定。

核查证据：`grep -l BenchAlgo src/` 仅命中 `BenchAlgo.cpp` 自身——**无任何 GUI/生产代码消费它**，纯候选参考件，无行为影响。

裁定建议（本审查不直接改文件）：可保留现位（零消费、零风险），条件是 #28 实施审查时按"新实现票"重新审阅该文件，不因"已入 tmog_core"默认沿用；§12 的版本绑定警告已覆盖此点。或按最严格解读移至研究目录——属协调者/维护者裁量，两案均可接受。

### F3【参考实现覆盖缺口，#28 采用时必须补】实现 ≠ 合同全部"机器可执行形态"

BenchAlgo.h 头注释自称"本文件是合同的机器可执行形态"，实际只覆盖内核/计时/取消层：

- 合同 §3b 状态机含 `Failed`，`BenchStatus` 枚举无此状态；`std::bad_alloc` 会直接抛出而非转 Failed
- 合同 §3 环境字段表（`partial`/`error`/`os`/`cpu_model`/`logical_processors`/`physical_bytes`/`timestamp_utc`/`host_load_note`/`algorithm_version`/`test_id`/`unit`）在 `CpuResult`/`MemResult` 中**一个都没实现**（仅 `kAlgorithmVersion` 常量存在）
- 合同 §3b `partial=true` 标志：实现中 TimedOut 状态本身承担此语义，无独立字段

风险：#28 按"直接复用"采纳会继承缺口。合同文本本身完整（§7 验收矩阵可执行），这是参考件覆盖范围的声明问题。建议 #28 审查时逐项对照 §3/§3b 补齐，或头注释降格为"合同的内核/计时/取消层参考实现"。

### F4【防优化弱点，v1 已知天花板级】mem 内核防删除证据弱于 cpu 内核

cpu 内核：单依赖链 + 每 pass volatile 写出，防删除充分 ✓。mem 内核：`a[i] = b[i] + 3*c[i]` 不依赖前次 a 值，64 次迭代中前 63 次的写入理论上是死存储（仅 `g_mem_sink = a[0]` 观察末次 a[0]）——理论上编译器可合并/省略前 63 次调用（MinGW -O2 实际不会，无实际删除证据，但无合同级保证）。若发生，GB/s 会虚高且现有检查（有限正值断言）不能发现。属设计天花板：如需强保证，观察点应改为全数组校验和或 volatile 数组，属 /2 方向。v1 接受，记录为限制。

### F5【轻微，不阻断】

- `MemResult.bytes_done` 语义漂移：合同 §2.3 要求"记录最佳 trial 的字节数与时长"，实现记录的是总字节（5 trials 合计），最佳 trial 字节数（恒等 kBytesPerTrial 常量）未单列——语义等价但与合同措辞不一致
- 检查 4 内残留迭代修正注释（"重来：步长…""方案：包装计数式假时钟"），可读性问题

## 4. 独立运行验证（缩减驱动，遵守负载边界）

自建驱动 `review10_driver.cpp`（会话临时目录，不改生产源）直接编译 `BenchAlgo.cpp` + 独立书写的参考实现，MinGW 13.1.0 -O2：

```
g++ -std=c++20 -O2 -Wall -I<worktree>/src review10_driver.cpp <worktree>/src/BenchAlgo.cpp -o review10_driver.exe
```

结果 **15/15 全 PASS**：cpu_kernel N=16 == 独立参考、链值非零、fill_cpu_keys 确定性、mem_kernel N=16 精确 TRIAD、cpu 取消先于首 chunk（Cancelled/无数值/零 pass）、cpu 跳变时钟 TimedOut（保留 1 pass、steps=262144、无速率）、取消优先于超时、mem 取消先于首 trial（Cancelled/无数值/零 trial）。

真实负载上限：cpu 1 pass（262144 步）+ 零计算取消路径。**取消/超时/部分结果/取消优先语义与合同 §2.4/§3b/§7 算术一致**。

## 5. 开发者声称的运行记录复核情况

- ctest 日志未保留（`build*/Testing/` 不存在）→ 声称的"两配置 5/5"无法从工件独立复核，标**未验证**
- 两配置 exe 存在，时间戳 2026-10-27 21:21/21:22 与声称日期一致（弱证据）
- 两配置 CMakeCache 均含 `CMAKE_PREFIX_PATH=E:/InstallApplication/Qt/6.12.0/mingw_64` → "Release 首跑缺 Qt 已修"与工件一致 ✓
- 测试集两配置相同：CMakeLists 静态确认无按配置分支的 add_test ✓（ctest -N 输出未保留，标静态推断）
- 24 断言计数 ✓（静态）；过程偏差（4/4→5/5、3 Not Run）披露如实 ✓
- **无生产 GUI 证据声称** ✓：无任何 GUI 代码引用 BenchAlgo，§13 明确 #28 阻塞

## 6. 未验证限制

- 开发者机器上的 ctest 实际输出（日志未保留）
- 2^30 步在开发者机器的实际耗时（未测，与 F1 修正相关）
- mem_bw 完整运行的真实 GB/s 数值合理性（需真实负载实验，禁止范围）
- 24 MiB RSS 实机观察（合同 §10 已标未测，一致）
- F4 的防优化在实际 -O2 MinGW 构建中未发生删除（无证据发生，也无法��明不会）

## 7. 结论

**暂不出 Technical PASS**，唯一阻断项为 F1（§11/§5 记录失实）。修正为一句话文档改动，修正后本会话仅复核措辞即可出 PASS，无需重跑。

- 合同技术内容本体（双内核参数、协作式上限语义、TRIAD/LLC 限定、hash-steps/s 单位限定、可比性条件、§7 验收矩阵、§9 差异记录）：**核查通过**，与实现和独立驱动一致
- 代码语义（取消/超时/部分结果/取消优先/内核正确性/确定性）：**独立验证通过**（15/15）
- F2 范围裁定、F3 参考件覆盖缺口处置：交协调者/维护者，不阻断合同文本本身
- Technical PASS 不代替维护者对合同的确认，不解锁 #28（与 §13 一致）
