#pragma once
// Benchmarks 合同参考实现（Issue #10 / W24，算法版本 tmog-bench/1）。
// 本文件是合同的机器可执行形态：内核、固定总功、chunk 边界取消、
// 单调计时、注入时钟。#28 运行页直接复用，不得改语义后沿用版本号。
//
// 合同文档：doc/plans/2026-10-27-issue-10-benchmark-contract.md
// 边界：纯计算零 IO；单线程；不提权；chunk 边界外不检查取消。

#include <array>
#include <atomic>
#include <chrono>
#include <cstdint>
#include <optional>
#include <string>
#include <vector>

namespace tmog::bench {

// 算法-结果绑定：语义修改必须升版本，新旧结果不可比。
inline constexpr const char* kAlgorithmVersion = "tmog-bench/1";

// 固定总功（可比性前提：所有机器算同样的题）。
inline constexpr std::uint32_t kCpuPasses = 4096;          // 每 pass 262144 步
inline constexpr std::uint32_t kCpuKeys = 262144;          // 1 MiB uint32
inline constexpr std::uint32_t kMemTrials = 5;             // 每 trial 64 次全数组扫描
inline constexpr std::uint32_t kMemIterationsPerTrial = 64;
inline constexpr std::uint32_t kMemElements = 1u << 20;    // 1M double × 3 = 24 MiB

// 总时长硬超时：唯一超时判定，在 chunk 边界检查。
inline constexpr double kWallLimitSeconds = 5.0;

enum class BenchStatus {
    Completed,
    Cancelled,   // 用户取消：无任何数值
    TimedOut,    // 超 5 s：已完成 chunk 的部分结果，partial=true
};

// 注入时钟接口：产品路径用 steady_clock，检查注入假时钟。
// now_seconds 返回单调秒。
class Clock {
public:
    virtual ~Clock() = default;
    virtual double now_seconds() const = 0;
};

class SteadyClock final : public Clock {
public:
    double now_seconds() const override {
        using namespace std::chrono;
        return duration<double>(steady_clock::now().time_since_epoch()).count();
    }
};

struct CpuResult {
    BenchStatus status;
    std::optional<double> ops_per_second;   // Completed 时有值
    std::uint64_t steps_done = 0;           // 已完成哈希步（含部分）
    std::uint32_t passes_done = 0;
    double duration_seconds = 0.0;
    std::uint64_t final_hash = 0;           // volatile 写出槽位回读（防删除验证用）
};

struct MemResult {
    BenchStatus status;
    std::optional<double> gigabytes_per_second;  // Completed 时有值；GB/s（10^9）
    std::uint64_t bytes_done = 0;                // 已完成字节（含部分；24 B/元素）
    std::uint32_t trials_done = 0;
    double best_trial_seconds = 0.0;             // 最佳 trial 时长
    double duration_seconds = 0.0;
};

struct CancelToken {
    std::atomic<bool> flag{false};
    void cancel() { flag.store(true, std::memory_order_relaxed); }
    bool is_cancelled() const { return flag.load(std::memory_order_relaxed); }
};

// 确定性输入填充（LCG，种子固定）：无真随机，结果可复现。
void fill_cpu_keys(std::uint32_t* keys, std::uint32_t n);

// CPU 整数内核：h = h*31 + key[i]，单依赖链。
// 返回链末值。仅供小输入正确性检查直接调用。
std::uint64_t cpu_kernel(const std::uint32_t* keys, std::uint32_t n, std::uint64_t h);

// 完整 cpu_int 测试：kCpuPasses 个 pass，每 pass 边界检查取消与超时。
// clock 注入；keys 须已填充且长度 ≥ kCpuKeys。
CpuResult run_cpu_int(const std::uint32_t* keys, const Clock& clock,
                      CancelToken& cancel);

// 内存带宽内核：a[i] = b[i] + 3.0*c[i]，逐元素。仅供小输入检查直接调用。
void mem_kernel(const double* b, const double* c, double* a, std::uint32_t n);

// 完整 mem_bandwidth 测试：kMemTrials 个 trial，每 trial 边界检查取消与超时。
// 缓冲区须已分配且长度 ≥ kMemElements。
MemResult run_mem_bandwidth(const double* b, const double* c, double* a,
                            const Clock& clock, CancelToken& cancel);

} // namespace tmog::bench
