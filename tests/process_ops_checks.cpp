// M3 检查（#5 修订）：结束进程安全语义。成功路径只针对专门创建的可丢弃子进程，
// 绝不对真实关键系统进程调用终止。验证：拒绝自身、受控身份变化精确 IdentityChanged
// 且子进程存活、关键性拒绝（注入判定 + csrss 只读核实）、正常结束+退出确认、
// 不存在 PID 优雅失败。全部用例失败路径均清理子进程。
#include <windows.h>
#include <tlhelp32.h>
#include <iostream>
#include <string>
#include "platform/WindowsProcessOps.h"
#include "platform/WinTime.h"

using namespace tmog;

namespace {

// 创建一个挂起的 cmd 子进程作为可丢弃目标，返回其身份
bool spawn_victim(ProcessIdentity& out, HANDLE& out_process) {
    STARTUPINFOW si{};
    si.cb = sizeof(si);
    PROCESS_INFORMATION pi{};
    // ping 自身限时，进程会自己跑几秒；挂起创建由我们决定何时终止
    std::wstring cmd = L"cmd.exe /c ping -n 30 127.0.0.1 >nul";
    if (!CreateProcessW(nullptr, cmd.data(), nullptr, nullptr, FALSE,
                        CREATE_SUSPENDED, nullptr, nullptr, &si, &pi))
        return false;
    out.pid = pi.dwProcessId;
    FILETIME c{}, e{}, k{}, u{};
    GetProcessTimes(pi.hProcess, &c, &e, &k, &u);
    out.creation_tick = win::filetime_to_tick(c);
    out_process = pi.hProcess;
    CloseHandle(pi.hThread);
    return true;
}

struct VictimGuard {
    ProcessIdentity identity{};
    HANDLE handle = nullptr;
    bool alive = false;

    bool spawn() {
        alive = spawn_victim(identity, handle);
        return alive;
    }
    // 任何退出路径清理：还活着就结束并等待，避免遗留测试进程
    ~VictimGuard() {
        if (handle) {
            if (alive) {
                TerminateProcess(handle, 1);
                WaitForSingleObject(handle, 5000);
            }
            CloseHandle(handle);
        }
    }
};

// 只读确认子进程仍存活（WAIT_TIMEOUT = 未退出）
bool still_alive(HANDLE h) {
    return WaitForSingleObject(h, 0) == WAIT_TIMEOUT;
}

// 测试注入：恒判为关键 → 验证拒绝分支，不触碰任何真实系统进程
bool always_critical(HANDLE) { return true; }

int failures = 0;
void check(bool ok, const char* what) {
    std::cout << (ok ? "PASS" : "FAIL") << ": " << what << "\n";
    if (!ok) ++failures;
}

// 关键性只读核实：csrss 的 BreakOnTermination 标志应恒为真（不打扰进程本身）
bool read_critical_flag(HANDLE h) {
    using NtQIPFn = LONG(WINAPI*)(HANDLE, ULONG, PVOID, ULONG, PULONG);
    HMODULE ntdll = GetModuleHandleW(L"ntdll.dll");
    if (!ntdll) return false;
    auto fn = reinterpret_cast<NtQIPFn>(GetProcAddress(ntdll, "NtQueryInformationProcess"));
    if (!fn) return false;
    ULONG flag = 0;
    return fn(h, 29, &flag, sizeof(flag), nullptr) == 0 && flag != 0;
}

} // namespace

int main() {
    // 1. 拒绝自身
    {
        WindowsProcessOps ops;
        ProcessIdentity self{};
        self.pid = GetCurrentProcessId();
        FILETIME c{}, e{}, k{}, u{};
        GetProcessTimes(GetCurrentProcess(), &c, &e, &k, &u);
        self.creation_tick = win::filetime_to_tick(c);
        auto r = ops.terminate(self, 0);
        check(r.result == KillResult::SelfTarget, "reject self (SelfTarget)");
    }

    // 2. 身份变化拒绝（受控）：自建子进程 + 错误创建身份 → 精确 IdentityChanged，
    //    且子进程仍存活（终止未发生）；随后用正确身份正常清理。
    {
        WindowsProcessOps ops;
        VictimGuard victim;
        if (victim.spawn()) {
            ProcessIdentity wrong = victim.identity;
            wrong.creation_tick += 1;   // 必然不匹配
            auto r = ops.terminate(wrong, 0);
            check(r.result == KillResult::IdentityChanged,
                  "wrong identity on disposable child returns exactly IdentityChanged");
            check(still_alive(victim.handle),
                  "child still alive after identity-mismatch rejection");
            // 恢复正确身份后可正常清理（走 terminate 确认路径）
            auto ok = ops.terminate(victim.identity, 5000);
            check(ok.result == KillResult::Ok, "correct identity terminates child Ok");
            victim.alive = false;   // 已被 terminate 结束，析构不再重复终止
        } else {
            check(false, "spawn victim for identity test");
        }
    }

    // 3. 关键性拒绝（受控边界）：注入"恒为关键"判定 → 对自建子进程精确返回
    //    CriticalTarget 且子进程存活。真实关键进程（csrss）仅做只读标志核实，
    //    从不调用 terminate / OpenProcess(PROCESS_TERMINATE)。
    {
        VictimGuard victim;
        if (victim.spawn()) {
            WindowsProcessOps critical_ops(&always_critical);
            auto r = critical_ops.terminate(victim.identity, 0);
            check(r.result == KillResult::CriticalTarget,
                  "critical-injected rejection returns exactly CriticalTarget");
            check(still_alive(victim.handle),
                  "child still alive after critical rejection");
            // 子进程保留存活，交给析构清理（覆盖失败路径清理）
        } else {
            check(false, "spawn victim for critical rejection test");
        }

        // csrss 只读核实：BreakOnTermination 为真，证明关键性查询边界真实有效
        DWORD csrss_pid = 0;
        HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        if (snap != INVALID_HANDLE_VALUE) {
            PROCESSENTRY32W e32{};
            e32.dwSize = sizeof(e32);
            if (Process32FirstW(snap, &e32)) {
                do {
                    if (_wcsicmp(e32.szExeFile, L"csrss.exe") == 0) {
                        csrss_pid = e32.th32ProcessID; break;
                    }
                } while (Process32NextW(snap, &e32));
            }
            CloseHandle(snap);
        }
        if (csrss_pid) {
            // 仅 QUERY_LIMITED_INFORMATION，无终止权限，对进程无副作用
            HANDLE probe = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, csrss_pid);
            if (probe) {
                check(read_critical_flag(probe),
                      "csrss BreakOnTermination verified read-only (no terminate call)");
                CloseHandle(probe);
            } else {
                check(GetLastError() == ERROR_ACCESS_DENIED,
                      "csrss query denied (protected surface, not terminated)");
            }
        } else {
            std::cout << "NOTE: csrss not found; read-only verification unavailable this run\n";
            check(false, "csrss present for read-only critical verification");
        }
    }

    // 4. 不存在的 PID → Failed（不是崩溃、不是 Ok）
    {
        WindowsProcessOps ops;
        ProcessIdentity ghost{0x7FFFFFFF, 1};
        auto r = ops.terminate(ghost, 0);
        check(r.result == KillResult::Failed || r.result == KillResult::AccessDenied,
              "nonexistent pid fails gracefully");
    }

    // 5. 正常结束可丢弃子进程 + 退出确认（回归既有受控终止检查）
    {
        WindowsProcessOps ops;
        VictimGuard victim;
        if (victim.spawn()) {
            auto r = ops.terminate(victim.identity, 5000);
            check(r.result == KillResult::Ok, "terminate disposable child confirmed Ok");
            DWORD code = 0;
            GetExitCodeProcess(victim.handle, &code);
            check(code == 1, "exit code is the termination code (1)");
            victim.alive = false;
        } else {
            check(false, "spawn victim for terminate test");
        }
    }

    std::cout << (failures == 0 ? "ALL PASS\n" : "FAILURES\n");
    return failures == 0 ? 0 : 1;
}
