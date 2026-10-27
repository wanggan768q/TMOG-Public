#include "WindowsProcessOps.h"
#include <windows.h>

namespace tmog {

namespace {

// 当前进程身份（拒绝自杀保护）
bool get_self_identity(ProcessIdentity& out) {
    HANDLE h = GetCurrentProcess();
    FILETIME c{}, e{}, k{}, u{};
    if (!GetProcessTimes(h, &c, &e, &k, &u)) return false;
    out.pid = GetCurrentProcessId();
    out.creation_tick = (static_cast<std::uint64_t>(c.dwHighDateTime) << 32) | c.dwLowDateTime;
    return true;
}

bool is_critical_process(HANDLE h) {
    // 关键进程检测：NtQueryInformationProcess(ProcessBreakOnTermination)。
    // 注：IsProcessCritical 在本机 Win11 26200 的 ntdll 导出表中不存在，
    // 改用底层等价查询；查询失败（status != 0）视为无法核实 → 拒绝（M3.3 规则）。
    using NtQIPFn = LONG(WINAPI*)(HANDLE, ULONG, PVOID, ULONG, PULONG);
    static NtQIPFn fn = []() -> NtQIPFn {
        HMODULE ntdll = GetModuleHandleW(L"ntdll.dll");
        return ntdll ? reinterpret_cast<NtQIPFn>(
                           GetProcAddress(ntdll, "NtQueryInformationProcess"))
                     : nullptr;
    }();
    if (!fn) return true;   // 无法核实 → 拒绝
    ULONG break_on_termination = 0;
    const LONG status = fn(h, /*ProcessBreakOnTermination=*/29,
                           &break_on_termination, sizeof(break_on_termination), nullptr);
    if (status != 0) return true;   // 查询失败 → 无法核实 → 拒绝
    return break_on_termination != 0;
}

} // namespace

KillOutcome WindowsProcessOps::terminate(const ProcessIdentity& target, int wait_timeout_ms) {
    // 1. 拒绝自身
    ProcessIdentity self{};
    if (get_self_identity(self) && self == target)
        return {KillResult::SelfTarget, "cannot terminate own process"};

    // 2. 打开目标并核实身份（创建时间一致才继续）
    HANDLE h = OpenProcess(PROCESS_TERMINATE | PROCESS_QUERY_LIMITED_INFORMATION |
                               SYNCHRONIZE,
                           FALSE, target.pid);
    if (!h) {
        const DWORD err = GetLastError();
        if (err == ERROR_ACCESS_DENIED)
            return {KillResult::AccessDenied, "OpenProcess denied"};
        return {KillResult::Failed, "OpenProcess failed (error " + std::to_string(err) + ")"};
    }

    FILETIME c{}, e{}, k{}, u{};
    if (!GetProcessTimes(h, &c, &e, &k, &u)) {
        CloseHandle(h);
        return {KillResult::Failed, "GetProcessTimes failed"};
    }
    const auto creation = (static_cast<std::uint64_t>(c.dwHighDateTime) << 32) | c.dwLowDateTime;
    if (creation != target.creation_tick) {
        CloseHandle(h);
        return {KillResult::IdentityChanged,
                "creation time mismatch: PID was reused since snapshot"};
    }

    // 3. 拒绝关键/受保护进程
    if (is_critical_process(h)) {
        CloseHandle(h);
        return {KillResult::CriticalTarget, "process is critical or protected"};
    }

    // 4. 终止并等待退出确认
    if (!TerminateProcess(h, 1)) {
        const DWORD err = GetLastError();
        CloseHandle(h);
        if (err == ERROR_ACCESS_DENIED)
            return {KillResult::AccessDenied, "TerminateProcess denied"};
        return {KillResult::Failed, "TerminateProcess failed (error " + std::to_string(err) + ")"};
    }

    // 等待句柄被激发（进程真正退出），超时不算成功
    if (wait_timeout_ms > 0) {
        const DWORD wait = WaitForSingleObject(h, static_cast<DWORD>(wait_timeout_ms));
        CloseHandle(h);
        if (wait == WAIT_OBJECT_0) return {KillResult::Ok, {}};
        if (wait == WAIT_TIMEOUT)
            return {KillResult::Requested, "termination requested, exit not confirmed in " +
                                                std::to_string(wait_timeout_ms) + "ms"};
        return {KillResult::Failed, "WaitForSingleObject failed"};
    }
    CloseHandle(h);
    return {KillResult::Requested, "termination requested, no wait performed"};
}

} // namespace tmog
