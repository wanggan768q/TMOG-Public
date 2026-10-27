// Benchmarks 合同参考实现（tmog-bench/1）。语义见 BenchAlgo.h 与合同文档。
#include "BenchAlgo.h"

namespace tmog::bench {

namespace {

// volatile 槽位：防编译器删除依赖链（每 pass 末写出）。
volatile std::uint64_t g_cpu_sink = 0;
volatile double g_mem_sink = 0.0;

// 超时判定：起点 + 已过时间 > 5 s。
bool timed_out(double start, const Clock& clock) {
    return (clock.now_seconds() - start) > kWallLimitSeconds;
}

} // namespace

void fill_cpu_keys(std::uint32_t* keys, std::uint32_t n) {
    // LCG：确定性填充，种子固定（合同 §2.2）。
    std::uint64_t s = 0x12345678;
    for (std::uint32_t i = 0; i < n; ++i) {
        s = s * 6364136223846793005ULL + 1442695040888963407ULL;
        keys[i] = static_cast<std::uint32_t>(s >> 32);
    }
}

std::uint64_t cpu_kernel(const std::uint32_t* keys, std::uint32_t n,
                         std::uint64_t h) {
    for (std::uint32_t i = 0; i < n; ++i) {
        h = h * 31 + keys[i];
    }
    return h;
}

CpuResult run_cpu_int(const std::uint32_t* keys, const Clock& clock,
                      CancelToken& cancel) {
    CpuResult r{};
    r.status = BenchStatus::Cancelled;  // 若零 pass 即退出
    const double start = clock.now_seconds();
    std::uint64_t h = 0x9e3779b97f4a7c15ULL;

    for (std::uint32_t pass = 0; pass < kCpuPasses; ++pass) {
        // chunk 边界检查（首 pass 前也检查：取消早于开始则立即退出）。
        if (cancel.is_cancelled()) {
            r.duration_seconds = clock.now_seconds() - start;
            return r;  // status 保持 Cancelled，无数值
        }
        if (pass > 0 && timed_out(start, clock)) {
            r.status = BenchStatus::TimedOut;
            r.steps_done = static_cast<std::uint64_t>(pass) * kCpuKeys;
            r.passes_done = pass;
            r.duration_seconds = clock.now_seconds() - start;
            return r;  // 部分结果，ops_per_second 留空
        }
        h = cpu_kernel(keys, kCpuKeys, h);
        g_cpu_sink = h;  // volatile 写出（窗口内）
    }

    r.status = BenchStatus::Completed;
    r.steps_done = static_cast<std::uint64_t>(kCpuPasses) * kCpuKeys;
    r.passes_done = kCpuPasses;
    r.duration_seconds = clock.now_seconds() - start;
    r.final_hash = h;
    if (r.duration_seconds > 0.0) {
        r.ops_per_second = static_cast<double>(r.steps_done) / r.duration_seconds;
    }
    return r;
}

void mem_kernel(const double* b, const double* c, double* a, std::uint32_t n) {
    constexpr double q = 3.0;
    for (std::uint32_t i = 0; i < n; ++i) {
        a[i] = b[i] + q * c[i];
    }
}

MemResult run_mem_bandwidth(const double* b, const double* c, double* a,
                            const Clock& clock, CancelToken& cancel) {
    MemResult r{};
    r.status = BenchStatus::Cancelled;
    const double start = clock.now_seconds();
    constexpr std::uint64_t kBytesPerTrial =
        static_cast<std::uint64_t>(kMemElements) * 24;  // 24 B/元素（STREAM 约定）

    for (std::uint32_t trial = 0; trial < kMemTrials; ++trial) {
        if (cancel.is_cancelled()) {
            r.duration_seconds = clock.now_seconds() - start;
            return r;
        }
        if (trial > 0 && timed_out(start, clock)) {
            r.status = BenchStatus::TimedOut;
            r.bytes_done = static_cast<std::uint64_t>(trial) * kBytesPerTrial;
            r.trials_done = trial;
            r.duration_seconds = clock.now_seconds() - start;
            return r;
        }
        const double t0 = clock.now_seconds();
        for (std::uint32_t it = 0; it < kMemIterationsPerTrial; ++it) {
            mem_kernel(b, c, a, kMemElements);
        }
        const double t1 = clock.now_seconds();
        const double trial_seconds = t1 - t0;
        if (trial == 0 || trial_seconds < r.best_trial_seconds) {
            r.best_trial_seconds = trial_seconds;
        }
        g_mem_sink = a[0];  // volatile 写出（防删除）
    }

    r.status = BenchStatus::Completed;
    r.bytes_done = static_cast<std::uint64_t>(kMemTrials) * kBytesPerTrial;
    r.trials_done = kMemTrials;
    r.duration_seconds = clock.now_seconds() - start;
    if (r.best_trial_seconds > 0.0) {
        // GB/s（10^9）：最佳 trial 字节数 / 最佳 trial 时长。
        r.gigabytes_per_second =
            static_cast<double>(kBytesPerTrial) / r.best_trial_seconds / 1e9;
    }
    return r;
}

} // namespace tmog::bench
