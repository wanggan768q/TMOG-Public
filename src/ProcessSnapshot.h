#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace tmog {

// 平台无关的进程身份：PID 本身可复用，配创建时间（或平台等价物）防错认
struct ProcessIdentity {
    std::uint32_t pid = 0;
    std::uint64_t creation_tick = 0; // Windows: FILETIME; Linux: starttime(jiffies); macOS: kinfo_proc p_starttime
    bool operator==(const ProcessIdentity&) const = default;
};

// 单个进程的采样快照；不可用字段保留默认值并由 available 标志区分
struct ProcessSnapshot {
    ProcessIdentity identity;
    std::string name;
    std::uint64_t cpu_time_ns = 0;      // 进程累计 CPU 时间（自创建）
    std::uint64_t resident_bytes = 0;   // 驻留内存：Windows 工作集 / macOS·Linux RSS
    bool cpu_time_available = false;
    bool resident_available = false;
};

// 一次全系统采样
struct SampleResult {
    std::vector<ProcessSnapshot> processes;
    std::uint64_t wall_clock_ns = 0;    // 单调墙钟
    bool ok = false;
    std::string error;                  // ok=false 时的错误描述
};

} // namespace tmog
