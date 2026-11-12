#include "SystemMetricsSampler.h"

#include <cstdio>
#include <string>
#include <utility>

namespace tmog {
namespace {

// 无符号计数器回退 → nullopt（用有符号差值表达，避免无符号回绕）。
std::optional<std::int64_t> delta_ns(std::uint64_t now, std::uint64_t before) {
    if (now < before) return std::nullopt;
    return static_cast<std::int64_t>(now - before);
}

const char* kDefaultTimesError = "整机 CPU 时间读取失败";
const char* kDefaultMemoryError = "物理内存读取失败";

} // namespace

SystemMetricsSampler::SystemMetricsSampler(std::size_t capacity,
                                           std::uint64_t window_ns)
    : capacity_(capacity == 0 ? kHistoryCapacity : capacity),
      window_ns_(window_ns == 0 ? kHistoryWindowNs : window_ns) {}

SystemSample SystemMetricsSampler::ingest(const SystemReading& reading) {
    SystemSample sample;
    sample.wall_clock_ns = reading.wall_clock_ns;

    if (reading.memory_available) {
        sample.memory_available = true;
        sample.total_memory_bytes = reading.memory_total_bytes;
        sample.available_memory_bytes = reading.memory_available_bytes;
        sample.used_memory_bytes =
            reading.memory_total_bytes >= reading.memory_available_bytes
                ? reading.memory_total_bytes - reading.memory_available_bytes
                : 0;
    }

    if (!reading.times_available) {
        // 读取失败：缺样 + 错误原文；基线作废，恢复后首帧重建。
        sample.status = SystemSampleStatus::Gap;
        sample.detail = reading.error.empty() ? kDefaultTimesError : reading.error;
        baseline_.reset();
        push(std::move(sample));
        return history_.back();
    }

    if (!baseline_) {
        // 首样本/暂停恢复/失败恢复：等待下一次采样形成时间差。
        sample.status = SystemSampleStatus::Pending;
        sample.detail = "首样本：等待下一次采样形成时间差";
        if (!reading.memory_available) {
            sample.detail += std::string("；") +
                             (reading.error.empty() ? kDefaultMemoryError
                                                    : reading.error);
        }
        baseline_ = reading.times;
        push(std::move(sample));
        return history_.back();
    }

    const SystemTimesNs previous = *baseline_;
    const auto idle_delta = delta_ns(reading.times.idle_ns, previous.idle_ns);
    const auto kernel_delta = delta_ns(reading.times.kernel_ns, previous.kernel_ns);
    const auto user_delta = delta_ns(reading.times.user_ns, previous.user_ns);

    if (!idle_delta || !kernel_delta || !user_delta) {
        // 计数器回退（休眠/唤醒、时钟源异常等）：重建基线，不给出伪造数值。
        sample.status = SystemSampleStatus::Pending;
        sample.detail = "系统时间计数器回退，已重建基线";
        if (!reading.memory_available && !reading.error.empty())
            sample.detail += "；" + reading.error;
        baseline_ = reading.times;
        push(std::move(sample));
        return history_.back();
    }

    const std::int64_t total_delta = *kernel_delta + *user_delta;
    if (total_delta <= 0 || *idle_delta < 0 || *idle_delta > total_delta) {
        // 增量非法：重建基线，本帧显示待采样；不是 0%。
        sample.status = SystemSampleStatus::Pending;
        sample.detail = "系统时间增量无效，已重建基线";
        if (!reading.memory_available && !reading.error.empty())
            sample.detail += "；" + reading.error;
        baseline_ = reading.times;
        push(std::move(sample));
        return history_.back();
    }

    // 整机 CPU：kernel 时间包含 idle → total = kernel + user；
    // busy = total − idle；百分比 = busy / total。有效空闲就是真实 0.0。
    const double busy = static_cast<double>(total_delta - *idle_delta);
    double percent = 100.0 * busy / static_cast<double>(total_delta);
    if (percent < 0.0) percent = 0.0;
    if (percent > 100.0) percent = 100.0;

    sample.status = SystemSampleStatus::Ok;
    sample.cpu_percent = percent;
    if (!reading.memory_available) {
        // CPU 正常、内存失败：CPU 曲线继续；错误进入 detail，内存显示不可用。
        sample.detail = reading.error.empty() ? kDefaultMemoryError : reading.error;
    }
    baseline_ = reading.times;
    push(std::move(sample));
    return history_.back();
}

void SystemMetricsSampler::invalidate_baseline() { baseline_.reset(); }

void SystemMetricsSampler::push(SystemSample sample) {
    history_.push_back(std::move(sample));

    while (history_.size() > capacity_) history_.pop_front();

    if (history_.size() > 1) {
        const std::uint64_t latest = history_.back().wall_clock_ns;
        // 时间单调时裁剪超期样本；时间不可用（0/回退）时只靠容量上限约束。
        while (history_.size() > 1 && latest > history_.front().wall_clock_ns &&
               latest - history_.front().wall_clock_ns > window_ns_) {
            history_.pop_front();
        }
    }
}

std::string format_bytes(std::uint64_t bytes) {
    constexpr double kGiB = 1024.0 * 1024.0 * 1024.0;
    constexpr double kMiB = 1024.0 * 1024.0;
    char buffer[64];
    if (static_cast<double>(bytes) >= kGiB) {
        std::snprintf(buffer, sizeof(buffer), "%.2f GiB",
                      static_cast<double>(bytes) / kGiB);
    } else if (static_cast<double>(bytes) >= kMiB) {
        std::snprintf(buffer, sizeof(buffer), "%.2f MiB",
                      static_cast<double>(bytes) / kMiB);
    } else {
        std::snprintf(buffer, sizeof(buffer), "%llu 字节",
                      static_cast<unsigned long long>(bytes));
    }
    return buffer;
}

std::string format_percent(double percent) {
    char buffer[32];
    std::snprintf(buffer, sizeof(buffer), "%.1f%%", percent);
    return buffer;
}

} // namespace tmog
