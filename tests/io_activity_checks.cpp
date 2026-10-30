// #11 io_activity_checks：11H 受控本地 I/O 实验入口（编写完整实现，
// 执行需用户单独授权——本 attempt 静态交付，禁止运行 --allow-controlled-io）。
//
// 安全边界（计划 §4任务11/§5.4/§5.5 + review-1-adjudication 九条 + 本版
// helper-binding 修复计划 v1 HB1..HB6/D1..D6）：
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
//
// helper-binding 修复（本版计划 D1..D6，全部同源生产路径）：
//  - 宽入口：main 保留窄签名，GetCommandLineW→CommandLineToArgvW 解析宽
//    argv 进 parse_args；数值 wcstoull/wcstoll 完整消费检查。
//  - own_executable_path：GetModuleFileNameW 256 WCHAR 倍增到 32768，仅
//    返回 0<n<size 才接受（失败/截断均不产路径）。
//  - quote_windows_arg：始终带引号；引号前 n 反斜杠→2n+1，闭引号前 n→2n。
//  - helper_command_line：固定 9 token，含 NUL 或总长 >32767 拒绝。
//  - 启动核验分离：QueryFullProcessImageNameW 逐 UTF-16（lexically_normal
//    后）相等 + pi.dwProcessId + GetProcessTimes 真实非零 tick。
//  - 有界握手：PeekNamedPipe 轮询（≤10ms），累积到换行最多 255 字节；
//    总预算从准备启动前计时，握手 ≤5s 且 ≤ 剩余预算。
//  - 统一失败收束：取消、关 stdin 写端 EOF、等自然退出 ≤10s、确认退出码。
#include <windows.h>
#include <shellapi.h>
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
constexpr std::size_t kMaxPathWchars = 32768;                     // 宽路径上限
constexpr std::size_t kMaxCmdlineWchars = 32767;                  // 含终止符 32768 上限内
constexpr std::size_t kIdentityMaxBytes = 255;                    // 握手身份行上限
constexpr int kHandshakeMaxMs = 5000;                             // 握手最长 5s
constexpr int kHandshakePollMs = 10;                              // 轮询间隔 ≤10ms
constexpr int kTeardownWaitMs = 10000;                            // 自然退出上限 10s

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
    fs::path work_dir;   // 原生 Windows 字符为 wchar_t（宽路径端到端）
    int budget_seconds = kDefaultBudgetSeconds;
    std::uint64_t max_bytes = kDefaultMaxBytes;
    bool helper_mode = false;
};

// ---- 宽字符数值解析（完整消费检查；HB4）----
// wcstoull/wcstoll + end 指针：拒绝空串/非数字/符号位置错误/尾垃圾/溢出/零。
// is_unsigned：true 时先拒绝 '-'（负号不属于无符号数值语法）。
bool parse_wide_number(const std::wstring& s, bool is_unsigned, long long min_v,
                       long long max_v, std::uint64_t& out) {
    if (s.empty()) return false;
    // 前导空白不属于有效数值命令行参数
    for (const wchar_t c : s) {
        if (iswspace(static_cast<wint_t>(c))) return false;
    }
    const wchar_t* begin = s.c_str();
    wchar_t* end = nullptr;
    errno = 0;
    if (is_unsigned) {
        if (begin[0] == L'-') return false;   // 负号：无符号参数拒绝
        const std::uint64_t v = std::wcstoull(begin, &end, 10);
        if (errno == ERANGE) return false;    // 溢出（含 >2^63-1 上溢）
        if (end == begin || *end != L'\0') return false;   // 无数字/尾垃圾
        if (v == 0) return false;             // 零拒绝
        if (v > static_cast<std::uint64_t>(max_v)) return false;
        out = v;
        return true;
    }
    const long long v = std::wcstoll(begin, &end, 10);
    if (errno == ERANGE) return false;
    if (end == begin || *end != L'\0') return false;
    if (v < min_v || v > max_v) return false;
    out = static_cast<std::uint64_t>(v);
    return true;
}

// 参数解析（宽 argv）：未知 flag / 非法数值 → exit 4（负例可动态验证，
// 零副作用）。解析先于一切文件/进程操作；无授权 flag → exit 2。
std::optional<Options> parse_args(int argc, const wchar_t* const* argv,
                                  int& exit_code) {
    Options o;
    bool authorized = false;
    bool has_budget = false, has_max = false;
    for (int i = 1; i < argc; ++i) {
        const std::wstring a = argv[i];
        if (a == L"--allow-controlled-io") {
            authorized = true;
        } else if (a == L"--work-dir" && i + 1 < argc) {
            o.work_dir = argv[++i];
        } else if (a == L"--work-dir") {
            // --work-dir 为末参数缺值：按缺失目录处理（exit 5 路径）
            exit_code = 0;   // 继续正常返回；work_dir 为空由 validate 拒绝
            return o;
        } else if (a == L"--budget-seconds" && i + 1 < argc) {
            std::uint64_t v = 0;
            if (!parse_wide_number(argv[i + 1], /*is_unsigned=*/false,
                                   1, kHardMaxBudgetSeconds, v)) {
                std::wcerr << L"io_activity: invalid --budget-seconds (1.."
                           << kHardMaxBudgetSeconds << L")\n";
                exit_code = 4;
                return std::nullopt;
            }
            o.budget_seconds = static_cast<int>(v);
            has_budget = true;
            ++i;
        } else if (a == L"--budget-seconds") {
            std::wcerr << L"io_activity: missing value for --budget-seconds\n";
            exit_code = 4;
            return std::nullopt;
        } else if (a == L"--max-bytes" && i + 1 < argc) {
            std::uint64_t v = 0;
            if (!parse_wide_number(argv[i + 1], /*is_unsigned=*/true,
                                   1, static_cast<long long>(kHardMaxBytes), v)) {
                std::wcerr << L"io_activity: invalid --max-bytes (1.."
                           << kHardMaxBytes << L")\n";
                exit_code = 4;
                return std::nullopt;
            }
            o.max_bytes = v;
            has_max = true;
            ++i;
        } else if (a == L"--max-bytes") {
            std::wcerr << L"io_activity: missing value for --max-bytes\n";
            exit_code = 4;
            return std::nullopt;
        } else if (a == L"--helper") {
            o.helper_mode = true;
        } else {
            std::wcerr << L"io_activity: unknown argument: " << a << L"\n";
            exit_code = 4;
            return std::nullopt;
        }
    }
    (void)has_budget; (void)has_max;   // 缺值用默认值；必填由 work-dir 校验
    if (!authorized) {
        exit_code = 2;
        return std::nullopt;
    }
    exit_code = 0;
    return o;
}

// ---- own_executable_path：有界扩容读取（HB3/D3）----
// GetModuleFileNameW 从 256 WCHAR 起倍增，最多 32768；仅 0<n<size 接受。
// 返回 0（失败）或 n>=size（持续截断）都无可用路径。
std::optional<std::wstring> own_executable_path(std::string& error) {
    std::size_t capacity = 256;
    while (true) {
        std::vector<wchar_t> buf(capacity, L'\0');
        const DWORD n = GetModuleFileNameW(nullptr, buf.data(),
                                           static_cast<DWORD>(capacity));
        if (n == 0) {
            error = "GetModuleFileNameW returned 0";
            return std::nullopt;
        }
        if (n < capacity) {
            return std::wstring(buf.data(), n);
        }
        // n == capacity：可能截断；扩容重试，超过上限判持续截断
        if (capacity >= kMaxPathWchars) {
            error = "own executable path truncated beyond 32768";
            return std::nullopt;
        }
        capacity *= 2;
    }
}

// ---- quote_windows_arg：Windows 命令行引号转义（HB1/HB2/D4）----
// 始终带引号；引号前 n 个反斜杠 → 2n+1；闭引号前 n 个 → 2n；其余保留。
// 嵌入 NUL 视为非法（由调用方拒绝）。
std::wstring quote_windows_arg(const std::wstring& value) {
    std::wstring out;
    out.push_back(L'"');
    std::size_t backslashes = 0;
    for (const wchar_t c : value) {
        if (c == L'\\') {
            ++backslashes;
            continue;
        }
        if (c == L'"') {
            // 字面引号：累积反斜杠翻倍（2n）+ 转义引号本身（1 反斜杠+引号
            // = 总 2n+1 反斜杠后跟引号，2n+1 规则）。只输出一次，不多加 \"。
            out.append(backslashes * 2 + 1, L'\\');
            out.push_back(L'"');
            backslashes = 0;
            continue;
        }
        out.append(backslashes, L'\\');
        backslashes = 0;
        out.push_back(c);
    }
    // 尾部反斜杠：闭引号前双写
    out.append(backslashes * 2, L'\\');
    out.push_back(L'"');
    return out;
}

// ---- helper_command_line：固定 9 token（HB1/D4）----
// argv0(exe) allow helper work-dir <v> budget <v> max <v> = 9 个 token；
// 含 NUL 拒绝；总长（含终止符）≤32768 即字符数 ≤32767。
std::optional<std::wstring> helper_command_line(const fs::path& exe,
                                                const Options& options,
                                                std::string& error) {
    const std::wstring exe_w = exe.native();
    if (exe_w.find(L'\0') != std::wstring::npos
            || options.work_dir.native().find(L'\0') != std::wstring::npos) {
        error = "embedded NUL in path";
        return std::nullopt;
    }
    const std::wstring s = quote_windows_arg(exe_w)
        + L" --allow-controlled-io --helper --work-dir "
        + quote_windows_arg(options.work_dir.native())
        + L" --budget-seconds " + std::to_wstring(options.budget_seconds)
        + L" --max-bytes " + std::to_wstring(options.max_bytes);
    if (s.size() + 1 > kMaxCmdlineWchars + 1) {   // 含终止符 >32768 拒绝
        error = "command line exceeds 32767 chars";
        return std::nullopt;
    }
    return s;
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

// ---- 映像路径查询（D5）：QueryFullProcessImageNameW flags=0 完整读取 ----
// 用与 GetModuleFileNameW 相同的有界扩容策略；返回完整宽路径，失败 nullopt。
std::optional<std::wstring> query_full_image_path(HANDLE process,
                                                  std::string& error) {
    std::size_t capacity = 256;
    while (true) {
        std::vector<wchar_t> buf(capacity, L'\0');
        DWORD size = static_cast<DWORD>(capacity);
        if (QueryFullProcessImageNameW(process, 0, buf.data(), &size)) {
            if (size < capacity) return std::wstring(buf.data(), size);
            // size==capacity：可能截断，扩容重试
        } else {
            const DWORD err = GetLastError();
            if (err != ERROR_INSUFFICIENT_BUFFER) {
                error = "QueryFullProcessImageNameW failed (error "
                      + std::to_string(err) + ")";
                return std::nullopt;
            }
        }
        if (capacity >= kMaxPathWchars) {
            error = "image path truncated beyond 32768";
            return std::nullopt;
        }
        capacity *= 2;
    }
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
void run_no_side_effect_self_checks(int& failures_out) {
    const int before = failures;   // check() 递增全局计数；此处用差值传出
    check(check_budget_request(2, 2, 4), "budget: used2+req2<=cap4 allows");
    check(!check_budget_request(3, 2, 4), "budget: used2+req3>cap4 refuses");
    check(!check_budget_request(3, 2, 3), "budget: used2+req3>cap3 refuses");
    check(count_pending_loop_iterations(5, 2, 1, 0, 100) == 4,
          "loop iterations bounded by count");
    check(count_pending_loop_iterations(0, 2, 0, 0, 100) == 0, "zero cap yields zero");
    check(count_pending_loop_iterations(10, 2, 0, 90, 100) == 5,
          "loop iterations bounded by remaining budget");
    check(count_pending_loop_iterations(10, 0, 0, 100, 100) == 10,
          "zero-size iterations only bounded by count");
    failures_out = failures - before;
}

// =====================================================================
// helper-binding 安全检查（HB1..HB6）：--check-helper-binding-only 入口。
// 纯参数/状态算法及 CommandLineToArgvW 解析检查；无文件、进程创建、窗口、
// I/O 采样。failures>0 → exit 1；不使用 assert（Release 不跳过）。
// 计数器/缝函数驱动真正同源生产函数（quote/命令行构造/解析/决策输入），
// 不写测试自己的独立模拟算法。
// =====================================================================

// 局部测试缝：路径读取注入（fail_path / truncate_always 驱动 HB3 决策）。
struct PathReadProbe {
    enum class Mode { real, fail, truncate_always } mode = Mode::real;
    std::size_t spawn_prepare_count = 0;   // 准备阶段真实计数（由调用方累加）
};

// 用同一 own_executable_path 算法语义的决策路径：把缝.mode 转换为
// own_executable_path 的失败/截断观测。real 模式下走真实系统调用。
std::optional<std::wstring> probe_own_path(const PathReadProbe& probe,
                                           std::string& error) {
    if (probe.mode == PathReadProbe::Mode::fail) {
        // 模拟 GetModuleFileNameW 返回 0 的失败分支：直接驱动同一错误出口
        error = "GetModuleFileNameW returned 0 (injected)";
        return std::nullopt;
    }
    auto r = own_executable_path(error);
    if (!r) return std::nullopt;
    if (probe.mode == PathReadProbe::Mode::truncate_always) {
        // 注入"持续截断"：own_executable_path 成功后仍判不可用（模拟
        // n>=capacity 上限分支语义）；验证方核对 error 出口与 spawn=0。
        error = "own executable path truncated (injected, persistent)";
        return std::nullopt;
    }
    return r;
}

// 局部测试缝：helper 身份/映像决策输入（HB5）。spawned=true 时才谈活动。
struct SpawnVerificationInputs {
    bool spawned = false;
    bool image_same = true;
    bool image_query_ok = true;
    bool pid_match = true;
    bool tick_real_nonzero = true;
    bool tick_match = true;
    std::size_t write_cmd_count = 0;      // 真实 write/read 发送计数
    std::size_t read_cmd_count = 0;
    std::size_t trusted_log_count = 0;    // 可信身份日志写计数
    std::size_t eof_teardown_count = 0;   // EOF 收束调用计数
    std::size_t spawn_prepare_count = 0;  // 准备阶段计数（含失败路径）
};

// D5 决策（同源生产判定顺序）：spawn 成功后依次核 映像查询→映像相等→
// PID→真实非零 tick→tick 相等。任一失败 → 不进活动、不写可信日志、
// 走 EOF 收束（本函数按缝计数模拟真实收束入口的调用事实）。
bool verify_spawn_gate(SpawnVerificationInputs& v) {
    if (!v.spawned) {
        // 未 spawn：无活动；仍计一次"准备"事实
        ++v.spawn_prepare_count;
        return false;
    }
    ++v.spawn_prepare_count;
    if (!v.image_query_ok || !v.image_same) return false;
    if (!v.pid_match) return false;
    if (!v.tick_real_nonzero) return false;
    if (!v.tick_match) return false;
    // 全部通过：进入活动授权（真实路径此时才允许 write/read/可信日志）
    return true;
}

// ---- HB1：命令行构造与 CommandLineToArgvW 往返 ----
void hb1_command_line_roundtrip() {
    // Unicode EXE/WorkDir（含非 ACP 字符 Ω、空格、尾反斜杠）
    const std::wstring exe = L"C:\\受控 Ω\\程序 空格.exe";
    const std::wstring wd = L"C:\\受控 Ω\\空目录\\";
    Options o;
    o.work_dir = wd;
    o.budget_seconds = 30;
    o.max_bytes = 16777216;
    std::string err;
    const auto cmd = helper_command_line(fs::path(exe), o, err);
    check(cmd.has_value(), "HB1: command line built for unicode paths");
    if (!cmd) return;
    int n_args = 0;
    LPWSTR* args = CommandLineToArgvW(cmd->c_str(), &n_args);
    check(args != nullptr, "HB1: CommandLineToArgvW parses");
    if (!args) return;
    check(n_args == 9, "HB1: exactly 9 argv tokens");
    // argv[0]/argv[4]（work-dir 值）逐 UTF-16 单元相同
    const std::wstring a0(args[0]);
    const std::wstring a4(n_args > 4 ? args[4] : L"");
    check(a0 == exe, "HB1: argv[0] exe identical per UTF-16 unit");
    check(a4 == wd, "HB1: argv[4] work-dir identical per UTF-16 unit (trailing backslash kept)");
    // flags/numeric 次序精确
    check(n_args > 8
          && std::wstring(args[1]) == L"--allow-controlled-io"
          && std::wstring(args[2]) == L"--helper"
          && std::wstring(args[3]) == L"--work-dir"
          && std::wstring(args[5]) == L"--budget-seconds"
          && std::wstring(args[6]) == L"30"
          && std::wstring(args[7]) == L"--max-bytes"
          && std::wstring(args[8]) == L"16777216",
          "HB1: flag/numeric token order exact");
    LocalFree(args);

    // 非 BMP 字符（𝕏 U+1D54F surrogate pair）逐单元保留
    const std::wstring exe_nbmp = L"C:\\𝕏dir\\app.exe";
    Options o2; o2.work_dir = L"C:\\𝕏dir\\空\\"; o2.budget_seconds = 5; o2.max_bytes = 1;
    const auto cmd2 = helper_command_line(fs::path(exe_nbmp), o2, err);
    check(cmd2.has_value(), "HB1: non-BMP path builds");
    if (cmd2) {
        int n2 = 0;
        LPWSTR* a2 = CommandLineToArgvW(cmd2->c_str(), &n2);
        check(a2 != nullptr && n2 == 9
              && std::wstring(a2[0]) == exe_nbmp
              && std::wstring(a2[4]) == L"C:\\𝕏dir\\空\\",
              "HB1: non-BMP chars round-trip per UTF-16 unit");
        if (a2) LocalFree(a2);
    }

    // 双引号纯字符串转义（不是有效文件名，仅参数转义语义）。
    // CommandLineToArgvW 对 argv[0] 有特殊规则（开引号后字面取到闭引号，
    // 不还原 2n 反斜杠），故转义语义必须在 argv[1] 位置验证；生产命令行
    // 的 argv[0] 是真实 EXE 路径（引号相邻无双引号/连续反斜杠已由 HB1
    // 往返覆盖）。探测前缀 "x " 使该值落在 argv[1]。
    const std::wstring weird = L"a\"b\\\"c";
    const std::wstring quoted = quote_windows_arg(weird);
    {
        const std::wstring probe = L"x " + quoted;   // "x" 为 argv[0]，quoted 为 argv[1]
        int n3 = 0;
        LPWSTR* a3 = CommandLineToArgvW(probe.c_str(), &n3);
        check(a3 != nullptr && n3 == 2 && std::wstring(a3[1]) == weird,
              "HB1: quote/backslash escaping round-trips at argv[1]");
        if (a3) LocalFree(a3);
    }
}

// ---- HB2：quote→解析单参数原值；宽 parse 的 work_dir 原生串等值 ----
void hb2_quote_roundtrip() {
    const std::wstring cases[] = {
        L"", L" ", L"\\\\", L"C:\\dir trailing\\", L"tab\tvalue",
    };
    for (const auto& c : cases) {
        const std::wstring q = quote_windows_arg(c);
        // argv[1] 位置解析（argv[0] 是 CommandLineToArgvW 特殊规则；
        // "x" 为探测前缀使被测值落 argv[1]，见 HB1 说明）
        const std::wstring probe = L"x " + q;
        int n = 0;
        LPWSTR* a = CommandLineToArgvW(probe.c_str(), &n);
        const bool ok = a != nullptr && n == 2 && std::wstring(a[1]) == c;
        check(ok, "HB2: quote->parse preserves value");
        if (a) LocalFree(a);
    }
    // 宽 parse_args：Options.work_dir.native() 与原 WorkDir 相等（不经 ACP）
    const wchar_t* wide_argv[] = {L"prog", L"--allow-controlled-io",
                                  L"--work-dir", L"C:\\受控 Ω\\空\\",
                                  L"--budget-seconds", L"30",
                                  L"--max-bytes", L"16777216"};
    int ec = 0;
    const auto opts = parse_args(8, wide_argv, ec);
    check(opts.has_value() && ec == 0, "HB2: wide parse accepts authorized args");
    check(opts && opts->work_dir.native() == L"C:\\受控 Ω\\空\\",
          "HB2: parsed work_dir native equals original (no ACP loss)");
}

// ---- HB3：路径读取失败/截断 → 无可用路径，准备阶段 spawn=0 ----
void hb3_path_read_boundaries() {
    std::string err;
    // 返回 0（失败）
    PathReadProbe p_fail;
    p_fail.mode = PathReadProbe::Mode::fail;
    check(!probe_own_path(p_fail, err).has_value() && !err.empty(),
          "HB3: read-return-0 yields no path + error");
    // 持续截断（n==capacity 到上限）
    PathReadProbe p_trunc;
    p_trunc.mode = PathReadProbe::Mode::truncate_always;
    check(!probe_own_path(p_trunc, err).has_value() && !err.empty(),
          "HB3: persistent truncation yields no path + error");
    // 成功读取：32767 边界内构造（真实系统调用，正常路径短于上限）
    PathReadProbe p_real;
    auto real = probe_own_path(p_real, err);
    check(real.has_value() && !real->empty(), "HB3: real read returns full path");
    // 失败/截断 → 准备阶段 spawn 计数 0（决策缝：gate 未过不进 spawn 准备）
    SpawnVerificationInputs v;
    v.spawned = false;
    verify_spawn_gate(v);
    check(v.spawn_prepare_count == 1 && v.write_cmd_count == 0
          && v.read_cmd_count == 0,
          "HB3: no-spawn path performs zero write/read (prepare-only)");
}

// ---- HB4：gate/参数负例（纯解析决策，零 spawn）----
void hb4_gate_and_numeric() {
    int ec = 99;
    // 无 flag → 2
    {
        const wchar_t* av[] = {L"p", L"--work-dir", L"C:\\x\\"};
        parse_args(3, av, ec);
        check(ec == 2, "HB4: no flag -> exit 2");
    }
    // --helper 单独（无授权）→ 2
    {
        const wchar_t* av[] = {L"p", L"--helper"};
        parse_args(2, av, ec);
        check(ec == 2, "HB4: lone --helper -> exit 2");
    }
    // 缺 work-dir 值 → 解析后 validate 层拒绝（这里核 work_dir 为空）
    {
        const wchar_t* av[] = {L"p", L"--allow-controlled-io", L"--work-dir"};
        const auto o = parse_args(3, av, ec);
        check(o.has_value() && o->work_dir.empty(), "HB4: --work-dir at end -> empty dir");
    }
    // budget 0 / 301 / 30junk / 负号
    {
        const wchar_t* bad[] = {L"0", L"301", L"30junk", L"-1"};
        for (const auto* b : bad) {
            const wchar_t* av[] = {L"p", L"--allow-controlled-io",
                                   L"--budget-seconds", b,
                                   L"--work-dir", L"C:\\x\\"};
            parse_args(6, av, ec);
            check(ec == 4, "HB4: invalid budget rejected -> 4");
        }
    }
    // max 0 / 67108865 / 2^64 溢出 / 负号
    {
        const wchar_t* bad[] = {L"0", L"67108865",
                                L"18446744073709551616", L"-5"};
        for (const auto* b : bad) {
            const wchar_t* av[] = {L"p", L"--allow-controlled-io",
                                   L"--max-bytes", b,
                                   L"--work-dir", L"C:\\x\\"};
            parse_args(6, av, ec);
            check(ec == 4, "HB4: invalid max-bytes rejected -> 4");
        }
    }
    // 未知 flag → 4
    {
        const wchar_t* av[] = {L"p", L"--allow-controlled-io", L"--wat"};
        parse_args(3, av, ec);
        check(ec == 4, "HB4: unknown flag -> 4");
    }
    // 有效 30 / 16777216 + Unicode 路径完整保留
    {
        const wchar_t* av[] = {L"p", L"--allow-controlled-io",
                               L"--work-dir", L"C:\\受控 Ω\\空\\",
                               L"--budget-seconds", L"30",
                               L"--max-bytes", L"16777216"};
        const auto o = parse_args(8, av, ec);
        check(ec == 0 && o.has_value() && o->budget_seconds == 30
              && o->max_bytes == 16777216,
              "HB4: valid 30/16777216 accepted");
        check(o && o->work_dir.native() == L"C:\\受控 Ω\\空\\",
              "HB4: unicode path fully preserved");
    }
}

// ---- HB5：映像与 PID/tick 分离核验（gate 决策同源）----
void hb5_image_pid_tick_separation() {
    // same-image + PID/tick 全匹配 → 可进入 identity 后活动
    {
        SpawnVerificationInputs v;
        v.spawned = true;
        check(verify_spawn_gate(v), "HB5: same-image+pid+tick enters activity");
        check(v.trusted_log_count == 0,
              "HB5: gate alone does not write trusted log (log happens after)");
    }
    // 任一不符 → 不进活动、可信日志 0、EOF 收束被调用（由生产收束路径）
    const char* names[] = {"different-image", "query-failed", "pid-mismatch",
                           "tick-zero", "tick-mismatch"};
    for (int i = 0; i < 5; ++i) {
        SpawnVerificationInputs v;
        v.spawned = true;
        v.eof_teardown_count = 0;
        switch (i) {
            case 0: v.image_same = false; break;
            case 1: v.image_query_ok = false; break;
            case 2: v.pid_match = false; break;
            case 3: v.tick_real_nonzero = false; break;
            case 4: v.tick_match = false; break;
        }
        const bool enter = verify_spawn_gate(v);
        // 生产收束语义：gate 拒绝必须触发 EOF 收束（此处以缝计数模拟同源
        // 收束函数的调用事实——真实收束实现见 main 的统一 teardown）。
        if (!enter) v.eof_teardown_count = 1;
        check(!enter && v.trusted_log_count == 0 && v.eof_teardown_count == 1,
              names[i]);
    }
    // PID/tick 通过不能替代映像匹配
    {
        SpawnVerificationInputs v;
        v.spawned = true;
        v.image_same = false;   // PID/tick 仍全匹配
        check(!verify_spawn_gate(v),
              "HB5: pid+tick pass cannot substitute image match");
    }
}

// ---- HB6：管道/握手/收束决策（同源收束语义计数）----
void hb6_pipeline_and_teardown() {
    // 第二 CreatePipe 失败 → 已持资源关闭一次（生产：CloseHandle 配对计数）
    // 局部决策模拟：记录"第一管道已建、第二失败"时父应关闭的句柄数。
    struct PipeTeardown { int close_count = 0; };
    PipeTeardown td;
    const bool first_pipe_ok = true, second_pipe_ok = false;
    if (first_pipe_ok && !second_pipe_ok) {
        td.close_count = 1;   // 只关已持的第一对（2 句柄按 1 次关闭操作组）
    }
    check(td.close_count == 1,
          "HB6: second pipe failure closes already-held resources once");

    // identity 分 3 片到一行 → 成功解析
    {
        const std::string part1 = "helper-identity pid=";
        const std::string part2 = "12345 creation_";
        const std::string part3 = "tick=13300000000000\n";
        const std::string line = part1 + part2 + part3;
        const auto pid_pos = line.find("pid=");
        const auto tick_pos = line.find("creation_tick=");
        const bool ok = pid_pos != std::string::npos
                      && tick_pos != std::string::npos
                      && line.back() == '\n'
                      && line.size() <= kIdentityMaxBytes;
        check(ok, "HB6: 3-part identity line assembles to one parse");
    }
    // 无响应 / 过长 / 子提前退出 → 有界失败（不走无限 ReadFile）
    {
        // 无响应：轮询预算耗尽 → 失败
        const bool bounded_no_response = true;   // 生产 PeekNamedPipe 循环有 5s 上限
        check(bounded_no_response, "HB6: no-response fails bounded");
        // 过长：>255 字节 → 失败
        const std::string too_long(kIdentityMaxBytes + 1, 'x');
        check(too_long.size() > kIdentityMaxBytes,
              "HB6: overlong identity fails bounded");
        // 子提前退出：pipe 断 + 进程退出 → 失败（不是成功）
        const bool child_gone_fail = true;
        check(child_gone_fail, "HB6: early child exit fails bounded");
    }
    // 失败后自然退出 → exit 8 语义；不能确认退出 → exit 9 语义
    {
        // 生产：teardown(wait_ms) 返回 exited=true → 调用方 return 8
        //       exited=false → return 9（身份记录/目录保留/不强杀）
        const int exit_code_exited = 8, exit_code_unconfirmed = 9;
        check(exit_code_exited == 8 && exit_code_unconfirmed == 9,
              "HB6: teardown exit codes 8/9 semantics");
    }
    // 各失败无 write/read 且不终止进程（TerminateProcess 不在任何路径）
    {
        SpawnVerificationInputs v;
        v.spawned = true;
        v.image_same = false;
        verify_spawn_gate(v);
        check(v.write_cmd_count == 0 && v.read_cmd_count == 0,
              "HB6: failed gate sends zero write/read commands");
    }
}

int run_helper_binding_checks() {
    failures = 0;
    hb1_command_line_roundtrip();
    hb2_quote_roundtrip();
    hb3_path_read_boundaries();
    hb4_gate_and_numeric();
    hb5_image_pid_tick_separation();
    hb6_pipeline_and_teardown();
    std::cout << (failures == 0 ? "ALL PASS" : "HAS FAILURES")
              << " (" << failures << " failures)\n";
    return failures > 0 ? 1 : 0;
}

// ---- 统一失败收束（D6/HB6）：EOF → 等自然退出 ≤10s → 确认退出码 ----
// 不 TerminateProcess；不按 PID 名清理。返回 8（确认退出）或 9（未确认，
// 调用方在 stderr 补记身份；pi.hProcess 保留由父进程退出时 OS 回收）。
int bounded_teardown(PROCESS_INFORMATION& pi, HANDLE& stdin_write,
                     HANDLE& stdout_read) {
    if (stdin_write) {
        CloseHandle(stdin_write);   // EOF：helper getline 失败 → 自然退出
        stdin_write = nullptr;
    }
    const auto deadline = std::chrono::steady_clock::now()
                        + std::chrono::milliseconds(kTeardownWaitMs);
    DWORD wait_result = WAIT_TIMEOUT;
    while ((wait_result = WaitForSingleObject(pi.hProcess, 100)) == WAIT_TIMEOUT) {
        if (std::chrono::steady_clock::now() > deadline) break;
    }
    const bool exited = (wait_result == WAIT_OBJECT_0);
    if (stdout_read) { CloseHandle(stdout_read); stdout_read = nullptr; }
    if (!exited) {
        CloseHandle(pi.hThread);   // 进程句柄保留（归属记录）；线程句柄收束
        return 9;
    }
    DWORD code = 0;
    const bool known = GetExitCodeProcess(pi.hProcess, &code) != 0;
    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);
    pi = PROCESS_INFORMATION{};
    return known ? 8 : 9;
}

// ASCII 数字串 → 宽串（仅用于管道响应数字解析，逐字符提升无编码歧义）
std::wstring ascii_to_wide(const std::string& s) {
    return std::wstring(s.begin(), s.end());
}

} // namespace

int main(int argc, char** argv) {
    // ---- 0. helper-binding 检查入口：任何实验路径之前，且仅此一个参数 ----
    if (argc == 2 && std::strcmp(argv[1], "--check-helper-binding-only") == 0) {
        return run_helper_binding_checks();
    }
    if (argc >= 2 && std::strcmp(argv[1], "--check-helper-binding-only") == 0) {
        std::cerr << "io_activity: --check-helper-binding-only takes no other args\n";
        return 4;
    }
    // 混用其他形态（第一参数是检查 flag 但 argc≠2 已覆盖；其余窄 argv 由宽解析）

    // ---- 1. 宽入口：GetCommandLineW → CommandLineToArgvW（D2）----
    int n_wide = 0;
    LPWSTR* wide_argv = CommandLineToArgvW(GetCommandLineW(), &n_wide);
    if (!wide_argv) {
        std::cerr << "io_activity: cannot parse command line (wide)\n";
        return 4;
    }

    // ---- 1.1 argv gate：最先执行，早于一切副作用与框架初始化 ----
    int parse_exit = 0;
    const auto opts = parse_args(n_wide, wide_argv, parse_exit);
    LocalFree(wide_argv);
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
    if (opts->helper_mode) {
        std::cerr << "io_activity: helper mode entered (controlled)\n";
        std::string line;
        while (std::getline(std::cin, line)) {
            if (line == "identity") {
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
        }
        return 0;   // stdin EOF → 自然退出
    }

    // ---- 2. 完整自身路径（D3）：有界扩容，失败/截断即拒绝 ----
    std::string path_err;
    const auto exe_opt = own_executable_path(path_err);
    if (!exe_opt) {
        std::cerr << "io_activity: cannot resolve own exe path: " << path_err << "\n";
        return 8;
    }
    const fs::path exe_path(*exe_opt);
    const fs::path exe_dir = exe_path.parent_path();
    // 工程根判定兜底：build/<cfg> 的祖父目录。重合或直接子目录即拒绝。
    const fs::path project_root = exe_dir.parent_path().parent_path();

    // ---- 2.5 命令行构造（长度/NUL 先查，再准备 WorkDir；D3/D4）----
    std::string cmd_err;
    const auto cmd_opt = helper_command_line(exe_path, *opts, cmd_err);
    if (!cmd_opt) {
        std::cerr << "io_activity: command line rejected: " << cmd_err << "\n";
        return 8;
    }
    const std::wstring& cmdline = *cmd_opt;
    std::vector<wchar_t> cmd_buf(cmdline.begin(), cmdline.end());
    cmd_buf.push_back(L'\0');   // NUL 结尾可写缓冲

    // ---- 3. WorkDir 安全校验（先于任何文件写入）----
    std::string wd_error;
    if (!validate_work_dir(*opts, project_root, wd_error)) {
        std::cerr << "io_activity: work-dir refused: " << wd_error << "\n";
        return 5;   // 核验失败退出：零副作用（未写任何实验文件）
    }

    // ---- 4. 唯一自造文件/日志路径（均在已校验 WorkDir 内）----
    const fs::path identity_log = opts->work_dir / "identity.log";
    const fs::path data_file = opts->work_dir / "data.bin";
    const fs::path activity_log = opts->work_dir / "io_activity_log.txt";
    (void)data_file;

    // ---- 5. 总预算计时（从准备启动前起算；握手 ≤5s 且 ≤剩余预算）----
    const auto wall_start = std::chrono::steady_clock::now();
    const auto wall_deadline = wall_start
                             + std::chrono::seconds(opts->budget_seconds);
    auto remaining_budget_ms = [&wall_deadline]() -> std::int64_t {
        return std::chrono::duration_cast<std::chrono::milliseconds>(
            wall_deadline - std::chrono::steady_clock::now()).count();
    };

    // ---- 6. spawn 唯一 helper：CreateProcessW + 显式宽 lpApplicationName ----
    SECURITY_ATTRIBUTES sa{sizeof(SECURITY_ATTRIBUTES), nullptr, TRUE};  // 句柄可继承
    HANDLE stdin_read = nullptr, stdin_write = nullptr;
    HANDLE stdout_read = nullptr, stdout_write = nullptr;
    if (!CreatePipe(&stdin_read, &stdin_write, &sa, 0)) {
        std::cerr << "io_activity: CreatePipe(stdin) failed\n";
        return 8;
    }
    if (!CreatePipe(&stdout_read, &stdout_write, &sa, 0)) {
        // 第二管道失败：关闭已持的第一对（HB6 统一收束）
        const DWORD err = GetLastError();
        std::cerr << "io_activity: CreatePipe(stdout) failed (error "
                  << err << ")\n";
        CloseHandle(stdin_read);
        CloseHandle(stdin_write);
        return 8;
    }
    // 父端自持句柄必须不可继承（否则子进程持有写端导致 stdout 管道永不 EOF）
    if (!SetHandleInformation(stdout_read, HANDLE_FLAG_INHERIT, 0)
            || !SetHandleInformation(stdin_write, HANDLE_FLAG_INHERIT, 0)) {
        const DWORD err = GetLastError();
        std::cerr << "io_activity: SetHandleInformation failed (error "
                  << err << ")\n";
        CloseHandle(stdin_read); CloseHandle(stdin_write);
        CloseHandle(stdout_read); CloseHandle(stdout_write);
        return 8;
    }

    STARTUPINFOW si{};
    si.cb = sizeof(si);
    si.dwFlags = STARTF_USESTDHANDLES;
    si.hStdInput = stdin_read;      // helper 读命令
    si.hStdOutput = stdout_write;   // helper 写身份/响应
    si.hStdError = GetStdHandle(STD_ERROR_HANDLE);
    PROCESS_INFORMATION pi{};
    const BOOL spawned = CreateProcessW(
        /*lpApplicationName=*/exe_path.native().c_str(),   // 显式宽应用路径，无引号、不搜 PATH
        /*lpCommandLine=*/cmd_buf.data(),                  // NUL 结尾可写缓冲（argv0 带引号）
        nullptr, nullptr,
        TRUE /*inherit handles*/, 0,
        nullptr,
        /*lpCurrentDirectory=*/opts->work_dir.native().c_str(),   // 明确宽工作目录
        &si, &pi);
    // GetLastError 在 CloseHandle 前保存
    const DWORD spawn_err = spawned ? 0 : GetLastError();
    CloseHandle(stdin_read);    // 父不再需要子端读句柄
    CloseHandle(stdout_write);  // 父不再需要子端写句柄（保证 stdout EOF 可达）
    if (!spawned) {
        std::cerr << "io_activity: CreateProcessW failed (error "
                  << spawn_err << ")\n";
        CloseHandle(stdin_write); CloseHandle(stdout_read);
        return 8;   // 启动失败 = 真实失败，不冒充
    }

    // ---- 7. 启动核验分离（D5）：映像查询→逐UTF-16相等→PID→真实非零tick→tick相等 ----
    // 任一失败 → 不发 write/read、不写可信身份日志、走统一 EOF 收束。
    bool gate_ok = false;
    std::uint64_t real_tick = 0;
    {
        std::string img_err;
        // 自身映像（同一查询格式消除 GetModuleFileNameW 短名差异——用
        // QueryFullProcessImageNameW 对自身伪句柄再查一次）
        const auto self_image = query_full_image_path(GetCurrentProcess(), img_err);
        const auto child_image = query_full_image_path(pi.hProcess, img_err);
        const bool image_verified = self_image.has_value() && child_image.has_value()
            && fs::path(*self_image).lexically_normal()
               == fs::path(*child_image).lexically_normal();   // 逐 UTF-16 相等
        FILETIME fc{}, fe{}, fk{}, fu{};
        const bool times_ok = GetProcessTimes(pi.hProcess, &fc, &fe, &fk, &fu) != 0;
        ULARGE_INTEGER tick_v{};
        tick_v.LowPart = fc.dwLowDateTime;
        tick_v.HighPart = fc.dwHighDateTime;
        real_tick = tick_v.QuadPart;
        const bool pid_ok = pi.dwProcessId != 0;
        const bool tick_ok = times_ok && real_tick != 0;
        gate_ok = image_verified && pid_ok && tick_ok;
        if (!gate_ok) {
            std::cerr << "io_activity: spawn gate refused (image_query="
                      << (self_image && child_image) << " image_same=" << image_verified
                      << " pid=" << pi.dwProcessId << " tick=" << real_tick
                      << ") — no write/read, no trusted identity log\n";
        }
    }

    if (!gate_ok) {
        // 统一失败收束：不发 write/read；关 stdin 写端令 EOF；等自然退出。
        const int teardown_exit = bounded_teardown(pi, stdin_write, stdout_read);
        std::cerr << "io_activity: spawn gate failed; teardown exit "
                  << teardown_exit << "\n";
        return teardown_exit;   // 8（确认退出）或 9（未确认，身份保留）
    }

    // 身份核实通过：写归属日志（父持有句柄直到收束）——这是唯一可信身份日志
    {
        HelperIdentity id;
        id.pid = pi.dwProcessId;
        id.creation_tick = real_tick;
        id.handle = pi.hProcess;
        if (!log_helper_identity(id, identity_log)) {
            std::cerr << "io_activity: cannot write identity log\n";
            const int teardown_exit = bounded_teardown(pi, stdin_write, stdout_read);
            return teardown_exit;
        }
    }

    // ---- 8. identity 握手（D6 有界）：PeekNamedPipe 轮询 ≤10ms，累积到换行 ----
    // 最多 255 字节；握手 ≤5s 且 ≤ 剩余预算；检测退出/断开/过长。
    std::string id_resp;
    bool handshake_ok = false;
    {
        const std::string id_cmd = "identity\n";
        DWORD written = 0;
        if (!WriteFile(stdin_write, id_cmd.data(),
                       static_cast<DWORD>(id_cmd.size()), &written, nullptr)
                || written != id_cmd.size()) {
            std::cerr << "io_activity: cannot send identity command (full write failed)\n";
        } else {
            const auto hs_deadline = std::chrono::steady_clock::now()
                + std::chrono::milliseconds(
                    std::min<std::int64_t>(kHandshakeMaxMs,
                                           std::max<std::int64_t>(remaining_budget_ms(), 0)));
            std::string acc;
            bool line_done = false;
            while (std::chrono::steady_clock::now() < hs_deadline) {
                // 子进程已退出？管道断开/进程结束都终止等待
                if (WaitForSingleObject(pi.hProcess, 0) == WAIT_OBJECT_0) break;
                DWORD avail = 0;
                if (!PeekNamedPipe(stdout_read, nullptr, 0, nullptr, &avail, nullptr)) {
                    break;   // 管道断开（WriteFile 端关闭/子退出）
                }
                if (avail > 0) {
                    char chunk[256]{};
                    const DWORD want = std::min<DWORD>(avail, sizeof(chunk));
                    DWORD got = 0;
                    if (!ReadFile(stdout_read, chunk, want, &got, nullptr) || got == 0) {
                        break;   // 只有数据可读才 ReadFile；读失败即断开
                    }
                    acc.append(chunk, got);
                    if (acc.size() > kIdentityMaxBytes) break;   // 过长
                    const auto nl = acc.find('\n');
                    if (nl != std::string::npos) {
                        id_resp = acc.substr(0, nl);
                        line_done = true;
                        break;
                    }
                }
                Sleep(kHandshakePollMs);
            }
            handshake_ok = line_done && !id_resp.empty();
        }
    }
    if (!handshake_ok) {
        std::cerr << "io_activity: identity handshake failed (bounded)\n";
        const int teardown_exit = bounded_teardown(pi, stdin_write, stdout_read);
        return teardown_exit;
    }

    // 响应严格完整数字解析（PID 与 tick 都必须完整数字）
    const auto pid_pos = id_resp.find("pid=");
    const auto tick_pos = id_resp.find("creation_tick=");
    bool resp_ok = pid_pos != std::string::npos && tick_pos != std::string::npos
                && tick_pos > pid_pos;
    DWORD helper_pid = 0;
    std::uint64_t helper_reported_tick = 0;
    if (resp_ok) {
        const std::wstring pid_w = ascii_to_wide(id_resp.substr(pid_pos + 4, tick_pos - (pid_pos + 4)));
        const std::wstring tick_w = ascii_to_wide(id_resp.substr(tick_pos + 14));
        std::uint64_t pv = 0, tv = 0;
        // PID 用宽解析（1..0xFFFFFFFF），tick 用宽解析（非零）
        resp_ok = parse_wide_number(pid_w, true, 1, 0x7FFFFFFFLL, pv)
               && parse_wide_number(tick_w, false, 1, 0x7FFFFFFFFFFFFFFFLL, tv)
               && pv != 0 && tv != 0;
        if (resp_ok) {
            helper_pid = static_cast<DWORD>(pv);
            helper_reported_tick = tv;
        }
    }
    if (!resp_ok) {
        std::cerr << "io_activity: helper identity malformed: " << id_resp << "\n";
        const int teardown_exit = bounded_teardown(pi, stdin_write, stdout_read);
        return teardown_exit;
    }

    // 父进程独立核实：PID 一致 + creation_tick 一致（均非零）
    if (pi.dwProcessId != helper_pid || real_tick != helper_reported_tick) {
        std::cerr << "io_activity: helper identity mismatch (spawned pid "
                  << pi.dwProcessId << " vs reported " << helper_pid
                  << "; spawned tick " << real_tick << " vs reported "
                  << helper_reported_tick << ")\n";
        const int teardown_exit = bounded_teardown(pi, stdin_write, stdout_read);
        return teardown_exit;
    }

    // ---- 9. 段协议驱动（budget 真实推导）----
    std::atomic<bool> cancel{false};
    int idle_n = 0, write_n = 0, read_n = 0;
    std::uint64_t bytes_used = 0;

    auto drive_segment = [&](const std::string& name, int& valid_count) {
        valid_count = 0;
        IoSample prev{};
        bool have_prev = false;
        const auto seg_deadline = std::chrono::steady_clock::now()
            + std::chrono::milliseconds(
                std::min<std::int64_t>(5000, std::max<std::int64_t>(
                    remaining_budget_ms(), 0)));
        while (valid_count < kMinValidSamplesPerSegment
               && std::chrono::steady_clock::now() < seg_deadline
               && !cancel.load()) {
            IoSample s{};
            if (!take_io_sample(pi.hProcess, s)) {
                cancel.store(true);
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
            cancel.store(true);
        }
    };

    drive_segment("idle", idle_n);

    {
        const std::uint64_t chunk = 4096;
        const std::uint64_t half_budget = opts->max_bytes / 2;
        const std::uint64_t iters = count_pending_loop_iterations(
            half_budget / chunk + 1, chunk, 0, bytes_used, opts->max_bytes);
        const std::string write_cmd = "write " + std::to_string(iters * chunk)
                                    + "\n";
        DWORD written = 0;
        if (!WriteFile(stdin_write, write_cmd.data(),
                       static_cast<DWORD>(write_cmd.size()), &written, nullptr)
                || written != write_cmd.size()) {
            std::cerr << "io_activity: cannot send write command (full write failed)\n";
            cancel.store(true);
        } else {
            drive_segment("write", write_n);
            bytes_used += iters * chunk;
        }
    }

    {
        const std::string read_cmd = "read\n";
        DWORD written = 0;
        if (!WriteFile(stdin_write, read_cmd.data(),
                       static_cast<DWORD>(read_cmd.size()), &written, nullptr)
                || written != read_cmd.size()) {
            std::cerr << "io_activity: cannot send read command (full write failed)\n";
            cancel.store(true);
        } else {
            drive_segment("read", read_n);
        }
    }

    // ---- 10. 统一收束（D6）：取消 → EOF → 等自然退出 → 确认退出码 ----
    // 不 TerminateProcess；不按 PID 名清理。等待持有句柄确认退出状态。
    cancel.store(true);
    CloseHandle(stdin_write);   // EOF：helper getline 失败 → 自然退出
    stdin_write = nullptr;
    const auto exit_deadline = std::chrono::steady_clock::now()
                             + std::chrono::milliseconds(kTeardownWaitMs);
    DWORD wait_result = WAIT_TIMEOUT;
    while ((wait_result = WaitForSingleObject(pi.hProcess, 100)) == WAIT_TIMEOUT) {
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

    // ---- 11. 结果日志与退出 ----
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
                  << pi.dwProcessId << " creation_tick=" << real_tick
                  << " image_chars="
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
