#include "WindowsProcesses.h"
#include <windows.h>
#include <tlhelp32.h>
#include <psapi.h>

namespace tmog {

namespace {

std::string WideToUtf8(const std::wstring& w) {
    if (w.empty()) return {};
    int n = WideCharToMultiByte(CP_UTF8, 0, w.data(), (int)w.size(),
                                nullptr, 0, nullptr, nullptr);
    std::string s(n, 0);
    WideCharToMultiByte(CP_UTF8, 0, w.data(), (int)w.size(), s.data(), n, nullptr, nullptr);
    return s;
}

std::uint64_t filetime_to_ns(const FILETIME& ft) {
    ULARGE_INTEGER v{};
    v.LowPart = ft.dwLowDateTime;
    v.HighPart = ft.dwHighDateTime;
    return v.QuadPart * 100ULL; // 100ns 单位 → ns
}

} // namespace

std::optional<SampleResult> WindowsProcessEnumerator::take_sample() {
    SampleResult result;
    HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snap == INVALID_HANDLE_VALUE) {
        result.error = "CreateToolhelp32Snapshot failed (error " +
                       std::to_string(GetLastError()) + ")";
        return result;
    }

    // 单调墙钟：QPC 不受系统时间调整影响
    LARGE_INTEGER qpc_freq{}, qpc_now{};
    QueryPerformanceFrequency(&qpc_freq);
    QueryPerformanceCounter(&qpc_now);
    result.wall_clock_ns =
        static_cast<std::uint64_t>(qpc_now.QuadPart * 1'000'000'000.0 / qpc_freq.QuadPart);

    PROCESSENTRY32W entry{};
    entry.dwSize = sizeof(entry);
    if (Process32FirstW(snap, &entry)) {
        do {
            ProcessSnapshot ps;
            ps.identity.pid = entry.th32ProcessID;
            ps.name = WideToUtf8(entry.szExeFile);

            // 同一快照内逐进程取身份（创建时间）、CPU 时间与工作集
            HANDLE h = OpenProcess(
                PROCESS_QUERY_LIMITED_INFORMATION, FALSE, entry.th32ProcessID);
            if (h) {
                FILETIME create{}, exit_t{}, kernel{}, user{};
                if (GetProcessTimes(h, &create, &exit_t, &kernel, &user)) {
                    ps.identity.creation_tick =
                        static_cast<std::uint64_t>(create.dwHighDateTime) << 32 |
                        create.dwLowDateTime;
                    ps.cpu_time_ns = filetime_to_ns(kernel) + filetime_to_ns(user);
                    ps.cpu_time_available = true;
                }
                PROCESS_MEMORY_COUNTERS_EX pmc{};
                pmc.cb = sizeof(pmc);
                if (GetProcessMemoryInfo(h,
                        reinterpret_cast<PROCESS_MEMORY_COUNTERS*>(&pmc), sizeof(pmc))) {
                    ps.resident_bytes = pmc.WorkingSetSize;
                    ps.resident_available = true;
                }
                CloseHandle(h);
            }
            result.processes.push_back(std::move(ps));
        } while (Process32NextW(snap, &entry));
    }
    CloseHandle(snap);

    result.ok = true;
    return result;
}

std::uint32_t WindowsProcessEnumerator::logical_processor_count() const {
    // ponytail: GetLogicalProcessorInformationEx 未处理处理器组（>64 核），计划 M4 明确支持测试
    SYSTEM_INFO si{};
    GetSystemInfo(&si);
    return si.dwNumberOfProcessors;
}

} // namespace tmog
