// #19 整机性能页离屏检查（真实生产 MainWindow + 生产 SamplingWorker +
// 生产 PerformancePage，注入受控整机来源与枚举器驱动真实采样管线）。
//
// 覆盖验收合同：
//  - 三个真实页面 + Ctrl+3 导航，切页不触发额外采样、不冻结；
//  - 首样本「待采样」；第二帧为累计时间差百分比；有效空闲是真实 0.0%；
//  - 整机读取失败形成缺样（Gap），错误不显示为 0，曲线断口不伪连；
//  - 失败/暂停/恢复后重建基线：恢复首帧回到「待采样」；
//  - 物理内存总量/可用/已用单位与口径（已用 = 总量 − 可用，非工作集）；
//  - 内存失败时 CPU 曲线继续、内存显示「不可用」而不是 0；
//  - 关窗收束无残留（close 后进程可退出）。
//
// 退出码：0 = 全部通过；1 = 有失败。离屏渲染截图写入当前目录。
#include "IProcessEnumerator.h"
#include "MainWindow.h"
#include "PerformancePage.h"
#include "ProcessSnapshot.h"
#include "SystemMetrics.h"

#include <QAction>
#include <QApplication>
#include <QCoreApplication>
#include <QDir>
#include <QElapsedTimer>
#include <QEventLoop>
#include <QKeySequence>
#include <QLabel>
#include <QPixmap>
#include <QStackedWidget>
#include <QTemporaryDir>
#include <QThread>
#include <QWidget>

#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <memory>
#include <optional>
#include <string>
#include <utility>
#include <vector>

namespace {

int g_failures = 0;

void check(bool passed, const std::string& what) {
    if (passed) return;
    ++g_failures;
    std::fprintf(stderr, "FAIL %s\n", what.c_str());
}

void pump_ms(int milliseconds) {
    QElapsedTimer timer;
    timer.start();
    while (timer.elapsed() < milliseconds) {
        QCoreApplication::processEvents(QEventLoop::AllEvents, 20);
        QThread::msleep(5);
    }
}

template <typename Predicate>
bool pump_until(Predicate predicate, int timeout_ms) {
    QElapsedTimer timer;
    timer.start();
    while (timer.elapsed() < timeout_ms) {
        if (predicate()) return true;
        QCoreApplication::processEvents(QEventLoop::AllEvents, 20);
        QThread::msleep(5);
    }
    return predicate();
}

constexpr std::uint64_t kGiB = 1024ULL * 1024ULL * 1024ULL;

tmog::SystemReading make_reading(std::uint64_t idle_ns, std::uint64_t kernel_ns,
                                 std::uint64_t user_ns, std::uint64_t wall_ns,
                                 bool times_available = true,
                                 std::uint64_t total_mem = 16 * kGiB,
                                 std::uint64_t avail_mem = 8 * kGiB,
                                 bool memory_available = true,
                                 std::string error = {}) {
    tmog::SystemReading reading;
    reading.times_available = times_available;
    reading.times.idle_ns = idle_ns;
    reading.times.kernel_ns = kernel_ns;
    reading.times.user_ns = user_ns;
    reading.memory_available = memory_available;
    reading.memory_total_bytes = total_mem;
    reading.memory_available_bytes = avail_mem;
    reading.wall_clock_ns = wall_ns;
    reading.error = std::move(error);
    return reading;
}

// 受控进程枚举：每帧固定一个进程，成功快照（不参与本页断言，仅驱动生产
// SamplingWorker 的同一调度）。
class FakeEnumerator final : public tmog::IProcessEnumerator {
public:
    std::optional<tmog::SampleResult> take_sample() override {
        ++calls;
        tmog::SampleResult result;
        result.ok = true;
        result.wall_clock_ns = static_cast<std::uint64_t>(calls) * 1'000'000'000ULL;
        tmog::ProcessSnapshot process;
        process.identity.pid = 42;
        process.identity.creation_tick = 7;
        process.name = "alpha";
        process.cpu_time_ns = static_cast<std::uint64_t>(calls) * 100'000'000ULL;
        process.cpu_time_available = true;
        process.resident_bytes = 1 * 1024 * 1024;
        process.resident_available = true;
        process.io_available = false;
        result.processes.push_back(process);
        return result;
    }

    int calls = 0;
};

// 受控整机来源：按脚本逐帧返回读数，脚本耗尽后重复最后一帧；记录读取次数。
class ScriptedSystemSource final : public tmog::ISystemMetricsSource {
public:
    tmog::SystemReading read() override {
        const std::size_t index = static_cast<std::size_t>(reads);
        ++reads;
        if (readings.empty()) return tmog::SystemReading{};
        return readings[std::min(index, readings.size() - 1)];
    }

    std::vector<tmog::SystemReading> readings;
    int reads = 0;
};

class WindowFixture {
public:
    explicit WindowFixture(const QString& settings_path,
                           std::vector<tmog::SystemReading> readings) {
        auto enumerator = std::make_unique<FakeEnumerator>();
        raw_enumerator = enumerator.get();
        auto system = std::make_unique<ScriptedSystemSource>();
        system->readings = std::move(readings);
        raw_system = system.get();
        window = std::make_unique<tmog::MainWindow>(
            nullptr, std::move(enumerator), nullptr, settings_path,
            std::move(system));
        // 手动刷新驱动采样，避免 1s 定时器在断言期间追加样本。
        window->set_refresh_interval(5000);
        window->show();
        // 处理构造末尾排队的首次采样 tick（首帧）。
        pump_ms(250);
    }

    ~WindowFixture() {
        if (!window) return;
        window->close();
        pump_ms(250);
        window.reset();
    }

    std::unique_ptr<tmog::MainWindow> window;
    FakeEnumerator* raw_enumerator = nullptr;
    ScriptedSystemSource* raw_system = nullptr;
};

// 触发一次手动采样并等待整机回调入历史；随后留出 worker 收尾时间。
bool drive_sample(WindowFixture& fixture, tmog::PerformancePage* page,
                  std::size_t expected_history) {
    if (auto* refresh = fixture.window->findChild<QAction*>("refresh_action"))
        refresh->trigger();
    return pump_until(
        [page, expected_history] {
            return page->history_size() >= expected_history;
        },
        5000);
}

QLabel* label_of(QWidget* root, const char* name) {
    return root->findChild<QLabel*>(QString::fromLatin1(name));
}

QString text_of(QWidget* root, const char* name) {
    QLabel* label = label_of(root, name);
    return label ? label->text() : QString();
}

void run_checks(const QString& settings_path, QString* screenshot_path) {
    // 受控整机脚本：每一帧对应生产采样管线的一次真实读取。
    //  r1 首帧（无基线）→ 待采样；r2 时间差 → 66.7%；
    //  r3 整机时间读取失败 → 缺样；r4 失败后首帧 → 重建基线；
    //  r5 → 66.7% 新段；r6 仅内存失败 → CPU 继续、内存不可用；
    //  r7 暂停帧；r8 恢复首帧；r9 恢复后第二帧 → 66.7% 第三段。
    std::vector<tmog::SystemReading> script;
    script.push_back(make_reading(1000, 2000, 1000, 1'000'000'000ULL));
    script.push_back(make_reading(1100, 2200, 1100, 2'000'000'000ULL));
    script.push_back(make_reading(1300, 2400, 1200, 3'000'000'000ULL, false,
                                  16 * kGiB, 8 * kGiB, true,
                                  "GetSystemTimes failed (error 5)"));
    script.push_back(make_reading(1300, 2400, 1200, 4'000'000'000ULL));
    script.push_back(make_reading(1400, 2600, 1300, 5'000'000'000ULL));
    script.push_back(make_reading(1500, 2800, 1400, 6'000'000'000ULL, true,
                                  16 * kGiB, 8 * kGiB, false,
                                  "GlobalMemoryStatusEx failed (error 5)"));
    script.push_back(make_reading(1600, 3000, 1500, 7'000'000'000ULL));
    script.push_back(make_reading(1700, 3200, 1600, 8'000'000'000ULL));
    script.push_back(make_reading(1800, 3400, 1700, 9'000'000'000ULL));

    WindowFixture fixture(settings_path, std::move(script));
    tmog::MainWindow* window = fixture.window.get();
    check(window != nullptr, "T1: MainWindow constructed with injected sources");
    // 性能页不得把主窗口最小尺寸撑过既有设置持久化可恢复的 700x520 档位，
    // 否则用户无法缩小窗口（N5 同口径）。
    check(window->minimumSizeHint().width() <= 700 &&
              window->minimumSizeHint().height() <= 520,
          "T1: performance page keeps window minimum size within 700x520 (actual " +
              std::to_string(window->minimumSizeHint().width()) + "x" +
              std::to_string(window->minimumSizeHint().height()) + ")");

    // ---- T1：三个真实页面与导航 ----
    auto* stack = window->findChild<QStackedWidget*>("main_stack");
    check(stack != nullptr, "T1: main_stack exists");
    check(stack != nullptr && stack->count() == 3,
          "T1: exactly three real pages (processes/settings/performance)");
    check(window->findChild<QWidget*>("processes_page") != nullptr,
          "T1: processes_page exists");
    check(window->findChild<QWidget*>("settings_page") != nullptr,
          "T1: settings_page exists");
    auto* page = window->findChild<tmog::PerformancePage*>("performance_page");
    check(page != nullptr, "T1: performance_page exists");
    if (!page) return;
    check(stack != nullptr &&
              stack->currentWidget() == window->findChild<QWidget*>("processes_page"),
          "T1: default page is processes");

    auto* nav_performance = window->findChild<QAction*>("nav_performance_action");
    check(nav_performance != nullptr, "T1: nav_performance_action exists");
    if (!nav_performance) return;
    check(nav_performance->shortcut() == QKeySequence(QStringLiteral("Ctrl+3")),
          "T1: Ctrl+3 bound to performance action");
    auto* error_label = label_of(page, "performance_error_label");
    check(error_label != nullptr, "T1: performance error label exists");

    // 首帧：待采样（无基线），但内存口径已可用。
    check(fixture.raw_system->reads == 1, "T1: exactly one sample after startup");
    check(page->history_size() == 1, "T1: first sample recorded in history");
    check(text_of(page, "cpu_value_label") == QStringLiteral("待采样"),
          "T1: first CPU sample shows 待采样");
    check(text_of(page, "memory_used_label") ==
              QStringLiteral("已用 8.00 GiB / 16.00 GiB"),
          "T1: memory used = total - available with GiB units");
    check(text_of(page, "memory_percent_label") == QStringLiteral("使用率 50.0%"),
          "T1: memory usage percent");
    check(text_of(page, "memory_available_label") == QStringLiteral("可用 8.00 GiB"),
          "T1: memory available with GiB units");
    check(page->cpu_curve_segments() == 0,
          "T1: no CPU curve segment while Pending");

    // ---- T2：Ctrl+3 切页不采样、不冻结；进程操作按页可用性切换 ----
    const int reads_before_nav = fixture.raw_system->reads;
    nav_performance->trigger();
    pump_ms(100);
    check(stack->currentWidget() == page, "T2: Ctrl+3 action shows performance page");
    check(nav_performance->isChecked(), "T2: performance nav checked");
    check(fixture.raw_system->reads == reads_before_nav,
          "T2: switching pages triggers no extra sampling");
    auto* end_action = window->findChild<QAction*>("end_task_action");
    auto* pause_action = window->findChild<QAction*>("pause_action");
    auto* refresh_action = window->findChild<QAction*>("refresh_action");
    check(end_action != nullptr && !end_action->isEnabled(),
          "T2: end task disabled on performance page");
    check(pause_action != nullptr && pause_action->isEnabled(),
          "T2: pause remains available (sampling-level control)");
    check(refresh_action != nullptr && refresh_action->isEnabled(),
          "T2: refresh remains available");

    // ---- T3：第二帧为整机累计时间差百分比 ----
    check(drive_sample(fixture, page, 2), "T3: second sample delivered");
    check(text_of(page, "cpu_value_label") == QStringLiteral("66.7%"),
          "T3: 66.7% from whole-system time deltas");
    check(page->cpu_curve_segments() == 1, "T3: one CPU curve segment");
    check(error_label->isVisible() == false,
          "T3: no error label on healthy sample");

    // ---- T4：整机读取失败 → 缺样，错误不显示 0，曲线断开 ----
    check(drive_sample(fixture, page, 3), "T4: failed sample delivered");
    check(text_of(page, "cpu_value_label") == QStringLiteral("不可用"),
          "T4: failure shows 不可用, never 0%");
    check(text_of(page, "cpu_value_label") != QStringLiteral("0.0%") &&
              text_of(page, "cpu_value_label") != QStringLiteral("0%"),
          "T4: failure is not rendered as zero");
    check(page->cpu_curve_segments() == 1,
          "T4: gap does not create a bridged segment");
    check(error_label->isVisible(), "T4: error label visible on failure");
    check(error_label->text().contains(QStringLiteral("GetSystemTimes failed")),
          "T4: original error text surfaced");

    // ---- T5：失败后恢复首帧重建基线 → 待采样，再下一帧 Ok 新段 ----
    check(drive_sample(fixture, page, 4), "T5: first sample after gap delivered");
    check(text_of(page, "cpu_value_label") == QStringLiteral("待采样"),
          "T5: recovery frame rebuilds baseline and shows 待采样");
    check(!error_label->isVisible(), "T5: error label cleared on recovery frame");
    check(drive_sample(fixture, page, 5), "T5: post-recovery sample delivered");
    check(text_of(page, "cpu_value_label") == QStringLiteral("66.7%"),
          "T5: CPU recovers after baseline rebuild");
    check(page->cpu_curve_segments() == 2,
          "T5: curve starts a new segment instead of bridging the gap");

    // ---- T6：内存失败时 CPU 继续、内存显示不可用（不是 0） ----
    check(drive_sample(fixture, page, 6), "T6: memory-failed sample delivered");
    check(text_of(page, "cpu_value_label") == QStringLiteral("66.7%"),
          "T6: CPU keeps updating when only memory fails");
    check(text_of(page, "memory_used_label") == QStringLiteral("已用 不可用"),
          "T6: memory used shows 不可用, not 0");
    check(text_of(page, "memory_percent_label") == QStringLiteral("使用率 不可用"),
          "T6: memory percent shows 不可用, not 0%");
    check(text_of(page, "memory_available_label") == QStringLiteral("可用 不可用"),
          "T6: memory available shows 不可用, not 0");
    check(error_label->isVisible() &&
              error_label->text().contains(
                  QStringLiteral("GlobalMemoryStatusEx failed")),
          "T6: memory error text surfaced");
    check(page->cpu_curve_segments() == 2,
          "T6: CPU curve continues across memory-only failure");

    // ---- T7：暂停后手动采样重建基线；恢复后再建基线，曲线不跨缺口 ----
    pause_action->setChecked(true);
    check(pause_action->isChecked(), "T7: pause engaged");
    const int reads_before_pause = fixture.raw_system->reads;
    pump_ms(300);
    check(fixture.raw_system->reads == reads_before_pause,
          "T7: paused sampling does not advance on timer");
    check(drive_sample(fixture, page, 7), "T7: manual refresh during pause delivered");
    check(text_of(page, "cpu_value_label") == QStringLiteral("待采样"),
          "T7: paused frame invalidated baseline -> 待采样");
    pause_action->setChecked(false);
    check(drive_sample(fixture, page, 8), "T7: first sample after resume delivered");
    check(text_of(page, "cpu_value_label") == QStringLiteral("待采样"),
          "T7: resume frame rebuilds baseline -> 待采样");
    check(drive_sample(fixture, page, 9), "T7: sample after resume baseline delivered");
    check(text_of(page, "cpu_value_label") == QStringLiteral("66.7%"),
          "T7: CPU resumes after pause/resume baseline rebuild");
    check(page->cpu_curve_segments() == 3,
          "T7: pause/resume gap starts another curve segment");

    // ---- T8：返回进程页恢复进程操作 ----
    auto* nav_processes = window->findChild<QAction*>("nav_processes_action");
    check(nav_processes != nullptr, "T8: nav_processes_action exists");
    if (nav_processes) {
        nav_processes->trigger();
        pump_ms(100);
        check(stack->currentWidget() ==
                  window->findChild<QWidget*>("processes_page"),
              "T8: back to processes page");
        check(end_action->isEnabled(),
              "T8: end task re-enabled on processes page");
    }

    // ---- T9：离屏渲染截图（真实 UI 绘制证据） ----
    nav_performance->trigger();
    pump_ms(150);
    const QPixmap shot = page->grab();
    check(!shot.isNull(), "T9: performance page renders offscreen");
    const QString path =
        QDir::current().filePath(QStringLiteral("performance_page_offscreen.png"));
    check(shot.save(path), "T9: screenshot saved");
    if (screenshot_path) *screenshot_path = path;

    check(page->history_size() >= 9, "T9: bounded history keeps recent samples");
    check(fixture.raw_enumerator->calls >= 9,
          "T9: process sampling still ran in the same scheduler");
}

} // namespace

int main(int argc, char** argv) {
    QApplication app(argc, argv);

    // 显式落在构建目录下，避免受限环境下系统临时目录不可写导致 T0 假失败；
    // 同时把 errorString 带进断言，便于区分环境问题与代码问题。
    QTemporaryDir settings_dir(
        QDir::current().filePath(QStringLiteral("perf_checks_settings_XXXXXX")));
    check(settings_dir.isValid(),
          std::string("T0: temporary settings dir (") +
              settings_dir.errorString().toStdString() + ")");
    if (!settings_dir.isValid()) {
        std::fprintf(stderr, "performance_checks: cannot create temp settings dir\n");
        return 1;
    }
    const QString settings_path =
        settings_dir.filePath(QStringLiteral("display-settings.json"));

    QString screenshot_path;
    run_checks(settings_path, &screenshot_path);

    if (g_failures != 0) {
        std::fprintf(stderr, "performance_checks: %d failure(s)\n", g_failures);
        return 1;
    }
    std::printf("performance_checks: all checks passed\n");
    if (!screenshot_path.isEmpty())
        std::printf("performance_checks: screenshot %s\n",
                    screenshot_path.toUtf8().constData());
    return 0;
}
