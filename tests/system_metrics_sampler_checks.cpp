// #19 整机 CPU／内存采样器纯计算检查（无 Qt、无真实系统调用）。
//
// 覆盖：首样本待采样、累计时间差百分比、有效空闲 0.0%、满负载 100%、
// 计数器回退/增量非法重建基线、读取失败缺样（Gap）、失败恢复重建基线、
// 内存口径（已用 = 总量 − 可用）、内存不可用不回退成 0、历史 5 分钟窗口与
// 600 样本硬上限、展示格式化单位（GiB/MiB/字节、一位小数百分率）。
//
// 退出码：0 = 全部通过；1 = 有失败（失败项打印到 stderr）。
#include "SystemMetrics.h"
#include "SystemMetricsSampler.h"

#include <cstdint>
#include <cstdio>
#include <deque>
#include <string>

namespace {

int g_failures = 0;

void check(bool passed, const std::string& what) {
    if (passed) return;
    ++g_failures;
    std::fprintf(stderr, "FAIL %s\n", what.c_str());
}

constexpr std::uint64_t kGiB = 1024ULL * 1024ULL * 1024ULL;
constexpr std::uint64_t kMiB = 1024ULL * 1024ULL;

tmog::SystemReading make_reading(std::uint64_t idle_ns, std::uint64_t kernel_ns,
                                 std::uint64_t user_ns, std::uint64_t wall_ns,
                                 bool times_available = true,
                                 std::uint64_t total_mem = 16 * kGiB,
                                 std::uint64_t avail_mem = 8 * kGiB,
                                 bool memory_available = true,
                                 std::string error = {}) {
    tmog::SystemReading reading;
    reading.times_available = times_available;
    reading.times.idle_ns = idle_ns;
    reading.times.kernel_ns = kernel_ns;
    reading.times.user_ns = user_ns;
    reading.memory_available = memory_available;
    reading.memory_total_bytes = total_mem;
    reading.memory_available_bytes = avail_mem;
    reading.wall_clock_ns = wall_ns;
    reading.error = std::move(error);
    return reading;
}

void check_first_sample_pending() {
    tmog::SystemMetricsSampler sampler;
    const auto sample = sampler.ingest(
        make_reading(1000, 2000, 1000, 1'000'000'000ULL));
    check(sample.status == tmog::SystemSampleStatus::Pending,
          "S1: first sample is Pending");
    check(!sample.cpu_percent.has_value(), "S1: Pending has no CPU percent");
    check(sample.memory_available, "S1: memory fields still available on Pending");
    check(sample.total_memory_bytes == 16 * kGiB, "S1: total memory passed through");
    check(sample.available_memory_bytes == 8 * kGiB,
          "S1: available memory passed through");
    check(sample.used_memory_bytes == 8 * kGiB,
          "S1: used = total - available");
    check(sampler.history().size() == 1, "S1: sample pushed to history");
}

void check_time_delta_percent() {
    tmog::SystemMetricsSampler sampler;
    sampler.ingest(make_reading(100, 200, 100, 1'000'000'000ULL));
    // idle +100，kernel +100，user +100 → total = 200，busy = 100 → 50.0%
    const auto sample =
        sampler.ingest(make_reading(200, 300, 200, 2'000'000'000ULL));
    check(sample.status == tmog::SystemSampleStatus::Ok,
          "S2: second sample is Ok");
    check(sample.cpu_percent.has_value(), "S2: Ok has CPU percent");
    check(sample.cpu_percent.has_value() &&
              sample.cpu_percent.value_or(-1.0) > 49.99 &&
              sample.cpu_percent.value_or(101.0) < 50.01,
          "S2: 50% from total/idle time deltas");
    check(sample.detail.empty(), "S2: Ok without error has empty detail");
}

void check_valid_zero_idle() {
    tmog::SystemMetricsSampler sampler;
    sampler.ingest(make_reading(0, 0, 0, 1));
    // 全部增量都是 idle：有效空闲 → 真实 0.0%（不是缺样）。
    const auto sample = sampler.ingest(make_reading(300, 200, 100, 2));
    check(sample.status == tmog::SystemSampleStatus::Ok,
          "S3: fully idle is Ok, not a gap");
    check(sample.cpu_percent.has_value() &&
              sample.cpu_percent.value_or(-1.0) == 0.0,
          "S3: valid idle reports real 0.0%");
}

void check_full_load() {
    tmog::SystemMetricsSampler sampler;
    sampler.ingest(make_reading(0, 0, 0, 1));
    // idle 不增长，total 增长 200 → 100%。
    const auto sample = sampler.ingest(make_reading(0, 100, 100, 2));
    check(sample.status == tmog::SystemSampleStatus::Ok, "S4: full load is Ok");
    check(sample.cpu_percent.has_value() &&
              sample.cpu_percent.value_or(-1.0) == 100.0,
          "S4: full load reports 100.0%");
}

void check_counter_regression_rebuilds_baseline() {
    tmog::SystemMetricsSampler sampler;
    sampler.ingest(make_reading(500, 1000, 500, 1));
    const auto regressed = sampler.ingest(make_reading(400, 900, 400, 2));
    check(regressed.status == tmog::SystemSampleStatus::Pending,
          "S5: counter regression yields Pending (no fake number)");
    check(regressed.detail.find("回退") != std::string::npos,
          "S5: regression detail explains baseline rebuild");
    // 基线已重建：下一帧 Ok。
    const auto resumed = sampler.ingest(make_reading(600, 1100, 600, 3));
    check(resumed.status == tmog::SystemSampleStatus::Ok,
          "S5: next sample after rebuild is Ok");
}

void check_read_failure_gap() {
    tmog::SystemMetricsSampler sampler;
    sampler.ingest(make_reading(100, 200, 100, 1));
    const auto failed = sampler.ingest(
        make_reading(0, 0, 0, 2, /*times_available=*/false,
                     /*total_mem=*/16 * kGiB, /*avail_mem=*/8 * kGiB,
                     /*memory_available=*/true,
                     "GetSystemTimes failed (error 5)"));
    check(failed.status == tmog::SystemSampleStatus::Gap,
          "S6: read failure is a gap sample");
    check(!failed.cpu_percent.has_value(), "S6: gap has no CPU percent");
    check(failed.detail.find("GetSystemTimes failed") != std::string::npos,
          "S6: gap keeps the original error text");
    check(failed.memory_available, "S6: memory can still be valid during CPU gap");
    // 失败后基线作废：恢复首帧重新「待采样」。
    const auto recovered = sampler.ingest(make_reading(100, 200, 100, 3));
    check(recovered.status == tmog::SystemSampleStatus::Pending,
          "S6: first sample after gap rebuilds baseline (Pending)");
    const auto next = sampler.ingest(make_reading(200, 300, 200, 4));
    check(next.status == tmog::SystemSampleStatus::Ok,
          "S6: sampling recovers to Ok after rebuild");
}

void check_memory_failure_not_zero() {
    tmog::SystemMetricsSampler sampler;
    sampler.ingest(make_reading(0, 0, 0, 1));
    const auto sample = sampler.ingest(
        make_reading(100, 100, 100, 2, /*times_available=*/true, 0, 0,
                     /*memory_available=*/false,
                     "GlobalMemoryStatusEx failed (error 5)"));
    check(sample.status == tmog::SystemSampleStatus::Ok,
          "S7: CPU stays Ok when only memory fails");
    check(sample.cpu_percent.has_value(), "S7: CPU percent still computed");
    check(!sample.memory_available, "S7: memory marked unavailable");
    check(sample.used_memory_bytes == 0,
          "S7: unavailable memory has no fabricated used value");
    check(sample.detail.find("GlobalMemoryStatusEx failed") != std::string::npos,
          "S7: memory failure keeps the original error text");
}

void check_history_capacity_bound() {
    tmog::SystemMetricsSampler sampler(/*capacity=*/5, /*window_ns=*/1000);
    for (std::uint64_t i = 1; i <= 8; ++i) {
        sampler.ingest(make_reading(i * 10, i * 10, i * 10, i));
    }
    check(sampler.history().size() == 5, "S8: history bounded by capacity");
    check(sampler.history().front().wall_clock_ns == 4,
          "S8: oldest samples evicted first");
    check(sampler.history().back().wall_clock_ns == 8,
          "S8: newest sample retained");
}

void check_history_time_window() {
    tmog::SystemMetricsSampler sampler(/*capacity=*/600, /*window_ns=*/100);
    for (std::uint64_t wall = 0; wall <= 500; wall += 50) {
        sampler.ingest(make_reading(wall, wall, wall, wall));
    }
    const auto& history = sampler.history();
    check(!history.empty(), "S9: history not empty");
    check(history.back().wall_clock_ns == 500, "S9: newest retained");
    check(history.front().wall_clock_ns >= 500 - 100,
          "S9: samples older than the fixed window are evicted");
    check(history.front().wall_clock_ns == 400,
          "S9: eviction keeps exactly the in-window samples");
}

void check_formatting() {
    check(tmog::format_bytes(16 * kGiB) == "16.00 GiB",
          "S10: GiB formatting");
    check(tmog::format_bytes(3 * kGiB / 2) == "1.50 GiB",
          "S10: fractional GiB formatting");
    check(tmog::format_bytes(2 * kMiB) == "2.00 MiB",
          "S10: MiB formatting");
    check(tmog::format_bytes(1023) == "1023 字节",
          "S10: byte formatting below 1 MiB");
    check(tmog::format_percent(0.0) == "0.0%",
          "S10: zero percent formatting");
    check(tmog::format_percent(100.0) == "100.0%",
          "S10: full percent formatting");
    check(tmog::format_percent(33.333) == "33.3%",
          "S10: one decimal percent formatting");
}

void check_memory_underflow_guard() {
    tmog::SystemMetricsSampler sampler;
    const auto sample = sampler.ingest(
        make_reading(0, 0, 0, 1, true, /*total_mem=*/1 * kMiB,
                     /*avail_mem=*/2 * kMiB, true));
    check(sample.memory_available, "S11: memory available flag passed through");
    check(sample.used_memory_bytes == 0,
          "S11: used guard when available > total (no underflow)");
}

} // namespace

int main() {
    check_first_sample_pending();
    check_time_delta_percent();
    check_valid_zero_idle();
    check_full_load();
    check_counter_regression_rebuilds_baseline();
    check_read_failure_gap();
    check_memory_failure_not_zero();
    check_history_capacity_bound();
    check_history_time_window();
    check_formatting();
    check_memory_underflow_guard();

    if (g_failures != 0) {
        std::fprintf(stderr, "system_metrics_sampler_checks: %d failure(s)\n",
                     g_failures);
        return 1;
    }
    std::printf("system_metrics_sampler_checks: all checks passed\n");
    return 0;
}
