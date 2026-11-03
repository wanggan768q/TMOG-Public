#include "ProcessSampler.h"
#include <cmath>
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

// I/O 速率：Δ累计字节 / Δ真实墙钟。双输出每次先 reset；与 CPU 状态独立。
ProcessStatus compute_io_rates(const std::optional<ProcessSnapshot>& previous,
                               const ProcessSnapshot& current,
                               std::uint64_t wall_delta_ns,
                               std::optional<double>& out_read,
                               std::optional<double>& out_write) {
    out_read.reset();
    out_write.reset();

    // 当前身份无法核实（creation_tick==0）或当前 I/O 不可用 → Unavailable
    if (current.identity.creation_tick == 0 || !current.io_available)
        return ProcessStatus::Unavailable;
    if (!previous)
        return ProcessStatus::FirstSample;      // 无基线：显示"待采样"
    if (previous->identity != current.identity)
        return ProcessStatus::IdentityChanged;  // PID 复用：基线无效
    // 前一帧字段不可用：基线需重建 → FirstSample（恢复路径）
    if (!previous->io_available)
        return ProcessStatus::FirstSample;
    if (wall_delta_ns == 0)
        return ProcessStatus::Unavailable;      // dt=0（含 wall 倒退折叠为 0）
    // 任一累计倒退 → InvalidDelta，两方向均不产值
    if (current.io_read_bytes < previous->io_read_bytes ||
        current.io_write_bytes < previous->io_write_bytes)
        return ProcessStatus::InvalidDelta;

    // double(cur-prev) / (double(dt)/1e9)：不先做 uint64 乘 1e9，防溢出
    const double delta_read =
        static_cast<double>(current.io_read_bytes - previous->io_read_bytes);
    const double delta_write =
        static_cast<double>(current.io_write_bytes - previous->io_write_bytes);
    const double dt_sec = static_cast<double>(wall_delta_ns) / 1e9;
    const double rate_read = delta_read / dt_sec;
    const double rate_write = delta_write / dt_sec;

    // 有限非负才产 Ok；有效 Δ=0 明确产 0（与不可用区分）
    if (!std::isfinite(rate_read) || !std::isfinite(rate_write) ||
        rate_read < 0.0 || rate_write < 0.0)
        return ProcessStatus::InvalidDelta;

    out_read = rate_read;
    out_write = rate_write;
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
        row.io_status = compute_io_rates(prev, cur, wall_delta,
                                         row.io_read_bytes_per_sec,
                                         row.io_write_bytes_per_sec);
        rows.push_back(std::move(row));
    }
    return rows;
}

} // namespace tmog
