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

// I/O 检查辅助：显式设置累计读写字节与可用性
ProcessSnapshot make_io_snap(std::uint32_t pid, std::uint64_t create_tick,
                             std::uint64_t read_bytes, std::uint64_t write_bytes,
                             bool io_avail = true, bool cpu_avail = true) {
    ProcessSnapshot ps = make_snap(pid, create_tick, 0, cpu_avail);
    ps.io_read_bytes = read_bytes;
    ps.io_write_bytes = write_bytes;
    ps.io_available = io_avail;
    return ps;
}

// ---------- I/O 速率检查（#11） ----------

void test_io_first_sample() {
    std::optional<double> rd, wr;
    auto cur = make_io_snap(100, 1, 1'000, 3'000);
    auto st = compute_io_rates(std::nullopt, cur, 1'000'000'000ULL, rd, wr);
    check(st == ProcessStatus::FirstSample, "io first sample status");
    check(!rd && !wr, "io first sample no rates");
}

void test_io_normal_delta() {
    std::optional<double> rd, wr;
    auto prev = make_io_snap(100, 1, 0, 0);
    auto cur = make_io_snap(100, 1, 1'000, 3'000);
    // Δread=1000、Δwrite=3000，真实 dt=2e9ns → 500/1500 B/s
    auto st = compute_io_rates(prev, cur, 2'000'000'000ULL, rd, wr);
    check(st == ProcessStatus::Ok, "io normal delta status");
    check(rd && *rd == 500.0, "io read 1000/2s = 500 B/s");
    check(wr && *wr == 1500.0, "io write 3000/2s = 1500 B/s");
}

void test_io_half_second_delta() {
    std::optional<double> rd, wr;
    auto prev = make_io_snap(100, 1, 0, 0);
    auto cur = make_io_snap(100, 1, 1'000, 3'000);
    // dt=0.5e9ns → 2000/6000 B/s
    auto st = compute_io_rates(prev, cur, 500'000'000ULL, rd, wr);
    check(st == ProcessStatus::Ok, "io half-second delta status");
    check(rd && *rd == 2000.0, "io read 1000/0.5s = 2000 B/s");
    check(wr && *wr == 6000.0, "io write 3000/0.5s = 6000 B/s");
}

void test_io_outputs_reset_every_call() {
    std::optional<double> rd = 123.0, wr = 456.0; // 预置旧值，每次调用必须先 reset
    auto cur = make_io_snap(100, 1, 0, 0, /*io_avail=*/false);
    // Ruling：计划§124"无previous且当前有效→FirstSample"——无prev+当前无效→Unavailable
    auto st = compute_io_rates(std::nullopt, cur, 1'000'000'000ULL, rd, wr);
    check(st == ProcessStatus::Unavailable, "io no-prev+invalid status Unavailable");
    check(!rd && !wr, "io outputs reset on every call");
}

void test_io_zero_delta_explicit_zero() {
    std::optional<double> rd, wr;
    auto prev = make_io_snap(100, 1, 5'000, 7'000);
    auto cur = make_io_snap(100, 1, 5'000, 7'000); // 累计不变，真实有效 Δ=0
    auto st = compute_io_rates(prev, cur, 1'000'000'000ULL, rd, wr);
    check(st == ProcessStatus::Ok, "io zero delta status Ok");
    check(rd && *rd == 0.0, "io zero delta explicit 0 (not unavailable)");
    check(wr && *wr == 0.0, "io zero write delta explicit 0");
}

void test_io_identity_changed() {
    std::optional<double> rd, wr;
    auto prev = make_io_snap(100, 1, 0, 0);
    auto cur = make_io_snap(100, 999, 1'000, 3'000); // 同 PID 不同创建时间
    auto st = compute_io_rates(prev, cur, 1'000'000'000ULL, rd, wr);
    check(st == ProcessStatus::IdentityChanged, "io identity changed");
    check(!rd && !wr, "io identity changed no rates");
}

void test_io_creation_tick_zero_unavailable() {
    std::optional<double> rd, wr;
    auto prev = make_io_snap(100, 1, 0, 0);
    auto cur = make_io_snap(100, 0, 1'000, 3'000); // 当前身份无法核实
    auto st = compute_io_rates(prev, cur, 1'000'000'000ULL, rd, wr);
    check(st == ProcessStatus::Unavailable, "io creation_tick 0 unavailable");
    check(!rd && !wr, "io creation_tick 0 no rates");
}

void test_io_current_unavailable() {
    std::optional<double> rd, wr;
    auto prev = make_io_snap(100, 1, 0, 0);
    auto cur = make_io_snap(100, 1, 1'000, 3'000, /*io_avail=*/false);
    auto st = compute_io_rates(prev, cur, 1'000'000'000ULL, rd, wr);
    check(st == ProcessStatus::Unavailable, "io current unavailable");
    check(!rd && !wr, "io current unavailable no rates");
}

void test_io_prev_field_unavailable_recovery_first_sample() {
    std::optional<double> rd, wr;
    auto prev = make_io_snap(100, 1, 0, 0, /*io_avail=*/false);
    auto cur = make_io_snap(100, 1, 1'000, 3'000);
    // 前一帧字段不可用：恢复重建基线 → FirstSample
    auto st = compute_io_rates(prev, cur, 1'000'000'000ULL, rd, wr);
    check(st == ProcessStatus::FirstSample, "io prev unavailable -> FirstSample");
    check(!rd && !wr, "io recovery no rates");
}

void test_io_recovered_produces_rate_after_rebuild() {
    // 恢复后的下一帧（prev 有效）应产出真实速率
    std::optional<double> rd, wr;
    auto prev = make_io_snap(100, 1, 1'000, 3'000);
    auto cur = make_io_snap(100, 1, 3'000, 6'000);
    auto st = compute_io_rates(prev, cur, 1'000'000'000ULL, rd, wr);
    check(st == ProcessStatus::Ok, "io after recovery status");
    check(rd && *rd == 2000.0, "io after recovery read rate");
    check(wr && *wr == 3000.0, "io after recovery write rate");
}

void test_io_regression_invalid_delta() {
    std::optional<double> rd, wr;
    auto prev = make_io_snap(100, 1, 5'000, 5'000);
    auto cur = make_io_snap(100, 1, 4'999, 5'000); // 读累计倒退
    auto st = compute_io_rates(prev, cur, 1'000'000'000ULL, rd, wr);
    check(st == ProcessStatus::InvalidDelta, "io read regression = InvalidDelta");
    check(!rd && !wr, "io InvalidDelta both directions no rates");
}

void test_io_write_regression_invalid_delta() {
    std::optional<double> rd, wr;
    auto prev = make_io_snap(100, 1, 5'000, 5'000);
    auto cur = make_io_snap(100, 1, 5'000, 4'000); // 写累计倒退
    auto st = compute_io_rates(prev, cur, 1'000'000'000ULL, rd, wr);
    check(st == ProcessStatus::InvalidDelta, "io write regression = InvalidDelta");
    check(!rd && !wr, "io write regression both directions no rates");
}

void test_io_dt_zero_unavailable() {
    std::optional<double> rd, wr;
    auto prev = make_io_snap(100, 1, 0, 0);
    auto cur = make_io_snap(100, 1, 1'000, 3'000);
    auto st = compute_io_rates(prev, cur, 0, rd, wr);
    check(st == ProcessStatus::Unavailable, "io dt=0 unavailable");
    check(!rd && !wr, "io dt=0 no rates");
}

void test_io_near_uint64_upper_bound() {
    std::optional<double> rd, wr;
    // 接近 uint64 上界：差分不溢出（不先做 uint64 乘 1e9）
    auto prev = make_io_snap(100, 1, 18'000'000'000'000'000'000ULL - 1'000, 0);
    auto cur = make_io_snap(100, 1, 18'000'000'000'000'000'000ULL, 0);
    auto st = compute_io_rates(prev, cur, 1'000'000'000ULL, rd, wr);
    check(st == ProcessStatus::Ok, "io near uint64 bound status");
    check(rd && *rd == 1000.0, "io near uint64 bound read rate");
    // 写方向 Δ=0：有效差分显式产 0.0
    check(wr && *wr == 0.0, "io near uint64 bound write explicit 0");
}

void test_io_wall_regression_dt_zero_treated() {
    // wall 倒退在 diff_samples 里折为 dt=0 → Unavailable（compute_io_rates 直接约定）
    std::optional<double> rd, wr;
    auto prev = make_io_snap(100, 1, 0, 0);
    auto cur = make_io_snap(100, 1, 1'000, 3'000);
    auto st = compute_io_rates(prev, cur, 0, rd, wr);
    check(st == ProcessStatus::Unavailable, "io wall regression folds to dt0");
    check(!rd && !wr, "io wall regression no rates");
}

void test_io_status_independent_from_cpu_status() {
    // 同一行：CPU 正常但 I/O 不可用——io_status 独立，不覆盖 CPU status
    auto prev = make_io_snap(100, 1, 0, 0, /*io_avail=*/false, /*cpu_avail=*/true);
    auto cur = make_io_snap(100, 1, 0, 0, /*io_avail=*/false, /*cpu_avail=*/true);
    cur.cpu_time_ns = 4'000'000'000ULL;
    std::optional<int> pct;
    auto cpu_st = compute_cpu_percent(prev, cur, 1'000'000'000ULL, 8, pct);
    std::optional<double> rd, wr;
    auto io_st = compute_io_rates(prev, cur, 1'000'000'000ULL, rd, wr);
    check(cpu_st == ProcessStatus::Ok && pct, "cpu ok while io unavailable");
    check(io_st == ProcessStatus::Unavailable, "io unavailable independent");
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
    test_io_first_sample();
    test_io_normal_delta();
    test_io_half_second_delta();
    test_io_outputs_reset_every_call();
    test_io_zero_delta_explicit_zero();
    test_io_identity_changed();
    test_io_creation_tick_zero_unavailable();
    test_io_current_unavailable();
    test_io_prev_field_unavailable_recovery_first_sample();
    test_io_recovered_produces_rate_after_rebuild();
    test_io_regression_invalid_delta();
    test_io_write_regression_invalid_delta();
    test_io_dt_zero_unavailable();
    test_io_near_uint64_upper_bound();
    test_io_wall_regression_dt_zero_treated();
    test_io_status_independent_from_cpu_status();
    std::cout << (failures == 0 ? "process_checks: ALL PASS (51 checks)\n" : "process_checks: FAILURES\n");
    return failures == 0 ? 0 : 1;
}
