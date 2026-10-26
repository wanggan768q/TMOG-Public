#pragma once
#include <optional>
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

} // namespace tmog
