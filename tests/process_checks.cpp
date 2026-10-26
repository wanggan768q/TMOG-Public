// 最小核心检查：CPU 差分与归一化、首次采样、无效增量、身份变化、不可用状态。
// 平台集成检查（真实枚举、受控子进程）按计划 M4 增补。
#include <cassert>
#include <iostream>
#include "ProcessSampler.h"

using namespace tmog;

namespace {

ProcessSnapshot make_snap(std::uint32_t pid, std::uint64_t create_tick,
                          std::uint64_t cpu_ns, bool cpu_avail = true) {
    ProcessSnapshot ps;
    ps.identity.pid = pid;
    ps.identity.creation_tick = create_tick;
    ps.cpu_time_ns = cpu_ns;
    ps.cpu_time_available = cpu_avail;
    return ps;
}

void test_first_sample() {
    std::optional<int> pct;
    auto cur = make_snap(100, 1, 1'000'000'000ULL);
    auto st = compute_cpu_percent(std::nullopt, cur, 1'000'000'000ULL, 8, pct);
    assert(st == ProcessStatus::FirstSample);
    assert(!pct);
}

void test_normal_delta() {
    std::optional<int> pct;
    auto prev = make_snap(100, 1, 0);
    auto cur = make_snap(100, 1, 4'000'000'000ULL); // 4s CPU in 1s wall on 8 cores
    auto st = compute_cpu_percent(prev, cur, 1'000'000'000ULL, 8, pct);
    assert(st == ProcessStatus::Ok);
    assert(pct && *pct == 50); // 4e9 / (1e9*8) = 0.5 → 50%
}

void test_full_core() {
    std::optional<int> pct;
    auto prev = make_snap(100, 1, 0);
    auto cur = make_snap(100, 1, 8'000'000'000ULL); // 8s CPU / 1s wall / 8 cores = 100%
    auto st = compute_cpu_percent(prev, cur, 1'000'000'000ULL, 8, pct);
    assert(st == ProcessStatus::Ok);
    assert(pct && *pct == 100);
}

void test_zero_cores() {
    std::optional<int> pct;
    auto prev = make_snap(100, 1, 0);
    auto cur = make_snap(100, 1, 1'000'000'000ULL);
    auto st = compute_cpu_percent(prev, cur, 1'000'000'000ULL, 0, pct);
    assert(st == ProcessStatus::Unavailable);
    assert(!pct);
}

void test_zero_wall_delta() {
    std::optional<int> pct;
    auto prev = make_snap(100, 1, 0);
    auto cur = make_snap(100, 1, 1'000'000'000ULL);
    auto st = compute_cpu_percent(prev, cur, 0, 8, pct);
    assert(st == ProcessStatus::Unavailable);
    assert(!pct);
}

void test_invalid_delta() {
    std::optional<int> pct;
    auto prev = make_snap(100, 1, 2'000'000'000ULL);
    auto cur = make_snap(100, 1, 1'000'000'000ULL); // 时间倒退
    auto st = compute_cpu_percent(prev, cur, 1'000'000'000ULL, 8, pct);
    assert(st == ProcessStatus::InvalidDelta);
    assert(!pct);
}

void test_identity_changed() {
    std::optional<int> pct;
    auto prev = make_snap(100, 1, 0);
    auto cur = make_snap(100, 999, 1'000'000'000ULL); // 同 PID，创建时间不同 = PID 复用
    auto st = compute_cpu_percent(prev, cur, 1'000'000'000ULL, 8, pct);
    assert(st == ProcessStatus::IdentityChanged);
    assert(!pct);
}

void test_unavailable_metric() {
    std::optional<int> pct;
    auto prev = make_snap(100, 1, 0, /*cpu_avail=*/false);
    auto cur = make_snap(100, 1, 1'000'000'000ULL);
    auto st = compute_cpu_percent(prev, cur, 1'000'000'000ULL, 8, pct);
    assert(st == ProcessStatus::Unavailable);
    assert(!pct);
}

} // namespace

int main() {
    test_first_sample();
    test_normal_delta();
    test_full_core();
    test_zero_cores();
    test_zero_wall_delta();
    test_invalid_delta();
    test_identity_changed();
    test_unavailable_metric();
    std::cout << "process_checks: all 8 passed\n";
    return 0;
}
