// 最小核心检查：CPU 差分与归一化、首次采样、无效增量、身份变化、不可用状态。
// 显式失败检查（非 assert）：Debug 与 Release 同样有效，失败计数非零退出。
#include <iostream>
#include "ProcessSampler.h"

using namespace tmog;

namespace {

int failures = 0;
void check(bool ok, const char* what) {
    std::cout << (ok ? "PASS" : "FAIL") << ": " << what << "\n";
    if (!ok) ++failures;
}

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
    check(st == ProcessStatus::FirstSample, "first sample status");
    check(!pct, "first sample has no percent");
}

void test_normal_delta() {
    std::optional<int> pct;
    auto prev = make_snap(100, 1, 0);
    auto cur = make_snap(100, 1, 4'000'000'000ULL); // 4s CPU in 1s wall on 8 cores
    auto st = compute_cpu_percent(prev, cur, 1'000'000'000ULL, 8, pct);
    check(st == ProcessStatus::Ok, "normal delta status");
    check(pct && *pct == 50, "normal delta 4s/8cores = 50%");
}

void test_full_core() {
    std::optional<int> pct;
    auto prev = make_snap(100, 1, 0);
    auto cur = make_snap(100, 1, 8'000'000'000ULL); // 8s CPU / 1s wall / 8 cores = 100%
    auto st = compute_cpu_percent(prev, cur, 1'000'000'000ULL, 8, pct);
    check(st == ProcessStatus::Ok, "full core status");
    check(pct && *pct == 100, "full core = 100%");
}

void test_zero_cores() {
    std::optional<int> pct;
    auto prev = make_snap(100, 1, 0);
    auto cur = make_snap(100, 1, 1'000'000'000ULL);
    auto st = compute_cpu_percent(prev, cur, 1'000'000'000ULL, 0, pct);
    check(st == ProcessStatus::Unavailable, "zero cores unavailable");
    check(!pct, "zero cores has no percent");
}

void test_zero_wall_delta() {
    std::optional<int> pct;
    auto prev = make_snap(100, 1, 0);
    auto cur = make_snap(100, 1, 1'000'000'000ULL);
    auto st = compute_cpu_percent(prev, cur, 0, 8, pct);
    check(st == ProcessStatus::Unavailable, "zero wall delta unavailable");
    check(!pct, "zero wall delta has no percent");
}

void test_invalid_delta() {
    std::optional<int> pct;
    auto prev = make_snap(100, 1, 2'000'000'000ULL);
    auto cur = make_snap(100, 1, 1'000'000'000ULL); // 时间倒退
    auto st = compute_cpu_percent(prev, cur, 1'000'000'000ULL, 8, pct);
    check(st == ProcessStatus::InvalidDelta, "time going backwards = InvalidDelta");
    check(!pct, "invalid delta has no percent");
}

void test_identity_changed() {
    std::optional<int> pct;
    auto prev = make_snap(100, 1, 0);
    auto cur = make_snap(100, 999, 1'000'000'000ULL); // 同 PID，创建时间不同 = PID 复用
    auto st = compute_cpu_percent(prev, cur, 1'000'000'000ULL, 8, pct);
    check(st == ProcessStatus::IdentityChanged, "pid reuse detected as IdentityChanged");
    check(!pct, "identity changed has no percent");
}

void test_unavailable_metric() {
    std::optional<int> pct;
    auto prev = make_snap(100, 1, 0, /*cpu_avail=*/false);
    auto cur = make_snap(100, 1, 1'000'000'000ULL);
    auto st = compute_cpu_percent(prev, cur, 1'000'000'000ULL, 8, pct);
    check(st == ProcessStatus::Unavailable, "missing metric unavailable");
    check(!pct, "missing metric has no percent");
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
    std::cout << (failures == 0 ? "process_checks: ALL PASS (16 checks)\n" : "process_checks: FAILURES\n");
    return failures == 0 ? 0 : 1;
}
