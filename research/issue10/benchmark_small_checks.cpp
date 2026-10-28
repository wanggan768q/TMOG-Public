// 缩减研究检查：最多 16 元素内核与首 chunk 前取消，绝不执行完整基准。
#include "BenchAlgo.h"
#include <array>
#include <iostream>
#include <string>

using namespace tmog::bench;

int main() {
    int failures = 0;
    auto check = [&](bool ok, const char* message) {
        std::cout << (ok ? "PASS: " : "FAIL: ") << message << '\n';
        if (!ok) ++failures;
    };

    std::array<std::uint32_t, 16> keys{};
    fill_cpu_keys(keys.data(), keys.size());
    std::uint64_t expected = 17;
    for (auto value : keys) expected = expected * 31 + value;
    check(cpu_kernel(keys.data(), keys.size(), 17) == expected,
          "16-element CPU kernel matches independent result");

    std::array<double, 16> b{}, c{}, a{};
    for (std::size_t i = 0; i < a.size(); ++i) { b[i] = i; c[i] = i + 1; }
    for (std::uint32_t i = 0; i < 64; ++i) mem_kernel(b.data(), c.data(), a.data(), a.size());
    bool triad_ok = true;
    for (std::size_t i = 0; i < a.size(); ++i)
        triad_ok = triad_ok && a[i] == b[i] + 3.0 * c[i];
    check(triad_ok, "16-element TRIAD output matches independent result");
    check(mem_trial_bytes(16, 1) == 384, "one iteration counts 24 bytes per element");
    check(mem_trial_bytes(16, 64) == 24'576, "64 iterations are included once in trial bytes");
    check(mem_trial_bytes(16, 64) == 64 * mem_trial_bytes(16, 1), "trial ratio is 64, not 1");
    check(mem_trial_bytes(kMemElements, kMemIterationsPerTrial) == 1'610'612'736ULL,
          "production-sized trial arithmetic includes 64 iterations (no workload run)");
    check(kMemTrials * mem_trial_bytes(kMemElements, kMemIterationsPerTrial) == 8'053'063'680ULL,
          "all-trial bytes accumulate separately from best-trial numerator");

    CancelToken cancel;
    cancel.cancel();
    SteadyClock clock;
    // 取消在任何数组读取前检查，因此仅传空指针；不会创建大数组或执行 chunk。
    const auto cpu_cancelled = run_cpu_int(nullptr, clock, cancel);
    const auto mem_cancelled = run_mem_bandwidth(nullptr, nullptr, nullptr, clock, cancel);
    check(cpu_cancelled.status == BenchStatus::Cancelled && cpu_cancelled.steps_done == 0 &&
          !cpu_cancelled.ops_per_second, "CPU cancels before first chunk without workload");
    check(mem_cancelled.status == BenchStatus::Cancelled && mem_cancelled.bytes_done == 0 &&
          !mem_cancelled.gigabytes_per_second, "TRIAD cancels before first chunk without workload");
    check(std::string(kAlgorithmVersion) == "tmog-bench/1.1", "corrected arithmetic has distinct result version");
    return failures ? 1 : 0;
}
