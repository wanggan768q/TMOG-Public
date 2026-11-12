#pragma once
#include <cstdint>
#include <memory>
#include <string>

namespace tmog {

// 整机系统时间累计值（GetSystemTimes；FILETIME 100ns 刻度换成 ns）。
// kernel 时间按 Windows 语义包含 idle 时间。
struct SystemTimesNs {
    std::uint64_t idle_ns = 0;
    std::uint64_t kernel_ns = 0;
    std::uint64_t user_ns = 0;
};

// 一次独立整机采集的结果。#19：整机数据由系统 API 直接读取，不从进程枚举
// 累加；两个 API 各自成功/失败，互不连累（CPU 失败不伪报内存 0，反之亦然）。
struct SystemReading {
    bool times_available = false;
    SystemTimesNs times;
    bool memory_available = false;
    std::uint64_t memory_total_bytes = 0;
    std::uint64_t memory_available_bytes = 0;
    // 单调时钟采样时刻（Windows: QPC），用于历史时间轴与窗口淘汰。
    std::uint64_t wall_clock_ns = 0;
    // 任一 API 失败时的错误原文（含 Win32 错误码）；成功且全部可用时为空。
    std::string error;
};

// 整机指标采集源接口：read() 在采样线程调用，返回一次值语义快照。
class ISystemMetricsSource {
public:
    virtual ~ISystemMetricsSource() = default;
    virtual SystemReading read() = 0;
};

// 平台采集源工厂：Windows 用 GetSystemTimes + GlobalMemoryStatusEx；
// 其他平台返回诚实不可用源（明确错误，不造假 0）。
std::unique_ptr<ISystemMetricsSource> make_system_metrics_source();

} // namespace tmog
