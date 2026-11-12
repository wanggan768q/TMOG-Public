#include "platform/WindowsSystemMetrics.h"
#include "platform/WinTime.h"

#include <windows.h>

#include <string>

namespace tmog {
namespace {

// QPC → 单调纳秒。分段计算避免 counter*1e9 在长开机时间下溢出。
std::uint64_t qpc_now_ns() {
    LARGE_INTEGER counter{};
    LARGE_INTEGER frequency{};
    if (!QueryPerformanceCounter(&counter) || !QueryPerformanceFrequency(&frequency) ||
        frequency.QuadPart <= 0 || counter.QuadPart < 0) {
        return 0;
    }
    const std::uint64_t ticks = static_cast<std::uint64_t>(counter.QuadPart);
    const std::uint64_t freq = static_cast<std::uint64_t>(frequency.QuadPart);
    return (ticks / freq) * 1'000'000'000ULL +
           ((ticks % freq) * 1'000'000'000ULL) / freq;
}

void append_error(std::string& error, const char* what) {
    if (!error.empty()) error += "；";
    error += what;
    error += " failed (error ";
    error += std::to_string(GetLastError());
    error += ")";
}

} // namespace

SystemReading WindowsSystemMetricsSource::read() {
    SystemReading reading;
    reading.wall_clock_ns = qpc_now_ns();

    FILETIME idle{};
    FILETIME kernel{};
    FILETIME user{};
    if (GetSystemTimes(&idle, &kernel, &user)) {
        reading.times_available = true;
        reading.times.idle_ns = win::filetime_to_ns(idle);
        reading.times.kernel_ns = win::filetime_to_ns(kernel);
        reading.times.user_ns = win::filetime_to_ns(user);
    } else {
        append_error(reading.error, "GetSystemTimes");
    }

    MEMORYSTATUSEX memory{};
    memory.dwLength = sizeof(memory);
    if (GlobalMemoryStatusEx(&memory)) {
        reading.memory_available = true;
        reading.memory_total_bytes = memory.ullTotalPhys;
        reading.memory_available_bytes = memory.ullAvailPhys;
    } else {
        append_error(reading.error, "GlobalMemoryStatusEx");
    }

    return reading;
}

std::unique_ptr<ISystemMetricsSource> make_system_metrics_source() {
    return std::make_unique<WindowsSystemMetricsSource>();
}

} // namespace tmog
