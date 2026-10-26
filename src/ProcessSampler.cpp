#include "ProcessSampler.h"

namespace tmog {

ProcessStatus compute_cpu_percent(const std::optional<ProcessSnapshot>& previous,
                                  const ProcessSnapshot& current,
                                  std::uint64_t wall_delta_ns,
                                  std::uint32_t logical_processors,
                                  std::optional<int>& out_percent) {
    out_percent.reset();

    if (logical_processors == 0)
        return ProcessStatus::Unavailable;
    if (!previous)
        return ProcessStatus::FirstSample;      // 无基线：显示"待采样"
    if (!previous->cpu_time_available || !current.cpu_time_available)
        return ProcessStatus::Unavailable;
    if (previous->identity != current.identity)
        return ProcessStatus::IdentityChanged;  // PID 复用：基线无效
    if (wall_delta_ns == 0)
        return ProcessStatus::Unavailable;
    if (current.cpu_time_ns < previous->cpu_time_ns)
        return ProcessStatus::InvalidDelta;     // 时间倒退（理论不可能，防御）

    const auto delta_ns = current.cpu_time_ns - previous->cpu_time_ns;
    // ΔCPU / (Δ墙钟 × 核数) × 100，四舍五入到整数百分比
    const auto denom = wall_delta_ns * logical_processors;
    out_percent = static_cast<int>((delta_ns * 100 + denom / 2) / denom);
    return ProcessStatus::Ok;
}

} // namespace tmog
