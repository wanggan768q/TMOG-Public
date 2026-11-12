#pragma once
#include <cstddef>
#include <cstdint>
#include <deque>
#include <optional>
#include <string>

#include "SystemMetrics.h"

namespace tmog {

// 一次采样在性能页上的状态（针对整机 CPU；内存可用性单独字段）。
enum class SystemSampleStatus {
    Pending, // 无有效基线：首样本、暂停恢复后首帧、计数器回退/增量非法
    Ok,      // 有效整机 CPU 时间差（cpu_percent 有值，可为 0.0）
    Gap      // 系统读取失败：该帧为缺样，错误原文在 detail
};

struct SystemSample {
    SystemSampleStatus status = SystemSampleStatus::Pending;
    std::optional<double> cpu_percent; // 仅 Ok 有值；0.0 是有效空闲
    bool memory_available = false;
    std::uint64_t total_memory_bytes = 0;
    std::uint64_t available_memory_bytes = 0;
    std::uint64_t used_memory_bytes = 0; // 总量 − 可用（物理内存口径）
    std::uint64_t wall_clock_ns = 0;
    std::string detail; // 失败/缺样原因；Ok 且两 API 均成功时为空
};

// 纯计算整机性能采样器（无 Qt/平台依赖，可独立检查）：
//  - CPU：GetSystemTimes 累计时间差（total = kernel + user，kernel 含 idle）；
//  - 内存：总量/可用/已用（已用 = 总量 − 可用），单位字节；
//  - 缺样：读取失败/无基线/计数器回退 → Pending 或 Gap 并重建基线；
//  - 历史：固定 5 分钟窗口 + 600 样本硬上限，超期/超限淘汰；缺口样本保留
//    （时间轴真实）但不进入曲线连线。
class SystemMetricsSampler {
public:
    static constexpr std::uint64_t kHistoryWindowNs = 300ULL * 1'000'000'000ULL;
    static constexpr std::size_t kHistoryCapacity = 600;

    explicit SystemMetricsSampler(std::size_t capacity = kHistoryCapacity,
                                  std::uint64_t window_ns = kHistoryWindowNs);

    // 摄入一次整机读取结果，返回该帧样本并推进有界历史。
    SystemSample ingest(const SystemReading& reading);

    // 基线作废（暂停/恢复）：下一次 ingest 必为 Pending，建立新基线。
    void invalidate_baseline();

    const std::deque<SystemSample>& history() const { return history_; }
    std::size_t capacity() const { return capacity_; }
    std::uint64_t window_ns() const { return window_ns_; }

private:
    void push(SystemSample sample);

    std::optional<SystemTimesNs> baseline_;
    std::deque<SystemSample> history_;
    std::size_t capacity_;
    std::uint64_t window_ns_;
};

// 展示格式化（纯函数，检查可直接断言）：
//  - 字节按 1024 进制；>= GiB → "X.XX GiB"，>= MiB → "X.XX MiB"，否则 "N 字节"；
//  - 百分率一位小数："25.0%"。
std::string format_bytes(std::uint64_t bytes);
std::string format_percent(double percent);

} // namespace tmog
