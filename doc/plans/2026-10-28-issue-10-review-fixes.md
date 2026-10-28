# Issue #10 Review 发现修复记录

日期：2026-10-28。范围：仅已完成审查 F1–F5，不新增页面、基准类型或 Issue，不提交／推送／合并／关票。

## 核实与修复

| 项 | 核实结果与修复 |
|---|---|
| F1 历史检查负载记录 | 检查 4 输入确为 262144 个 key，4096 pass 真实执行 2^30 步；假时钟只改变计时读数。合同 §5／§10／§11 纠正“未运行完整 CPU”“小输入”“固定 <3 s”等表述，保留历史已执行事实，原日志未保留标未独立复核。历史检查头注释注明完整负载及 24 MiB +1 MiB 数组，删除无用的假时钟草稿注释。 |
| F2 研究范围隔离 | `src/BenchAlgo.{h,cpp}` 和 `tests/benchmark_algo_checks.cpp` 移到 `research/issue10/`。根 CMake 不再编入 `tmog_core`、不注册基准检查。独立研究 CMake 默认只运行缩减检查；历史完整负载检查为 EXCLUDE_FROM_ALL，未注册 CTest。无现有生产消费者，应用功能不变。 |
| F3 候选覆盖不完整 | 头注释与合同 §12 明确只覆盖内核／计时／取消，没有 Failed 转换、环境字段与独立 partial；#28 正式实施须逐项对照合同重审。本次不开发这些功能。 |
| F4 防优化证据 | 文档与候选源注释明确：TRIAD 前 63 次写入可被视作死存储，末次 a[0] 不能证明全部扫描实际执行。本次未跑完整负载或验证最终汇编，不宣称 MinGW 必然保留全部工作；请求字节不等于实测 DRAM 流量。 |
| F5 字节归属与算术根因 | 深核发现 `kBytesPerTrial` 不只是名字不一致，原式漏乘每 trial 的 64 次迭代，GB/s 分子和全部 bytes_done 低计 64 倍。协调者确认后最小修复为 `mem_trial_bytes(elements, iterations)`，生产候选每 trial 仅乘一次，全部 trial 累计另乘已完成 trial 数；最佳 trial 速率使用单 trial 请求字节。修正候选版本 `tmog-bench/1.1`，旧 `/1` 错误计量结果不可比。 |

原审查报告保留作为当时 HEAD `a74f83c` 的历史记录，未回写其发现与结论。

## 收尾核查与两处最小修正（2026-10-28，提交前）

收尾会话核对移动文件完整性与 F1–F5 落实后，仅补两处最小修正，不新增功能：

1. `benchmark_small_checks.cpp` 直接使用 `std::string`（`kAlgorithmVersion` 比对）但未 include `<string>`，此前靠 `BenchAlgo.h` 传递包含；补直接包含。
2. `.gitignore` 增加 `build-review-fixes-10*/`——两构建目录按记录保留作 CTest 日志，防止误提交。

修正后缩减检查两配置复跑：Release 1/1 Passed（0.04 s）、Debug 1/1 Passed（0.03 s）。其余内容与验证记录不变。

## 行为变化

- 主应用不再构建或链接未获合同批准的 BenchAlgo 研究候选，也不会默认执行历史完整负载检查。
- 研究候选的 TRIAD 字节总量与速率分子修正为真实请求的 64 次迭代计数；未改变迭代数、取消、时钟、CPU 内核或生产进程管理功能。
- 独立默认研究检查仅执行 CPU N=16 与 TRIAD N=16×64、计数算术和首 chunk 前取消，不运行完整 CPU／完整 TRIAD。

## 本次实际验证

使用现有 CMake 3.31 与 MinGW 13.1／Ninja，不安装工具；PATH 仅本次命令进程临时加入编译器 bin，无用户级配置修改。

1. 首次 Release configure 失败：g++ 依赖未在 PATH，无法编译编译器探测程序。该失败如实保留。
2. 提供命令进程级 PATH 后，独立研究 CMake Release 构建 `benchmark_small_checks` 成功，CTest **1/1 Passed（0.06 s）**。
3. Debug 独立构建成功，CTest **1/1 Passed（0.03 s）**。
4. 历史 `benchmark_full_checks` 仅显式编译兼容成功，**没有运行**。
5. 缩减检查验证：N=16 CPU 与 TRIAD 输出、每次 24 B/元素、64 次迭代比例、完整参数计数纯算术（单 trial 1,610,612,736 B；五 trial 8,053,063,680 B）、零计算取消和修订版本。

命令形态：
```text
cmake -S research/issue10 -B <独立研究构建目录> -G Ninja -DCMAKE_BUILD_TYPE=<Release/Debug> -DCMAKE_CXX_COMPILER=<现有g++.exe> -DCMAKE_MAKE_PROGRAM=<现有ninja.exe>
cmake --build <目录> --target benchmark_small_checks
ctest --test-dir <目录> --output-on-failure
```

生成目录：`build-review-fixes-10/`、`build-review-fixes-10-debug/`；保留未删除。日志由 CTest 保存于各自 Testing/Temporary/。

## 仍未验证与不做

未执行历史完整检查、真实满参数负载、温升／RSS观察、完整取消时延或原厂基准；未恢复缺失的旧 ctest 日志、不伪造性能数值。防优化保证与候选完整合同功能仍待 #28 正式实现和验收。合同用户确认门槛不因本次修复解除，#28 不启动。
