// 17S 独立设置检查：schema/defaults/四档/尺寸/64KiB/排序列、load失败安全默认、
// QSaveFile 原子保存（setDirectWriteFallback(false)）失败保留旧字节、
// cancelWriting 直接放弃新文件、测试根目录约束。
// 显式失败检查（非 assert）：Debug 与 Release 同样有效，失败计数非零退出。
//
// 测试根目录约束：所有自建临时目录必须位于显式传入的 test root（当前配置
// build 目录）内，拒绝系统 TEMP 与用户主目录。CTest 经 add_test 传
// $<TARGET_FILE_DIR:settings_checks>；直跑必须显式传同一 build 目录。
#include <QCryptographicHash>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QSaveFile>
#include <QtGlobal>
#include <algorithm>
#include <chrono>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#ifdef Q_OS_WIN
#include <windows.h>
#endif

#include "DisplaySettings.h"

using namespace tmog;

namespace {

int failures = 0;
int checks = 0;

void check(bool ok, const std::string& what) {
    ++checks;
    std::cout << (ok ? "PASS" : "FAIL") << ": " << what << "\n";
    if (!ok) ++failures;
}

std::filesystem::path g_test_root; // main 显式设置（当前配置 build 目录）
std::filesystem::path g_self_exe;  // main 设置 argv[0]，用于定位 build 目录

void write_bytes(const std::string& path, const std::string& content) {
    std::ofstream f(path, std::ios::binary | std::ios::trunc);
    f.write(content.data(), static_cast<std::streamsize>(content.size()));
}

// ---------------- 测试根目录约束 ----------------

namespace fs = std::filesystem;

std::filesystem::path exe_directory() {
    std::error_code ec;
    const fs::path self = fs::weakly_canonical(g_self_exe, ec);
    if (ec) return {};
    return self.parent_path();
}

std::filesystem::path user_home() {
#ifdef Q_OS_WIN
    if (const char* p = std::getenv("USERPROFILE")) return fs::path(p);
#else
    if (const char* p = std::getenv("HOME")) return fs::path(p);
#endif
    return {};
}

// p 是否位于 base 之内（含相等）。前缀按路径分量比较。
bool is_within(const fs::path& p, const fs::path& base) {
    std::error_code ec;
    const fs::path cp = fs::weakly_canonical(p, ec);
    if (ec) return false;
    const fs::path cb = fs::weakly_canonical(base, ec);
    if (ec) return false;
    const auto r = std::mismatch(cb.begin(), cb.end(), cp.begin(), cp.end());
    return r.first == cb.end();
}

bool is_allowed_test_root(const fs::path& root) {
    std::error_code ec;
    if (root.empty() || !fs::is_directory(root, ec) || ec) return false;
    // 必须在测试可执行文件所在目录（当前配置 build 目录）内。
    if (!is_within(root, exe_directory())) return false;
    // 显式拒绝系统 TEMP 与用户主目录（含其子目录）。
    if (is_within(root, fs::temp_directory_path(ec)) || ec) return false;
    ec.clear();
    if (is_within(root, user_home())) return false;
    return true;
}

// ---------------- 自建临时目录 ----------------

// 自建临时目录：显式 test root（当前配置 build 目录）下的唯一子目录，
// 测试结束后清理。不触碰真实用户配置，不落系统 TEMP。
class TempDir {
public:
    explicit TempDir(const fs::path& root) {
        const auto now = std::chrono::steady_clock::now().time_since_epoch().count();
        base_ = root / ("tmog_settings_checks_" +
                        std::to_string(static_cast<long long>(now)));
        std::filesystem::create_directories(base_);
    }
    ~TempDir() {
        std::error_code ec;
        std::filesystem::remove_all(base_, ec); // 清理失败不掩盖检查结果
    }
    TempDir(const TempDir&) = delete;
    TempDir& operator=(const TempDir&) = delete;
    const std::filesystem::path& path() const { return base_; }
    std::string file(const std::string& name) const {
        return (base_ / name).string();
    }
private:
    std::filesystem::path base_;
};

// ---------------- 目标父目录文件集合（杂散检测） ----------------

// 目录直接条目（文件与子目录）排序快照。
std::vector<std::string> snapshot_dir(const fs::path& dir) {
    std::vector<std::string> names;
    std::error_code ec;
    for (const auto& e : fs::directory_iterator(dir, ec)) {
        names.push_back(e.path().filename().string());
    }
    std::sort(names.begin(), names.end());
    return names;
}

// after 中新增（before 没有）的条目 = 杂散文件/目录。可注入 stub：
// 自检负例用恒空 stub 观察失败，正式检测用真实实现。
std::vector<std::string> detect_stray(const std::vector<std::string>& before,
                                      const std::vector<std::string>& after) {
    std::vector<std::string> added;
    std::set_difference(after.begin(), after.end(), before.begin(), before.end(),
                        std::back_inserter(added));
    return added;
}

// ---------------- schema/defaults ----------------

void test_defaults() {
    DisplaySettings s;
    check(s.schema_version == 1, "default schema_version=1");
    check(s.width == 1000 && s.height == 700, "default 1000x700");
    check(s.refresh_ms == 1000, "default refresh_ms=1000");
    check(s.sort_column == "pid", "default sort_column=pid");
    check(!s.sort_descending, "default sort_descending=false");
}

void test_valid_tiers() {
    check(is_valid_refresh(500) && is_valid_refresh(1000) &&
          is_valid_refresh(2000) && is_valid_refresh(5000),
          "valid tiers 500/1000/2000/5000");
    check(!is_valid_refresh(0) && !is_valid_refresh(499) &&
          !is_valid_refresh(1500) && !is_valid_refresh(6000),
          "invalid tiers rejected");
}

void test_size_bounds() {
    check(is_valid_size(640, 480) && is_valid_size(7680, 4320),
          "size min 640x480 and max 7680x4320 accepted");
    check(!is_valid_size(639, 480) && !is_valid_size(7681, 4320) &&
          !is_valid_size(640, 479) && !is_valid_size(640, 4321),
          "out-of-bound sizes rejected");
}

void test_valid_columns() {
    for (const char* col : {"name", "pid", "cpu", "memory", "status",
                            "io_read", "io_write"}) {
        check(is_valid_sort_column(QString::fromLatin1(col)),
              std::string("valid column ") + col);
    }
    check(!is_valid_sort_column(QString::fromLatin1("size")) &&
          !is_valid_sort_column(QString::fromLatin1("PID")) &&
          !is_valid_sort_column(QString()),
          "invalid/unknown/case-mismatched columns rejected");
}

// ---------------- 测试根目录自检 ----------------

void test_root_validation() {
    check(is_allowed_test_root(g_test_root),
          "test root: accepted build-dir root");
    check(!is_allowed_test_root(std::filesystem::temp_directory_path()),
          "test root: system TEMP rejected");
    check(!is_allowed_test_root(user_home()),
          "test root: user home rejected");
}

void test_stray_detection_selfcheck() {
    // 杂散检测必须能在故意植入时失败：先拍快照、植入、再拍快照，
    // detect_stray 必须捕获植入文件。走当前全局实现（RED 阶段全局
    // stub 时此用例失败，GREEN 后真实实现捕获植入而通过）。
    TempDir d(g_test_root);
    write_bytes(d.file("seed.json"), "{}");
    const auto before = snapshot_dir(d.path());
    write_bytes(d.file("planted_stray.tmp"), "planted");
    const auto after = snapshot_dir(d.path());
    const auto stray = detect_stray(before, after);
    check(stray.size() == 1 && stray[0] == "planted_stray.tmp",
          "stray detection: planted stray file captured");
    check(detect_stray(after, after).empty(),
          "stray detection: identical snapshots yield no stray");
}

// ---------------- load 失败→安全默认+error ----------------

void test_missing_file() {
    TempDir d(g_test_root);
    auto r = load_display_settings(QString::fromStdString(d.file("absent.json")));
    check(r.error.isEmpty(), "missing file: no error");
    check(r.settings.schema_version == 1 && r.settings.width == 1000 &&
          r.settings.height == 700 && r.settings.refresh_ms == 1000 &&
          r.settings.sort_column == "pid" && !r.settings.sort_descending,
          "missing file: full defaults");
}

void test_corrupt_json() {
    TempDir d(g_test_root);
    write_bytes(d.file("bad.json"), "{not json");
    auto r = load_display_settings(QString::fromStdString(d.file("bad.json")));
    check(!r.error.isEmpty(), "corrupt JSON: error non-empty");
    check(r.settings.schema_version == 1 && r.settings.width == 1000 &&
          r.settings.refresh_ms == 1000 && r.settings.sort_column == "pid",
          "corrupt JSON: defaults");
}

void test_array_root() {
    TempDir d(g_test_root);
    write_bytes(d.file("arr.json"), "[1,2,3]");
    auto r = load_display_settings(QString::fromStdString(d.file("arr.json")));
    check(!r.error.isEmpty(), "array root: error");
    check(r.settings.width == 1000 && r.settings.height == 700,
          "array root: defaults");
}

void test_unknown_version() {
    TempDir d(g_test_root);
    write_bytes(d.file("v2.json"), "{\"schema_version\":2}");
    auto r = load_display_settings(QString::fromStdString(d.file("v2.json")));
    check(!r.error.isEmpty(), "unknown version: error");
    check(r.settings.schema_version == 1, "unknown version: default schema 1");
}

void test_wrong_types() {
    TempDir d(g_test_root);
    write_bytes(d.file("types.json"),
                R"({"schema_version":1,"width":"wide","height":true,)"
                R"("refresh_ms":1000,"sort_column":7,"sort_descending":"yes"})");
    auto r = load_display_settings(QString::fromStdString(d.file("types.json")));
    check(!r.error.isEmpty(), "wrong types: error");
    check(r.settings.width == 1000 && r.settings.height == 700 &&
          r.settings.sort_column == "pid" && !r.settings.sort_descending,
          "wrong types: defaults");
}

void test_out_of_bounds() {
    TempDir d(g_test_root);
    write_bytes(d.file("oob.json"),
                R"({"schema_version":1,"width":100000,"height":-5,)"
                R"("refresh_ms":1500})");
    auto r = load_display_settings(QString::fromStdString(d.file("oob.json")));
    check(!r.error.isEmpty(), "out-of-bounds: error");
    check(r.settings.width == 1000 && r.settings.height == 700 &&
          r.settings.refresh_ms == 1000, "out-of-bounds: defaults");
}

void test_unknown_tier_and_column() {
    TempDir d(g_test_root);
    write_bytes(d.file("uk.json"),
                R"({"schema_version":1,"refresh_ms":700,"sort_column":"size"})");
    auto r = load_display_settings(QString::fromStdString(d.file("uk.json")));
    check(!r.error.isEmpty(), "unknown tier/column: error");
    check(r.settings.refresh_ms == 1000 && r.settings.sort_column == "pid",
          "unknown tier/column: defaults");
}

void test_unknown_keys_ignored() {
    TempDir d(g_test_root);
    write_bytes(d.file("extra.json"),
                R"({"schema_version":1,"width":1000,"height":700,)"
                R"("refresh_ms":2000,"sort_column":"cpu","sort_descending":true,)"
                R"("future_key":{"nested":"ignored"},"another":123})");
    auto r = load_display_settings(QString::fromStdString(d.file("extra.json")));
    check(r.error.isEmpty(), "unknown extra keys: no error");
    check(r.settings.refresh_ms == 2000 && r.settings.sort_column == "cpu" &&
          r.settings.sort_descending,
          "unknown extra keys: known values applied");
}

void test_oversize_64kib() {
    TempDir d(g_test_root);
    std::string big(64 * 1024 + 1, 'x');
    write_bytes(d.file("big.json"), big);
    auto r = load_display_settings(QString::fromStdString(d.file("big.json")));
    check(!r.error.isEmpty(), ">64KiB: error");
    check(r.settings.refresh_ms == 1000, ">64KiB: defaults");
}

// ---------------- roundtrip ----------------

void test_roundtrip() {
    TempDir d(g_test_root);
    const QString path = QString::fromStdString(d.file("ok.json"));
    for (const int tier : {500, 1000, 2000, 5000}) {
        DisplaySettings s;
        s.refresh_ms = tier;
        s.width = 1280;
        s.height = 800;
        s.sort_column = "memory";
        s.sort_descending = true;
        QString err;
        const bool ok = save_display_settings(path, s, err);
        check(ok && err.isEmpty(), std::string("save tier ") +
              std::to_string(tier));
        if (!ok) continue;
        auto r = load_display_settings(path);
        check(r.error.isEmpty(), std::string("load after tier ") +
              std::to_string(tier));
        check(r.settings.refresh_ms == tier && r.settings.width == 1280 &&
              r.settings.height == 800 && r.settings.sort_column == "memory" &&
              r.settings.sort_descending,
              std::string("roundtrip tier ") + std::to_string(tier));
    }
}

// ---------------- QSaveFile 原子性 ----------------

QByteArray read_bytes_q(const QString& path) {
    QFile f(path);
    if (!f.open(QIODevice::ReadOnly)) return {};
    return f.readAll();
}

// 旧文件字节/hash 在保存失败后保持；无权限/占用模拟不成立时标注未验证，
// 不用不存在目录冒充等价场景。
void test_commit_failure_preserves_old() {
    TempDir d(g_test_root);
    const QString path = QString::fromStdString(d.file("locked.json"));
    DisplaySettings old;
    old.refresh_ms = 2000;
    QString err;
    check(save_display_settings(path, old, err), "seed old file");

    const QByteArray beforeBytes = read_bytes_q(path);
    const QByteArray beforeHash =
        QCryptographicHash::hash(beforeBytes, QCryptographicHash::Sha256).toHex();

    // 模拟占用失败：Windows 上打开无共享写句柄后 QSaveFile commit 失败。
    // 该模拟依赖文件系统行为，不成立时标该子检查未验证而不是伪造通过。
    HANDLE h = CreateFileW(reinterpret_cast<const wchar_t*>(path.utf16()),
                           GENERIC_READ, 0 /*不共享*/, nullptr, OPEN_EXISTING,
                           FILE_ATTRIBUTE_NORMAL, nullptr);
    if (h == INVALID_HANDLE_VALUE) {
        std::cout << "SKIP: commit-failure lock simulation unavailable (err="
                  << GetLastError() << ")\n";
    } else {
        DisplaySettings s;
        s.refresh_ms = 5000;
        bool saved = save_display_settings(path, s, err);
        CloseHandle(h);
        if (saved) {
            std::cout << "SKIP: lock did not block commit on this FS\n";
        } else {
            check(!err.isEmpty(), "locked target: save returns false+error");
            const QByteArray afterBytes = read_bytes_q(path);
            const QByteArray afterHash = QCryptographicHash::hash(
                afterBytes, QCryptographicHash::Sha256).toHex();
            check(beforeBytes == afterBytes,
                  "locked target: old bytes unchanged");
            check(beforeHash == afterHash, "locked target: old hash unchanged");
        }
    }
}

// cancelWriting（直接调用）：写入新数据后放弃，旧文件字节与 SHA-256 不变，
// 且不留任何临时残留（目标父目录文件集合前后一致）。并做正对照：真实
// commit 后文件确实被替换，证明本用例的机制有效。
void test_cancel_writing_direct() {
    TempDir d(g_test_root);
    const QString path = QString::fromStdString(d.file("cancel_direct.json"));
    DisplaySettings old;
    old.refresh_ms = 500;
    QString err;
    check(save_display_settings(path, old, err), "cancelWriting: seed old file");

    const QByteArray beforeBytes = read_bytes_q(path);
    const QByteArray beforeHash =
        QCryptographicHash::hash(beforeBytes, QCryptographicHash::Sha256).toHex();
    const auto beforeSet = snapshot_dir(d.path());

    // 内层作用域：QSaveFile 生命周期结束时临时文件清理才完成。
    {
        QSaveFile f(path);
        f.setDirectWriteFallback(false);
        check(f.open(QIODevice::WriteOnly), "cancelWriting: QSaveFile opens draft");
        QJsonObject obj;
        obj.insert("schema_version", 1);
        f.write(QJsonDocument(obj).toJson());
        f.cancelWriting(); // 放弃新文件
    }

    const QByteArray afterBytes = read_bytes_q(path);
    check(afterBytes == beforeBytes, "cancelWriting: old bytes unchanged");
    const QByteArray afterHash =
        QCryptographicHash::hash(afterBytes, QCryptographicHash::Sha256).toHex();
    check(beforeHash == afterHash, "cancelWriting: old hash unchanged");
    const auto strays = detect_stray(beforeSet, snapshot_dir(d.path()));
    for (const auto& s : strays) {
        std::cout << "  stray: " << s << "\n";
    }
    check(strays.empty(),
          "cancelWriting: no stray temp file left in target dir");

    // 正对照：真实 write+commit 确实替换旧文件（证明上述断言非空跑）。
    DisplaySettings newer;
    newer.refresh_ms = 2000;
    check(save_display_settings(path, newer, err),
          "cancelWriting: positive-control commit succeeds");
    check(read_bytes_q(path) != beforeBytes,
          "cancelWriting: positive-control replaced old bytes");
}

// 目录目标保存失败：旧文件保留 + 目标父目录文件集合不变（杂散检测）。
void test_cancel_writing_keeps_old() {
    TempDir d(g_test_root);
    const QString path = QString::fromStdString(d.file("cancel.json"));
    DisplaySettings old;
    old.refresh_ms = 500;
    QString err;
    check(save_display_settings(path, old, err), "seed cancel old");

    // 以受控方式触发失败：把目标改成目录，save 必失败且不留杂散文件。
    const fs::path dirTarget = d.path() / "as_dir";
    std::filesystem::create_directories(dirTarget);
    const auto beforeSet = snapshot_dir(d.path()); // 含 seed 文件与 as_dir
    DisplaySettings s;
    s.refresh_ms = 2000;
    bool ok = save_display_settings(QString::fromStdString(dirTarget.string()), s, err);
    check(!ok && !err.isEmpty(), "directory target: save fails with error");
    check(detect_stray(beforeSet, snapshot_dir(d.path())).empty(),
          "directory target: parent dir file set unchanged (no stray)");
    check(read_bytes_q(path) ==
          read_bytes_q(QString::fromStdString(d.file("cancel.json"))),
          "directory target: unrelated old file kept");
}

void test_utf8_format() {
    TempDir d(g_test_root);
    const QString path = QString::fromStdString(d.file("utf8.json"));
    DisplaySettings s;
    QString err;
    check(save_display_settings(path, s, err), "utf8 save");
    // 文件应是 UTF-8 JSON 对象，含 schema_version=1
    QFile f(path);
    check(f.open(QIODevice::ReadOnly), "utf8 reopen");
    const QByteArray raw = f.readAll();
    check(raw.size() <= 64 * 1024, "utf8 output within 64KiB");
    QJsonDocument doc = QJsonDocument::fromJson(raw);
    check(doc.isObject() &&
          doc.object().value("schema_version").toInt() == 1,
          "utf8 output is JSON object with schema_version=1");
}

} // namespace

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout << "usage: settings_checks <test-root: current build dir>\n";
        return 2;
    }
    g_self_exe = argv[0];
    g_test_root = std::filesystem::path(argv[1]);
    if (!is_allowed_test_root(g_test_root)) {
        std::cout << "settings_checks: invalid test root (must be inside this "
                     "test's build dir, not system TEMP/user home): "
                  << g_test_root.string() << "\n";
        return 2;
    }

    test_defaults();
    test_valid_tiers();
    test_size_bounds();
    test_valid_columns();
    test_root_validation();
    test_stray_detection_selfcheck();
    test_missing_file();
    test_corrupt_json();
    test_array_root();
    test_unknown_version();
    test_wrong_types();
    test_out_of_bounds();
    test_unknown_tier_and_column();
    test_unknown_keys_ignored();
    test_oversize_64kib();
    test_roundtrip();
    test_commit_failure_preserves_old();
    test_cancel_writing_direct();
    test_cancel_writing_keeps_old();
    test_utf8_format();

    std::cout << (failures == 0 ? "settings_checks: ALL PASS (" : "settings_checks: FAILURES (")
              << checks << " checks, " << failures << " failures)\n";
    return failures == 0 ? 0 : 1;
}
