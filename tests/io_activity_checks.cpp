// #11 io_activity_checks：11H 受控本地 I/O 实验入口（编写完整实现，
// 执行需用户单独授权——本 attempt 静态交付，禁止运行 --allow-controlled-io）。
//
// 安全边界（计划 §4任务11/§5.4/§5.5 + review-1-adjudication 九条）：
//  - 无显式 --allow-controlled-io 时立即 exit 2，无子进程、无文件副作用。
//    argv gate 必须在 QApplication/任何实验逻辑之前（第一件事）。
//  - 授权路径参数：--work-dir <绝对路径>（必填）、--budget-seconds N
//    （默认 30）、--max-bytes N（默认 16MiB=16777216）。
//  - WorkDir 安全拒绝：相对路径、已存在非空、符号链接、reparse point、
//    工程根与其直接子目录。任何拒绝在创建子进程/写文件之前（零副作用）。
//  - 最多 1 个自造 helper 子进程（本程序自身以 --helper 模式重启的受控
//    副本）、1 个自造数据文件；不用 notepad/ping 等系统进程作 helper。
//  - helper 子模式仅当显式 --allow-controlled-io + --helper + 完整身份/
//    目录/预算参数齐备才接受；无授权 flag 的 --helper 同样 exit 2。
//  - 段协议：idle → write → read，各段至少 2 个有效样本；每样本记录累计
//    I/O（GetProcessIoCounters 同口径）、QPC 时间戳、真实 dt、差分速率；
//    记实际累计字节数，不按文件尺寸假推。
//  - 预算耗尽/失败：置取消标志 → 关闭自持句柄 → 等 helper 自然退出
//    （stdin EOF 协议）；超时未退出记录 helper 身份 PID+creation+句柄
//    归属等用户处理，绝不强杀任何对象。
//  - 对照口径为同进程 GetProcessIoCounters 累计，不与 Disk 物理吞吐等价。
#include <windows.h>
#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <optional>
#include <string>
#include <vector>

namespace fs = std::filesystem;

namespace {

int failures = 0;

constexpr int kDefaultBudgetSeconds = 30;
constexpr std::uint64_t kDefaultMaxBytes = 16ULL * 1024 * 1024;   // 16MiB
constexpr std::uint64_t kHardMaxBytes = 64ULL * 1024 * 1024;      // 硬限 64MiB
constexpr int kHardMaxBudgetSeconds = 300;                        // 硬限 5min
constexpr int kMinValidSamplesPerSegment = 2;

void check(bool ok, const char* what) {
    std::cout << (ok ? "PASS" : "FAIL") << ": " << what << "\n";
    if (!ok) ++failures;
}


// ---- 预算纯函数（可单测、无副作用；自检锚定）----
// 单次请求预算核验：已用 + 本次请求 ≤ 上限才放行。
bool check_budget_request(std::uint64_t request_bytes, std::uint64_t used_bytes,
                          std::uint64_t cap_bytes) {
    return used_bytes <= cap_bytes && request_bytes <= cap_bytes - used_bytes;
}

// 循环迭代上限：剩余迭代数受"总次数上限"与"剩余字节预算"双约束。
// 每次迭代真实请求 per_iter_bytes；字节预算用减法（无 uint64 溢出：
// used 已核 ≤ cap，remaining = cap - used 不下溢）。
std::uint64_t count_pending_loop_iterations(std::uint64_t max_iters,
                                            std::uint64_t per_iter_bytes,
                                            std::uint64_t done_iters,
                                            std::uint64_t used_bytes,
                                            std::uint64_t cap_bytes) {
    if (done_iters >= max_iters) return 0;
    const std::uint64_t by_count = max_iters - done_iters;
    if (used_bytes > cap_bytes) return 0;
    const std::uint64_t remaining = cap_bytes - used_bytes;
    if (per_iter_bytes == 0) return by_count;
    return std::min(by_count, remaining / per_iter_bytes);
}

int exit_unauthorized() {
    std::cout << "io_activity_checks: controlled I/O experiment not authorized "
                 "(pass --allow-controlled-io to run; user approval required).\n";
    return 2;   // 无授权：无子进程、无文件、无窗口——纯入口退出
}

struct Options {
    fs::path work_dir;
    int budget_seconds = kDefaultBudgetSeconds;
    std::uint64_t max_bytes = kDefaultMaxBytes;
    bool helper_mode = false;
};

// 参数解析：未知 flag / 非法数值 → exit 4（负例可动态验证，零副作用）。
// 解析先于一切文件/进程操作；无授权 flag → exit 2。
std::optional<Options> parse_args(int argc, char** argv, int& exit_code) {
    Options o;
    bool authorized = false;
    for (int i = 1; i < argc; ++i) {
        const std::string a = argv[i];
        if (a == "--allow-controlled-io") {
            authorized = true;
        } else if (a == "--work-dir" && i + 1 < argc) {
            o.work_dir = argv[++i];
        } else if (a == "--budget-seconds" && i + 1 < argc) {
            const long long v = std::atoll(argv[++i]);
            if (v <= 0 || v > kHardMaxBudgetSeconds) {
                std::cerr << "io_activity: invalid --budget-seconds (1.."
                          << kHardMaxBudgetSeconds << ")\n";
                exit_code = 4;
                return std::nullopt;
            }
            o.budget_seconds = static_cast<int>(v);
        } else if (a == "--max-bytes" && i + 1 < argc) {
            const unsigned long long v = std::strtoull(argv[++i], nullptr, 10);
            if (v == 0 || v > kHardMaxBytes) {
                std::cerr << "io_activity: invalid --max-bytes (1.."
                          << kHardMaxBytes << ")\n";
                exit_code = 4;
                return std::nullopt;
            }
            o.max_bytes = v;
        } else if (a == "--helper") {
            o.helper_mode = true;
        } else {
            std::cerr << "io_activity: unknown argument: " << a << "\n";
            exit_code = 4;
            return std::nullopt;
        }
    }
    if (!authorized) {
        exit_code = 2;
        return std::nullopt;
    }
    exit_code = 0;
    return o;
}

// WorkDir 安全：拒绝相对路径/已存在非空/符号链接/reparse point/工程根及其
// 直接子目录。全部检查在创建任何文件/子进程之前。
bool validate_work_dir(const Options& o, const fs::path& project_root,
                       std::string& error) {
    if (o.work_dir.empty()) {
        error = "missing required --work-dir";
        return false;
    }
    if (o.work_dir.is_relative()) {
        error = "--work-dir must be absolute";
        return false;
    }
    std::error_code ec;
    if (fs::is_symlink(fs::symlink_status(o.work_dir, ec))) {
        error = "--work-dir is a symlink (refused)";
        return false;
    }
    const DWORD attrs = GetFileAttributesW(o.work_dir.c_str());
    if (attrs != INVALID_FILE_ATTRIBUTES
            && (attrs & FILE_ATTRIBUTE_REPARSE_POINT)) {
        error = "--work-dir is a reparse point (refused)";
        return false;
    }
    const auto wr = o.work_dir;
    if (wr == project_root || wr.parent_path() == project_root) {
        error = "--work-dir inside project root (refused)";
        return false;
    }
    if (fs::exists(wr, ec)) {
        if (!fs::is_directory(wr, ec)) {
            error = "--work-dir exists and is not a directory";
            return false;
        }
        if (!fs::is_empty(wr, ec)) {
            error = "--work-dir exists and is not empty (refused)";
            return false;
        }
    } else {
        fs::create_directories(wr, ec);
        if (ec) {
            error = "cannot create --work-dir: " + ec.message();
            return false;
        }
    }
    return true;
}

// helper 身份：PID + creation_tick + 自持句柄归属，写入身份日志。
struct HelperIdentity {
    DWORD pid = 0;
    std::uint64_t creation_tick = 0;
    HANDLE handle = nullptr;   // 自持句柄（本进程持有）
};

bool log_helper_identity(const HelperIdentity& id, const fs::path& log_path) {
    std::ofstream out(log_path, std::ios::app);
    if (!out) return false;
    out << "helper-identity pid=" << id.pid
        << " creation_tick=" << id.creation_tick
        << " handle=0x" << std::hex
        << reinterpret_cast<std::uintptr_t>(id.handle) << std::dec << "\n";
    return static_cast<bool>(out);
}

bool query_creation_tick(HANDLE h, std::uint64_t& tick) {
    FILETIME c{}, e{}, k{}, u{};
    if (!GetProcessTimes(h, &c, &e, &k, &u)) return false;
    ULARGE_INTEGER v{};
    v.LowPart = c.dwLowDateTime;
    v.HighPart = c.dwHighDateTime;
    tick = v.QuadPart;
    return true;
}

// 单样本：同口径累计 I/O + QPC（真实单调时间）。
struct IoSample {
    std::uint64_t read_bytes = 0;
    std::uint64_t write_bytes = 0;
    std::uint64_t qpc_ns = 0;
};

bool take_io_sample(HANDLE h, IoSample& s) {
    IO_COUNTERS io{};
    if (!GetProcessIoCounters(h, &io)) return false;
    LARGE_INTEGER f{}, now{};
    QueryPerformanceFrequency(&f);
    QueryPerformanceCounter(&now);
    s.read_bytes = io.ReadTransferCount;
    s.write_bytes = io.WriteTransferCount;
    s.qpc_ns = static_cast<std::uint64_t>(
        static_cast<double>(now.QuadPart) * 1e9 / static_cast<double>(f.QuadPart));
    return true;
}

// 段协议：单段采样循环（至少 2 个有效样本；每样本记累计/QPC，相邻样本
// 差分出真实 dt 与速率写入日志）。段内循环受 deadline 约束（预算一部分）。
bool sample_segment(HANDLE h, const std::string& name,
                    const fs::path& log_path,
                    int& valid_count, std::atomic<bool>& cancel) {
    valid_count = 0;
    IoSample prev{};
    bool have_prev = false;
    const auto deadline = std::chrono::steady_clock::now()
                        + std::chrono::milliseconds(5000);
    while (valid_count < kMinValidSamplesPerSegment
           && std::chrono::steady_clock::now() < deadline
           && !cancel.load()) {
        IoSample s{};
        if (!take_io_sample(h, s)) return false;
        if (have_prev && s.qpc_ns > prev.qpc_ns) {
            const double dt = static_cast<double>(s.qpc_ns - prev.qpc_ns);
            const double rr = static_cast<double>(s.read_bytes - prev.read_bytes);
            const double wr = static_cast<double>(s.write_bytes - prev.write_bytes);
            std::ofstream log(log_path, std::ios::app);
            log << "segment=" << name
                << " dt_ns=" << static_cast<std::uint64_t>(dt)
                << " read_rate_Bps=" << rr / (dt / 1e9)
                << " write_rate_Bps=" << wr / (dt / 1e9) << "\n";
            ++valid_count;
        }
        prev = s;
        have_prev = true;
        Sleep(300);
    }
    return valid_count >= kMinValidSamplesPerSegment;
}

// ---- 无副作用自检（默认无 flag 时仍会执行；纯内存算法，不碰文件/进程）----
// 检查 parse/budget/cancel 纯函数；不触发授权路径、不创建任何 helper/文件。
// 注：count_pending_loop_iterations 是预算算法纯函数，自检锚定其存在；
// 若实现缺失则本自检无法编译——形成可失败反馈。
void run_no_side_effect_self_checks(int& failures_out) {
    const int before = failures;   // check() 递增全局计数；此处用差值传出
    // 预算上限算法：已用 2、上限 4 → 可再请求 2；请求 3 超额必须拒绝
    check(check_budget_request(2, 2, 4), "budget: used2+req2<=cap4 allows");
    check(!check_budget_request(3, 2, 4), "budget: used2+req3>cap4 refuses");
    check(!check_budget_request(3, 2, 3), "budget: used2+req3>cap3 refuses");
    // 循环请求上限：max_iters=5、每次请求2、已迭代1 → 计数上限 4 次迭代
    check(count_pending_loop_iterations(5, 2, 1, 0, 100) == 4,
          "loop iterations bounded by count");
    check(count_pending_loop_iterations(0, 2, 0, 0, 100) == 0, "zero cap yields zero");
    check(count_pending_loop_iterations(10, 2, 0, 90, 100) == 5,
          "loop iterations bounded by remaining budget");
    check(count_pending_loop_iterations(10, 0, 0, 100, 100) == 10,
          "zero-size iterations only bounded by count");
    failures_out = failures - before;
}

} // namespace

int main(int argc, char** argv) {
    // ---- 1. argv gate：最先执行，早于一切副作用与框架初始化 ----
    int parse_exit = 0;
    const auto opts = parse_args(argc, argv, parse_exit);
    if (!opts) {
        if (parse_exit == 2) return exit_unauthorized();
        return parse_exit;   // 参数负例：非 0，零副作用
    }

    // ---- 1.5 无副作用自检：默认路径也执行（纯内存，零文件/进程副作用）----
    {
        int self_failures = 0;
        run_no_side_effect_self_checks(self_failures);
        if (self_failures != 0) {
            std::cerr << "io_activity: self-checks failed: " << self_failures << "\n";
            return 7;
        }
    }

    // ---- helper 子模式：仅显式授权 + --helper 才可进入；stdin 命令驱动 ----
    // helper 只做父进程命令的事；stdin EOF（父关闭管道写端）→ 自然退出。
    // helper 不打开任何父未指定的路径，不创建额外子进程。
    if (opts->helper_mode) {
        std::cerr << "io_activity: helper mode entered (controlled)\n";
        std::string line;
        while (std::getline(std::cin, line)) {
            if (line == "identity") {
                // helper 报告自身身份：pid + creation_tick（父用它核对）
                HANDLE self = GetCurrentProcess();
                FILETIME c{}, e{}, k{}, u{};
                if (GetProcessTimes(self, &c, &e, &k, &u)) {
                    ULARGE_INTEGER v{};
                    v.LowPart = c.dwLowDateTime;
                    v.HighPart = c.dwHighDateTime;
                    std::cout << "helper-identity pid=" << GetCurrentProcessId()
                              << " creation_tick=" << v.QuadPart << std::endl;
                } else {
                    std::cout << "helper-identity-error" << std::endl;
                }
            } else if (line == "ping") {
                std::cout << "pong" << std::endl;
            } else if (line.rfind("write ", 0) == 0) {
                // write <N>：向唯一自造文件追加 N 字节（4096B 块）；helper 侧
                // 同样受 max_bytes 预算约束（父请求也受同一纯函数上限约束）。
                const std::uint64_t req = std::strtoull(line.c_str() + 6, nullptr, 10);
                const std::uint64_t chunk = 4096;
                const std::uint64_t cap = std::min<std::uint64_t>(
                    req, opts->max_bytes);
                std::ofstream f(opts->work_dir / "data.bin",
                                std::ios::binary | std::ios::app);
                if (!f) {
                    std::cout << "write-error open" << std::endl;
                    continue;
                }
                const std::string block(static_cast<std::size_t>(chunk), 'x');
                std::uint64_t done = 0;
                while (done < cap) {
                    const std::uint64_t n = std::min<std::uint64_t>(
                        chunk, cap - done);
                    f.write(block.data(), static_cast<std::streamsize>(n));
                    done += n;
                }
                f.flush();
                std::cout << "write-done " << done << std::endl;
            } else if (line == "read") {
                // read：读回自造文件全部内容（丢弃字节，仅计 I/O）
                std::ifstream f(opts->work_dir / "data.bin", std::ios::binary);
                if (!f) {
                    std::cout << "read-error open" << std::endl;
                    continue;
                }
                char buf[4096];
                while (f.read(buf, sizeof(buf)) || f.gcount() > 0) {
                }
                std::cout << "read-done" << std::endl;
            }
            // 未知命令：忽略（协议保守；父只发已知命令）
        }
        return 0;   // stdin EOF → 自然退出；不持有需收束的额外资源
    }

    // ---- 2. WorkDir 安全校验（先于任何文件写入）----
    std::string wd_error;
    wchar_t exe_dir_buf[MAX_PATH]{};
    GetModuleFileNameW(nullptr, exe_dir_buf, MAX_PATH);
    const fs::path exe_dir = fs::path(exe_dir_buf).parent_path();
    // 工程根判定兜底：build/<cfg> 的祖父目录。重合或直接子目录即拒绝。
    const fs::path project_root = exe_dir.parent_path().parent_path();
    if (!validate_work_dir(*opts, project_root, wd_error)) {
        std::cerr << "io_activity: work-dir refused: " << wd_error << "\n";
        return 5;   // 核验失败退出：零副作用（未写任何实验文件）
    }

    // ---- 3. 校验 EXE 绝对路径（CreateProcessW 需要本程序自身 EXE 路径）----
    wchar_t exe_path_buf[MAX_PATH]{};
    if (GetModuleFileNameW(nullptr, exe_path_buf, MAX_PATH) == 0) {
        std::cerr << "io_activity: cannot resolve own exe path\n";
        return 8;
    }
    const fs::path exe_path(exe_path_buf);

    // ---- 4. 唯一自造文件/日志路径（均在已校验 WorkDir 内）----
    const fs::path identity_log = opts->work_dir / "identity.log";
    const fs::path data_file = opts->work_dir / "data.bin";
    const fs::path activity_log = opts->work_dir / "io_activity_log.txt";

    // ---- 5. spawn 唯一 helper：本 EXE 以 --helper 模式重启（CreateProcessW）----
    // 命令行完整引号包裹 EXE 路径与 WorkDir；仅启动本 EXE，无外部程序参数。
    std::string cmdline = "\"" + exe_path.string() + "\""
                        + " --allow-controlled-io --helper"
                        + " --work-dir \"" + opts->work_dir.string() + "\""
                        + " --budget-seconds " + std::to_string(opts->budget_seconds)
                        + " --max-bytes " + std::to_string(opts->max_bytes);
    std::vector<char> cmd_buf(cmdline.begin(), cmdline.end());
    cmd_buf.push_back('\0');

    SECURITY_ATTRIBUTES sa{sizeof(SECURITY_ATTRIBUTES), nullptr, TRUE};  // 句柄可继承
    HANDLE stdin_read = nullptr, stdin_write = nullptr;
    HANDLE stdout_read = nullptr, stdout_write = nullptr;
    if (!CreatePipe(&stdin_read, &stdin_write, &sa, 0)
            || !CreatePipe(&stdout_read, &stdout_write, &sa, 0)) {
        std::cerr << "io_activity: CreatePipe failed\n";
        return 8;
    }
    // 父端自持句柄必须不可继承（否则子进程持有写端导致 stdout 管道永不 EOF）
    if (!SetHandleInformation(stdout_read, HANDLE_FLAG_INHERIT, 0)
            || !SetHandleInformation(stdin_write, HANDLE_FLAG_INHERIT, 0)) {
        std::cerr << "io_activity: SetHandleInformation failed\n";
        CloseHandle(stdin_read); CloseHandle(stdin_write);
        CloseHandle(stdout_read); CloseHandle(stdout_write);
        return 8;
    }

    STARTUPINFOA si{};
    si.cb = sizeof(si);
    si.dwFlags = STARTF_USESTDHANDLES;
    si.hStdInput = stdin_read;      // helper 读命令
    si.hStdOutput = stdout_write;   // helper 写身份/响应
    si.hStdError = GetStdHandle(STD_ERROR_HANDLE);
    PROCESS_INFORMATION pi{};
    const BOOL spawned = CreateProcessA(nullptr, cmd_buf.data(), nullptr, nullptr,
                                        TRUE /*inherit handles*/, 0,
                                        nullptr, nullptr, &si, &pi);
    CloseHandle(stdin_read);    // 父不再需要子端读句柄
    CloseHandle(stdout_write);  // 父不再需要子端写句柄（保证 stdout EOF 可达）
    if (!spawned) {
        std::cerr << "io_activity: CreateProcessA failed (error "
                  << GetLastError() << ")\n";
        CloseHandle(stdin_write); CloseHandle(stdout_read);
        return 8;   // 启动失败 = 真实失败，不冒充
    }

    // ---- 6. helper 身份核验：PID + creation_tick 双字段（GetProcessTimes）----
    // 请求 helper 自报身份并经父进程持有的 hProcess 独立核实。
    DWORD written = 0;
    const std::string id_cmd = "identity\n";
    if (!WriteFile(stdin_write, id_cmd.data(),
                   static_cast<DWORD>(id_cmd.size()), &written, nullptr)) {
        std::cerr << "io_activity: cannot send identity command\n";
        CloseHandle(stdin_write); CloseHandle(stdout_read);
        CloseHandle(pi.hProcess); CloseHandle(pi.hThread);
        return 8;
    }
    char id_buf[256]{};
    DWORD id_read = 0;
    // 单次读足够（管道 256B 内单包）；不完整响应按失败处理
    if (!ReadFile(stdout_read, id_buf, sizeof(id_buf) - 1, &id_read, nullptr)
            || id_read == 0) {
        std::cerr << "io_activity: helper identity response missing\n";
        CloseHandle(stdin_write); CloseHandle(stdout_read);
        CloseHandle(pi.hProcess); CloseHandle(pi.hThread);
        return 8;
    }
    id_buf[id_read] = '\0';
    const std::string id_resp(id_buf);
    const auto pid_pos = id_resp.find("pid=");
    const auto tick_pos = id_resp.find("creation_tick=");
    if (pid_pos == std::string::npos || tick_pos == std::string::npos) {
        std::cerr << "io_activity: helper identity malformed: " << id_resp << "\n";
        CloseHandle(stdin_write); CloseHandle(stdout_read);
        CloseHandle(pi.hProcess); CloseHandle(pi.hThread);
        return 8;
    }
    const DWORD helper_pid = static_cast<DWORD>(std::strtoul(
        id_resp.c_str() + pid_pos + 4, nullptr, 10));
    const std::uint64_t helper_reported_tick = std::strtoull(
        id_resp.c_str() + tick_pos + 14, nullptr, 10);

    // 父进程用自持 hProcess 独立核实：PID 一致 + creation_tick 一致
    FILETIME fc{}, fe{}, fk{}, fu{};
    std::uint64_t real_tick = 0;
    if (pi.dwProcessId != helper_pid
            || !GetProcessTimes(pi.hProcess, &fc, &fe, &fk, &fu)) {
        std::cerr << "io_activity: helper identity unverifiable (pid "
                  << pi.dwProcessId << " vs reported " << helper_pid << ")\n";
        CloseHandle(stdin_write); CloseHandle(stdout_read);
        CloseHandle(pi.hProcess); CloseHandle(pi.hThread);
        return 8;
    }
    ULARGE_INTEGER tick_v{};
    tick_v.LowPart = fc.dwLowDateTime;
    tick_v.HighPart = fc.dwHighDateTime;
    real_tick = tick_v.QuadPart;
    if (real_tick != helper_reported_tick) {
        std::cerr << "io_activity: helper creation_tick mismatch (reported "
                  << helper_reported_tick << " real " << real_tick << ")\n";
        CloseHandle(stdin_write); CloseHandle(stdout_read);
        CloseHandle(pi.hProcess); CloseHandle(pi.hThread);
        return 8;
    }
    // 身份核实通过：写归属日志（父持有句柄直到收束）
    {
        std::ofstream out(identity_log, std::ios::app);
        out << "helper-identity pid=" << helper_pid
            << " creation_tick=" << real_tick
            << " handle=0x" << std::hex
            << reinterpret_cast<std::uintptr_t>(pi.hProcess) << std::dec << "\n";
    }

    // ---- 7. 段协议驱动：idle/write/read 各 ≥2 有效样本（预算内）----
    // 全部采样基于 helper 的 hProcess（同口径累计进程 I/O），非自身。
    const auto wall_deadline = std::chrono::steady_clock::now()
                             + std::chrono::seconds(opts->budget_seconds);
    std::atomic<bool> cancel{false};
    int idle_n = 0, write_n = 0, read_n = 0;
    std::uint64_t bytes_used = 0;   // 真实累计（write 段计入，读回不重复计预算）

    auto remaining_budget = [&wall_deadline]() {
        return std::chrono::duration_cast<std::chrono::milliseconds>(
            wall_deadline - std::chrono::steady_clock::now()).count();
    };

    auto drive_segment = [&](const std::string& name, int& valid_count) {
        valid_count = 0;
        IoSample prev{};
        bool have_prev = false;
        // 段 deadline：剩余 wall 预算与单段上限取小（预算真实消费）
        const auto seg_deadline = std::chrono::steady_clock::now()
            + std::chrono::milliseconds(
                std::min<std::int64_t>(5000, std::max<std::int64_t>(
                    remaining_budget(), 0)));
        while (valid_count < kMinValidSamplesPerSegment
               && std::chrono::steady_clock::now() < seg_deadline
               && !cancel.load()) {
            IoSample s{};
            if (!take_io_sample(pi.hProcess, s)) {
                cancel.store(true);   // 采样失败 → 取消收束
                return;
            }
            if (have_prev && s.qpc_ns > prev.qpc_ns) {
                const double dt = static_cast<double>(s.qpc_ns - prev.qpc_ns);
                const double rr = static_cast<double>(
                    s.read_bytes > prev.read_bytes
                        ? s.read_bytes - prev.read_bytes : 0);
                const double wr = static_cast<double>(
                    s.write_bytes > prev.write_bytes
                        ? s.write_bytes - prev.write_bytes : 0);
                std::ofstream log(activity_log, std::ios::app);
                log << "segment=" << name
                    << " dt_ns=" << static_cast<std::uint64_t>(dt)
                    << " read_rate_Bps=" << (dt > 0 ? rr / (dt / 1e9) : 0.0)
                    << " write_rate_Bps=" << (dt > 0 ? wr / (dt / 1e9) : 0.0)
                    << "\n";
                ++valid_count;
            }
            prev = s;
            have_prev = true;
            Sleep(300);
        }
        if (valid_count < kMinValidSamplesPerSegment && !cancel.load()) {
            cancel.store(true);   // 段未凑足样本（deadline）→ 取消收束
        }
    };

    // idle 段：无 IO 命令，仅采样
    drive_segment("idle", idle_n);

    // write 段：先发写命令 → helper 写自造数据（受预算真实约束）→ 采样
    // 写循环计数上限 = count_pending_loop_iterations（预算真控循环请求）
    {
        const std::uint64_t chunk = 4096;
        const std::uint64_t half_budget = opts->max_bytes / 2;
        const std::uint64_t iters = count_pending_loop_iterations(
            half_budget / chunk + 1, chunk, 0, bytes_used, opts->max_bytes);
        const std::string write_cmd = "write " + std::to_string(iters * chunk)
                                    + "\n";
        if (!WriteFile(stdin_write, write_cmd.data(),
                       static_cast<DWORD>(write_cmd.size()), &written, nullptr)) {
            std::cerr << "io_activity: cannot send write command\n";
            cancel.store(true);
        } else {
            drive_segment("write", write_n);
            bytes_used += iters * chunk;
        }
    }

    // read 段：读回自造文件 → 采样
    {
        const std::string read_cmd = "read\n";
        if (!WriteFile(stdin_write, read_cmd.data(),
                       static_cast<DWORD>(read_cmd.size()), &written, nullptr)) {
            std::cerr << "io_activity: cannot send read command\n";
            cancel.store(true);
        } else {
            drive_segment("read", read_n);
        }
    }

    // ---- 8. 收束：关闭 stdin（EOF 协议）→ 等 helper 自然退出 → 确认 ----
    // 不 TerminateProcess；不按 PID 名清理。等待持有句柄确认退出状态。
    CloseHandle(stdin_write);   // EOF：helper getline 失败 → 自然退出
    const auto exit_deadline = std::chrono::steady_clock::now()
                             + std::chrono::seconds(10);
    DWORD wait_result = WAIT_TIMEOUT;
    while ((wait_result = WaitForSingleObject(pi.hProcess, 500)) == WAIT_TIMEOUT) {
        if (std::chrono::steady_clock::now() > exit_deadline) break;
    }
    const bool helper_exited = (wait_result == WAIT_OBJECT_0);
    DWORD helper_exit_code = 0;
    bool exit_code_known = false;
    if (helper_exited) {
        exit_code_known = GetExitCodeProcess(pi.hProcess, &helper_exit_code) != 0;
    }
    CloseHandle(stdout_read);   // 父端管道收束
    CloseHandle(pi.hThread);    // 线程句柄收束（进程句柄最后关）

    // ---- 9. 结果日志与退出 ----
    {
        std::ofstream out(activity_log, std::ios::app);
        out << "result="
            << (helper_exited && exit_code_known && helper_exit_code == 0
                    && !cancel.load() ? "OK" : "INCOMPLETE")
            << " idle_samples=" << idle_n
            << " write_samples=" << write_n
            << " read_samples=" << read_n
            << " helper_exited=" << (helper_exited ? 1 : 0)
            << " helper_exit_code="
            << (exit_code_known ? std::to_string(helper_exit_code) : "unknown")
            << "\n";
    }
    if (!helper_exited) {
        // 自然退出未确认：报告阻塞/身份，保留资源（句柄/进程），不强杀
        std::cerr << "io_activity: helper did not exit naturally; pid="
                  << helper_pid << " creation_tick=" << real_tick
                  << " handle=0x" << std::hex
                  << reinterpret_cast<std::uintptr_t>(pi.hProcess) << std::dec
                  << " — left for user disposition (not terminated)\n";
        // pi.hProcess 保留不关闭：OS 收回前归属明确（父进程退出即 OS 回收）
        return 9;
    }
    CloseHandle(pi.hProcess);
    const bool all_ok = helper_exited && exit_code_known
                      && helper_exit_code == 0 && !cancel.load()
                      && idle_n >= kMinValidSamplesPerSegment
                      && write_n >= kMinValidSamplesPerSegment
                      && read_n >= kMinValidSamplesPerSegment;
    return all_ok ? 0 : 6;
}
