#pragma once
#include <optional>
#include <vector>
#include "ProcessSnapshot.h"

namespace tmog {

enum class ProcessStatus {
    Ok,
    FirstSample,      // 首次样本：无基线，显示"待采样"
    Unavailable,      // 平台不提供该指标或本次读取失败
    IdentityChanged,  // PID 复用，基线身份不匹配
    InvalidDelta,     // 累计时间倒退，差分无效
};

// CPU% 计算：Δ累计CPU时间 / (Δ单调墙钟 × 有效逻辑处理器数) × 100
// previous 为空 → FirstSample。out_percent 仅在 Ok 时被赋值。
ProcessStatus compute_cpu_percent(const std::optional<ProcessSnapshot>& previous,
                                  const ProcessSnapshot& current,
                                  std::uint64_t wall_delta_ns,
                                  std::uint32_t logical_processors,
                                  std::optional<int>& out_percent);

// I/O 速率计算：Δ累计读写字节 / Δ真实墙钟（B/s）。双输出每次先 reset。
// 与 CPU 状态独立：只产出 io 状态，不改变 SampledRow::status（CPU）。
//  - 无 previous 且当前有效 → FirstSample
//  - 当前身份无法核实（creation_tick==0）或当前 io 不可用 → Unavailable
//  - 身份不同 → IdentityChanged
//  - 前一字段不可用（含此前 Unavailable/身份变化后重建）→ FirstSample
//  - dt=0 → Unavailable；任一累计倒退 → InvalidDelta（两方向均无产值）
//  - 否则 double(cur-prev) / (double(dt)/1e9)，不先做 uint64 乘 1e9 防溢出；
//    有限非负才产 Ok；有效 Δ=0 明确产 0（与不可用区分）
ProcessStatus compute_io_rates(const std::optional<ProcessSnapshot>& previous,
                               const ProcessSnapshot& current,
                               std::uint64_t wall_delta_ns,
                               std::optional<double>& out_read,
                               std::optional<double>& out_write);

// 整帧差分结果行：快照 + 差分产出
struct SampledRow {
    ProcessSnapshot snapshot;
    std::optional<int> cpu_percent;
    std::optional<double> io_read_bytes_per_sec;
    std::optional<double> io_write_bytes_per_sec;
    ProcessStatus status = ProcessStatus::FirstSample;      // CPU 状态（既有合同不变）
    ProcessStatus io_status = ProcessStatus::FirstSample;   // I/O 状态（独立，不混用）
};

// 相邻两帧配对（按 PID）+ 逐进程差分。previous 为基线帧（调用方保证有效；
// 基线作废时传入自差分或由调用方跳过，见 MainWindow 暂停语义）。
std::vector<SampledRow> diff_samples(const SampleResult& previous,
                                     const SampleResult& current,
                                     std::uint32_t logical_processors);

} // namespace tmog
