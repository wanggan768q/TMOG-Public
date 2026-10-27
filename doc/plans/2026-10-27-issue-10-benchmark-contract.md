# Issue #10 交付：Benchmarks 行为与安全测试合同（W24）

- **日期**：2026-10-27
- **Issue**：#10（`ready-for-agent`，OPEN）
- **Worktree**：`E:/Git/TMOG-Public-WorkTree/issue-10-benchmark-contract`，分支 `issue-10-benchmark-contract`，基线 `246be01`
- **性质**：研究合同票——只交付合同与受控小输入算法检查，不实现基准运行页（#28/W25 保持阻塞，待维护者确认本合同）
- **关联**：#28（W25，Benchmarks 有界运行与结果页）依赖 #17（W03，首轮已含）+ 本票

## 0. 证据等级声明

本文所有条��按三类标注：

- **[原版证据]**：本项目已记录的逆向静态证据（版本身份明确）或官网公开文本
- **[引用]**：外部权威来源逐字引用（附 URL）
- **[自主设计]**：本项目自主决定，无原版依据；后续票按此实现

原版证据结论先行：**原版 Benchmarks 算法证据为零**。

- [原版证据] 官网 https://www.tmog.org/ （2026-10-27 抓取）："Benchmarks" 仅在十二视图列表出现一次（"Connections, Installed Apps, Disk Space, and Benchmarks."），无算法、时长、评分描述；页脚声明十二视图共用同一测量核心（"One shared C++20 measuring core"）。
- [原版证据] v1.0.1 静态证据（`docs/reverse-tutorial/evidence/func_91f1.md:888`，二进制字符串 `0x1403f9e60`）："Benchmarks are a TMOG Pro feature"——Pro 门控提示字符串，非算法信息。
- [原版证据] v1.1.0 patch 分析（`docs/reverse-tutorial/patch_bypass_analysis_v110.md:86`）明确标注："**待实测**（本轮未覆盖，坐标静态可信）：远程连接（iPhone 查看）、Benchmarks、飞行记录仪、断网重测、帮助>购买/输入许可证对话框。"
- [推断] 原版 Benchmarks 是 Pro 门控页：v1.0.1 仅含门控字符串；v1.1.0 有导航项但无算法级逆向证据。因此本合同全部算法、参数、单位、环境字段均为**自主设计**，不宣称原厂分数兼容（Issue 边界硬性要求）。

## 1. 选定基准与理由

**首片：CPU 整数内核（`cpu_int`）+ 内存带宽 TRIAD（`mem_bandwidth`）两个测试项，单次运行约 5 秒上限。**

**为什么不是压力测试**：[自主设计] 压力/稳定性测试以持续满载为目标，与"有限时长、非破坏性"冲突。本合同每个测试有固定数据规模与固定时间上限，测的是**单核整数吞吐与内存带宽的稳定读数**，不是系统极限。明确排除：不循环、不自适应加压、不以温升为信号动态调整、不烧机。

**为什么这两个内核**：
- [自主设计] CPU 整数：整数运算不依赖 FPU/AVX 特性差异，跨机器结果语义简单（hash-steps/s，见 §2.2 单位限定），实现与检查最简单。
- [引用] 内存带宽选 STREAM-style TRIAD：STREAM 是内存带宽测量的事实标准方法论（作者 John D. McCalpin），运行规则、字节计数约定、cache 尺寸要求均有公开文档约束，避免自造方法论。

**明确不做**（差异记录见第 9 节）：磁盘/文件 IO 基准、GPU、网络基准、浮点/矩阵、稳定性压力、烧机。

## 2. 算法定义与版本

### 2.1 版本标识

[自主设计] 每个结果必须携带 `algorithm_version` 字段，v1 固定值 `tmog-bench/1`。**结果与算法版本绑定**：算法实现修改（参数、内核表达式、计时窗口、并发）→ 版本号升级 → 新旧结果不可比（见第 6 节）。

### 2.2 CPU 整数内核（`cpu_int`）

[自主设计] 逐项声明（对应 Issue"算法版本、输入规模、并发、最长时长"）：

| 项 | 值 |
| --- | --- |
| 内核表达式 | `h = h * 31 + key[i]`（单依赖链整数哈希内核；`h` 为 64 位无符号，`key[i]` 为 uint32 输入数组） |
| 依赖链 | 单链——每步迭代依赖上一步结果，配合每 pass 末 volatile 写出，防编译器删除/合并 |
| 输入规模 | `key` 数组 = 1 MiB（262144 × uint32），确定性填充（LCG，种子 0x12345678），无真随机 |
| 总功 | **固定 4096 passes × 262144 步 = 2^30 步**（固定总功是可比性前提：所有机器算同样的题，比的是速率） |
| 每 pass | 262144 次哈希步 |
| 并发 | **单线程**（多线程版本须升级 `/2` 并单独命名） |
| 线程亲和性 | 不设置（跟随系统调度；波动由可比性条件约束） |
| 时长上限 | **总时长 5 s 协作式上限（唯一超时判定，chunk 边界检查）**。典型机器 2^30 步约 1–2 s 完成（[推断] 依赖链 ~0.6–1.5 Gstep/s）；慢机器超 5 s → TimedOut 部分结果 |
| 结果 | **hash-steps/s** = 总哈希步数 / 实际测量时长（单调时钟）；同时记录总步数与实际时长。**单位语义限定：hash-step（本内核一次依赖链迭代），不是通用 CPU 指令数**——跨内核/跨工具的 ops/s 无可比性 |

- [引用] 5 s 总上限设计依据：Nielsen（https://www.nngroup.com/articles/response-times-3-important-limits/）——"10 seconds is about the limit for keeping the user's attention focused on the dialogue"，超过须进度指示器。5 s 上限让单次运行无需进度指示器也保持注意力边界内。
- [推断] 乘加依赖链是整数吞吐测量的常见内核形态；**未对照任何原厂算法**——原版算法证据为零。### 2.3 内存带宽内核（`mem_bandwidth`）

[引用] STREAM 规则（https://www.cs.virginia.edu/stream/ref.html，逐字）：

- Cache 尺寸："each array must be at least 4x the size of the sum of all the last-level caches used in the run，or 1 Million elements -- whichever is larger"
- 字节计数："counts how many bytes the user asked to be read plus how many bytes the user asked to be written"
- 试验惯例："The test consists of multiple repetitions of four the kernels, and the best results of (typically) 10 trials are chosen"
- 许可与标注："You are free to modify this program for your own use, including commercial use"，但 "Results based on modified source code or on runs not in accordance with the STREAM Run Rules must be clearly labelled"——合规结果才可称 "STREAM"；修改版须清晰标注。

[自主设计] 参数表：

| 项 | v1 值 |
| --- | --- |
| 内核 | TRIAD：`a[i] = b[i] + q * c[i]`（double 数组，q = 3.0 常量） |
| 数组规模 | 每数组 1M 元素（3 × 8 MiB = 24 MiB 工作集） |
| 规模与 STREAM 关系 | 1M 元素满足 STREAM 元素下限，但总工作集 24 MiB 对 ≥8 MiB LLC **可能不足 4× 要求** → 结果**不称 STREAM 结果**，UI 标注 "based on a variant of the STREAM benchmark code"（[引用] STREAM 标注义务） |
| 字节计数 | 每元素 24 B（读 b+c 16 B + 写 a 8 B），按 [引用] STREAM 约定 |
| 总功与试验 | **固定 5 trials × 64 次内核迭代**（每次迭代扫全 1M 元素 = 24 MiB 流量）；取消/超时按 trial 边界粒度 |
| 并发 | **单线程** |
| 时长上限 | **总时长 5 s 协作式上限（trial 边界检查）**。典型机器每 trial ~50–150 ms（[推断] 数 GB/s 级带宽） |
| 结果 | GB/s（固定 10^9 口径），同时记录最佳 trial 的字节数与时长。**语义限定：这是 "1M 元素 TRIAD 内核吞吐"，不是认证的"主内存带宽"** |

- [推断] 24 MiB 工作集对 8 MiB LLC 是 3×（不足 4×）；对 ≥32 MiB LLC 不足 1×。**关键限定：24 MiB 工作集可能部分或全部落在 LLC 内——本项测的是"TRIAD 内核在该工作集下的吞吐"，不是主内存（DRAM）带宽**。UI/结果标注必须使用"TRIAD 内核吞吐"，禁止单独出现"内存带宽"字样；如需近似主内存带宽须将工作集扩到 ≥4×LLC（[引用] STREAM 规则），属 /2 版本增强方向（v1 不做，见 §2.3 参数表与 §6 增强记录）。

### 2.4 实施细节（合同级）

- **计时**：`std::chrono::steady_clock`（单调时钟）。测量窗口 = 首迭代前到末迭代后，含全部迭代；不含数据填充与分配时间。
- **volatile 写出**：CPU 内核 `h` 每 pass 末写入 volatile 槽位（写发生在窗口内，结果校验在窗口外）。
- **防优化**：依赖链 + volatile 写出为主要手段；检查含"内核真实执行"验证（第 5 节 #1/#2）。
- **取消机制**：`std::atomic<bool>` 取消标志；执行循环**每 chunk 边界检查一次**（cpu_int 每 pass=262144 步一个 chunk；mem_bw 每 trial 一个 chunk）。置位后完成当前 chunk 即退出，**不产出结果**，状态 `Cancelled`。chunk 内不中断（保证计时窗口完整性，chunk 越大取消粒度越粗——权衡已声明）。
- **超时/取消语义限定（协作式，非硬保证）**：检查只在 chunk 边界发生，单个 chunk 内不可中断——5 s 上限的实际停止时间 = 5 s + 至多 1 个 chunk（cpu_int 1 chunk ≈ 数百 ms [推断]；mem_bw 1 trial ≈ 数百 ms [推断]）；同理取消响应最坏 = 1 chunk + 收束开销。**这是协作式上限，不是硬保证**——线程被系统挂起、内存带宽挤占等情形下实际响应可能更长，实测值待 #28 实机记录（§7）。
- **失败语义**：分配失败（`std::bad_alloc`）→ 状态 `Failed` + 异常信息；内核执行中无异常路径（纯计算无 IO）。

## 3. 环境字段（结果随附）

[自主设计] 结果结构体字段：

| 字段 | 来源 | 依据 |
| --- | --- | --- |
| `algorithm_version` | 常量 `tmog-bench/1` | 算法-结果绑定 |
| `test_id` | `cpu_int` / `mem_bandwidth` | §2.2/§2.3 |
| `unit` | `hash-steps/s`（cpu_int）/ `GB/s`（mem_bandwidth） | §2.2/§2.3 单位语义限定 |
| `duration_ms` | 实际测量时长 | 可比性判断 |
| `iterations` | 总迭代数 | 可比性判断 |
| `trials` | 试验次数（mem_bw=5，cpu_int=已完成 pass 数） | best-of 语义 |
| `partial`（超时截断标志） | TimedOut 时 true | §7 |
| `error` | 失败信息 | 失败不产出伪结果 |
| `os` | Qt Core `QSysInfo::productType()/productVersion()` | Qt Core 已链接 |
| `cpu_model` | Windows：`__cpuid` 0x80000002-4；非 Windows 置空 | 无新依赖 |
| `logical_processors` | `std::thread::hardware_concurrency()` | stdlib |
| `physical_bytes` | Windows：`GlobalMemoryStatusEx.ullTotalPhys` | Win32 |
| `timestamp_utc` | `std::chrono::system_clock` | 时区无关 |
| `host_load_note` | 固定 "uncontrolled"（v1 不测负载） | §6 可比性 |

## 3b. 状态枚举与结果语义

[自主设计] 对齐工程既有状态语义模式（`ProcessStatus` 先例；"实测零值/待采样/不可用/陈旧/缺样分别表示，禁止假数据"为 Issue 共用约束）。

状态机：`Idle → Running → {Completed | Cancelled | Failed | TimedOut}`。

| 状态 | 产出 |
| --- | --- |
| `Completed` | 测量值 + 全部环境字段 |
| `Cancelled` | **无任何数值**（用户放弃 ≠ 部分测量；禁止伪结果） |
| `Failed` | 错误信息，无数值 |
| `TimedOut` | 已完成 pass/trial 的**部分结果**，`partial=true` 标注"部分结果（超时截断）" |

[自主设计] 取消无结果 vs 超时有部分结果的区分是刻意的：超时是系统侧截断，已完成 trials 是真实测量，丢弃浪费但必须标注；用户取消则完全放弃。二者语义分离。

## 4. 资源界限（合同级上限）

| 界限 | 值 | 越界行为 |
| --- | --- | --- |
| 峰值内存 | cpu_int ~1 MiB + 结构；mem_bw 24 MiB 工作集；**合同级总上限 32 MiB** | 分配失败 → Failed；实现超 32 MiB = 违反合同 |
| CPU | 各 1 线程，无亲和性 | 多于声明线程数 = 违反合同 |
| 时长 | 各测试 5 s 协作式上限（chunk 边界检查，见 §2.4——单 chunk 内不可中断，实际停止时间 = 5 s + 至多 1 chunk） | 超时 → TimedOut，不无限运行 |
| 磁盘 | **零写入**（无临时文件——纯计算无 IO） | 任何磁盘 IO = 违反合同 |
| 网络 | 零网络访问 | 任何访问 = 违反合同 |
| 提权 | 不提权、不装驱动/工具、不读写注册表 | 任何 = 违反合同 |

[推断] 24 MiB 属普通用户态分配，按需分页，对 ≥8 GiB RAM 现代机器无实质压力——"不耗尽内存"约束满足。

## 5. 受控小输入算法检查（本票交付的可运行检查）

[自主设计] 新增 `tests/benchmark_algo_checks.cpp`，普通用户权限可跑，总检查时长 < 3 s——**不要求系统满负载**（Issue 验收第三项原文："算法检查不要求系统满负载"）。

| # | 检查 | 断言 |
| --- | --- | --- |
| 1 | cpu_int 内核真实执行（防删除） | N=16 小输入手算期望哈希值，运行 1 pass 比对一致；链末值非零 |
| 2 | mem_bw 内核正确性 | N=16 元素 TRIAD `a = b + 3.0*c` 逐元素精确比对 |
| 3 | 取消响应语义 | chunk 边界前置位 cancel → 状态 Cancelled、无数值产出、零 pass |
| 4 | 速率计算（注入时钟） | 注入每次 now 调用 +0.5 ms 的假时钟，duration 与 hash-steps/s 均为精确等式比对 |
| 5 | 超时语义（注入时钟） | 注入跳变时钟（第二次 now 起 100 s）→ TimedOut、无数值、已完成的 1 pass/trial 保留；取消标志与跳变同存时 Cancelled 优先 |
| 6 | 真实小负载测点 | 真实时钟：cpu_kernel 单 pass（262144 步，非零耗时）+ mem_bw 完整 5×64×1M（Completed、GB/s 有限正值、输出数组被真实写入） |

检查 4/5 的注入时钟是**测试构造**（时间源作为参数注入内核计时层），产品路径默认用 `steady_clock`。

## 6. 结果可比较条件与不可比较情景

[自主设计] **可比性是双面条件**（全部满足才可比较）：

1. `algorithm_version` 相同
2. `test_id` 相同（不同测试项间永不可比）
3. 同一台机器（`cpu_model`/`logical_processors`/`physical_bytes`/架构相同）
4. 温度环境相近（v1 无传感器数据——#9 传感器票独立推进，非本票依赖；v1 按"无温度数据"处理）
5. 无不可控背景负载（v1 不检测，`host_load_note=uncontrolled` 恒成立 → **条件 5 恒不满足**）

[自主设计] 推论：**所有 v1 结果默认标注"不可比"，仅同机同版本同会话内的时间相近对比例外**（同会话短时间窗内背景负载相近的合理性是 [推断]）。跨版本/跨机/跨会话对比时 UI 标注："结果不可比：{原因}"，原因从上表生成。

- [推断] 单线程分数理论上不直接依赖核数，但不同机器调度噪声差异极大；保守标不可比，避免用户错误比较。
- [自主设计] /2 版本增强方向（记录不做）：每 pass 时间戳序列支持噪声检测、多线程 `cpu_int_mt`、**工作集扩至 ≥4×LLC 的近似主内存带宽测量**（见 §2.3 关键限定）、按 LLC 自适应规模。

## 7. 开始/取消/超时/失败/结果 验收合同（供 #28 直接采用）

| 步骤 | 验收要求 |
| --- | --- |
| 开始 | 后台线程非阻塞 GUI；普通用户权限，无 UAC；开始前固定提示文案（见下）；重复开始不能叠加运行（单在途，对齐 `SamplingWorker` 模式） |
| 取消 | 取消标志置位 → worker 完成当前 chunk（cpu_int ≤262144 步 ≈ 数百 ms；mem_bw ≤1 trial ≈ 数百 ms）后退出；状态 `Cancelled`，无结果产出；不遗留负载 |
| 取消响应上限 | **设计公式 `cancel_response_limit = 1 × max_chunk_time + 收束开销`（协作式，非硬保证）**：最坏路径 = 置位发生在 chunk 中途（完成该 chunk）+ 边界检查 + 线程收束。设计意图 < Nielsen 1 s 界限 [引用]（"1.0 second is about the limit for the user's flow of thought to stay uninterrupted"）；典型机器 chunk ~100–400 ms [推断]。**实测值待 #28 实机记录，未实测前不得声称达到**；若实测超 1 s，#28 验收须记录为限制而非伪报通过。线程被系统级挂起等极端情形响应不受此公式约束 |
| 超时 | 超 5 s → 自动停，状态 `TimedOut`，部分结果 `partial=true` 标注"部分结果（超时截断）" |
| 失败 | 分配失败等 → `Failed` + 错误信息；失败不保存伪结果（W25 验收原文） |
| 结果 | `Completed` → 数值+单位+环境字段完整 + 固定不可比标注（见下） |
| 关闭 | 运行中关窗 → 对齐 `SamplingWorker.shutdown` 语义：置 closing、等在途线程实际退出、超时拒绝关闭；不遗留负载 |

**开始前固定提示文案（供 #28 直接采用）**：

> 即将运行约 5 秒的 CPU/内存测试。测试期间单核占用与内存带宽占用升高，可能有轻微发热。测试不写磁盘、不访问网络、不提权。测试结果为 TMOG 独立分数，与原厂或第三方基准分数不可比。

**结果页固定标注（供 #28 直接采用）**：数值旁固定显示："TMOG 独立分数，与原厂或第三方基准分数不可比。"

**不可比标注（供 #28 直接采用）**：跨版本/跨机/跨会话对比时显示："结果不可比：{原因}"。

## 8. 负载与温升提示（Issue 验收第二项）

[自主设计] v1 无温度传感器数据（#9 独立推进，非本票依赖），温升提示为**固定文案**（第 7 节文案已含"可能有轻微发热"）。负载提示 = 开始前固定文案 + `host_load_note=uncontrolled` 字段向用户诚实说明读数可能因背景负载偏低。v1 不做实时负载/温升检测。

## 9. 原版差异记录

| 原版（未验证） | 本项目 |
| --- | --- |
| [原版证据] v1.0.1 仅 Pro 门控字符串，无算法 | 完全自主的 `tmog-bench/1` 算法与独立分数 |
| [原版证据] v1.1.0 Benchmarks 页逆向"待实测" | 不宣称原厂分数兼容；结果固定标注独立性 |
| [推断] 原版为 Pro 门控页 | 本项目无 Pro 门控（免费开源实现） |
| 差异持续存在 | 后续逆向补证（如有）按版本身份记录，不追溯修改已产出结果的语义 |

## 9b. 修订历史

- v1（2026-10-27，c2c0311）：初版。
- v2（2026-10-27，本修订）：按协调者审查意见修正——①5 s 与取消响应从"硬超时/固定公式"降格为**协作式上限/设计意图**（单 chunk 不可中断，实测待 #28）；②mem_bandwidth 明确为"TRIAD 内核吞吐"（24 MiB 可能落在 LLC 内，不是主内存带宽认证，UI 禁止单独"内存带宽"字样）；③ops/s 限定为 hash-steps/s（非通用 CPU 指令数，跨内核不可比）；④§5/§11 检查记录修正（Release 首跑缺 Qt 为 4/4 非全量、过程偏差如实记录）；⑤新增 §12 交付范围声明（BenchAlgo 入 tmog_core 超范围解读，交 Review 裁定）。

## 10. 未测限制（如实声明）

| 项 | 状态 | 原因 |
| --- | --- | --- |
| 算法检查实机运行 | 本票执行（见第 11 节记录） | — |
| 真实 5 s 满参数实机运行 | **未运行** | 受控边界：真实负载实验须用户主动批准（Issue 边界原文）；合同数值上限在实机的实际表现（如取消响应实测值）留待 #28 实机验收 |
| 24 MiB 工作集实机 RSS 观察 | 未测 | 同上——属真实负载实验范畴 |
| LLC 尺寸自适应 | v1 明确不做 | 可比性优先（§2.3） |
| 温度/实时负载检测 | v1 明确不做 | #9 独立推进 |

## 11. 检查记录（本票执行）

- **日期/机器**：2026-10-27，本会话宿主机（普通用户权限，无提权）。
- **构建**：MinGW 13.1.0（`E:\InstallApplication\Qt\Tools\mingw1310_64`）+ Ninja + CMake 3.31.2，构建目录 `build/`（Release）与 `build-debug/`（Debug，均 `-DCMAKE_PREFIX_PATH` 指向 Qt 6.12）。
- **命令与结果（最终复跑）**：
  - `cmake --build build && ctest --test-dir build` → **100% tests passed, 0 failed out of 5**（13.26 s）
  - `cmake --build build-debug && ctest --test-dir build-debug` → **100% tests passed, 0 failed out of 5**（13.71 s）
  - 两配置测试集**相同**（ctest -N 确认）：process_checks、benchmark_algo_checks、smoke_enumerate、process_ops_checks、close_lifecycle_checks
  - `benchmark_algo_checks` 单独运行：**24 项断言全 PASS**（§5 表中 6 组检查：小输入/取消/超时/速率精确等式/真实测点）
- **交付文件**：合同 `doc/plans/2026-10-27-issue-10-benchmark-contract.md`；参考实现 `src/BenchAlgo.h`/`src/BenchAlgo.cpp`（已入 `tmog_core`）；检查 `tests/benchmark_algo_checks.cpp`（CMake 目标 `benchmark_algo_checks`）。
- **检查中的真实负载**：`mem_bw` 完整 5×64×1M 元素 TRIAD（真实时钟，24 MiB 工作集）+ cpu_int 单 pass（262144 步，单核）——未满载、未写磁盘、未联网、未提权。合同 §2.2 的完整 cpu_int 总功（4096 passes）**未在检查中运行**（属真实负载实验，须用户主动批准，留给 #28 实机验收）。
- **过程记录（如实）**：初版 Release configure 未传 `CMAKE_PREFIX_PATH`，Qt 目标被跳过致 ctest 4/4（当时误报"全绿"）；补配 Qt 后复跑 Release 5/5，两配置测试集经 `ctest -N` 确认相同。另有一次 3 项 Not Run 系单目标构建所致，全量构建后消失。两处过程偏差均已在交付通知中向协调者披露。

## 12. 交付范围声明（协调者纠正后补记）

- **本票性质**：研究合同票。c2c0311 将参考实现 `BenchAlgo.{h,cpp}` 编入生产库 `tmog_core` 并修改生产 `CMakeLists.txt`，**超出"仅研究合同 + 必要受控小输入检查"的初始范围解读**——此处如实记录，交 Review 裁定处置（保留于生产集成位置 vs 移至研究目录）。候选参考实现与 #28 正式实施**必须区分**：#28 不得因复用而沿用版本号后改语义（§2.1 版本绑定约束适用于任何实现位置）。
- **修订纪律**：c2c0311 为候选交付不重写；本节与 §11 修正等为增量修订提交。

## 13. 合同状态

技术方案：**确立**（双内核 + 状态机 + 资源界限 + 可比性条件 + #28 验收矩阵，全部参数确定、无"待调研"项）。**本合同需维护者确认后方可解锁 #28**；确认前后续实现票保持阻塞。
