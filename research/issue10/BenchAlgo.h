#pragma once
// Benchmarks 研究候选参考件（Issue #10 / W24，算法候选版本 tmog-bench/1.1）。
// 仅覆盖内核、计时与取消；不是完整合同的机器可执行实现。
// 尚无 Failed/环境字段/独立 partial 字段，#28 正式实现须逐项对照合同重审，
// 不得直接作为已验收实现复用，也不得改语义后沿用结果版本号。
//
// 合同文档：doc/plans/2026-10-27-issue-10-benchmark-contract.md
// 边界：纯计算零 IO；单线程；不提权；chunk 边界外不检查取消。
// 语义限定：kWallLimitSeconds 是协作式上限（chunk 边界检查，单 chunk 内不可
// 中断）；ops_per_second 是 hash-steps/s（非通用 CPU 指令数）；
// mem_bandwidth 的 GB/s 是 "TRIAD 内核吞吐"（24 MiB 工作集可能落在 LLC 内，
// 不是主内存带宽认证）。

#include <array>
#include <atomic>
#include <chrono>
#include <cstdint>
#include <optional>
#include <string>
#include <vector>

namespace tmog::bench {

// 算法-结果绑定：语义修改必须升版本，新旧结果不可比。
inline constexpr const char* kAlgorithmVersion = "tmog-bench/1.1";

// 固定总功（可比性前提：所有机器算同样的题）。
inline constexpr std::uint32_t kCpuPasses = 4096;          // 每 pass 262144 步
inline constexpr std::uint32_t kCpuKeys = 262144;          // 1 MiB uint32
inline constexpr std::uint32_t kMemTrials = 5;             // 每 trial 64 次全数组扫描
inline constexpr std::uint32_t kMemIterationsPerTrial = 64;
inline constexpr std::uint32_t kMemElements = 1u << 20;    // 1M double × 3 = 24 MiB

// TRIAD 请求字节：每次迭代每元素读 16 B、写 8 B；不等同物理 DRAM 流量。
constexpr std::uint64_t mem_trial_bytes(std::uint32_t elements, std::uint32_t iterations) {
    return static_cast<std::uint64_t>(elements) * iterations * 24;
}

// 总时长协作式上限：仅在 chunk 边界检查，非硬实时保证。
inline constexpr double kWallLimitSeconds = 5.0;

enum class BenchStatus {
    Completed,
    Cancelled,   // 用户取消：无任何数值
    TimedOut,    // 超时部分计数；本候选没有独立 partial 字段，也不产出速率
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
    std::optional<double> ops_per_second;   // Completed 时有值；hash-steps/s（非通用指令数）
    std::uint64_t steps_done = 0;           // 已完成哈希步（含部分）
    std::uint32_t passes_done = 0;
    double duration_seconds = 0.0;
    std::uint64_t final_hash = 0;           // volatile 写出槽位回读（防删除验证用）
};

struct MemResult {
    BenchStatus status;
    std::optional<double> gigabytes_per_second;  // Completed 时有值；GB/s（10^9）；TRIAD 内核吞吐（非主内存带宽认证）
    std::uint64_t bytes_done = 0;                // 全部已完成 trial 累计请求字节（含每 trial 的迭代）
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
