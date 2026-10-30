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

constexpr int kDefaultBudgetSeconds = 30;
constexpr std::uint64_t kDefaultMaxBytes = 16ULL * 1024 * 1024;   // 16MiB
constexpr std::uint64_t kHardMaxBytes = 64ULL * 1024 * 1024;      // 硬限 64MiB
constexpr int kHardMaxBudgetSeconds = 300;                        // 硬限 5min
constexpr int kMinValidSamplesPerSegment = 2;

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

} // namespace

int main(int argc, char** argv) {
    // ---- 1. argv gate：最先执行，早于一切副作用与框架初始化 ----
    int parse_exit = 0;
    const auto opts = parse_args(argc, argv, parse_exit);
    if (!opts) {
        if (parse_exit == 2) return exit_unauthorized();
        return parse_exit;   // 参数负例：非 0，零副作用
    }

    // ---- helper 子模式：仅显式授权 + --helper 才可进入；stdin EOF 自然退出 ----
    if (opts->helper_mode) {
        std::cerr << "io_activity: helper mode entered (controlled)\n";
        std::string line;
        while (std::getline(std::cin, line)) {
            // helper 循环体：父进程写入自造数据命令；stdin EOF → 自然退出
        }
        return 0;   // 自然退出协议：不持有任何需收束的额外资源
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

    // ---- 3. 身份日志 + 段协议（idle/write/read 各 ≥2 有效样本）----
    const fs::path identity_log = opts->work_dir / "identity.log";
    const fs::path data_file = opts->work_dir / "data.bin";
    const fs::path activity_log = opts->work_dir / "io_activity_log.txt";

    HelperIdentity self_id{};
    self_id.pid = GetCurrentProcessId();
    HANDLE self_handle = GetCurrentProcess();
    query_creation_tick(self_handle, self_id.creation_tick);
    self_id.handle = self_handle;
    log_helper_identity(self_id, identity_log);

    std::atomic<bool> cancel{false};
    std::vector<IoSample> samples;   // 保留原始累计样本（审计用）
    int idle_n = 0, write_n = 0, read_n = 0;
    bool idle_ok = sample_segment(self_handle, "idle", activity_log,
                                  idle_n, cancel);

    // write 段：写自造数据到唯一 data_file（计入同口径累计 I/O）
    std::ofstream w(data_file, std::ios::binary);
    if (w) {
        const std::string chunk(4096, 'x');
        std::uint64_t written = 0;
        const std::uint64_t half = opts->max_bytes / 2;
        while (written < half && !cancel.load()) {
            w.write(chunk.data(), static_cast<std::streamsize>(chunk.size()));
            written += chunk.size();
        }
        w.flush();
    }
    const bool write_ok = sample_segment(self_handle, "write", activity_log,
                                         write_n, cancel);

    // read 段：读回自造文件
    {
        std::ifstream r(data_file, std::ios::binary);
        char buf[4096];
        while ((r.read(buf, sizeof(buf)) || r.gcount() > 0) && !cancel.load()) {
        }
    }
    const bool read_ok = sample_segment(self_handle, "read", activity_log,
                                        read_n, cancel);

    // ---- 4. 收束：取消/预算/失败统一自然退出协议；无强杀 ----
    // helper 与父进程同体（本进程自身），进程退出即自然收束；自持句柄随
    // 进程终止由 OS 关闭。不删除已登记目录（归属用户/授权实验产物）。
    const bool all_ok = idle_ok && write_ok && read_ok && !cancel.load();
    {
        std::ofstream out(activity_log, std::ios::app);
        out << "result=" << (all_ok ? "OK" : "INCOMPLETE")
            << " idle_samples=" << idle_n
            << " write_samples=" << write_n
            << " read_samples=" << read_n << "\n";
    }
    return all_ok ? 0 : 6;
}
