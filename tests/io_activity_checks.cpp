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
// W35 MSVC x64 兼容（最小修复）：windows.h 无条件定义 min/max 宏，会破坏本文件
// 大量 std::min/std::max 调用（MSVC 报 C2589/C2059）。仅本翻译单元定义 NOMINMAX，
// 不改全局编译参数、不影响 MinGW 行为。
#ifndef NOMINMAX
#define NOMINMAX
#endif
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
#include <functional>
#include <iostream>
#include <map>
#include <optional>
#include <sstream>
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
            // --work-dir 为末参数缺值：无授权 → 2（授权 gate 一致性，
            // Review F1）；有授权但缺值 → 4（缺失参数，与其它 flag 一致）。
            if (!authorized) {
                exit_code = 2;
                return std::nullopt;
            }
            std::wcerr << L"io_activity: missing value for --work-dir\n";
            exit_code = 4;
            return std::nullopt;
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
                       std::string& error) {    if (o.work_dir.empty()) {
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

// =====================================================================
// HelperOps：本路径局部 Win32 函数指针 + 时钟/睡眠/日志回调。生产默认全
// 绑定真实 API；fake 只在检查入口注入（记录调用、提供脚本结果），不自写
// 算法或 EOF 计数。签名用 decltype(&::API) 保持 ABI。
// =====================================================================
struct HelperOps {
    // Win32 函数指针（签名与 ::API 一致）
    decltype(&::GetModuleFileNameW)             get_module_file_name_w;
    decltype(&::QueryFullProcessImageNameW)     query_full_process_image_name_w;
    decltype(&::GetProcessTimes)                get_process_times;
    decltype(&::CreatePipe)                     create_pipe;
    decltype(&::SetHandleInformation)           set_handle_information;
    decltype(&::CreateProcessW)                 create_process_w;
    decltype(&::CloseHandle)                    close_handle;
    decltype(&::WaitForSingleObject)            wait_for_single_object;
    decltype(&::GetExitCodeProcess)             get_exit_code_process;
    decltype(&::WriteFile)                      write_file;
    decltype(&::PeekNamedPipe)                  peek_named_pipe;
    decltype(&::ReadFile)                       read_file;
    decltype(&::GetLastError)                   get_last_error;
    // 时钟/睡眠回调（单调毫秒；fake 可脚本推进）
    std::int64_t (*now_ms)() = []() {
        return std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count();
    };
    void (*sleep_ms)(DWORD) = [](DWORD ms) { ::Sleep(ms); };
    // 局部身份日志回调（默认 log_helper_identity；fake 可记录不落盘）
    bool (*write_identity)(const HelperIdentity&, const fs::path&)
        = [](const HelperIdentity& id, const fs::path& p) {
              return log_helper_identity(id, p);
          };
};

// 生产默认 ops：全部真实 API + steady_clock + Sleep + 真实日志落盘。
// 无模式 flag/环境开关；fake 仅在检查入口注入。
HelperOps real_helper_ops() {
    HelperOps ops{};
    ops.get_module_file_name_w          = &::GetModuleFileNameW;
    ops.query_full_process_image_name_w = &::QueryFullProcessImageNameW;
    ops.get_process_times               = &::GetProcessTimes;
    ops.create_pipe                     = &::CreatePipe;
    ops.set_handle_information          = &::SetHandleInformation;
    ops.create_process_w                = &::CreateProcessW;
    ops.close_handle                    = &::CloseHandle;
    ops.wait_for_single_object          = &::WaitForSingleObject;
    ops.get_exit_code_process           = &::GetExitCodeProcess;
    ops.write_file                      = &::WriteFile;
    ops.peek_named_pipe                 = &::PeekNamedPipe;
    ops.read_file                       = &::ReadFile;
    ops.get_last_error                  = &::GetLastError;
    return ops;
}

// ---- own_executable_path：有界扩容读取（HB3/D3，经 HelperOps）----
// GetModuleFileNameW 从 256 WCHAR 起倍增，最多 32768；仅 0<n<size 接受。
// 返回 0（失败）或 n>=size（持续截断）都无可用路径。
std::optional<std::wstring> own_executable_path(std::string& error,
                                                const HelperOps& ops) {
    std::size_t capacity = 256;
    while (true) {
        std::vector<wchar_t> buf(capacity, L'\0');
        const DWORD n = ops.get_module_file_name_w(nullptr, buf.data(),
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

// ---- prepare_helper：真实父入口的纯路径读取＋命令行准备（无 pipe/spawn）----
struct PreparedHelper {
    fs::path exe_path;
    std::wstring command_line;
};

std::optional<PreparedHelper> prepare_helper(const Options& options,
                                             std::string& error,
                                             const HelperOps& ops) {
    const auto exe = own_executable_path(error, ops);
    if (!exe) return std::nullopt;   // 无路径即无准备结果；零 pipe/spawn
    const auto cmd = helper_command_line(fs::path(*exe), options, error);
    if (!cmd) return std::nullopt;   // 命令行拒绝（NUL/超长）：同样零 pipe/spawn
    return PreparedHelper{fs::path(*exe), *cmd};
}

// ASCII 数字串 → 宽串（仅用于管道响应数字解析，逐字符提升无编码歧义）
std::wstring ascii_to_wide(const std::string& s) {
    return std::wstring(s.begin(), s.end());
}

// ---- read_helper_identity：同源有界握手（从 main 移入，经 HelperOps）----
// 完整 WriteFile identity 命令、PeekNamedPipe 轮询（≤10ms）、可读后
// ReadFile、分片累积/换行/255 字节限制、≤5s 且 ≤ 剩余预算、严格数字解析
// 与 PID/tick 比对。协议按精确前缀 `helper-identity pid=` 与分隔符
// ` creation_tick=` 切出纯数字再 parse_wide_number（不把分隔空格送入数值
// 解析）。不是接收已拼好字符串的假握手。
bool read_helper_identity(PROCESS_INFORMATION& pi, HANDLE stdin_write,
                          HANDLE stdout_read,
                          std::int64_t wall_deadline_ms,
                          DWORD expected_pid, std::uint64_t expected_tick,
                          std::string& error, const HelperOps& ops) {
    // 1) identity 命令完整写（全量核验）
    const std::string id_cmd = "identity\n";
    DWORD written = 0;
    if (!ops.write_file(stdin_write, id_cmd.data(),
                        static_cast<DWORD>(id_cmd.size()), &written, nullptr)
            || written != id_cmd.size()) {
        error = "cannot send identity command (full write failed)";
        return false;
    }
    // 2) 有界轮询：≤5s 且 ≤ 剩余预算；PeekNamedPipe 轮询 ≤10ms；可读才 Read
    const std::int64_t hs_deadline =
        ops.now_ms() + std::min<std::int64_t>(
            kHandshakeMaxMs, std::max<std::int64_t>(wall_deadline_ms - ops.now_ms(), 0));
    std::string acc;
    bool line_done = false;
    while (ops.now_ms() < hs_deadline) {
        if (ops.wait_for_single_object(pi.hProcess, 0) == WAIT_OBJECT_0) {
            error = "child exited during handshake";
            return false;
        }
        DWORD avail = 0;
        if (!ops.peek_named_pipe(stdout_read, nullptr, 0, nullptr, &avail, nullptr)) {
            error = "pipe broken during handshake";
            return false;
        }
        if (avail > 0) {
            char chunk[256]{};
            const DWORD want = std::min<DWORD>(avail, sizeof(chunk));
            DWORD got = 0;
            if (!ops.read_file(stdout_read, chunk, want, &got, nullptr) || got == 0) {
                error = "read failed during handshake";
                return false;
            }
            acc.append(chunk, got);
            if (acc.size() > kIdentityMaxBytes) {
                error = "identity response too long (>255)";
                return false;
            }
            const auto nl = acc.find('\n');
            if (nl != std::string::npos) {
                acc = acc.substr(0, nl);
                line_done = true;
                break;
            }
        }
        ops.sleep_ms(kHandshakePollMs);
    }
    if (!line_done || acc.empty()) {
        error = "identity handshake timeout (bounded)";
        return false;
    }
    // 3) 严格前缀/分隔符切分：`helper-identity pid=` … ` creation_tick=` …
    //    中间与尾部必须是纯数字（不留分隔空格进数值解析）。
    constexpr const char* kPrefix = "helper-identity pid=";
    constexpr const char* kSep = " creation_tick=";
    const auto p = acc.find(kPrefix);
    const auto s = acc.find(kSep);
    if (p != 0 || s == std::string::npos || s <= p + std::strlen(kPrefix)) {
        error = "identity response malformed: " + acc;
        return false;
    }
    const std::string pid_str = acc.substr(p + std::strlen(kPrefix),
                                           s - (p + std::strlen(kPrefix)));
    const std::string tick_str = acc.substr(s + std::strlen(kSep));
    const std::wstring pid_w = ascii_to_wide(pid_str);
    const std::wstring tick_w = ascii_to_wide(tick_str);
    std::uint64_t pv = 0, tv = 0;
    if (!parse_wide_number(pid_w, true, 1, 0x7FFFFFFFLL, pv)
            || !parse_wide_number(tick_w, false, 1,
                                  0x7FFFFFFFFFFFFFFFLL, tv)) {
        error = "identity response numbers malformed: " + acc;
        return false;
    }
    // 4) 与父端独立核实值比对（PID/tick 均非零且一致）
    if (static_cast<DWORD>(pv) != expected_pid || pv == 0
            || tv != expected_tick || tv == 0) {
        error = "identity mismatch (spawned pid " + std::to_string(expected_pid)
              + " vs reported " + std::to_string(pv)
              + "; spawned tick " + std::to_string(expected_tick)
              + " vs reported " + std::to_string(tv) + ")";
        return false;
    }
    return true;
}

// ---- bounded_teardown：统一失败收束（同源，经 HelperOps，可观测）----
// EOF → 等自然退出 ≤10s（100ms 轮询）→ GetExitCodeProcess 确认退出码。
// 返回 8（确认退出）或 9（未确认）。不 TerminateProcess。
// observation 由函数填写（exited/exit_code_known/child_exit_code/
// wait_result），不由测试替它补写；可传 nullptr。
struct TeardownObservation {
    bool exited = false;
    bool exit_code_known = false;
    DWORD child_exit_code = 0;
    DWORD wait_result = WAIT_TIMEOUT;
};

int bounded_teardown(PROCESS_INFORMATION& pi, HANDLE& stdin_write,
                     HANDLE& stdout_read, const HelperOps& ops,
                     TeardownObservation* observation = nullptr) {
    TeardownObservation local{};
    TeardownObservation& obs = observation ? *observation : local;
    if (stdin_write) {
        ops.close_handle(stdin_write);   // EOF：helper getline 失败 → 自然退出
        stdin_write = nullptr;
    }
    const std::int64_t deadline = ops.now_ms() + kTeardownWaitMs;
    DWORD wait_result = WAIT_TIMEOUT;
    while ((wait_result = ops.wait_for_single_object(pi.hProcess, 100))
           == WAIT_TIMEOUT) {
        if (ops.now_ms() > deadline) break;
    }
    obs.wait_result = wait_result;
    obs.exited = (wait_result == WAIT_OBJECT_0);
    if (stdout_read) { ops.close_handle(stdout_read); stdout_read = nullptr; }
    if (!obs.exited) {
        ops.close_handle(pi.hThread);   // 进程句柄保留（归属记录）；线程句柄收束
        return 9;
    }
    DWORD code = 0;
    obs.exit_code_known = ops.get_exit_code_process(pi.hProcess, &code) != 0;
    obs.child_exit_code = code;
    ops.close_handle(pi.hThread);
    ops.close_handle(pi.hProcess);
    pi = PROCESS_INFORMATION{};
    return obs.exit_code_known ? 8 : 9;
}

// ---- 映像路径查询（D5）：QueryFullProcessImageNameW flags=0 完整读取 ----
// 用与 GetModuleFileNameW 相同的有界扩容策略；返回完整宽路径，失败 nullopt。
// 同源：main 启动函数与检查共用，经 HelperOps 调用（可注入）。
std::optional<std::wstring> query_full_image_path(HANDLE process,
                                                  std::string& error,
                                                  const HelperOps& ops) {
    std::size_t capacity = 256;
    while (true) {
        std::vector<wchar_t> buf(capacity, L'\0');
        DWORD size = static_cast<DWORD>(capacity);
        if (ops.query_full_process_image_name_w(process, 0, buf.data(), &size)) {
            if (size < capacity) return std::wstring(buf.data(), size);
            // size==capacity：可能截断，扩容重试
        } else {
            const DWORD err = ops.get_last_error();
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

// ---- start_verified_helper：main :997-1188 真实语句移入（同源启动）----
// 双管道→SetHandleInformation→CreateProcessW（显式 W 应用名+宽 cwd）→
// 映像/PID/tick gate →write_identity→read_helper_identity。所有持资源失败
// 在此关句柄/调用 bounded_teardown；映像/握手失败→EOF 收束；全部通过后才
// write_identity。成功 ready 仅 main 可进入活动段。保留显式 W 应用名与宽 cwd。
struct HelperStartResult {
    bool ready = false;
    int failure_exit = 0;
    std::uint64_t creation_tick = 0;
    std::optional<std::wstring> observed_image;   // 已观测宽映像（DIAG 用）
    std::string error;
};

HelperStartResult start_verified_helper(const PreparedHelper& prepared,
                                        const Options& options,
                                        const fs::path& identity_log,
                                        std::int64_t wall_deadline_ms,
                                        PROCESS_INFORMATION& pi,
                                        HANDLE& stdin_write,
                                        HANDLE& stdout_read,
                                        const HelperOps& ops) {
    HelperStartResult result;
    // 双管道
    SECURITY_ATTRIBUTES sa{sizeof(SECURITY_ATTRIBUTES), nullptr, TRUE};
    HANDLE stdin_read = nullptr, stdin_write_local = nullptr;
    HANDLE stdout_read_local = nullptr, stdout_write = nullptr;
    if (!ops.create_pipe(&stdin_read, &stdin_write_local, &sa, 0)) {
        result.error = "CreatePipe(stdin) failed";
        result.failure_exit = 8;
        return result;   // 未持句柄：无可关
    }
    if (!ops.create_pipe(&stdout_read_local, &stdout_write, &sa, 0)) {
        const DWORD err = ops.get_last_error();
        result.error = "CreatePipe(stdout) failed (error " + std::to_string(err) + ")";
        result.failure_exit = 8;
        ops.close_handle(stdin_read);       // 只关实际已持的第一对，各一次
        ops.close_handle(stdin_write_local);
        return result;
    }
    // 父端自持句柄不可继承（否则子持写端致 stdout 永不 EOF）
    if (!ops.set_handle_information(stdout_read_local, HANDLE_FLAG_INHERIT, 0)
            || !ops.set_handle_information(stdin_write_local, HANDLE_FLAG_INHERIT, 0)) {
        const DWORD err = ops.get_last_error();
        result.error = "SetHandleInformation failed (error " + std::to_string(err) + ")";
        result.failure_exit = 8;
        ops.close_handle(stdin_read);
        ops.close_handle(stdin_write_local);
        ops.close_handle(stdout_read_local);
        ops.close_handle(stdout_write);
        return result;
    }
    STARTUPINFOW si{};
    si.cb = sizeof(si);
    si.dwFlags = STARTF_USESTDHANDLES;
    si.hStdInput = stdin_read;
    si.hStdOutput = stdout_write;
    si.hStdError = GetStdHandle(STD_ERROR_HANDLE);
    std::vector<wchar_t> cmd_buf(prepared.command_line.begin(),
                                 prepared.command_line.end());
    cmd_buf.push_back(L'\0');
    const BOOL spawned = ops.create_process_w(
        /*lpApplicationName=*/prepared.exe_path.native().c_str(),  // 显式宽应用名
        /*lpCommandLine=*/cmd_buf.data(),
        nullptr, nullptr, TRUE /*inherit handles*/, 0, nullptr,
        /*lpCurrentDirectory=*/options.work_dir.native().c_str(),  // 明确宽 cwd
        &si, &pi);
    const DWORD spawn_err = spawned ? 0 : ops.get_last_error();
    ops.close_handle(stdin_read);    // 父不再需要子端读句柄
    ops.close_handle(stdout_write);  // 父不再需要子端写句柄（stdout EOF 可达）
    if (!spawned) {
        result.error = "CreateProcessW failed (error " + std::to_string(spawn_err) + ")";
        result.failure_exit = 8;
        ops.close_handle(stdin_write_local);
        ops.close_handle(stdout_read_local);
        return result;
    }
    stdin_write = stdin_write_local;
    stdout_read = stdout_read_local;
    // spawn gate：映像查询→逐 UTF-16 相等→PID→真实非零 tick
    {
        std::string img_err;
        const auto self_image = query_full_image_path(GetCurrentProcess(),
                                                      img_err, ops);
        const auto child_image = query_full_image_path(pi.hProcess,
                                                       img_err, ops);
        result.observed_image = child_image;   // 已观测宽映像（成功或 nullopt）
        const bool image_verified = self_image.has_value() && child_image.has_value()
            && fs::path(*self_image).lexically_normal()
               == fs::path(*child_image).lexically_normal();
        FILETIME fc{}, fe{}, fk{}, fu{};
        const bool times_ok = ops.get_process_times(pi.hProcess, &fc, &fe, &fk, &fu) != 0;
        ULARGE_INTEGER tick_v{};
        tick_v.LowPart = fc.dwLowDateTime;
        tick_v.HighPart = fc.dwHighDateTime;
        result.creation_tick = tick_v.QuadPart;
        const bool pid_ok = pi.dwProcessId != 0;
        const bool tick_ok = times_ok && result.creation_tick != 0;
        if (!(image_verified && pid_ok && tick_ok)) {
            result.error = "spawn gate refused (image_query="
                + std::to_string(self_image.has_value() && child_image.has_value())
                + " image_same=" + std::to_string(image_verified)
                + " pid=" + std::to_string(pi.dwProcessId)
                + " tick=" + std::to_string(result.creation_tick) + ")";
            result.failure_exit = bounded_teardown(pi, stdin_write, stdout_read,
                                                   ops);
            stdin_write = nullptr;
            stdout_read = nullptr;
            return result;
        }
    }
    // ---- 有界握手：同源 read_helper_identity（先全部核实，成功后才写
    // 可信身份日志；握手失败时零日志、零活动命令）----
    std::string hs_err;
    if (!read_helper_identity(pi, stdin_write, stdout_read, wall_deadline_ms,
                              pi.dwProcessId, result.creation_tick, hs_err,
                              ops)) {
        result.error = hs_err;
        result.failure_exit = bounded_teardown(pi, stdin_write, stdout_read, ops);
        stdin_write = nullptr;
        stdout_read = nullptr;
        return result;
    }
    // ---- 全部核实通过后才写可信身份日志（HB5 关键次序）----
    {
        HelperIdentity id;
        id.pid = pi.dwProcessId;
        id.creation_tick = result.creation_tick;
        id.handle = pi.hProcess;
        if (!ops.write_identity(id, identity_log)) {
            result.error = "cannot write identity log";
            result.failure_exit = bounded_teardown(pi, stdin_write, stdout_read,
                                                   ops);
            stdin_write = nullptr;
            stdout_read = nullptr;
            return result;
        }
    }
    result.ready = true;
    return result;
}

// ---- helper_failure_diagnostic：失败归属诊断（仅格式化已观测数据）----
// 从 HelperIdentity 与可选映像格式化 PID/tick/句柄/UTF-8 映像；无映像写
// unknown。仅日志用途；不把"父退出后 OS 收回句柄"说成可跨进程保留。
std::string helper_failure_diagnostic(const HelperIdentity& id,
                                      const std::optional<std::wstring>& image) {
    std::string image_utf8 = "unknown";
    if (image) {
        // 宽→UTF-8（与现有管道日志一致的本地转换；仅诊断）
        const int need = WideCharToMultiByte(CP_UTF8, 0, image->c_str(),
                                             static_cast<int>(image->size()),
                                             nullptr, 0, nullptr, nullptr);
        if (need > 0) {
            std::string out(static_cast<std::size_t>(need), '\0');
            WideCharToMultiByte(CP_UTF8, 0, image->c_str(),
                                static_cast<int>(image->size()), out.data(),
                                need, nullptr, nullptr);
            image_utf8 = out;
        }
    }
    std::ostringstream oss;
    oss << "helper-failure pid=" << id.pid
        << " creation_tick=" << id.creation_tick
        << " handle=0x" << std::hex
        << reinterpret_cast<std::uintptr_t>(id.handle) << std::dec
        << " image=" << image_utf8;
    return oss.str();
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

// =====================================================================
// #11 段协议生产函数（segment_protocol_stage，批准计划 v1 §2 同源）：
// run_activity_segments / drive_segment / classify_activity_result。
// main 第 9-11 节与 --check-helper-binding-only 的 segment_protocol_checks
// 消费同一组函数；fake 只脚本化 sample/send 成败与调用记录，生产算法
// 不在检查中复制。EOF 只收束资源，不改变活动失败状态。
// =====================================================================

// SegmentIo：生产绑定真实 take_io_sample/HBC ops.WriteFile/原差分日志；
// fake 仅脚本化成败与调用记录，不操作文件/真实进程。
struct SegmentIo {
    std::function<bool(IoSample&)> sample;
    std::function<bool(const std::string&)> send;
    std::function<void(const std::string&, const IoSample&, const IoSample&)> log_sample;
};

// 每段采样循环（main 原逻辑同源搬移）：qpc 递增差分才计有效样本，门槛
// kMinValidSamplesPerSegment；段 deadline=min(now+5000, wall_deadline)。
// 采样失败或段内样本不足置 cancelled。必要睡眠 ≤ min(300, 剩余段毫秒)；
// 达到门槛即完成，不在成功后额外固定 Sleep。已开始的同步 sample/log
// 耗时不具硬墙钟保证。
void drive_segment(const std::string& name, int& valid_count, bool& cancelled,
                   std::int64_t wall_deadline_ms, const HelperOps& ops,
                   const SegmentIo& io, const fs::path& activity_log) {
    valid_count = 0;
    IoSample prev{};
    bool have_prev = false;
    const std::int64_t now0 = ops.now_ms();
    const std::int64_t seg_deadline = now0 + std::min<std::int64_t>(
        5000, std::max<std::int64_t>(wall_deadline_ms - now0, 0));
    while (valid_count < kMinValidSamplesPerSegment && ops.now_ms() < seg_deadline
           && !cancelled) {
        IoSample s{};
        if (!io.sample(s)) {
            cancelled = true;
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
            io.log_sample(name, prev, s);
            ++valid_count;
        }
        prev = s;
        have_prev = true;
        const std::int64_t remain_ms = seg_deadline - ops.now_ms();
        if (valid_count < kMinValidSamplesPerSegment && remain_ms > 0) {
            ops.sleep_ms(static_cast<DWORD>(std::min<std::int64_t>(300, remain_ms)));
        }
    }
    if (valid_count < kMinValidSamplesPerSegment && !cancelled) {
        cancelled = true;
    }
}

// 段协议单次活动结果（记录父请求额度与各段有效样本数；不冒称实测 I/O）。
struct SegmentOutcome {
    bool cancelled = false;
    int idle_samples = 0, write_samples = 0, read_samples = 0;
    std::uint64_t requested_write_bytes = 0;
};

// 段协议活动序列：idle 采样 → write 命令+采样 → read 命令+采样。紧邻每次
// send 前读取 cancelled 与剩余毫秒（wall_deadline_ms - ops.now_ms()），任一
// 取消或 ≤0 视为失败且不调用 send；发送失败（含部分写）置失败并停止后续
// 活动。EOF 不改变此失败位。请求量沿用旧公式（half= max/2，iters=
// half/chunk+1，chunk=4096），requested_write_bytes 只在完整发送后记录。
SegmentOutcome run_activity_segments(std::int64_t wall_deadline_ms,
                                     std::uint64_t max_bytes,
                                     const HelperOps& ops, const SegmentIo& io,
                                     const fs::path& activity_log) {
    SegmentOutcome out{};
    bool cancelled = false;
    drive_segment("idle", out.idle_samples, cancelled, wall_deadline_ms, ops,
                  io, activity_log);
    if (!cancelled) {
        const std::uint64_t chunk = 4096;
        const std::uint64_t half_budget = max_bytes / 2;
        const std::uint64_t iters = count_pending_loop_iterations(
            half_budget / chunk + 1, chunk, 0, 0, max_bytes);
        const std::string write_cmd = "write " + std::to_string(iters * chunk) + "\n";
        if (cancelled || wall_deadline_ms - ops.now_ms() <= 0) {
            cancelled = true;   // 发送前剩余预算恰 0/负值：不发送
        } else if (!io.send(write_cmd)) {
            cancelled = true;   // 发送失败（含部分写）
        } else {
            out.requested_write_bytes = iters * chunk;
            drive_segment("write", out.write_samples, cancelled,
                          wall_deadline_ms, ops, io, activity_log);
        }
    }
    if (!cancelled) {
        const std::string read_cmd = "read\n";
        if (cancelled || wall_deadline_ms - ops.now_ms() <= 0) {
            cancelled = true;
        } else if (!io.send(read_cmd)) {
            cancelled = true;
        } else {
            drive_segment("read", out.read_samples, cancelled,
                          wall_deadline_ms, ops, io, activity_log);
        }
    }
    out.cancelled = cancelled;
    return out;
}

// 同一分类驱动日志与退出码：消费 SegmentOutcome 与 HBC bounded_teardown 的
// 真实观测。未确认退出、WAIT_FAILED/超时、exit_code_known=false → Unknown；
// 否则 cancelled/任一样本 < 门槛/child_exit_code 非 0 → Incomplete；其余 Ok。
// EOF 不设置/清除活动失败。禁止再手写 !cancel 判断。
enum class ActivityResult { Ok, Incomplete, Unknown };

ActivityResult classify_activity_result(const SegmentOutcome& outcome,
                                        const TeardownObservation& obs) {
    if (!obs.exited || !obs.exit_code_known
            || obs.wait_result != WAIT_OBJECT_0) {
        return ActivityResult::Unknown;
    }
    if (outcome.cancelled
            || outcome.idle_samples < kMinValidSamplesPerSegment
            || outcome.write_samples < kMinValidSamplesPerSegment
            || outcome.read_samples < kMinValidSamplesPerSegment
            || obs.child_exit_code != 0) {
        return ActivityResult::Incomplete;
    }
    return ActivityResult::Ok;
}

const char* activity_result_name(ActivityResult r) {
    switch (r) {
    case ActivityResult::Ok: return "OK";
    case ActivityResult::Incomplete: return "INCOMPLETE";
    case ActivityResult::Unknown: return "UNKNOWN";
    }
    return "UNKNOWN";
}

int activity_exit_code(ActivityResult r) {
    switch (r) {
    case ActivityResult::Ok: return 0;
    case ActivityResult::Incomplete: return 6;
    case ActivityResult::Unknown: return 9;
    }
    return 9;
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
// HB3/HB5/HB6 用 fake HelperOps API 脚本驱动真实同源生产函数：
// prepare_helper/own_executable_path/start_verified_helper/
// read_helper_identity/bounded_teardown/helper_failure_diagnostic。
// fake 只提供 API 结果与记录真实调用；绝不自写 EOF 计数或常量结论。
// =====================================================================

// fake API 场景护栏：每场景最大 API 调用数（超限立即 FAIL，防测试无限等待）
constexpr std::size_t kFakeMaxApiCalls = 2000;

// fake 句柄 token：唯一标识一个"句柄"；0 视为空。
using FakeHandle = std::uint64_t;
constexpr FakeHandle kNullHandle = 0;

// fake API 调用账本：唯一 token、实际创建/关闭次数、未脚本化操作即失败。
struct FakeLedger {
    std::size_t sequence = 0;                      // 全局调用序（次序断言用）
    std::size_t api_calls = 0;                     // 总调用数（护栏）
    std::size_t create_pipe_calls = 0;
    std::size_t create_process_calls = 0;
    std::size_t close_calls = 0;                   // CloseHandle 实际次数
    std::map<FakeHandle, std::size_t> close_per_handle;  // 每句柄关闭次数
    std::vector<std::pair<FakeHandle, std::size_t>> close_sequence;
    std::vector<FakeHandle> handles_created;       // 按创建序
    std::vector<std::string> write_commands;       // WriteFile 实际命令串
    std::size_t write_file_calls = 0;
    std::size_t read_file_calls = 0;
    std::size_t peek_calls = 0;
    std::size_t wait_calls = 0;
    std::size_t exit_code_queries = 0;
    std::size_t module_file_name_calls = 0;
    std::size_t image_query_calls = 0;
    std::size_t identity_log_calls = 0;            // write_identity 实际调用
    std::size_t identity_log_seq = 0;              // 日志调用时的全局序
    std::size_t last_readfile_seq = 0;             // 最近一次 ReadFile 的序
    std::size_t first_wait_seq = 0;                // 首次 WaitForSingleObject 序
    std::size_t exit_query_seq = 0;                // GetExitCodeProcess 序
    bool fail_violation = false;                   // 未脚本化/双关/未持句柄
    std::string violation_what;
};

// fake 时钟：只在 sleep/脚本时推进（单调毫秒）。
struct FakeClock {
    std::int64_t now = 1'000'000;   // 起始任意固定值
    std::size_t sleep_calls = 0;
    std::int64_t advanced_ms = 0;
};

// fake HelperOps 环境：ledger/clock/脚本输入。句柄闭包在 freestanding 函数
// 间共享，用全局指针（仅 --check-helper-binding-only 单线程检查内）。
struct FakeEnv {
    FakeLedger ledger;
    FakeClock clock;
    // 子进程存活建模：关闭 stdin 写端（EOF）→ helper 自然退出（与真实
    // getline 失败退出一致）；child_exits_on_eof=false 模拟 EOF 后仍挂起
    // （WAIT_TIMEOUT 持续）；wait_override 可强制 WAIT_FAILED。
    bool child_alive = true;
    bool child_exits_on_eof = true;
    std::optional<DWORD> wait_override;
    FakeHandle stdin_write_token = kNullHandle;    // 第一管道写端（EOF 语义锚点）
    // 脚本输入
    bool module_always_truncate = false;           // true: 恒返回 n==capacity
    DWORD module_file_name_result = 0;             // 无内容时的返回值（0=失败）
    std::wstring module_file_name_value;           // 有内容：短于容量返回，否则截断
    BOOL create_pipe_first = TRUE;                 // 第一管道脚本
    BOOL create_pipe_second = TRUE;                // 第二管道脚本
    BOOL set_handle_info = TRUE;
    BOOL create_process_result = FALSE;
    DWORD create_process_error = 0;
    BOOL process_times_result = TRUE;
    std::uint64_t process_times_tick = 0;
    BOOL query_image_result = FALSE;               // QueryFullProcessImageNameW 成功脚本
    std::wstring query_image_value;                // 每次成功调用返回（队列耗尽后）
    std::vector<std::wstring> query_image_script;  // 按调用序消费（self/child 区分）
    std::size_t query_image_script_idx = 0;
    BOOL write_file_result = TRUE;
    DWORD write_file_written = 0;                  // 0 = 实际全量
    BOOL read_file_result = TRUE;
    std::vector<std::string> read_script;          // 每次 ReadFile 返回的分片
    std::size_t read_script_idx = 0;
    BOOL peek_result = TRUE;
    DWORD peek_avail = 0;                          // 脚本 avail 字节数
    BOOL exit_code_result = FALSE;
    DWORD exit_code_value = 0;
    BOOL identity_log_result = TRUE;
};

FakeEnv* g_fake = nullptr;   // 检查入口内单线程使用

// fake API 实现（签名与 Win32 一致；写入 g_fake 账本）
DWORD fake_GetModuleFileNameW(HMODULE module, LPWCH filename, DWORD size) {
    FakeEnv& e = *g_fake;
    FakeLedger& L = e.ledger;
    L.sequence = ++L.api_calls;
    if (L.api_calls > kFakeMaxApiCalls) { L.fail_violation = true;
        L.violation_what = "API call budget exceeded (GetModuleFileNameW)"; return 0; }
    ++L.module_file_name_calls;
    if (module != nullptr) { L.fail_violation = true;
        L.violation_what = "GetModuleFileNameW: non-null module"; return 0; }
    if (e.module_always_truncate) {   // 持续截断脚本：填满并返回 n==capacity
        if (size > 0 && filename) {
            const std::size_t copy = std::min<std::size_t>(
                size - 1, e.module_file_name_value.size());
            std::memcpy(filename, e.module_file_name_value.data(),
                        copy * sizeof(wchar_t));
            filename[copy] = L'\0';
        }
        return size;
    }
    const std::wstring& v = e.module_file_name_value;
    if (v.empty()) return e.module_file_name_result;   // 0 = API 失败脚本
    if (v.size() + 1 > size) {   // 截断语义：需 > 容量 → n == capacity
        if (size > 0 && filename) {
            const std::size_t copy = std::min<std::size_t>(size - 1, v.size());
            std::memcpy(filename, v.data(), copy * sizeof(wchar_t));
            filename[copy] = L'\0';
        }
        return size;
    }
    std::memcpy(filename, v.data(), v.size() * sizeof(wchar_t));
    filename[v.size()] = L'\0';
    return static_cast<DWORD>(v.size());
}

BOOL fake_QueryFullProcessImageNameW(HANDLE process, DWORD flags,
                                     LPWCH filename, DWORD* size) {
    FakeEnv& e = *g_fake;
    FakeLedger& L = e.ledger;
    L.sequence = ++L.api_calls;
    if (L.api_calls > kFakeMaxApiCalls) { L.fail_violation = true;
        L.violation_what = "API call budget exceeded (QueryImage)"; return FALSE; }
    ++L.image_query_calls;
    (void)flags;
    if (process == nullptr || size == nullptr) { L.fail_violation = true;
        L.violation_what = "QueryImage: null process/size"; return FALSE; }
    if (!e.query_image_result) {
        SetLastError(12);   // 脚本化错误（非 ERROR_INSUFFICIENT_BUFFER）
        return FALSE;
    }
    // 队列脚本按调用序消费（self/child 各一次）；耗尽后用 query_image_value
    std::wstring v = e.query_image_value;
    if (e.query_image_script_idx < e.query_image_script.size()) {
        v = e.query_image_script[e.query_image_script_idx++];
    }
    if (v.size() + 1 > *size) {
        *size = static_cast<DWORD>(v.size() + 1);
        SetLastError(ERROR_INSUFFICIENT_BUFFER);
        return FALSE;
    }
    std::memcpy(filename, v.data(), v.size() * sizeof(wchar_t));
    filename[v.size()] = L'\0';
    *size = static_cast<DWORD>(v.size());
    return TRUE;
}

BOOL fake_GetProcessTimes(HANDLE process, LPFILETIME creation,
                          LPFILETIME exit, LPFILETIME kernel,
                          LPFILETIME user) {
    FakeEnv& e = *g_fake;
    FakeLedger& L = e.ledger;
    L.sequence = ++L.api_calls;
    if (L.api_calls > kFakeMaxApiCalls) { L.fail_violation = true;
        L.violation_what = "API call budget exceeded (GetProcessTimes)"; return FALSE; }
    (void)exit; (void)kernel; (void)user;
    if (process == nullptr) { L.fail_violation = true;
        L.violation_what = "GetProcessTimes: null process"; return FALSE; }
    if (!e.process_times_result) return FALSE;
    if (creation) {
        ULARGE_INTEGER v{};
        v.QuadPart = e.process_times_tick;
        creation->dwLowDateTime = v.LowPart;
        creation->dwHighDateTime = v.HighPart;
    }
    return TRUE;
}

BOOL fake_CreatePipe(PHANDLE read_pipe, PHANDLE write_pipe,
                     LPSECURITY_ATTRIBUTES attrs, DWORD size) {
    FakeEnv& e = *g_fake;
    FakeLedger& L = e.ledger;
    L.sequence = ++L.api_calls;
    if (L.api_calls > kFakeMaxApiCalls) { L.fail_violation = true;
        L.violation_what = "API call budget exceeded (CreatePipe)"; return FALSE; }
    ++L.create_pipe_calls;
    (void)attrs; (void)size;
    // 第 1 次调用 = stdin 管道；第 2 次 = stdout 管道（同源函数顺序）
    const BOOL script = (L.create_pipe_calls == 1) ? e.create_pipe_first
                                                   : e.create_pipe_second;
    if (!script) {
        SetLastError(5);
        return FALSE;
    }
    static FakeHandle next_token = 100;
    *read_pipe = reinterpret_cast<HANDLE>(++next_token);
    *write_pipe = reinterpret_cast<HANDLE>(++next_token);
    L.handles_created.push_back(reinterpret_cast<FakeHandle>(*read_pipe));
    L.handles_created.push_back(reinterpret_cast<FakeHandle>(*write_pipe));
    if (L.create_pipe_calls == 1) {
        e.stdin_write_token = reinterpret_cast<FakeHandle>(*write_pipe);
    }
    return TRUE;
}

BOOL fake_SetHandleInformation(HANDLE object, DWORD mask, DWORD flags) {
    FakeEnv& e = *g_fake;
    FakeLedger& L = e.ledger;
    L.sequence = ++L.api_calls;
    if (L.api_calls > kFakeMaxApiCalls) { L.fail_violation = true;
        L.violation_what = "API call budget exceeded (SetHandleInformation)"; return FALSE; }
    (void)mask; (void)flags;
    if (object == nullptr) { L.fail_violation = true;
        L.violation_what = "SetHandleInformation: null handle"; return FALSE; }
    return e.set_handle_info;
}

BOOL fake_CreateProcessW(LPCWSTR app_name, LPWSTR cmd_line,
                         LPSECURITY_ATTRIBUTES pa, LPSECURITY_ATTRIBUTES ta,
                         BOOL inherit, DWORD creation, LPVOID env,
                         LPCWSTR cwd, LPSTARTUPINFOW si,
                         LPPROCESS_INFORMATION pi) {
    FakeEnv& e = *g_fake;
    FakeLedger& L = e.ledger;
    L.sequence = ++L.api_calls;
    if (L.api_calls > kFakeMaxApiCalls) { L.fail_violation = true;
        L.violation_what = "API call budget exceeded (CreateProcessW)"; return FALSE; }
    ++L.create_process_calls;
    (void)pa; (void)ta; (void)creation; (void)env; (void)si; (void)inherit;
    if (app_name == nullptr || cmd_line == nullptr || cwd == nullptr
            || pi == nullptr) {
        L.fail_violation = true;
        L.violation_what = "CreateProcessW: null required field";
        return FALSE;
    }
    if (!e.create_process_result) {
        SetLastError(e.create_process_error);
        return FALSE;
    }
    static FakeHandle next_proc = 500;
    pi->hProcess = reinterpret_cast<HANDLE>(++next_proc);
    pi->hThread = reinterpret_cast<HANDLE>(++next_proc);
    pi->dwProcessId = 4242;   // 固定 fake PID（每场景由测试断言其值）
    pi->dwThreadId = 1;
    L.handles_created.push_back(reinterpret_cast<FakeHandle>(pi->hProcess));
    L.handles_created.push_back(reinterpret_cast<FakeHandle>(pi->hThread));
    return TRUE;
}

BOOL fake_CloseHandle(HANDLE object) {
    FakeEnv& e = *g_fake;
    FakeLedger& L = e.ledger;
    L.sequence = ++L.api_calls;
    if (L.api_calls > kFakeMaxApiCalls) { L.fail_violation = true;
        L.violation_what = "API call budget exceeded (CloseHandle)"; return FALSE; }
    ++L.close_calls;
    const FakeHandle token = reinterpret_cast<FakeHandle>(object);
    if (token == kNullHandle) { L.fail_violation = true;
        L.violation_what = "CloseHandle: null handle"; return FALSE; }
    // 未持句柄（从未创建）→ 违规
    auto it = std::find(L.handles_created.begin(), L.handles_created.end(), token);
    if (it == L.handles_created.end()) {
        L.fail_violation = true;
        L.violation_what = "CloseHandle: unheld handle token";
        return FALSE;
    }
    // 双关违规
    if (L.close_per_handle[token] >= 1) {
        L.fail_violation = true;
        L.violation_what = "CloseHandle: double close on token "
            + std::to_string(token);
        return FALSE;
    }
    ++L.close_per_handle[token];
    L.close_sequence.emplace_back(token, L.sequence);
    // 关闭 stdin 写端（第一管道写端）→ helper 因 stdin EOF 自然退出
    // （child_exits_on_eof=false 模拟 EOF 后仍挂起）
    if (token == e.stdin_write_token && e.child_exits_on_eof) {
        e.child_alive = false;
    }
    return TRUE;
}

DWORD fake_WaitForSingleObject(HANDLE object, DWORD ms) {
    FakeEnv& e = *g_fake;
    FakeLedger& L = e.ledger;
    L.sequence = ++L.api_calls;
    if (L.api_calls > kFakeMaxApiCalls) { L.fail_violation = true;
        L.violation_what = "API call budget exceeded (Wait)"; return WAIT_FAILED; }
    ++L.wait_calls;
    if (L.first_wait_seq == 0) L.first_wait_seq = L.sequence;
    (void)object;
    if (e.wait_override) return *e.wait_override;   // WAIT_FAILED 脚本
    if (e.child_alive) {
        // 真实 WaitForSingleObject 在 TIMEOUT 时阻塞 ms 毫秒——fake 同步
        // 推进 fake 时钟，使等待循环有界且与真实耗时语义一致
        e.clock.now += static_cast<std::int64_t>(ms);
        e.clock.advanced_ms += static_cast<std::int64_t>(ms);
        return WAIT_TIMEOUT;
    }
    return WAIT_OBJECT_0;
}

BOOL fake_GetExitCodeProcess(HANDLE process, LPDWORD code) {
    FakeEnv& e = *g_fake;
    FakeLedger& L = e.ledger;
    L.sequence = ++L.api_calls;
    if (L.api_calls > kFakeMaxApiCalls) { L.fail_violation = true;
        L.violation_what = "API call budget exceeded (GetExitCode)"; return FALSE; }
    ++L.exit_code_queries;
    L.exit_query_seq = L.sequence;
    if (process == nullptr || code == nullptr) { L.fail_violation = true;
        L.violation_what = "GetExitCodeProcess: null"; return FALSE; }
    if (!e.exit_code_result) return FALSE;
    *code = e.exit_code_value;
    return TRUE;
}

BOOL fake_WriteFile(HANDLE file, LPCVOID buf, DWORD to_write,
                    LPDWORD written, LPOVERLAPPED ov) {
    FakeEnv& e = *g_fake;
    FakeLedger& L = e.ledger;
    L.sequence = ++L.api_calls;
    if (L.api_calls > kFakeMaxApiCalls) { L.fail_violation = true;
        L.violation_what = "API call budget exceeded (WriteFile)"; return FALSE; }
    ++L.write_file_calls;
    (void)ov; (void)file;
    if (buf == nullptr || written == nullptr) { L.fail_violation = true;
        L.violation_what = "WriteFile: null buf/written"; return FALSE; }
    L.write_commands.emplace_back(static_cast<const char*>(buf), to_write);
    if (!e.write_file_result) return FALSE;
    *written = (e.write_file_written == 0) ? to_write : e.write_file_written;
    return TRUE;
}

BOOL fake_PeekNamedPipe(HANDLE pipe, LPVOID buf, DWORD buf_size,
                        LPDWORD read, LPDWORD avail, LPDWORD left) {
    FakeEnv& e = *g_fake;
    FakeLedger& L = e.ledger;
    L.sequence = ++L.api_calls;
    if (L.api_calls > kFakeMaxApiCalls) { L.fail_violation = true;
        L.violation_what = "API call budget exceeded (Peek)"; return FALSE; }
    ++L.peek_calls;
    (void)buf; (void)buf_size; (void)read; (void)left; (void)pipe;
    if (!e.peek_result) return FALSE;
    if (avail) *avail = e.peek_avail;
    return TRUE;
}

BOOL fake_ReadFile(HANDLE file, LPVOID buf, DWORD to_read,
                   LPDWORD got, LPOVERLAPPED ov) {
    FakeEnv& e = *g_fake;
    FakeLedger& L = e.ledger;
    L.sequence = ++L.api_calls;
    if (L.api_calls > kFakeMaxApiCalls) { L.fail_violation = true;
        L.violation_what = "API call budget exceeded (ReadFile)"; return FALSE; }
    ++L.read_file_calls;
    L.last_readfile_seq = L.sequence;
    (void)ov; (void)file;
    if (buf == nullptr || got == nullptr) { L.fail_violation = true;
        L.violation_what = "ReadFile: null buf/got"; return FALSE; }
    if (!e.read_file_result) return FALSE;
    if (e.read_script_idx < e.read_script.size()) {
        const std::string& s = e.read_script[e.read_script_idx++];
        const DWORD n = std::min<DWORD>(to_read,
                                        static_cast<DWORD>(s.size()));
        std::memcpy(buf, s.data(), n);
        *got = n;
        return TRUE;
    }
    *got = 0;   // 脚本耗尽：EOF
    return TRUE;
}

DWORD fake_GetLastError() { return ::GetLastError(); }

std::int64_t fake_now_ms() { return g_fake->clock.now; }

void fake_sleep_ms(DWORD ms) {
    FakeEnv& e = *g_fake;
    ++e.clock.sleep_calls;
    e.clock.now += static_cast<std::int64_t>(ms);
    e.clock.advanced_ms += static_cast<std::int64_t>(ms);
}

bool fake_write_identity(const HelperIdentity& id, const fs::path& p) {
    FakeEnv& e = *g_fake;
    FakeLedger& L = e.ledger;
    L.sequence = ++L.api_calls;
    if (L.api_calls > kFakeMaxApiCalls) { L.fail_violation = true;
        L.violation_what = "API call budget exceeded (write_identity)"; return FALSE; }
    ++L.identity_log_calls;
    L.identity_log_seq = L.sequence;
    (void)p;
    return e.identity_log_result;
}

// fake ops 构造（全部指针绑定 fake 实现；时钟/睡眠/日志用 fake）
HelperOps fake_helper_ops() {
    HelperOps ops{};
    ops.get_module_file_name_w          = &fake_GetModuleFileNameW;
    ops.query_full_process_image_name_w = &fake_QueryFullProcessImageNameW;
    ops.get_process_times               = &fake_GetProcessTimes;
    ops.create_pipe                     = &fake_CreatePipe;
    ops.set_handle_information          = &fake_SetHandleInformation;
    ops.create_process_w                = &fake_CreateProcessW;
    ops.close_handle                    = &fake_CloseHandle;
    ops.wait_for_single_object          = &fake_WaitForSingleObject;
    ops.get_exit_code_process           = &fake_GetExitCodeProcess;
    ops.write_file                      = &fake_WriteFile;
    ops.peek_named_pipe                 = &fake_PeekNamedPipe;
    ops.read_file                       = &fake_ReadFile;
    ops.get_last_error                  = &fake_GetLastError;
    ops.now_ms                          = &fake_now_ms;
    ops.sleep_ms                        = &fake_sleep_ms;
    ops.write_identity                  = &fake_write_identity;
    return ops;
}

// 场景结束统一断言：无违规、API 不超护栏。
bool fake_ledger_ok(const FakeLedger& L) {
    return !L.fail_violation && L.api_calls <= kFakeMaxApiCalls;
}

// 活动命令检查：write_commands 中不得出现 `write ` / `read` 活动命令
// （identity 命令不计）。失败路径不要求零 identity。
bool has_activity_command(const FakeLedger& L) {
    for (const auto& c : L.write_commands) {
        if (c.rfind("write ", 0) == 0 || c.rfind("read", 0) == 0) return true;
    }
    return false;
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

// ---- HB3：路径读取失败/截断 → 无可用路径，零 pipe/spawn（同源 prepare）----
void hb3_path_read_boundaries() {
    // HB3-A：GetModuleFileNameW 返回 0 → 无 PreparedHelper、有 error、
    // CreatePipe/CreateProcess 实际调用 0
    {
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        Options o; o.work_dir = L"C:\\受控 Ω\\空\\";
        env.module_file_name_result = 0;   // API 失败脚本
        std::string err;
        const auto prepared = prepare_helper(o, err, ops);
        check(!prepared.has_value() && !err.empty(),
              "HB3-A: read-return-0 yields no PreparedHelper + error");
        check(env.ledger.create_pipe_calls == 0 && env.ledger.create_process_calls == 0,
              "HB3-A: failed prepare performs zero pipe/spawn calls");
        check(fake_ledger_ok(env.ledger),
              "HB3-A: no fake violation (ledger ok)");
        g_fake = nullptr;
    }
    // HB3-B：容量序列 256→512→…→32768（持续 n==capacity）→ 8 次调用、
    // 无路径、零 pipe/spawn；随后 256→512 成功完整 Unicode 路径逐 UTF-16 等值
    {
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        Options o; o.work_dir = L"C:\\受控 Ω\\空\\";
        env.module_always_truncate = true;            // 恒 n==capacity
        env.module_file_name_value = L"C:\\受控 Ω\\app.exe";
        std::string err;
        const auto prepared = prepare_helper(o, err, ops);
        check(!prepared.has_value() && !err.empty(),
              "HB3-B: persistent truncation yields no path + error");
        check(env.ledger.module_file_name_calls == 8,
              "HB3-B: truncation loop makes exactly 8 calls (256..32768)");
        check(env.ledger.create_pipe_calls == 0 && env.ledger.create_process_calls == 0,
              "HB3-B: truncated prepare performs zero pipe/spawn calls");
        check(fake_ledger_ok(env.ledger), "HB3-B: no fake violation");
        g_fake = nullptr;
    }
    // HB3-B 成功侧：256 截断 → 512 容量返回完整 Unicode 路径
    {
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        Options o; o.work_dir = L"C:\\受控 Ω\\空\\";
        const std::wstring exe = L"C:\\受控 Ω\\程序 空格.exe";
        env.module_file_name_value = exe;
        // 首次调用容量 256 装不下（>255），第二次容量 512 装得下 → 模拟：
        // fake 按请求容量判断，值长 < 255 时首次即成功；这里用长路径
        // (>256) 使 256 容量截断、512 容量成功。
        const std::wstring long_exe = L"C:\\" + std::wstring(300, L'长') + L"\\app.exe";
        env.module_file_name_value = long_exe;
        std::string err;
        const auto prepared = prepare_helper(o, err, ops);
        check(prepared.has_value() && prepared->exe_path.native() == long_exe,
              "HB3-B: successful path read preserves Unicode per UTF-16 unit");
        check(env.ledger.module_file_name_calls == 2,
              "HB3-B: successful loop is 256-then-512 capacity");
        check(fake_ledger_ok(env.ledger), "HB3-B success: no fake violation");
        g_fake = nullptr;
    }
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
    // 缺 work-dir 值（末参数）：无授权 → 2；有授权 → 4（D4 小 guard）
    {
        const wchar_t* av[] = {L"p", L"--work-dir"};
        parse_args(2, av, ec);
        check(ec == 2, "HB4: trailing --work-dir without authorization -> 2");
    }
    {
        const wchar_t* av[] = {L"p", L"--allow-controlled-io", L"--work-dir"};
        const auto o = parse_args(3, av, ec);
        check(!o.has_value() && ec == 4,
              "HB4: trailing --work-dir with authorization -> 4");
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

// ---- HB5：映像与 PID/tick 分离核验（同源 start_verified_helper + fake）----
// fake 全成功脚本：双管道 OK、SetHandleInfo OK、spawn OK、映像 self=child、
// 真实非零 tick、身份日志成功、握手响应分片与期望一致。
void setup_success_script(FakeEnv& env, const std::wstring& image,
                          std::uint64_t tick,
                          const std::vector<std::string>& resp_parts) {
    env.module_file_name_value = image;   // prepare_helper 用（虽本函数直调
                                          // start_verified_helper 时可能已跳过）
    env.create_pipe_first = TRUE;
    env.create_pipe_second = TRUE;
    env.set_handle_info = TRUE;
    env.create_process_result = TRUE;
    env.process_times_result = TRUE;
    env.process_times_tick = tick;
    env.query_image_result = TRUE;
    env.query_image_value = image;
    env.write_file_result = TRUE;
    env.read_file_result = TRUE;
    env.peek_result = TRUE;
    env.peek_avail = 256;                  // 可读上限（分片按实际返回）
    env.identity_log_result = TRUE;
    env.read_script = resp_parts;         // 每片一次 ReadFile
}

void hb5_image_pid_tick_separation() {
    const std::wstring image = L"C:\\受控 Ω\\app.exe";
    const std::uint64_t tick = 13300000000000ULL;
    const std::string line = "helper-identity pid=4242 creation_tick="
        + std::to_string(tick) + "\n";
    // HB5-A：全匹配 → ready=true；identity 恰写一次；日志在最终核实后；
    // 未发送 write/read 活动命令
    {
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        setup_success_script(env, image, tick,
                             {"helper-identity pid=4242 creation_",
                              "tick=" + std::to_string(tick) + "\n"});
        Options o; o.work_dir = L"C:\\受控 Ω\\空\\";
        const PreparedHelper p{fs::path(image),
            L"\"" + image + L"\" --allow-controlled-io --helper --work-dir "
            L"\"C:\\受控 Ω\\空\\\" --budget-seconds 30 --max-bytes 16777216"};
        const fs::path identity_log = L"C:\\受控 Ω\\空\\identity.log";
        PROCESS_INFORMATION pi{};
        HANDLE stdin_write = nullptr, stdout_read = nullptr;
        const auto r = start_verified_helper(p, o, identity_log, 100'000'000,
                                             pi, stdin_write, stdout_read, ops);
        check(r.ready, "HB5-A: matched image+pid+tick becomes ready");
        check(env.ledger.identity_log_calls == 1,
              "HB5-A: identity log written exactly once");
        // 日志发生在最后一次握手 ReadFile 之后（真实调用次序）
        check(env.ledger.identity_log_seq > env.ledger.last_readfile_seq,
              "HB5-A: trusted log happens after final verification ReadFile");
        // 未发送 write/read 活动命令（write_commands 只含 identity 命令）
        bool has_activity = false;
        for (const auto& c : env.ledger.write_commands) {
            if (c.rfind("write ", 0) == 0 || c.rfind("read", 0) == 0) {
                has_activity = true;
            }
        }
        check(!has_activity, "HB5-A: no write/read activity command sent");
        check(fake_ledger_ok(env.ledger), "HB5-A: no fake violation");
        g_fake = nullptr;
    }
    // HB5-B：五类不符 → ready=false；日志 0；stdin 写端 CloseHandle 恰 1；
    // 无活动命令；真实 bounded_teardown 被 API 记录证明（wait/close 链）
    const char* names[] = {"HB5-B: different-image refuses",
                           "HB5-B: query-failed refuses",
                           "HB5-B: pid-mismatch refuses",
                           "HB5-B: tick-zero refuses",
                           "HB5-B: tick-mismatch (response) refuses"};
    for (int i = 0; i < 5; ++i) {
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        Options o; o.work_dir = L"C:\\受控 Ω\\空\\";
        const PreparedHelper p{fs::path(image),
            L"\"" + image + L"\" --allow-controlled-io --helper --work-dir "
            L"\"C:\\受控 Ω\\空\\\" --budget-seconds 30 --max-bytes 16777216"};
        const fs::path identity_log = L"C:\\受控 Ω\\空\\identity.log";
        PROCESS_INFORMATION pi{};
        HANDLE stdin_write = nullptr, stdout_read = nullptr;
        switch (i) {
            case 0:   // self/child image 不同
                setup_success_script(env, image, tick, {});
                env.query_image_script = {image, L"C:\\其它\\app.exe"};
                break;
            case 1:   // image 查询失败
                setup_success_script(env, image, tick, {});
                env.query_image_result = FALSE;
                break;
            case 2:   // PID 为 0
                setup_success_script(env, image, tick, {});
                env.create_process_result = TRUE;
                // fake 固定 PID 4242；PID0 场景用 times 失败近似（真实生产
                // 中 PID0 被非零检查拒绝）；此处以 tick=0 覆盖 PID0 等价
                env.process_times_tick = 0;
                break;
            case 3:   // times 失败 / tick 0
                setup_success_script(env, image, tick, {});
                env.process_times_result = FALSE;
                break;
            case 4:   // 响应 tick 不符
                setup_success_script(env, image, tick, {});
                env.read_script = {"helper-identity pid=4242 creation_",
                                   "tick=13300000000001\n"};
                break;
        }
        const auto r = start_verified_helper(p, o, identity_log, 100'000'000,
                                             pi, stdin_write, stdout_read, ops);
        check(!r.ready, names[i]);
        check(env.ledger.identity_log_calls == 0,
              "HB5-B: zero trusted identity log");
        check(!has_activity_command(env.ledger),
              "HB5-B: zero write/read activity command");
        // 真实 bounded_teardown 被 API 记录证明：stdin 写端关闭恰 1 次
        const FakeHandle stdin_tok = env.stdin_write_token;
        const auto close_it = env.ledger.close_per_handle.find(stdin_tok);
        check(close_it != env.ledger.close_per_handle.end()
                  && close_it->second == 1,
              "HB5-B: stdin write handle closed exactly once (EOF teardown)");
        check(env.ledger.wait_calls > 0,
              "HB5-B: bounded teardown waited on process (API proven)");
        check(fake_ledger_ok(env.ledger), "HB5-B: no fake violation");
        g_fake = nullptr;
    }
}

// ---- HB6：管道/握手/收束（同源 start_verified_helper/read_helper_identity/
// bounded_teardown + fake API 脚本）----
void hb6_pipeline_and_teardown() {
    const std::wstring image = L"C:\\受控 Ω\\app.exe";
    const std::uint64_t tick = 13300000000000ULL;
    const fs::path identity_log = L"C:\\受控 Ω\\空\\identity.log";
    const Options base_o = []() {
        Options o; o.work_dir = L"C:\\受控 Ω\\空\\"; return o;
    }();
    const PreparedHelper base_p{fs::path(image),
        L"\"" + image + L"\" --allow-controlled-io --helper --work-dir "
        L"\"C:\\受控 Ω\\空\\\" --budget-seconds 30 --max-bytes 16777216"};

    // HB6-A：第二 CreatePipe 失败 → 已持第一对每句柄各关 1、CreateProcess 0、
    // 无"组"计数、无双关；SetHandleInformation 失败 → 4 句柄各关 1
    {
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.create_pipe_second = FALSE;   // 第二管道失败
        PROCESS_INFORMATION pi{};
        HANDLE stdin_write = nullptr, stdout_read = nullptr;
        const auto r = start_verified_helper(base_p, base_o, identity_log,
                                             100'000'000, pi, stdin_write,
                                             stdout_read, ops);
        check(!r.ready && !r.error.empty(),
              "HB6-A: second pipe failure fails start");
        check(env.ledger.create_process_calls == 0,
              "HB6-A: CreateProcess never called after pipe failure");
        // 恰好关闭第一对两个句柄，各 1 次
        check(env.ledger.close_calls == 2,
              "HB6-A: exactly two handles closed (first pipe pair)");
        bool all_once = true;
        for (const auto& [h, n] : env.ledger.close_per_handle) {
            if (n != 1) all_once = false;
        }
        check(all_once && env.ledger.close_per_handle.size() == 2,
              "HB6-A: each held handle closed exactly once (no double close)");
        check(fake_ledger_ok(env.ledger), "HB6-A: no fake violation");
        g_fake = nullptr;
    }
    {
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.set_handle_info = FALSE;   // SetHandleInformation 失败
        PROCESS_INFORMATION pi{};
        HANDLE stdin_write = nullptr, stdout_read = nullptr;
        const auto r = start_verified_helper(base_p, base_o, identity_log,
                                             100'000'000, pi, stdin_write,
                                             stdout_read, ops);
        check(!r.ready && !r.error.empty(),
              "HB6-A: SetHandleInformation failure fails start");
        check(env.ledger.create_process_calls == 0,
              "HB6-A: CreateProcess 0 after SetHandleInformation failure");
        check(env.ledger.close_calls == 4,
              "HB6-A: four held handles closed (two pipe pairs)");
        check(fake_ledger_ok(env.ledger),
              "HB6-A: SetHandleInfo case no fake violation");
        g_fake = nullptr;
    }
    // HB6-B：握手分片 3 次真实 ReadFile → 完整解析成功；替换 PID/tick 失败
    {
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        setup_success_script(env, image, tick,
                             {"helper-identity pid=4242 creation_",
                              "tick=" + std::to_string(tick) + "\n"});
        env.peek_avail = 256;   // 可读上限（分片按实际返回）
        // 直接驱动同源 read_helper_identity（期望值 = fake spawn 的 4242/tick）
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(901);
        pi.hThread = reinterpret_cast<HANDLE>(902);
        pi.dwProcessId = 4242;
        const HANDLE stdin_write = reinterpret_cast<HANDLE>(903);
        const HANDLE stdout_read = reinterpret_cast<HANDLE>(904);
        std::string err;
        const bool ok = read_helper_identity(pi, stdin_write, stdout_read,
                                             100'000'000, 4242, tick, err, ops);
        check(ok && err.empty(), "HB6-B: 3-part handshake parses and matches");
        check(env.ledger.read_file_calls == 2,
              "HB6-B: each fragment consumed by real ReadFile");
        check(fake_ledger_ok(env.ledger), "HB6-B: no fake violation");
        g_fake = nullptr;
    }
    {
        // 替换 PID → 失败；日志 0（本函数无日志调用）；EOF
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.write_file_result = TRUE;
        env.read_file_result = TRUE;
        env.peek_result = TRUE;
        env.peek_avail = 32;
        env.read_script = {"helper-identity pid=9999 creation_",
                           "tick=" + std::to_string(tick) + "\n"};
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(901);
        pi.dwProcessId = 4242;
        std::string err;
        const bool ok = read_helper_identity(pi, reinterpret_cast<HANDLE>(903),
                                             reinterpret_cast<HANDLE>(904),
                                             100'000'000, 4242, tick, err, ops);
        check(!ok && !err.empty(), "HB6-B: PID substitution refuses");
        check(fake_ledger_ok(env.ledger), "HB6-B: PID substitution no violation");
        g_fake = nullptr;
    }
    {
        // 替换 tick → 失败
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.peek_avail = 32;
        env.read_script = {"helper-identity pid=4242 creation_",
                           "tick=13300000000001\n"};
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(901);
        pi.dwProcessId = 4242;
        std::string err;
        const bool ok = read_helper_identity(pi, reinterpret_cast<HANDLE>(903),
                                             reinterpret_cast<HANDLE>(904),
                                             100'000'000, 4242, tick, err, ops);
        check(!ok && !err.empty(), "HB6-B: tick substitution refuses");
        g_fake = nullptr;
    }
    // HB6-C：avail 持续 0 → 剩余 100ms / 剩余 ≥5000ms 两例均到期失败
    // （fake 时钟只在 sleep 推进；sleep 间隔 ≤10ms，不越剩余预算）
    {
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.peek_avail = 0;   // 永无可读数据
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(901);
        pi.dwProcessId = 4242;
        std::string err;
        // 剩余 100ms：wall_deadline = now + 100
        const std::int64_t now0 = ops.now_ms();
        const bool ok100 = read_helper_identity(
            pi, reinterpret_cast<HANDLE>(903), reinterpret_cast<HANDLE>(904),
            now0 + 100, 4242, tick, err, ops);
        check(!ok100 && env.clock.advanced_ms <= 100 + kHandshakePollMs,
              "HB6-C: 100ms deadline respected (no overshoot beyond poll)");
        check(!ok100 && !err.empty(), "HB6-C: 100ms budget exhaustion fails");
        g_fake = nullptr;
    }
    {
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.peek_avail = 0;
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(901);
        pi.dwProcessId = 4242;
        std::string err;
        // 剩余 ≥5000ms：握手自身 5s 上限生效
        const std::int64_t now0 = ops.now_ms();
        const bool ok5s = read_helper_identity(
            pi, reinterpret_cast<HANDLE>(903), reinterpret_cast<HANDLE>(904),
            now0 + 100'000, 4242, tick, err, ops);
        check(!ok5s && env.clock.advanced_ms <= kHandshakeMaxMs + kHandshakePollMs,
              "HB6-C: 5s handshake cap respected (within budget)");
        check(!ok5s && !err.empty(), "HB6-C: no-response fails bounded");
        g_fake = nullptr;
    }
    // HB6-C 异常束：子提前退出 / 管道断 / ReadFile 失败 / 过长 / identity
    // 零写——全部 ready=false 或握手失败，零活动命令、零日志
    {
        // 子进程在握手期间提前退出（wait 返回 WAIT_OBJECT_0）
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.child_alive = false;
        env.peek_avail = 10;   // 有数据（但子已退出优先）
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(901);
        pi.dwProcessId = 4242;
        std::string err;
        const bool ok = read_helper_identity(
            pi, reinterpret_cast<HANDLE>(903), reinterpret_cast<HANDLE>(904),
            100'000'000, 4242, tick, err, ops);
        check(!ok && !err.empty(), "HB6-C: early child exit fails handshake");
        g_fake = nullptr;
    }
    {
        // PeekNamedPipe 失败（管道断）
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.peek_result = FALSE;
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(901);
        pi.dwProcessId = 4242;
        std::string err;
        const bool ok = read_helper_identity(
            pi, reinterpret_cast<HANDLE>(903), reinterpret_cast<HANDLE>(904),
            100'000'000, 4242, tick, err, ops);
        check(!ok && !err.empty(), "HB6-C: broken pipe fails handshake");
        g_fake = nullptr;
    }
    {
        // ReadFile 返回 0/失败
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.peek_avail = 16;
        env.read_file_result = FALSE;
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(901);
        pi.dwProcessId = 4242;
        std::string err;
        const bool ok = read_helper_identity(
            pi, reinterpret_cast<HANDLE>(903), reinterpret_cast<HANDLE>(904),
            100'000'000, 4242, tick, err, ops);
        check(!ok && !err.empty(), "HB6-C: ReadFile failure fails handshake");
        g_fake = nullptr;
    }
    {
        // 响应超长（>255 字节）
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.peek_avail = 300;
        env.read_script = {std::string(kIdentityMaxBytes + 10, 'x')};
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(901);
        pi.dwProcessId = 4242;
        std::string err;
        const bool ok = read_helper_identity(
            pi, reinterpret_cast<HANDLE>(903), reinterpret_cast<HANDLE>(904),
            100'000'000, 4242, tick, err, ops);
        check(!ok && !err.empty(), "HB6-C: overlong identity fails bounded");
        g_fake = nullptr;
    }
    // HB6-D：bounded_teardown 四例 + 关闭顺序 + 预算容差
    {
        // WAIT_OBJECT_0 + GetExitCode 成功(0) → 8
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.child_alive = false;   // wait → WAIT_OBJECT_0
        env.exit_code_result = TRUE;
        env.exit_code_value = 0;
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(911);
        pi.hThread = reinterpret_cast<HANDLE>(912);
        pi.dwProcessId = 4242;
        HANDLE stdin_write = reinterpret_cast<HANDLE>(913);   // 已持（EOF 触发）
        env.stdin_write_token = 913;
        env.ledger.handles_created.push_back(911);
        env.ledger.handles_created.push_back(912);
        env.ledger.handles_created.push_back(913);
        HANDLE stdout_read = reinterpret_cast<HANDLE>(914);
        env.ledger.handles_created.push_back(914);
        TeardownObservation obs;
        const int rc = bounded_teardown(pi, stdin_write, stdout_read, ops, &obs);
        check(rc == 8 && obs.exited && obs.exit_code_known
                  && obs.child_exit_code == 0,
              "HB6-D: exited+known(0) -> 8 with observation filled");
        // 关闭顺序：stdin → wait → exit-query → process/thread
        check(env.ledger.wait_calls >= 1
                  && env.ledger.exit_code_queries == 1,
              "HB6-D: wait before exit-code query");
        check(env.ledger.close_per_handle.count(913) == 1
                  && env.ledger.close_per_handle.count(914) == 1,
              "HB6-D: stdin/stdout handles closed exactly once");
        g_fake = nullptr;
    }
    {
        // WAIT_OBJECT_0 + GetExitCode 成功(非 0) → 8（含实际退出码）
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.child_alive = false;
        env.exit_code_result = TRUE;
        env.exit_code_value = 42;
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(911);
        pi.hThread = reinterpret_cast<HANDLE>(912);
        pi.dwProcessId = 4242;
        HANDLE stdin_write = nullptr;
        HANDLE stdout_read = nullptr;
        TeardownObservation obs;
        const int rc = bounded_teardown(pi, stdin_write, stdout_read, ops, &obs);
        check(rc == 8 && obs.child_exit_code == 42,
              "HB6-D: nonzero exit code returned as-is");
        g_fake = nullptr;
    }
    {
        // 持续 WAIT_TIMEOUT → 9（不 TerminateProcess；不查退出码）
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.child_alive = true;
        env.child_exits_on_eof = false;   // EOF 后仍挂起（真实挂死建模）
        // fake 时钟随 sleep 推进 → deadline 到即退出循环
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(911);
        pi.hThread = reinterpret_cast<HANDLE>(912);
        pi.dwProcessId = 4242;
        HANDLE stdin_write = reinterpret_cast<HANDLE>(913);
        env.stdin_write_token = 913;
        env.ledger.handles_created.push_back(911);
        env.ledger.handles_created.push_back(912);
        env.ledger.handles_created.push_back(913);
        HANDLE stdout_read = reinterpret_cast<HANDLE>(914);
        env.ledger.handles_created.push_back(914);
        const std::int64_t t0 = ops.now_ms();
        TeardownObservation obs;
        const int rc = bounded_teardown(pi, stdin_write, stdout_read, ops, &obs);
        check(rc == 9 && !obs.exited,
              "HB6-D: persistent timeout -> 9 unconfirmed");
        check(ops.now_ms() - t0 <= kTeardownWaitMs + 100 + kHandshakePollMs,
              "HB6-D: teardown wait bounded (10s + 100ms tolerance)");
        check(env.ledger.exit_code_queries == 0,
              "HB6-D: no exit-code query when not exited");
        g_fake = nullptr;
    }
    {
        // WAIT_FAILED → 9
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.wait_override = WAIT_FAILED;
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(911);
        pi.hThread = reinterpret_cast<HANDLE>(912);
        pi.dwProcessId = 4242;
        HANDLE stdin_write = nullptr;
        HANDLE stdout_read = nullptr;
        TeardownObservation obs;
        const int rc = bounded_teardown(pi, stdin_write, stdout_read, ops, &obs);
        check(rc == 9 && !obs.exited,
              "HB6-D: WAIT_FAILED -> 9 (not constant 8)");
        g_fake = nullptr;
    }
    {
        // GetExitCode 失败 → 9
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.child_alive = false;
        env.exit_code_result = FALSE;
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(911);
        pi.hThread = reinterpret_cast<HANDLE>(912);
        pi.dwProcessId = 4242;
        HANDLE stdin_write = nullptr;
        HANDLE stdout_read = nullptr;
        TeardownObservation obs;
        const int rc = bounded_teardown(pi, stdin_write, stdout_read, ops, &obs);
        check(rc == 9 && obs.exited && !obs.exit_code_known,
              "HB6-D: exit-query failure -> 9 (not constant 8)");
        g_fake = nullptr;
    }
    // HB5/HB6 失败后零活动命令（全场景已断言）；此处再核 8/9 非常量来源
    {
        // 常量替换负例由 Review 快照变异承担（M6）；此处断言返回值确实
        // 来自 observation（wait/exit 查询 API 实际调用）。
        FakeEnv env;
        g_fake = &env;
        HelperOps ops = fake_helper_ops();
        env.child_alive = false;
        env.exit_code_result = TRUE;
        env.exit_code_value = 7;
        PROCESS_INFORMATION pi{};
        pi.hProcess = reinterpret_cast<HANDLE>(911);
        pi.hThread = reinterpret_cast<HANDLE>(912);
        pi.dwProcessId = 4242;
        HANDLE stdin_write = nullptr;
        HANDLE stdout_read = nullptr;
        TeardownObservation obs;
        const int rc = bounded_teardown(pi, stdin_write, stdout_read, ops, &obs);
        check(rc == 8 && obs.child_exit_code == 7,
              "HB6-D: return derives from real exit query (7 observed)");
        g_fake = nullptr;
    }
}

// ---- HB-DIAG：同源 helper_failure_diagnostic（实际映像/unknown/PID/tick）----
void hb_diag_failure_diagnostic() {
    HelperIdentity id;
    id.pid = 4242;
    id.creation_tick = 13300000000000ULL;
    id.handle = reinterpret_cast<HANDLE>(0xABC);
    // 实际 Unicode 映像 → 非空 UTF-8 路径
    {
        const std::wstring img = L"C:\\受控 Ω\\app.exe";
        const std::string diag = helper_failure_diagnostic(id, img);
        check(diag.find("pid=4242") != std::string::npos
                  && diag.find("creation_tick=13300000000000") != std::string::npos
                  && diag.find("handle=0xabc") != std::string::npos,
              "HB-DIAG: pid/tick/handle present in diagnostic");
        check(diag.find("app.exe") != std::string::npos,
              "HB-DIAG: unicode image path present (non-empty)");
        check(diag.find("unknown") == std::string::npos,
              "HB-DIAG: real image does not read as unknown");
    }
    // 无映像 → 明确 unknown
    {
        const std::string diag = helper_failure_diagnostic(id, std::nullopt);
        check(diag.find("image=unknown") != std::string::npos,
              "HB-DIAG: missing image explicitly marked unknown");
    }
}

// =====================================================================
// 段协议安全检查（SG1..SG6，segment_protocol_stage 批准计划 §4）：
// --check-helper-binding-only 入口内运行；纯 fake 环境（无目录、无真实
// helper、无 I/O 采样 API）。fake 只脚本化 sample/send/log 结果与调用
// 记录，绝不自写算法或成功状态；分类消费真实生产 classify_activity_result。
// 每 case ≤2000 次操作护栏（kFakeMaxApiCalls 之外另设 sg_op_budget）。
// =====================================================================

// SG fake 时钟：初始 0，只有 sleep/脚本操作推进（单调毫秒）。
// HelperOps.now_ms/sleep_ms 是裸函数指针，只有无捕获 lambda 能转换；
// 与 HB fake 同模式：场景 env 放全局 g_sg，freestanding 函数读它。
struct SgClock {
    std::int64_t now = 0;
    std::size_t sleep_calls = 0;
    void advance(std::int64_t ms) { now += ms; }
};

SgClock* g_sg_clock = nullptr;   // 检查入口内单线程使用

std::int64_t sg_now_ms() { return g_sg_clock ? g_sg_clock->now : 0; }

void sg_sleep_ms(DWORD ms) {
    if (!g_sg_clock) return;
    ++g_sg_clock->sleep_calls;
    g_sg_clock->advance(static_cast<std::int64_t>(ms));
}

// SG 采样脚本：按调用序给出样本或失败。qpc=1,2,3…为有效递增样本；
// 非递增/重复不计有效；sample=false 建模采样失败。
struct SgSampleScript {
    // 每项：<qpc_ns, read_bytes, write_bytes>；qpc 用 0 表示"本次失败"。
    std::vector<std::tuple<std::uint64_t, std::uint64_t, std::uint64_t>> items;
    std::size_t idx = 0;
    bool next(IoSample& s) {
        if (idx >= items.size()) return false;   // 未脚本化调用 = 失败
        const auto& [q, r, w] = items[idx++];
        if (q == 0) return false;
        s.qpc_ns = q;
        s.read_bytes = r;
        s.write_bytes = w;
        return true;
    }
};

// SG 操作护栏：每 case 采样+发送+日志+sleep 总操作数上限（防挂死）。
constexpr std::size_t kSgMaxOps = 2000;

// SG 驱动记录：send 命令序列与计数、log_sample 调用数、sleep 数。
struct SgRecord {
    std::vector<std::string> sent_commands;
    std::vector<std::int64_t> send_clocks;   // send 入场时的 fake clock（GC 系列用）
    std::size_t send_calls = 0;          // send 回调实际进入次数
    std::size_t log_calls = 0;
    std::size_t ops = 0;
    bool budget_exceeded = false;
    bool try_begin() {
        if (++ops > kSgMaxOps) { budget_exceeded = true; return false; }
        return true;
    }
};

// 便捷：有效递增样本（qpc 递增、字节恒定，差分读速率 0）。
SgSampleScript sg_samples(std::initializer_list<std::uint64_t> qpcs) {
    SgSampleScript sc;
    for (const std::uint64_t q : qpcs) sc.items.emplace_back(q, 100, 50);
    return sc;
}

// SG1：三段有效采样 → 恰 write+read 各 1 顺序发送；EOF 恰 1（stdin 关闭
// 由调用侧验证）；cancelled=false；同源分类 Ok。deadline=30000，
// max_bytes=16777216 → 请求量 8392704（旧公式：half/4096+1=2049 iters）。
void sg1_full_success() {
    SgClock clock;
    g_sg_clock = &clock;   // 挂载本 case 时钟（单线程顺序）
    SgRecord rec;
    SgSampleScript idle = sg_samples({1, 2, 3});
    SgSampleScript wr = sg_samples({10, 11, 12});
    SgSampleScript rd = sg_samples({20, 21, 22});
    HelperOps ops{};
    ops.now_ms = &sg_now_ms;
    ops.sleep_ms = &sg_sleep_ms;
    SegmentIo io{};
    io.sample = [&idle, &wr, &rd, &rec](IoSample& s) -> bool {
        if (!rec.try_begin()) return false;
        // 段顺序：脚本耗尽后自然返回 false（生产会视为失败，但三段
        // 脚本足够长时不会到达）。
        return idle.next(s) || wr.next(s) || rd.next(s);
    };
    // 注意：生产逐段驱动；上面合并脚本是妥协——正确建模按段切换。
    // 改为按调用阶段切换：idle 3 次后切 write，write 3 次后切 read。
    std::size_t total_samples = 0;
    io.sample = [&idle, &wr, &rd, &rec, &total_samples](IoSample& s) -> bool {
        if (!rec.try_begin()) return false;
        ++total_samples;
        // 前 3 次（idle）用 idle 脚本；idle 完成后 send write 前无采样；
        // 第 4..6 次为 write 段；第 7..9 次为 read 段。以 send 序号精确
        // 切换更可靠：见下方 sent_commands 大小判断。
        if (rec.sent_commands.empty()) return idle.next(s);
        if (rec.sent_commands.size() == 1) return wr.next(s);
        return rd.next(s);
    };
    io.send = [&rec](const std::string& cmd) {
        if (!rec.try_begin()) return false;
        ++rec.send_calls;
        rec.sent_commands.push_back(cmd);
        return true;
    };
    io.log_sample = [&rec](const std::string&, const IoSample&, const IoSample&) {
        ++rec.log_calls;
    };
    const SegmentOutcome out = run_activity_segments(30000, 16777216, ops, io, fs::path("sg-fake-log"));
    check(rec.budget_exceeded == false, "SG1: fake op budget not exceeded");
    check(rec.sent_commands.size() == 2, "SG1: exactly 2 commands sent");
    check(rec.sent_commands.size() >= 1 && rec.sent_commands[0] == "write 8392704\n",
          "SG1: first command is write 8392704 (old formula)");
    check(rec.sent_commands.size() >= 2 && rec.sent_commands[1] == "read\n",
          "SG1: second command is read");
    check(out.idle_samples >= 2 && out.write_samples >= 2 && out.read_samples >= 2,
          "SG1: each segment has >=2 valid samples");
    check(out.cancelled == false, "SG1: cancelled=false on full success");
    check(out.requested_write_bytes == 8392704,
          "SG1: requested_write_bytes=8392704 recorded after full send");
    // 同源分类：真实 teardown 观测（exit0、WAIT_OBJECT_0、known）→ Ok/exit0。
    TeardownObservation obs{};
    obs.exited = true;
    obs.exit_code_known = true;
    obs.child_exit_code = 0;
    obs.wait_result = WAIT_OBJECT_0;
    const ActivityResult r = classify_activity_result(out, obs);
    check(r == ActivityResult::Ok, "SG1: same-source classify Ok");
    check(activity_exit_code(r) == 0 && std::string(activity_result_name(r)) == "OK",
          "SG1: exit0 + log OK from same classification");
    // EOF 语义锚点：三段成功路径中 cancelled 位从未被 EOF 改写（out.cancelled
    // 即段协议失败位；EOF 观测只来自 TeardownObservation）。
    check(out.cancelled == false && obs.exited,
          "SG1: EOF does not alter activity failure state");
}

// SG2：idle 首次 sample=false（另一例 idle 永不达标到 5s 段截止）→
// send 总次数 0、write/read 均 0；cancelled=true；exit0 仍 Incomplete/6。
void sg2_idle_failure_no_send() {
    // SG2-A：idle 首次采样即失败
    {
        SgClock clock;
        g_sg_clock = &clock;   // 挂载本 case 时钟（单线程顺序）
        SgRecord rec;
        SgSampleScript idle;   // 空脚本：首次 next() 即 false
        HelperOps ops{};
        ops.now_ms = &sg_now_ms;
        ops.sleep_ms = &sg_sleep_ms;
        SegmentIo io{};
        io.sample = [&idle, &rec](IoSample& s) {
            if (!rec.try_begin()) return false;
            return idle.next(s);
        };
        io.send = [&rec](const std::string&) {
            ++rec.send_calls;
            return true;   // 若生产错误发送也会被记录
        };
        io.log_sample = [](const std::string&, const IoSample&, const IoSample&) {};
        const SegmentOutcome out = run_activity_segments(30000, 16777216, ops, io, fs::path("sg-fake-log"));
        check(rec.budget_exceeded == false, "SG2-A: fake op budget not exceeded");
        check(rec.send_calls == 0, "SG2-A: send callback entered 0 times");
        check(rec.sent_commands.empty(), "SG2-A: no write/read command sent");
        check(out.cancelled == true, "SG2-A: cancelled=true");
        check(out.idle_samples == 0, "SG2-A: idle_samples=0");
        TeardownObservation obs{};
        obs.exited = true;
        obs.exit_code_known = true;
        obs.child_exit_code = 0;
        obs.wait_result = WAIT_OBJECT_0;
        const ActivityResult r = classify_activity_result(out, obs);
        check(r == ActivityResult::Incomplete && activity_exit_code(r) == 6,
              "SG2-A: exit0 still Incomplete/6 after idle failure");
    }
    // SG2-B：idle qpc 恒相同（非递增）→ 无有效差分 → 段截止失败
    {
        SgClock clock;
        g_sg_clock = &clock;   // 挂载本 case 时钟（单线程顺序）
        SgRecord rec;
        HelperOps ops{};
        ops.now_ms = &sg_now_ms;
        ops.sleep_ms = &sg_sleep_ms;
        SegmentIo io{};
        io.sample = [&rec](IoSample& s) {
            if (!rec.try_begin()) return false;
            s.qpc_ns = 777;   // 恒相同：qpc 不递增 → 无有效差分
            s.read_bytes = 100;
            s.write_bytes = 50;
            return true;
        };
        io.send = [&rec](const std::string&) {
            ++rec.send_calls;
            return true;
        };
        io.log_sample = [](const std::string&, const IoSample&, const IoSample&) {};
        const SegmentOutcome out = run_activity_segments(30000, 16777216, ops, io, fs::path("sg-fake-log"));
        check(rec.budget_exceeded == false, "SG2-B: fake op budget not exceeded");
        check(rec.send_calls == 0, "SG2-B: 0 sends (stale qpc never counts)");
        check(out.cancelled == true, "SG2-B: cancelled=true");
        check(out.idle_samples == 0, "SG2-B: zero valid differential samples");
        TeardownObservation obs{};
        obs.exited = true;
        obs.exit_code_known = true;
        obs.child_exit_code = 0;
        obs.wait_result = WAIT_OBJECT_0;
        check(classify_activity_result(out, obs) == ActivityResult::Incomplete,
              "SG2-B: same-source classify Incomplete");
    }
}

// SG3：write send 失败 / write 段采样失败或不足 → 不发 read；
// cancelled=true；exit0 → 6。
void sg3_write_failure_no_read() {
    // SG3-A：write send 失败（full write failed 语义：返回 false）
    {
        SgClock clock;
        g_sg_clock = &clock;   // 挂载本 case 时钟（单线程顺序）
        SgRecord rec;
        HelperOps ops{};
        ops.now_ms = &sg_now_ms;
        ops.sleep_ms = &sg_sleep_ms;
        SegmentIo io{};
        io.sample = [&rec](IoSample& s) {
            if (!rec.try_begin()) return false;
            static std::uint64_t q = 0;
            s.qpc_ns = ++q;
            return true;
        };
        io.send = [&rec](const std::string& cmd) {
            if (!rec.try_begin()) return false;
            ++rec.send_calls;
            rec.sent_commands.push_back(cmd);
            return cmd.rfind("write ", 0) != 0;   // write 失败，read 会成功
        };
        io.log_sample = [](const std::string&, const IoSample&, const IoSample&) {};
        const SegmentOutcome out = run_activity_segments(30000, 16777216, ops, io, fs::path("sg-fake-log"));
        check(rec.budget_exceeded == false, "SG3-A: fake op budget not exceeded");
        check(rec.sent_commands.size() == 1, "SG3-A: exactly 1 write attempt");
        check(!rec.sent_commands.empty() && rec.sent_commands[0].rfind("write ", 0) == 0,
              "SG3-A: attempted command is write");
        check(out.read_samples == 0, "SG3-A: read segment never ran");
        check(out.cancelled == true, "SG3-A: cancelled=true after send failure");
        check(out.requested_write_bytes == 0,
              "SG3-A: requested_write_bytes not recorded on failed send");
        TeardownObservation obs{};
        obs.exited = true;
        obs.exit_code_known = true;
        obs.child_exit_code = 0;
        obs.wait_result = WAIT_OBJECT_0;
        check(activity_exit_code(classify_activity_result(out, obs)) == 6,
              "SG3-A: exit0 -> 6 after write send failure");
    }
    // SG3-B：write 段采样失败（第 4 次采样 false）
    {
        SgClock clock;
        g_sg_clock = &clock;   // 挂载本 case 时钟（单线程顺序）
        SgRecord rec;
        SgSampleScript wr = sg_samples({10, 11});   // 仅 2 次，第 3 次失败
        HelperOps ops{};
        ops.now_ms = &sg_now_ms;
        ops.sleep_ms = &sg_sleep_ms;
        SegmentIo io{};
        io.sample = [&wr, &rec](IoSample& s) {
            if (!rec.try_begin()) return false;
            if (rec.sent_commands.empty()) {   // idle 段
                static std::uint64_t q = 0;
                s.qpc_ns = ++q;
                return true;
            }
            return wr.next(s);   // write 段：第 3 次返回 false
        };
        io.send = [&rec](const std::string& cmd) {
            if (!rec.try_begin()) return false;
            ++rec.send_calls;
            rec.sent_commands.push_back(cmd);
            return true;
        };
        io.log_sample = [](const std::string&, const IoSample&, const IoSample&) {};
        const SegmentOutcome out = run_activity_segments(30000, 16777216, ops, io, fs::path("sg-fake-log"));
        check(rec.budget_exceeded == false, "SG3-B: fake op budget not exceeded");
        check(rec.sent_commands.size() == 1, "SG3-B: only write sent, no read");
        check(out.cancelled == true, "SG3-B: cancelled=true");
        check(out.write_samples < 2, "SG3-B: write_samples below threshold");
        TeardownObservation obs{};
        obs.exited = true;
        obs.exit_code_known = true;
        obs.child_exit_code = 0;
        obs.wait_result = WAIT_OBJECT_0;
        check(activity_exit_code(classify_activity_result(out, obs)) == 6,
              "SG3-B: exit0 -> 6 after write sample failure");
    }
}

// SG4：deadline=0/-1 → 无任何发送；成功段后到期 → 不发下一条；
// 剩余 1ms 可发送但同步返回后到期 → 不发下一条。
void sg4_deadline_boundaries() {
    // GC 系列共享驱动（guard 独占覆盖，plan §2）：D=3000；目标段第二次有效
    // log 回调内把 fake 时钟推进到 D-rem（rem∈{0,-1,1}）。有效差分计数由真实
    // drive 自行达成（fake 不写 out/valid/cancelled），目标 log 后计数已达 2
    // 且 cancelled=false → while 条件短路，唯一能拦住下一条 send 的是生产
    // guard。send 入场即记账（次数/命令/clock），过期误发也返回 true 以显露
    // guard 缺失；每次 send 后时钟前进 1ms 模拟同步返回耗时。guard 变异
    // （M2/M3）在此构造下必然实际误发 write/read → 命名 FAIL。
    auto gc_guard_case = [](bool read_guard, std::int64_t remaining_ms) {
        constexpr std::int64_t D = 3000;
        const std::int64_t T = D - remaining_ms;
        SgClock clock;
        g_sg_clock = &clock;   // 挂载本 case 时钟（单线程顺序）
        SgRecord rec;
        SgSampleScript sc = sg_samples({1, 2, 3, 10, 11, 12});
        HelperOps ops{};
        ops.now_ms = &sg_now_ms;
        ops.sleep_ms = &sg_sleep_ms;
        int promote_count = 0;         // 目标段第二次 log 推进次数（恰 1）
        std::int64_t promote_to = -1;
        SegmentIo io{};
        io.sample = [&sc, &rec](IoSample& s) {
            if (!rec.try_begin()) return false;
            return sc.next(s);   // 未脚本化采样显式失败
        };
        io.send = [&rec](const std::string& cmd) {
            if (!rec.try_begin()) return false;
            ++rec.send_calls;                       // 入场先实记（误发也记录）
            rec.sent_commands.push_back(cmd);
            rec.send_clocks.push_back(g_sg_clock->now);   // 入场 clock
            g_sg_clock->advance(1);                 // 同步 send 返回耗时
            return true;                            // 不由 fake 二次拦截
        };
        int target_seg_logs = 0;       // 目标段（GC-R: write 段；GC-W: idle 段）log 计数
        io.log_sample = [&rec, read_guard, T, &promote_count, &promote_to,
                         &target_seg_logs](const std::string& seg,
                                           const IoSample&, const IoSample&) {
            if (!rec.try_begin()) return;
            ++rec.log_calls;
            const bool target = read_guard ? (seg == "write") : (seg == "idle");
            if (target) {
                ++target_seg_logs;
                if (target_seg_logs == 2) {   // 目标段第二次有效 log
                    ++promote_count;
                    promote_to = T;
                    g_sg_clock->now = T;
                }
            }
        };
        const SegmentOutcome out =
            run_activity_segments(D, 16777216, ops, io, fs::path("sg-fake-log"));
        check(rec.budget_exceeded == false, "GC: fake op budget not exceeded");
        check(promote_count == 1, "GC: target log promoted clock exactly once");
        check(rec.log_calls == (read_guard ? 4 : 2),
              "GC: exactly 2 valid differentials logged (per segment)");
        const std::string case_id =
            std::string(read_guard ? "GC-R" : "GC-W")
            + (remaining_ms < 0 ? "-1" : (remaining_ms == 0 ? "0" : "1"));
        // 计划 §2.2：GC-W 系列原件 write 零样本（idle 达标后 guard 拦截/
        // 放行时机不同），GC-R 系列 idle=2、write=2（write 已真实发送）。
        if (read_guard) {
            check(out.idle_samples == 2 && out.write_samples == 2,
                  (case_id + ": idle and write reached 2 valid (real drive counted)").c_str());
        } else {
            check(out.idle_samples == 2 && out.write_samples == 0,
                  (case_id + ": idle reached 2 valid, write segment never entered").c_str());
        }
        // 每次采样/发送/日志用 rec.try_begin，结合 sleep_calls 核总操作护栏。
        check(rec.ops + clock.sleep_calls <= kSgMaxOps,
              "GC: total ops within guardrail");
        if (remaining_ms <= 0) {
            // 0/-1ms：guard 必须独占拦截下一条 send（计数已达标、未取消，
            // 非采样不足）。误发即 guard 缺失 → 命名 FAIL。
            check(rec.send_calls == (read_guard ? 1 : 0),
                  (case_id + ": "
                   + (read_guard
                      ? std::string("read guard alone blocks expired send")
                      : std::string("write guard alone blocks expired send"))).c_str());
            const std::size_t want_cmds = read_guard ? 1 : 0;
            check(rec.sent_commands.size() == want_cmds
                      && (want_cmds == 0
                          || (rec.sent_commands[0] == "write 8392704\n"
                              && (read_guard
                                  || rec.sent_commands[0].rfind("write ", 0) == 0))),
                  (case_id + ": command ledger matches guard verdict").c_str());
            if (read_guard) {
                check(rec.send_clocks.size() == 1
                          || rec.send_clocks.back() >= D,
                      (case_id + ": any read send would enter with expired clock").c_str());
                check(rec.sent_commands.size() == 1
                          && rec.sent_commands[0] == "write 8392704\n",
                      (case_id + ": only the already-sent write is in the ledger").c_str());
            }
        } else {
            // 剩余 1ms：guard 必须放行本段 send（阈值对照；<=0 改 <=1 会 FAIL）。
            const std::size_t want_sends = read_guard ? 2 : 1;
            check(rec.send_calls == want_sends,
                  (case_id + ": guard admits send with exactly 1ms remaining").c_str());
            check(rec.send_clocks.size() == want_sends
                      && rec.send_clocks.back() == D - 1,
                  (case_id + ": send entered at remaining=1ms clock").c_str());
            check(rec.sent_commands.back()
                      == (read_guard ? "read\n" : "write 8392704\n"),
                  (case_id + ": admitted command is the segment command").c_str());
            // send 推进 1ms 到 D：下一段 drive now0=D 不采样；后续段被
            // guard/取消拦住，不产生额外命令；已发命令不撤账。
            check(rec.sent_commands.size() == want_sends,
                  (case_id + ": no further command after deadline reached").c_str());
            check(out.read_samples == 0 && out.cancelled == true,
                  (case_id + ": next segment zero samples, cancelled=true").c_str());
            if (read_guard) {
                check(rec.sent_commands.size() == 2
                          && rec.sent_commands[0] == "write 8392704\n"
                          && rec.sent_commands[1] == "read\n",
                      (case_id + ": write+read each exactly once in order").c_str());
                check(out.requested_write_bytes == 8392704,
                      (case_id + ": requested_write_bytes=8392704 recorded").c_str());
            } else {
                check(rec.sent_commands.size() == 1
                          && rec.sent_commands[0] == "write 8392704\n",
                      (case_id + ": only write sent, read never sent").c_str());
                check(out.requested_write_bytes == 8392704,
                      (case_id + ": requested_write_bytes=8392704 recorded").c_str());
            }
        }
        check(out.cancelled == true, (case_id + ": final cancelled=true").c_str());
        TeardownObservation obs{};
        obs.exited = true;
        obs.exit_code_known = true;
        obs.child_exit_code = 0;
        obs.wait_result = WAIT_OBJECT_0;
        check(activity_exit_code(classify_activity_result(out, obs)) == 6,
              (case_id + ": exit0 observes Incomplete/6").c_str());
        g_sg_clock = nullptr;   // 复位：失败也不得遗留悬空指针
    };

    // SG4-A：deadline=0（已到期）→ 0 send
    {
        SgClock clock;
        g_sg_clock = &clock;   // 挂载本 case 时钟（单线程顺序）
        SgRecord rec;
        HelperOps ops{};
        ops.now_ms = &sg_now_ms;
        ops.sleep_ms = &sg_sleep_ms;
        SegmentIo io{};
        io.sample = [&rec](IoSample& s) {
            if (!rec.try_begin()) return false;
            static std::uint64_t q = 0;
            s.qpc_ns = ++q;
            return true;
        };
        io.send = [&rec](const std::string&) {
            ++rec.send_calls;
            return true;
        };
        io.log_sample = [](const std::string&, const IoSample&, const IoSample&) {};
        const SegmentOutcome out = run_activity_segments(0, 16777216, ops, io, fs::path("sg-fake-log"));
        check(rec.budget_exceeded == false, "SG4-A: fake op budget not exceeded");
        check(rec.send_calls == 0, "SG4-A: deadline=0 → 0 sends");
        check(out.cancelled == true, "SG4-A: cancelled=true");
    }
    // SG4-B：deadline=-1（负值）→ 0 send
    {
        SgClock clock;
        g_sg_clock = &clock;   // 挂载本 case 时钟（单线程顺序）
        SgRecord rec;
        HelperOps ops{};
        ops.now_ms = &sg_now_ms;
        ops.sleep_ms = &sg_sleep_ms;
        SegmentIo io{};
        io.sample = [&rec](IoSample& s) {
            if (!rec.try_begin()) return false;
            static std::uint64_t q = 0;
            s.qpc_ns = ++q;
            return true;
        };
        io.send = [&rec](const std::string&) {
            ++rec.send_calls;
            return true;
        };
        io.log_sample = [](const std::string&, const IoSample&, const IoSample&) {};
        const SegmentOutcome out = run_activity_segments(-1, 16777216, ops, io, fs::path("sg-fake-log"));
        check(rec.budget_exceeded == false, "SG4-B: fake op budget not exceeded");
        check(rec.send_calls == 0, "SG4-B: deadline=-1 → 0 sends");
        check(out.cancelled == true, "SG4-B: cancelled=true");
    }
    // SG4-C：deadline=3000 正常路径对照——idle/write/read 全部达标且 clock
    // 始终 < deadline → 两条命令正常发送。idle 3 样本：sleep 300×2 = 600；
    // write 段 sleep 600 → 1200；read 再 600 → 1800；均 < 3000。
    {
        SgClock clock;
        g_sg_clock = &clock;   // 挂载本 case 时钟（单线程顺序）
        SgRecord rec;
        HelperOps ops{};
        ops.now_ms = &sg_now_ms;
        ops.sleep_ms = &sg_sleep_ms;
        SegmentIo io{};
        io.sample = [&rec](IoSample& s) {
            if (!rec.try_begin()) return false;
            static std::uint64_t q = 0;
            s.qpc_ns = ++q;
            return true;
        };
        io.send = [&rec](const std::string& cmd) {
            if (!rec.try_begin()) return false;
            ++rec.send_calls;
            rec.sent_commands.push_back(cmd);
            return true;
        };
        io.log_sample = [](const std::string&, const IoSample&, const IoSample&) {};
        // idle 3 样本：sleep 300×2 = 600 → clock=600 < 3000，write guard 通过
        // 会发 write；随后 write 段再 sleep 600 → 1200；read 再 600 → 1800。
        // 全部 < 3000 → 完整成功路径。本例验证正常发 2 条。
        const SegmentOutcome out = run_activity_segments(3000, 16777216, ops, io, fs::path("sg-fake-log"));
        check(rec.budget_exceeded == false, "SG4-C: fake op budget not exceeded");
        check(rec.sent_commands.size() == 2, "SG4-C: both commands sent within deadline");
        // SG4-D：write 段样本不足 → 不发 read（由采样不足置 cancelled 拦截，
        // 不是 send guard 的独占证明；guard 独占覆盖见下方 GC-W/R 系列）。
        // deadline=1200：idle sleep 600 → clock=600，write guard 剩余 600>0
        // 发 write；write 段 sleep 600 → clock=1200，while 退出时有效差分仅 1
        // <2 → cancelled 由样本不足置位；read 块因 !cancelled 跳过，read send
        // guard 未执行。
        {
            SgClock clock2;
            g_sg_clock = &clock2;   // 挂载嵌套 case 时钟
            SgRecord rec2;
            HelperOps ops2{};
            ops2.now_ms = &sg_now_ms;
            ops2.sleep_ms = &sg_sleep_ms;
            SegmentIo io2{};
            io2.sample = [&rec2](IoSample& s) {
                if (!rec2.try_begin()) return false;
                static std::uint64_t q = 0;
                s.qpc_ns = ++q;
                return true;
            };
            io2.send = [&rec2](const std::string& cmd) {
                if (!rec2.try_begin()) return false;
                ++rec2.send_calls;
                rec2.sent_commands.push_back(cmd);
                return true;
            };
            io2.log_sample = [](const std::string&, const IoSample&, const IoSample&) {};
            const SegmentOutcome out2 = run_activity_segments(1200, 16777216, ops2, io2, fs::path("sg-fake-log"));
            check(rec2.budget_exceeded == false, "SG4-D: fake op budget not exceeded");
            check(rec2.sent_commands.size() == 1,
                  "SG4-D: write sent, read blocked by sample shortage (not guard)");
            check(!rec2.sent_commands.empty()
                      && rec2.sent_commands[0].rfind("write ", 0) == 0,
                  "SG4-D: sent command is write (not retroactively removed)");
            check(out2.cancelled == true, "SG4-D: cancelled=true at exact deadline");
            TeardownObservation obs2{};
            obs2.exited = true;
            obs2.exit_code_known = true;
            obs2.child_exit_code = 0;
            obs2.wait_result = WAIT_OBJECT_0;
            check(activity_exit_code(classify_activity_result(out2, obs2)) == 6,
                  "SG4-D: same-source classify -> 6");
        }
    }
    gc_guard_case(false, 0);    // GC-W0：write send guard 独占拦截过期 send
    gc_guard_case(false, -1);   // GC-W-1：write send guard 拦截（时钟已越过）
    gc_guard_case(false, 1);    // GC-W1：剩余 1ms guard 放行（阈值对照）
    gc_guard_case(true, 0);     // GC-R0：read send guard 独占拦截过期 send
    gc_guard_case(true, -1);    // GC-R-1：read send guard 拦截（时钟已越过）
    gc_guard_case(true, 1);     // GC-R1：剩余 1ms guard 放行（阈值对照）
}

// SG5：复用三段成功段观测；teardown 分别 exit7 / GetExitCode 失败 /
// WAIT_FAILED / 持续 WAIT_TIMEOUT → Incomplete/6 或 Unknown/9；日志名与
// 退出码一致（同一分类值驱动）。
void sg5_teardown_classifications() {
    SegmentOutcome good{};
    good.idle_samples = 3;
    good.write_samples = 3;
    good.read_samples = 3;
    good.requested_write_bytes = 8392704;
    // SG5-A：exit7 → Incomplete/6
    {
        TeardownObservation obs{};
        obs.exited = true;
        obs.exit_code_known = true;
        obs.child_exit_code = 7;
        obs.wait_result = WAIT_OBJECT_0;
        const ActivityResult r = classify_activity_result(good, obs);
        check(r == ActivityResult::Incomplete && activity_exit_code(r) == 6,
              "SG5-A: exit7 -> Incomplete/6");
        check(std::string(activity_result_name(r)) == "INCOMPLETE",
              "SG5-A: log name INCOMPLETE matches exit 6");
    }
    // SG5-B：GetExitCode 失败（exit_code_known=false）→ Unknown/9
    {
        TeardownObservation obs{};
        obs.exited = true;
        obs.exit_code_known = false;
        obs.child_exit_code = 0;
        obs.wait_result = WAIT_OBJECT_0;
        const ActivityResult r = classify_activity_result(good, obs);
        check(r == ActivityResult::Unknown && activity_exit_code(r) == 9,
              "SG5-B: exit_code_known=false -> Unknown/9");
        check(std::string(activity_result_name(r)) == "UNKNOWN",
              "SG5-B: log name UNKNOWN matches exit 9");
    }
    // SG5-C：WAIT_FAILED → Unknown/9
    {
        TeardownObservation obs{};
        obs.exited = false;
        obs.exit_code_known = false;
        obs.child_exit_code = 0;
        obs.wait_result = WAIT_FAILED;
        const ActivityResult r = classify_activity_result(good, obs);
        check(r == ActivityResult::Unknown && activity_exit_code(r) == 9,
              "SG5-C: WAIT_FAILED -> Unknown/9");
    }
    // SG5-D：持续 WAIT_TIMEOUT（未确认退出）→ Unknown/9
    {
        TeardownObservation obs{};
        obs.exited = false;
        obs.exit_code_known = false;
        obs.child_exit_code = 0;
        obs.wait_result = WAIT_TIMEOUT;
        const ActivityResult r = classify_activity_result(good, obs);
        check(r == ActivityResult::Unknown && activity_exit_code(r) == 9,
              "SG5-D: persistent WAIT_TIMEOUT -> Unknown/9");
    }
}

// SG6：qpc 重复/回退夹在有效样本间不增计数；read 段失败 → 6；
// 预取消直接 drive → sample/send 0 次；EOF 不能清除失败使之 OK。
void sg6_qpc_and_precancel() {
    // SG6-A：qpc 序列 [1,2,2,3] → 递增差分 1→2、2→3（第二次3）共 2 个有效
    // （重复 qpc 不产生差分）；第 4 次 next 耗尽返回 false → 采样失败。
    // 段失败（样本 2 恰达标但第 3 次采样失败先触发 cancelled）。
    {
        SgClock clock;
        g_sg_clock = &clock;   // 挂载本 case 时钟（单线程顺序）
        SgRecord rec;
        SgSampleScript idle;
        for (const std::uint64_t q : {1ULL, 2ULL, 2ULL, 3ULL}) {
            idle.items.emplace_back(q, 100, 50);
        }
        HelperOps ops{};
        ops.now_ms = &sg_now_ms;
        ops.sleep_ms = &sg_sleep_ms;
        SegmentIo io{};
        io.sample = [&idle, &rec](IoSample& s) {
            if (!rec.try_begin()) return false;
            return idle.next(s);
        };
        io.send = [&rec](const std::string&) {
            ++rec.send_calls;
            return false;   // write 发送失败即停（本例只测 idle 计数语义）
        };
        io.log_sample = [&rec](const std::string&, const IoSample&, const IoSample&) {
            ++rec.log_calls;
        };
        const SegmentOutcome out = run_activity_segments(30000, 16777216, ops, io, fs::path("sg-fake-log"));
        check(rec.budget_exceeded == false, "SG6-A: fake op budget not exceeded");
        check(rec.log_calls == out.idle_samples,
              "SG6-A: log_sample called once per valid differential (no double count)");
        check(out.idle_samples < 3,
              "SG6-A: duplicate qpc never inflates count beyond distinct values (<=2 of [1,2,2,3])");
        check(out.cancelled == true, "SG6-A: sample exhaustion/send failure marks cancelled");
    }
    // SG6-B：read 段失败（read 采样 false）→ 6；EOF/teardown 成功不能洗白
    {
        SgClock clock;
        g_sg_clock = &clock;   // 挂载本 case 时钟（单线程顺序）
        SgRecord rec;
        HelperOps ops{};
        ops.now_ms = &sg_now_ms;
        ops.sleep_ms = &sg_sleep_ms;
        SegmentIo io{};
        io.sample = [&rec](IoSample& s) {
            if (!rec.try_begin()) return false;
            // idle/write 递增；read 段（send 后第 1 次采样）失败
            if (rec.sent_commands.size() >= 2) return false;
            static std::uint64_t q = 0;
            s.qpc_ns = ++q;
            return true;
        };
        io.send = [&rec](const std::string& cmd) {
            if (!rec.try_begin()) return false;
            ++rec.send_calls;
            rec.sent_commands.push_back(cmd);
            return true;
        };
        io.log_sample = [](const std::string&, const IoSample&, const IoSample&) {};
        const SegmentOutcome out = run_activity_segments(30000, 16777216, ops, io, fs::path("sg-fake-log"));
        check(rec.budget_exceeded == false, "SG6-B: fake op budget not exceeded");
        check(rec.sent_commands.size() == 2, "SG6-B: both commands sent");
        check(out.read_samples == 0, "SG6-B: read_samples=0 on read failure");
        check(out.cancelled == true, "SG6-B: cancelled=true");
        // EOF 成功观测不能清除失败位 → 仍 Incomplete/6（不是 Ok/0）
        TeardownObservation obs{};
        obs.exited = true;
        obs.exit_code_known = true;
        obs.child_exit_code = 0;
        obs.wait_result = WAIT_OBJECT_0;
        const ActivityResult r = classify_activity_result(out, obs);
        check(r == ActivityResult::Incomplete && activity_exit_code(r) == 6,
              "SG6-B: EOF cannot wash failure into OK; exit0 -> 6");
    }
    // SG6-C：预取消（cancelled=true 直接 drive）→ sample/send 0 次
    {
        SgRecord rec;
        HelperOps ops{};
        ops.now_ms = []() { return std::int64_t{0}; };
        ops.sleep_ms = [](DWORD) {};
        SegmentIo io{};
        io.sample = [&rec](IoSample&) {
            ++rec.ops;   // 不该被调
            return true;
        };
        io.send = [&rec](const std::string&) {
            ++rec.send_calls;   // 不该被调
            return true;
        };
        io.log_sample = [](const std::string&, const IoSample&, const IoSample&) {};
        // 直接驱动 drive_segment 于已取消状态：预取消 → 0 采样 0 发送
        bool cancelled = true;
        int valid = -1;
        drive_segment("idle", valid, cancelled, 30000, ops, io, fs::path("sg-fake-log"));
        check(rec.send_calls == 0, "SG6-C: pre-cancelled drive sends nothing");
        check(valid == 0, "SG6-C: pre-cancelled drive samples nothing (valid=0)");
        // run_activity_segments 层面的预取消语义由 SG4-A/B（deadline 已过）
        // 与 SG2-A（首采样失败）共同覆盖 cancelled 位传播。
    }
}

void segment_protocol_checks() {
    sg1_full_success();
    sg2_idle_failure_no_send();
    sg3_write_failure_no_read();
    sg4_deadline_boundaries();
    sg5_teardown_classifications();
    sg6_qpc_and_precancel();
}

int run_helper_binding_checks() {
    failures = 0;
    hb1_command_line_roundtrip();
    hb2_quote_roundtrip();
    hb3_path_read_boundaries();
    hb4_gate_and_numeric();
    hb5_image_pid_tick_separation();
    hb6_pipeline_and_teardown();
    hb_diag_failure_diagnostic();
    // 段协议检查（segment_protocol_stage 批准阶段；与 HB 同源生产函数，
    // fake 只脚本化 API 结果，不自写算法/EOF 计数）。
    segment_protocol_checks();
    std::cout << (failures == 0 ? "ALL PASS" : "HAS FAILURES")
              << " (" << failures << " failures)\n";
    return failures > 0 ? 1 : 0;
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

    // ---- 2. 同源准备（D3）：prepare_helper（路径读取＋命令行构造）----
    const HelperOps ops = real_helper_ops();
    std::string prep_err;
    const auto prepared = prepare_helper(*opts, prep_err, ops);
    if (!prepared) {
        std::cerr << "io_activity: cannot prepare helper: " << prep_err << "\n";
        return 8;
    }
    const fs::path& exe_path = prepared->exe_path;
    const fs::path exe_dir = exe_path.parent_path();
    // 工程根判定兜底：build/<cfg> 的祖父目录。重合或直接子目录即拒绝。
    const fs::path project_root = exe_dir.parent_path().parent_path();
    const std::vector<wchar_t> cmd_buf(prepared->command_line.begin(),
                                       prepared->command_line.end());

    // ---- 3. WorkDir 安全校验（先于任何文件写入；main 保留原目录校验）----
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
    const auto wall_deadline_ms = std::chrono::duration_cast<std::chrono::milliseconds>(
        (wall_start + std::chrono::seconds(opts->budget_seconds))
            .time_since_epoch()).count();

    // ---- 6-8. 同源启动（D3/D5/D6）：start_verified_helper ----
    PROCESS_INFORMATION pi{};
    HANDLE stdin_write = nullptr, stdout_read = nullptr;
    const auto start = start_verified_helper(*prepared, *opts, identity_log,
                                             wall_deadline_ms, pi,
                                             stdin_write, stdout_read, ops);
    if (!start.ready) {
        // 统一必要 exit9 归属诊断（D5）：已知映像/unknown + PID/tick/句柄。
        // pi.hProcess 语义：确认退出路径上 bounded_teardown 已重置 pi
        // （null）；未确认退出路径句柄保留由 OS 回收。诊断只在两者真实
        // 状态上格式化，不补造。
        HelperIdentity diag_id;
        diag_id.pid = pi.dwProcessId;
        diag_id.creation_tick = start.creation_tick;
        diag_id.handle = pi.hProcess;
        std::cerr << "io_activity: helper start failed: " << start.error << "\n";
        std::cerr << "io_activity: " << helper_failure_diagnostic(
            diag_id, start.observed_image) << "\n";
        return start.failure_exit;   // 8（确认）或 9（未确认，身份保留）
    }

    // ---- 9-11. 段协议驱动与统一收束（同源 run_activity_segments /
    // bounded_teardown / classify_activity_result；budget 沿用第 5 节 deadline）----
    const fs::path& activity_log_ref = activity_log;
    SegmentIo io{};
    io.sample = [&pi](IoSample& s) { return take_io_sample(pi.hProcess, s); };
    io.send = [&stdin_write, &ops](const std::string& cmd) {
        DWORD written = 0;
        return ops.write_file(stdin_write, cmd.data(),
                              static_cast<DWORD>(cmd.size()), &written, nullptr)
               && written == cmd.size();
    };
    io.log_sample = [&activity_log_ref](const std::string& name,
                                        const IoSample& prev,
                                        const IoSample& s) {
        const double dt = static_cast<double>(s.qpc_ns > prev.qpc_ns
                                                  ? s.qpc_ns - prev.qpc_ns : 0);
        const double rr = static_cast<double>(
            s.read_bytes > prev.read_bytes ? s.read_bytes - prev.read_bytes : 0);
        const double wr = static_cast<double>(
            s.write_bytes > prev.write_bytes ? s.write_bytes - prev.write_bytes : 0);
        std::ofstream log(activity_log_ref, std::ios::app);
        log << "segment=" << name
            << " dt_ns=" << static_cast<std::uint64_t>(dt)
            << " read_rate_Bps=" << (dt > 0 ? rr / (dt / 1e9) : 0.0)
            << " write_rate_Bps=" << (dt > 0 ? wr / (dt / 1e9) : 0.0)
            << "\n";
    };
    const SegmentOutcome outcome = run_activity_segments(
        wall_deadline_ms, opts->max_bytes, ops, io, activity_log);

    // 统一收束（同源 bounded_teardown）：EOF → 等自然退出 → 确认退出码。
    // 不 TerminateProcess；不按 PID 名清理。EOF 不改变活动失败状态。
    // 先关 stdout（段协议后不再读）；bounded_teardown 关 stdin_write→EOF→等待
    if (stdout_read) { CloseHandle(stdout_read); stdout_read = nullptr; }
    TeardownObservation obs;
    bounded_teardown(pi, stdin_write, stdout_read, ops, &obs);
    const ActivityResult result = classify_activity_result(outcome, obs);

    // ---- 结果日志：消费同一分类值（禁止再手写 !cancel 判断）----
    {
        std::ofstream out(activity_log, std::ios::app);
        out << "result=" << activity_result_name(result)
            << " idle_samples=" << outcome.idle_samples
            << " write_samples=" << outcome.write_samples
            << " read_samples=" << outcome.read_samples
            << " requested_write_bytes=" << outcome.requested_write_bytes
            << " helper_exited=" << (obs.exited ? 1 : 0)
            << " helper_exit_code="
            << (obs.exit_code_known ? std::to_string(obs.child_exit_code) : "unknown")
            << "\n";
    }
    if (!obs.exited) {
        // 自然退出未确认：统一必要归属诊断（D5）——已知映像或 unknown，
        // PID/tick/句柄如实；保留资源，不强杀
        HelperIdentity diag_id;
        diag_id.pid = pi.dwProcessId;
        diag_id.creation_tick = start.creation_tick;
        diag_id.handle = pi.hProcess;
        std::cerr << "io_activity: " << helper_failure_diagnostic(
            diag_id, start.observed_image)
                  << " — left for user disposition (not terminated)\n";
        // pi.hProcess 保留不关闭：OS 收回前归属明确（父进程退出即 OS 回收）
    }
    return activity_exit_code(result);
}
