// Benchmarks 历史研究检查（Issue #10 / W24，合同 §5）。
// 含完整 4096×262144 CPU 工作及完整 TRIAD 工作，不能称为受控小输入。
// 注入时钟不减少计算量；本次修复仅保留源码，不自动运行本历史检查。
// 实际数组峰值约 24 MiB + 1 MiB keys，真实耗时依机器/配置而异，无固定上限。
// 显式失败检查（非 assert）：Debug 与 Release 同样有效。
#include <cmath>
#include <cstdint>
#include <iostream>
#include <vector>
#include "BenchAlgo.h"

using namespace tmog::bench;

namespace {

int failures = 0;
void check(bool ok, const char* what) {
    std::cout << (ok ? "PASS" : "FAIL") << ": " << what << "\n";
    if (!ok) ++failures;
}

// 注入假时钟：时间由测试脚本式推进（合同 §5 检查 4/5 的测试构造）。
class FakeClock final : public Clock {
public:
    double now_seconds() const override { return now_; }
    void advance(double s) { now_ += s; }
private:
    double now_ = 0.0;
};

// 手算哈希期望值（N=16）：独立于 cpu_kernel 的朴素循环（同一表达式，
// 但走独立代码路径——检查的是实现与合同表达式一致，不是数学恒等）。
std::uint64_t expected_hash(const std::uint32_t* keys, std::uint32_t n) {
    std::uint64_t h = 0x9e3779b97f4a7c15ULL;
    for (std::uint32_t i = 0; i < n; ++i) h = h * 31 + keys[i];
    return h;
}

void test_cpu_kernel_small() {
    // 检查 1：cpu_int 内核真实执行（防删除验证，N=16 手算比对）。
    std::uint32_t keys[16];
    fill_cpu_keys(keys, 16);
    const std::uint64_t got = cpu_kernel(keys, 16, 0x9e3779b97f4a7c15ULL);
    check(got == expected_hash(keys, 16), "cpu_int small-input hash matches hand calc");
    // 非零输出（被优化删除的内核常恒等返回种子或 0）。
    check(got != 0, "cpu_int kernel produced non-zero chain value");
}

void test_mem_kernel_small() {
    // 检查 2：mem_bw 内核正确性（N=16 逐元素精确比对）。
    double b[16], c[16], a[16];
    for (int i = 0; i < 16; ++i) {
        b[i] = i * 1.5;
        c[i] = i * -0.25 + 7.0;
    }
    mem_kernel(b, c, a, 16);
    bool ok = true;
    for (int i = 0; i < 16; ++i) {
        const double want = b[i] + 3.0 * c[i];
        if (a[i] != want) ok = false;  // 同表达式 double，位级一致合理
    }
    check(ok, "mem_bandwidth TRIAD small-input exact match");
}

void test_cancel_before_chunks() {
    // 检查 3：取消响应——首 chunk 边界前置位 → Cancelled、无数值。
    std::vector<std::uint32_t> keys(kCpuKeys);
    fill_cpu_keys(keys.data(), kCpuKeys);
    FakeClock clk;
    CancelToken tok;
    tok.cancel();
    auto r = run_cpu_int(keys.data(), clk, tok);
    check(r.status == BenchStatus::Cancelled, "cpu_int cancelled before first chunk");
    check(!r.ops_per_second.has_value(), "cancelled run yields no value");
    check(r.passes_done == 0, "cancelled run did zero passes");

    std::vector<double> b(kMemElements), c(kMemElements), a(kMemElements);
    auto m = run_mem_bandwidth(b.data(), c.data(), a.data(), clk, tok);
    check(m.status == BenchStatus::Cancelled, "mem_bw cancelled before first trial");
    check(!m.gigabytes_per_second.has_value(), "mem_bw cancelled yields no value");
}

void test_rate_with_injected_clock() {
    // 检查 4：速率计算（注入时钟精确等式）。
    std::vector<std::uint32_t> keys(kCpuKeys);
    fill_cpu_keys(keys.data(), kCpuKeys);
    CancelToken tok;
    // 假时钟只控制计时读数，以下仍执行完整 4096×262144 步。
    class CountingClock final : public Clock {
    public:
        double now_seconds() const override {
            return calls_++ * 0.0005;  // 每次 now 调用 +0.5 ms
        }
        mutable int calls_ = 0;
    };
    CountingClock cc;
    auto r = run_cpu_int(keys.data(), cc, tok);
    check(r.status == BenchStatus::Completed, "cpu_int completes under injected clock");
    // now 调用：1 start + 4095 timed_out + 1 final = 4097；
    // 每调用 0.0005 s → duration = 4096 × 0.0005 = 2.048 s。
    const double expect_dur = 4096.0 * 0.0005;
    check(std::abs(r.duration_seconds - expect_dur) < 1e-9,
          "cpu_int duration from injected clock exact");
    // ops/s = 2^30 / 2.048 精确等式。
    const double expect_ops = static_cast<double>(1ULL << 30) / expect_dur;
    check(r.ops_per_second && std::abs(*r.ops_per_second - expect_ops) < 1e-6,
          "cpu_int ops/s exact from injected clock");
}

void test_timeout_partial() {
    // 检查 5：超时语义（注入时钟跨 chunk 大幅前跳 → TimedOut + partial）。
    std::vector<std::uint32_t> keys(kCpuKeys);
    fill_cpu_keys(keys.data(), kCpuKeys);
    class JumpClock final : public Clock {
    public:
        double now_seconds() const override {
            // 第 1 次调用（start）= 0；其后每次跳到 t=100 s（> 5 s 上限）。
            return calls_++ == 0 ? 0.0 : 100.0;
        }
        mutable int calls_ = 0;
    };
    JumpClock jc;
    CancelToken tok;
    auto r = run_cpu_int(keys.data(), jc, tok);
    check(r.status == BenchStatus::TimedOut, "cpu_int times out on injected jump clock");
    check(!r.ops_per_second.has_value(), "timed-out run has no rate (partial, not completed)");
    check(r.passes_done == 1, "timed-out run kept 1 completed pass (partial)");
    check(r.steps_done == kCpuKeys, "timed-out partial steps = 1 pass");
    // Cancelled 仍优先于超时：取消标志 + 跳变时钟 → Cancelled。
    CancelToken tok2;
    tok2.cancel();
    JumpClock jc2;
    auto r2 = run_cpu_int(keys.data(), jc2, tok2);
    check(r2.status == BenchStatus::Cancelled, "cancel checked before timeout");
}

void test_mem_timeout_partial() {
    // mem_bw 超时：trial 边界检查。
    std::vector<double> b(kMemElements), c(kMemElements), a(kMemElements);
    class JumpClock final : public Clock {
    public:
        double now_seconds() const override {
            return calls_++ == 0 ? 0.0 : 100.0;
        }
        mutable int calls_ = 0;
    };
    JumpClock jc;
    CancelToken tok;
    auto m = run_mem_bandwidth(b.data(), c.data(), a.data(), jc, tok);
    check(m.status == BenchStatus::TimedOut, "mem_bw times out on injected jump clock");
    check(m.trials_done == 1, "mem_bw kept 1 completed trial (partial)");
    check(!m.gigabytes_per_second.has_value(), "mem_bw timed-out has no rate");
}

void test_real_small_point() {
    // 历史检查 6：真实 CPU 单 pass，加完整 TRIAD 5×64×1M 元素工作。
    // 这不是缩减参数检查；不能从典型机器估算推导固定时间预算。
    std::vector<std::uint32_t> keys(kCpuKeys);
    fill_cpu_keys(keys.data(), kCpuKeys);
    SteadyClock sc;
    CancelToken tok;
    const double t0 = sc.now_seconds();
    const std::uint64_t h = cpu_kernel(keys.data(), kCpuKeys, 0x9e3779b97f4a7c15ULL);
    const double dt = sc.now_seconds() - t0;
    check(h != 0, "cpu_int real 1-pass run produced non-zero hash");
    check(dt > 0.0, "cpu_int real 1-pass took measurable time");

    // mem_bw 完整运行（真实时钟）：Completed、数值 > 0 且有限。
    std::vector<double> b(kMemElements), c(kMemElements), a(kMemElements);
    for (std::uint32_t i = 0; i < kMemElements; ++i) { b[i] = 1.0; c[i] = 2.0; }
    auto m = run_mem_bandwidth(b.data(), c.data(), a.data(), sc, tok);
    check(m.status == BenchStatus::Completed, "mem_bw full run completes on real clock");
    check(m.gigabytes_per_second && *m.gigabytes_per_second > 0.0 &&
          std::isfinite(*m.gigabytes_per_second),
          "mem_bw full run yields finite positive GB/s");
    check(a[12345] == 1.0 + 3.0 * 2.0, "mem_bw real run touched output array");
}

} // namespace

int main() {
    test_cpu_kernel_small();
    test_mem_kernel_small();
    test_cancel_before_chunks();
    test_rate_with_injected_clock();
    test_timeout_partial();
    test_mem_timeout_partial();
    test_real_small_point();
    std::cout << (failures == 0 ? "ALL PASS" : "FAILURES PRESENT") << "\n";
    return failures == 0 ? 0 : 1;
}
