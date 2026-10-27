#include "ProcessSampler.h"
#include <map>

namespace tmog {

namespace {

std::map<std::uint32_t, const ProcessSnapshot*> index_by_pid(const SampleResult& s) {
    std::map<std::uint32_t, const ProcessSnapshot*> m;
    for (const auto& p : s.processes) m.emplace(p.identity.pid, &p);
    return m;
}

} // namespace

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

std::vector<SampledRow> diff_samples(const SampleResult& previous,
                                     const SampleResult& current,
                                     std::uint32_t logical_processors) {
    std::vector<SampledRow> rows;
    rows.reserve(current.processes.size());
    const auto prev_by_pid = index_by_pid(previous);

    for (const auto& cur : current.processes) {
        SampledRow row;
        row.snapshot = cur;

        std::optional<ProcessSnapshot> prev;
        auto it = prev_by_pid.find(cur.identity.pid);
        if (it != prev_by_pid.end()) prev = *it->second;

        const auto wall_delta =
            current.wall_clock_ns > previous.wall_clock_ns
                ? current.wall_clock_ns - previous.wall_clock_ns : 0;
        row.status = compute_cpu_percent(prev, cur, wall_delta,
                                         logical_processors, row.cpu_percent);
        rows.push_back(std::move(row));
    }
    return rows;
}

} // namespace tmog
