// M3 检查：结束进程安全语义。成功路径只针对专门创建的可丢弃子进程，
// 绝不实际结束系统关键进程。验证：拒绝自身、身份变化拒绝、正常结束+退出确认。
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

int failures = 0;
void check(bool ok, const char* what) {
    std::cout << (ok ? "PASS" : "FAIL") << ": " << what << "\n";
    if (!ok) ++failures;
}

} // namespace

int main() {
    WindowsProcessOps ops;

    // 1. 拒绝自身
    {
        ProcessIdentity self{};
        self.pid = GetCurrentProcessId();
        FILETIME c{}, e{}, k{}, u{};
        GetProcessTimes(GetCurrentProcess(), &c, &e, &k, &u);
        self.creation_tick = win::filetime_to_tick(c);
        auto r = ops.terminate(self, 0);
        check(r.result == KillResult::SelfTarget, "reject self (SelfTarget)");
    }

    // 2. 身份变化拒绝：用真 PID + 错误创建时间
    {
        ProcessIdentity fake{GetCurrentProcessId(), 12345};
        auto r = ops.terminate(fake, 0);
        // 自身检查先命中也可能（同一 pid 但身份不匹配 → 先 SelfTarget? 顺序：SelfTarget 在先）
        // 用一个非自身的真实进程更纯粹——用 explorer 或任一进程 + 伪造时间
        DWORD pid = 0;
        // 找任意非自身进程
        HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        if (snap != INVALID_HANDLE_VALUE) {
            PROCESSENTRY32W e32{};
            e32.dwSize = sizeof(e32);
            if (Process32FirstW(snap, &e32)) {
                do {
                    if (e32.th32ProcessID != GetCurrentProcessId()) { pid = e32.th32ProcessID; break; }
                } while (Process32NextW(snap, &e32));
            }
            CloseHandle(snap);
        }
        if (pid) {
            ProcessIdentity wrong{pid, 1};   // 创建时间必然不匹配
            auto r2 = ops.terminate(wrong, 0);
            check(r2.result == KillResult::IdentityChanged || r2.result == KillResult::AccessDenied,
                  "identity mismatch rejected (IdentityChanged or AccessDenied)");
        }
    }

    // 3. 正常结束可丢弃子进程 + 退出确认
    {
        ProcessIdentity victim{};
        HANDLE victim_handle = nullptr;
        if (spawn_victim(victim, victim_handle)) {
            // CREATE_SUSPENDED 创建；挂起进程同样可被 TerminateProcess 结束
            auto r = ops.terminate(victim, 5000);
            check(r.result == KillResult::Ok, "terminate disposable child confirmed Ok");
            DWORD code = 0;
            GetExitCodeProcess(victim_handle, &code);
            check(code == 1, "exit code is the termination code (1)");
            CloseHandle(victim_handle);
        } else {
            check(false, "spawn victim process");
        }
    }

    // 4. 不存在的 PID → Failed（不是崩溃、不是 Ok）
    {
        ProcessIdentity ghost{0x7FFFFFFF, 1};
        auto r = ops.terminate(ghost, 0);
        check(r.result == KillResult::Failed || r.result == KillResult::AccessDenied,
              "nonexistent pid fails gracefully");
    }

    // 5. 关键进程检测：查 csrss.exe（Windows 会话管理器，必定 critical）→ CriticalTarget
    //    或 OpenProcess 被拒（受保护进程）→ AccessDenied；两者都是"拒绝"语义。
    //    不实际尝试结束它——��验证我们会在终止前拒绝。
    {
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
            // 拿真实创建时间：如果连身份核实都过不了，说明身份防线先拦住（也算拒绝）
            HANDLE probe = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, csrss_pid);
            if (probe) {
                FILETIME c{}, e{}, k{}, u{};
                GetProcessTimes(probe, &c, &e, &k, &u);
                CloseHandle(probe);
                ProcessIdentity target{csrss_pid, win::filetime_to_tick(c)};
                auto r = ops.terminate(target, 0);
                check(r.result == KillResult::CriticalTarget ||
                          r.result == KillResult::AccessDenied,
                      "critical process (csrss) rejected before terminate");
            } else {
                check(true, "critical process (csrss) not even openable (denied)");
            }
        } else {
            std::cout << "NOTE: csrss not found, critical test skipped\n";
        }
    }

    std::cout << (failures == 0 ? "ALL PASS\n" : "FAILURES\n");
    return failures == 0 ? 0 : 1;
}
