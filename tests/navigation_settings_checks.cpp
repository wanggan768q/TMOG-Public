// #17U 检查：页面导航 + 显示设置（刷新档位/窗口尺寸/排序偏好持久化）。
// 全程离屏（ctest ENV QT_QPA_PLATFORM=offscreen），真实生产 MainWindow +
// 注入受控枚举器（G5 模式）驱动真实 SamplingWorker/事件循环；不真实枚举、
// 不真实终止、不触碰真实用户配置（显式传临时 settings 路径）。
//
//  N1. 默认页 Processes；QStackedWidget 两真实页面；objectName 可定位
//  N2. Qt action 与 Ctrl+1/Ctrl+2 切换页面；设置页禁用进程操作；切页不产生额外采样（计数）
//  N3. 四档刷新：click 单选 → 同一 timer interval 实际改变；非法档位 →
//      1000 + 状态栏非模态反馈；采样不重叠/不重入（max_active==1）
//  N4. 暂停跨页保持；切页不自动执行操作
//  N5. 重启式构造恢复刷新档位/窗口尺寸/排序方向（临时设置文件）
//  N6. 损坏 JSON / 越界值 → 安全默认（1000 ms、pid 升序、默认尺寸）+ 错误反馈
//  N7. 只读设置文件写入失败 → 反馈且旧字节不变；无效目录 → 反馈
//  N8. 关闭后 timer 停止，不再启动采样
#include <QAction>
#include <QApplication>
#include <QDir>
#include <QEventLoop>
#include <QFile>
#include <QHeaderView>
#include <QJsonDocument>
#include <QJsonObject>
#include <QKeySequence>
#include <QLabel>
#include <QRadioButton>
#include <QScreen>
#include <QSize>
#include <QStackedWidget>
#include <QStatusBar>
#include <QTableView>
#include <QTemporaryDir>
#include <QThread>
#include <QTimer>
#include <QWidget>
#include <chrono>
#include <functional>
#include <iostream>
#include <memory>
#include <optional>
#include <string>
#include <atomic>

#ifdef TMOG_HAVE_QT_TEST
#include <QtTest/QTest>
#endif

#include "DisplaySettings.h"
#include "MainWindow.h"
#include "ProcessTableModel.h"

using namespace tmog;

namespace {

int failures = 0;
int checks = 0;

void check(bool ok, const std::string& what) {
    ++checks;
    std::cout << (ok ? "PASS" : "FAIL") << ": " << what << "\n";
    if (!ok) ++failures;
}

void pump_ms(int ms) {
    const auto deadline = std::chrono::steady_clock::now() +
                          std::chrono::milliseconds(ms);
    while (std::chrono::steady_clock::now() < deadline) {
        QApplication::processEvents(QEventLoop::AllEvents, 20);
        QThread::msleep(5);
    }
}

bool pump_until(const std::function<bool()>& pred, int timeout_ms) {
    const auto deadline = std::chrono::steady_clock::now() +
                          std::chrono::milliseconds(timeout_ms);
    while (!pred() && std::chrono::steady_clock::now() < deadline) {
        QApplication::processEvents(QEventLoop::AllEvents, 20);
        QThread::msleep(5);
    }
    return pred();
}

// 受控枚举器：每帧两个稳定进程，记录并发度（防重叠/重入 oracle）。
// sleep_ms 用于拉长单帧耗时，验证改变档位不会叠起第二个采样。
class ControlledEnumerator : public IProcessEnumerator {
public:
    std::optional<SampleResult> take_sample() override {
        const int active = ++active_;
        int observed = max_active_.load();
        while (active > observed &&
               !max_active_.compare_exchange_weak(observed, active)) {
        }
        const int sleep = sleep_ms_.load();
        if (sleep > 0) QThread::msleep(static_cast<unsigned long>(sleep));
        const int frame = ++calls_;

        SampleResult result;
        result.ok = true;
        result.wall_clock_ns =
            static_cast<std::uint64_t>(frame) * 1'000'000'000ULL;
        for (std::uint32_t pid = 1; pid <= 2; ++pid) {
            ProcessSnapshot ps;
            ps.identity.pid = pid;
            ps.identity.creation_tick = 1;
            ps.name = pid == 1 ? "alpha" : "beta";
            ps.cpu_time_available = true;
            ps.cpu_time_ns =
                static_cast<std::uint64_t>(frame) * pid * 10'000'000ULL;
            ps.resident_available = true;
            ps.resident_bytes = pid * 1024ULL * 1024ULL;
            result.processes.push_back(ps);
        }
        --active_;
        return result;
    }

    int calls() const { return calls_.load(); }
    int max_active() const { return max_active_.load(); }
    void set_sleep_ms(int ms) { sleep_ms_.store(ms); }

private:
    std::atomic<int> calls_{0};
    std::atomic<int> active_{0};
    std::atomic<int> max_active_{0};
    std::atomic<int> sleep_ms_{0};
};

struct WindowFixture {
    std::unique_ptr<MainWindow> win;
    ControlledEnumerator* raw = nullptr;
};

WindowFixture make_window(const QString& settings_path) {
    WindowFixture f;
    auto enumerator = std::make_unique<ControlledEnumerator>();
    f.raw = enumerator.get();
    f.win = std::make_unique<MainWindow>(nullptr, std::move(enumerator), nullptr,
                                        settings_path);
    f.win->show();
    pump_ms(150);   // 构造期 Queued 首帧采样完成
    return f;
}

void close_window(WindowFixture& f) {
    if (!f.win) return;
    f.win->close();
    pump_ms(150);
    f.win.reset();
}

QAction* action_of(MainWindow& win, const char* name) {
    return win.findChild<QAction*>(QString::fromLatin1(name));
}

QRadioButton* radio_of(MainWindow& win, int ms) {
    return win.findChild<QRadioButton*>(
        QStringLiteral("refresh_%1").arg(ms));
}

QTimer* timer_of(MainWindow& win) {
    return win.findChild<QTimer*>(QStringLiteral("sample_timer"));
}

QStackedWidget* stack_of(MainWindow& win) {
    return win.findChild<QStackedWidget*>(QStringLiteral("main_stack"));
}

// N6：加载默认尺寸按 screen()->availableGeometry() 夹取（见
// MainWindow::apply_loaded_settings）。期望值与生产代码同一算法。
QSize expected_default_window_size() {
    const QScreen* screen = QApplication::primaryScreen();
    const QRect available =
        screen ? screen->availableGeometry() : QRect(0, 0, 1920, 1080);
    return QSize(qMin(1000, available.width()),
                 qMin(700, available.height()));
}

QLabel* error_label_of(MainWindow& win) {
    return win.findChild<QLabel*>(QStringLiteral("settings_error_label"));
}

QString status_message(MainWindow& win) {
    return win.statusBar()->currentMessage();
}

// 刷新档位：经真实 QRadioButton 点击驱动（用户路径），返回是否生效。
bool click_tier(MainWindow& win, int ms) {
    QRadioButton* radio = radio_of(win, ms);
    if (!radio) return false;
    radio->click();
    pump_ms(50);
    return true;
}

QString read_text_file(const QString& path) {
    QFile f(path);
    if (!f.open(QIODevice::ReadOnly)) return QString();
    return QString::fromUtf8(f.readAll());
}

// ---------------------------------------------------------------------------

void n1_default_page_and_widgets(const QString& settings_path) {
    WindowFixture f = make_window(settings_path);
    MainWindow& win = *f.win;

    auto* stack = stack_of(win);
    auto* processes = win.findChild<QWidget*>(QStringLiteral("processes_page"));
    auto* settings = win.findChild<QWidget*>(QStringLiteral("settings_page"));
    auto* table = win.findChild<QTableView*>(QStringLiteral("process_table"));
    auto* timer = timer_of(win);

    check(stack != nullptr, "N1: QStackedWidget present (main_stack)");
    check(stack && stack->count() == 2, "N1: exactly two real pages");
    check(processes && settings, "N1: processes_page + settings_page exist");
    check(stack && stack->currentWidget() == processes,
          "N1: default page is Processes on every start");
    check(table != nullptr, "N1: process table present (process_table)");
    // 离屏测试不依赖 isVisible()：用 isVisibleTo 表达“在父页可见”。
    check(stack && processes && stack->currentWidget() == processes && table &&
              table->isVisibleTo(processes),
          "N1: current page is processes_page and process_table is visible in it "
          "(isVisibleTo)");
    check(timer != nullptr, "N1: sample timer present (sample_timer)");
    check(action_of(win, "pause_action") && action_of(win, "refresh_action") &&
              action_of(win, "end_task_action"),
          "N1: process actions located by objectName");

    QList<QRadioButton*> radios = win.findChildren<QRadioButton*>();
    check(radios.size() == 4, "N1: settings page has four refresh tiers");
    bool tiers_ok = true;
    for (int ms : {500, 1000, 2000, 5000}) {
        QRadioButton* r = radio_of(win, ms);
        tiers_ok = tiers_ok && r && r->isEnabled();
    }
    check(tiers_ok, "N1: all four tiers are real enabled controls");

    check(win.refresh_interval_ms() == 1000 && timer && timer->interval() == 1000,
          "N1: default tier 1000 ms applied to timer");
    check(radio_of(win, 1000) && radio_of(win, 1000)->isChecked(),
          "N1: 1000 ms radio reflects active tier");

    close_window(f);
}

void n2_navigation_actions_and_ctrl_keys(const QString& settings_path) {
    WindowFixture f = make_window(settings_path);
    MainWindow& win = *f.win;
    auto* stack = stack_of(win);
    auto* processes = win.findChild<QWidget*>(QStringLiteral("processes_page"));
    auto* settings = win.findChild<QWidget*>(QStringLiteral("settings_page"));
    QAction* nav_processes = action_of(win, "nav_processes_action");
    QAction* nav_settings = action_of(win, "nav_settings_action");
    QAction* pause = action_of(win, "pause_action");
    QAction* refresh = action_of(win, "refresh_action");
    QAction* end_task = action_of(win, "end_task_action");

    check(nav_processes && nav_settings, "N2: navigation actions exist");
    check(nav_processes && nav_processes->shortcut() == QKeySequence("Ctrl+1"),
          "N2: Processes action bound to Ctrl+1");
    check(nav_settings && nav_settings->shortcut() == QKeySequence("Ctrl+2"),
          "N2: settings action bound to Ctrl+2");

    // N2：切页本身不得触发采样。先把档位调到 5000 ms（远大于本段测试窗口，
    // 排除 timer 自然 tick），再在每次切页前后比较 fake 枚举器采样计数。
    check(click_tier(win, 5000), "N2: baseline tier 5000 ms applied");
    pump_ms(150);   // 让构造期 Queued 首帧采样收尾，避免把在途帧算进切页
    check(win.refresh_interval_ms() == 5000,
          "N2: baseline refresh interval is 5000 ms before page switch");

    const int calls_before_settings = f.raw->calls();
    if (nav_settings) nav_settings->trigger();
    pump_ms(200);
    check(stack->currentWidget() == settings, "N2: action switches to settings page");
    check(nav_settings && nav_settings->isChecked(),
          "N2: settings action checked after switch");
    check(pause && !pause->isEnabled() && refresh && !refresh->isEnabled() &&
              end_task && !end_task->isEnabled(),
          "N2: destructive/process actions disabled on settings page");
    check(pause && !pause->isChecked(),
          "N2: page switch does not auto-execute or toggle process actions");
    check(f.raw->calls() == calls_before_settings,
          "N2: page switch itself does not trigger sampling (action -> settings)");
    check(win.refresh_interval_ms() == 5000,
          "N2: page switch keeps refresh interval (action -> settings)");

    const int calls_before_processes = f.raw->calls();
    if (nav_processes) nav_processes->trigger();
    pump_ms(200);
    check(stack->currentWidget() == processes, "N2: action returns to Processes page");
    check(pause && pause->isEnabled() && refresh && refresh->isEnabled() &&
              end_task && end_task->isEnabled(),
          "N2: process actions re-enabled on Processes page");
    check(f.raw->calls() == calls_before_processes,
          "N2: page switch itself does not trigger sampling (action -> processes)");
    check(win.refresh_interval_ms() == 5000,
          "N2: page switch keeps refresh interval (action -> processes)");

#ifdef TMOG_HAVE_QT_TEST
    win.activateWindow();
    win.setFocus();
    pump_ms(50);
    const int calls_before_key_settings = f.raw->calls();
    QTest::keyClick(&win, Qt::Key_2, Qt::ControlModifier);
    QTest::qWait(200);
    check(stack->currentWidget() == settings, "N2: Ctrl+2 switches to settings page");
    check(f.raw->calls() == calls_before_key_settings,
          "N2: page switch itself does not trigger sampling (Ctrl+2 -> settings)");
    check(win.refresh_interval_ms() == 5000,
          "N2: Ctrl+2 page switch keeps refresh interval");
    const int calls_before_key_processes = f.raw->calls();
    QTest::keyClick(&win, Qt::Key_1, Qt::ControlModifier);
    QTest::qWait(200);
    check(stack->currentWidget() == processes, "N2: Ctrl+1 returns to Processes page");
    check(f.raw->calls() == calls_before_key_processes,
          "N2: page switch itself does not trigger sampling (Ctrl+1 -> processes)");
    check(win.refresh_interval_ms() == 5000,
          "N2: Ctrl+1 page switch keeps refresh interval");
#else
    std::cout << "SKIP: Ctrl+key delivery (Qt6::Test unavailable); shortcut "
                 "bindings asserted above\n";
#endif

    close_window(f);
}

void n3_refresh_tiers_and_no_overlap(const QString& settings_path) {
    WindowFixture f = make_window(settings_path);
    MainWindow& win = *f.win;
    QTimer* timer = timer_of(win);

    for (int ms : {500, 2000, 5000, 1000}) {
        check(click_tier(win, ms), "N3: tier radio " + std::to_string(ms) + " found");
        check(win.refresh_interval_ms() == ms,
              "N3: set_refresh_interval(" + std::to_string(ms) + ") accepted");
        check(timer->interval() == ms,
              "N3: timer interval changed to " + std::to_string(ms));
        check(radio_of(win, ms) && radio_of(win, ms)->isChecked(),
              "N3: radio checked for " + std::to_string(ms));
        check(timer->isActive(), "N3: same timer remains active after change");
    }
    check(win.findChildren<QTimer*>(QStringLiteral("sample_timer")).size() == 1,
          "N3: only one sampling timer exists (no second worker/timer)");

    // 非法档位 → 安全 1000 + 状态栏非模态反馈
    win.set_refresh_interval(1234);
    check(win.refresh_interval_ms() == 1000, "N3: invalid tier falls back to 1000");
    check(timer->interval() == 1000, "N3: invalid tier applies 1000 to timer");
    check(radio_of(win, 1000) && radio_of(win, 1000)->isChecked(),
          "N3: invalid tier re-checks safe radio");
    const QString msg = status_message(win);
    check(msg.contains(QStringLiteral("无效")) &&
              msg.contains(QStringLiteral("1000")),
          "N3: non-modal status feedback for invalid tier");

    // 拉长单帧 + 快档位：验证采样不重叠/不重入
    f.raw->set_sleep_ms(120);
    click_tier(win, 500);
    const int before = f.raw->calls();
    pump_ms(1600);
    check(f.raw->calls() - before >= 2,
          "N3: periodic sampling continues at fast tier");
    check(f.raw->max_active() == 1,
          "N3: enumerator never overlaps/re-enters (max_active == 1)");

    close_window(f);
}

void n4_pause_survives_page_switch(const QString& settings_path) {
    WindowFixture f = make_window(settings_path);
    MainWindow& win = *f.win;
    auto* stack = stack_of(win);
    auto* processes = win.findChild<QWidget*>(QStringLiteral("processes_page"));
    auto* settings = win.findChild<QWidget*>(QStringLiteral("settings_page"));
    QAction* pause = action_of(win, "pause_action");
    QAction* nav_processes = action_of(win, "nav_processes_action");
    QAction* nav_settings = action_of(win, "nav_settings_action");

    check(pause != nullptr, "N4: pause action found");
    pause->setChecked(true);
    pump_ms(300);
    const int paused_calls = f.raw->calls();
    check(pause->isChecked(), "N4: paused state set");

    nav_settings->trigger();
    pump_ms(50);
    check(stack->currentWidget() == settings, "N4: switched to settings");
    check(pause->isChecked(), "N4: pause stays checked across page switch");
    check(!pause->isEnabled(), "N4: pause disabled on settings page");

    pump_ms(1200);   // 多个 tick：暂停中不得采样
    check(f.raw->calls() == paused_calls,
          "N4: no sampling while paused (timer tick is a no-op)");

    nav_processes->trigger();
    pump_ms(50);
    check(stack->currentWidget() == processes, "N4: back on Processes page");
    check(pause->isChecked(), "N4: pause still checked after returning");

    pause->setChecked(false);
    pump_ms(1400);
    check(f.raw->calls() > paused_calls,
          "N4: sampling resumes after unpause (no lost pause state)");

    close_window(f);
}

void n5_persistence_restart(const QString& settings_path) {
    const int max_w = QApplication::primaryScreen()
                          ? QApplication::primaryScreen()->availableGeometry().width()
                          : 800;
    const int max_h = QApplication::primaryScreen()
                          ? QApplication::primaryScreen()->availableGeometry().height()
                          : 600;
    const int expect_w = qMin(700, max_w);
    const int expect_h = qMin(520, max_h);

    {
        WindowFixture f = make_window(settings_path);
        MainWindow& win = *f.win;
        click_tier(win, 2000);
        win.resize(700, 520);
        pump_ms(50);
        auto* table = win.findChild<QTableView*>(QStringLiteral("process_table"));
        table->sortByColumn(ProcessTableModel::ColMemory, Qt::DescendingOrder);
        pump_ms(100);
        f.win->close();
        pump_ms(150);
        f.win.reset();
    }

    check(QFile::exists(settings_path), "N5: settings file written on close");
    SettingsLoadResult loaded = load_display_settings(settings_path);
    check(loaded.error.isEmpty(), "N5: saved settings reload without error");
    check(loaded.settings.refresh_ms == 2000, "N5: refresh tier persisted (2000)");
    check(loaded.settings.width == expect_w && loaded.settings.height == expect_h,
          "N5: window size persisted (700x520, screen-clamped)");
    check(loaded.settings.sort_column == "memory" &&
              loaded.settings.sort_descending,
          "N5: sort preference persisted (memory descending)");

    {
        WindowFixture f = make_window(settings_path);
        MainWindow& win = *f.win;
        check(win.refresh_interval_ms() == 2000,
              "N5: restart restores refresh tier");
        check(radio_of(win, 2000) && radio_of(win, 2000)->isChecked(),
              "N5: restart restores checked tier radio");
        check(win.width() == expect_w && win.height() == expect_h,
              "N5: restart restores window size");
        auto* table = win.findChild<QTableView*>(QStringLiteral("process_table"));
        check(table->horizontalHeader()->sortIndicatorSection() ==
                  ProcessTableModel::ColMemory &&
                  table->horizontalHeader()->sortIndicatorOrder() ==
                      Qt::DescendingOrder,
              "N5: restart restores sort column and direction");
        QLabel* err = error_label_of(win);
        check(err && err->isHidden(), "N5: no error feedback on valid settings");
        close_window(f);
    }
}

void n6_corrupt_and_out_of_range(const QString& dir_path) {
    const QSize default_size = expected_default_window_size();

    const QString corrupt_path = dir_path + "/corrupt.json";
    {
        QFile f(corrupt_path);
        check(f.open(QIODevice::WriteOnly | QIODevice::Truncate),
              "N6: corrupt fixture writable");
        f.write("{ this is not json ");
    }
    {
        WindowFixture f = make_window(corrupt_path);
        MainWindow& win = *f.win;
        auto* table = win.findChild<QTableView*>(QStringLiteral("process_table"));
        check(win.refresh_interval_ms() == 1000,
              "N6: corrupt JSON -> safe defaults (tier 1000)");
        check(action_of(win, "nav_settings_action") != nullptr,
              "N6: window still fully constructed");
        check(table && table->horizontalHeader()->sortIndicatorSection() ==
                           ProcessTableModel::ColPid &&
                  table->horizontalHeader()->sortIndicatorOrder() ==
                      Qt::AscendingOrder,
              "N6: corrupt JSON -> default sort is pid ascending");
        check(win.width() == default_size.width() &&
                  win.height() == default_size.height(),
              "N6: corrupt JSON -> default window size "
              "(qMin(1000, availableWidth) x qMin(700, availableHeight))");
        action_of(win, "nav_settings_action")->trigger();
        pump_ms(50);
        QLabel* err = error_label_of(win);
        check(err && !err->isHidden() && !err->text().isEmpty(),
              "N6: corrupt JSON shows visible error feedback");
        check(status_message(win).contains(QStringLiteral("加载失败")),
              "N6: load error surfaced in status bar");
        close_window(f);
    }

    // 合法 JSON 但档位越界/未知值 → 整份安全默认 + 错误反馈
    const QString out_of_range = dir_path + "/out_of_range.json";
    {
        QJsonObject o;
        o["schema_version"] = 1;
        o["width"] = 1000;
        o["height"] = 700;
        o["refresh_ms"] = 1234;
        o["sort_column"] = "bogus";
        o["sort_descending"] = false;
        QFile f(out_of_range);
        check(f.open(QIODevice::WriteOnly | QIODevice::Truncate),
              "N6: out-of-range fixture writable");
        f.write(QJsonDocument(o).toJson(QJsonDocument::Compact));
    }
    {
        WindowFixture f = make_window(out_of_range);
        MainWindow& win = *f.win;
        auto* table = win.findChild<QTableView*>(QStringLiteral("process_table"));
        check(win.refresh_interval_ms() == 1000,
              "N6: out-of-range values -> safe default tier");
        check(table && table->horizontalHeader()->sortIndicatorSection() ==
                           ProcessTableModel::ColPid &&
                  table->horizontalHeader()->sortIndicatorOrder() ==
                      Qt::AscendingOrder,
              "N6: out-of-range values -> default sort is pid ascending");
        check(win.width() == default_size.width() &&
                  win.height() == default_size.height(),
              "N6: out-of-range values -> default window size "
              "(qMin(1000, availableWidth) x qMin(700, availableHeight))");
        action_of(win, "nav_settings_action")->trigger();
        pump_ms(50);
        QLabel* err = error_label_of(win);
        check(err && !err->isHidden() && !err->text().isEmpty(),
              "N6: out-of-range values show visible error feedback");
        close_window(f);
    }
}

void n7_write_failures(const QString& dir_path) {
    const QString readonly_path = dir_path + "/readonly.json";
    {
        DisplaySettings s;
        s.width = 800;
        s.height = 600;
        s.refresh_ms = 1000;
        s.sort_column = "pid";
        s.sort_descending = false;
        QString error;
        check(save_display_settings(readonly_path, s, error),
              "N7: baseline settings file created");
    }
    const QString before = read_text_file(readonly_path);
    QFile::setPermissions(readonly_path, QFile::ReadOwner | QFile::ReadUser |
                                            QFile::ReadGroup |
                                            QFile::ReadOther);
    {
        WindowFixture f = make_window(readonly_path);
        MainWindow& win = *f.win;
        click_tier(win, 2000);   // 触发保存 → QSaveFile 失败
        check(win.refresh_interval_ms() == 2000,
              "N7: in-memory tier still changes when save fails");
        action_of(win, "nav_settings_action")->trigger();
        pump_ms(50);
        QLabel* err = error_label_of(win);
        check(err && !err->isHidden() &&
                  err->text().contains(QStringLiteral("保存失败")),
              "N7: read-only save failure shows visible feedback");
        check(read_text_file(readonly_path) == before,
              "N7: read-only old settings bytes unchanged");
        close_window(f);
    }
    QFile::setPermissions(readonly_path, QFile::ReadOwner | QFile::WriteOwner |
                                            QFile::ReadUser | QFile::WriteUser);

    // 无效目录：父路径是普通文件 → mkpath 失败 → 保存反馈
    const QString blocked_dir = dir_path + "/blocked";
    {
        QFile f(blocked_dir);
        check(f.open(QIODevice::WriteOnly | QIODevice::Truncate),
              "N7: blocked-dir fixture writable");
        f.write("not a directory");
    }
    const QString blocked_path = blocked_dir + "/settings.json";
    {
        WindowFixture f = make_window(blocked_path);
        MainWindow& win = *f.win;
        click_tier(win, 2000);
        action_of(win, "nav_settings_action")->trigger();
        pump_ms(50);
        QLabel* err = error_label_of(win);
        check(err && !err->isHidden() &&
                  err->text().contains(QStringLiteral("保存失败")),
              "N7: invalid directory save failure shows visible feedback");
        check(read_text_file(blocked_dir) == QStringLiteral("not a directory"),
              "N7: invalid-directory sentinel file untouched");
        close_window(f);
    }
}

void n8_close_stops_timer(const QString& settings_path) {
    WindowFixture f = make_window(settings_path);
    MainWindow& win = *f.win;
    QTimer* timer = timer_of(win);
    check(timer && timer->isActive(), "N8: timer active before close");
    const int before = f.raw->calls();

    win.close();
    pump_ms(200);
    check(timer && !timer->isActive(), "N8: timer stopped after close");
    const int after = f.raw->calls();
    pump_ms(1200);
    check(f.raw->calls() == after,
          "N8: no further sampling after close (timer stopped)");
    check(after >= before, "N8: sampling had been running before close");
    f.win.reset();
}

} // namespace

int main(int argc, char** argv) {
    QApplication app(argc, argv);   // 平台由 ctest ENV 设为 offscreen

    QTemporaryDir temp;
    if (!temp.isValid()) {
        std::cout << "FAIL: cannot create temporary directory\n";
        return 1;
    }
    const QString root = temp.path();
    auto path_for = [&root](const char* name) {
        return root + QLatin1Char('/') + QString::fromLatin1(name);
    };

    n1_default_page_and_widgets(path_for("n1.json"));
    n2_navigation_actions_and_ctrl_keys(path_for("n2.json"));
    n3_refresh_tiers_and_no_overlap(path_for("n3.json"));
    n4_pause_survives_page_switch(path_for("n4.json"));
    n5_persistence_restart(path_for("n5.json"));
    n6_corrupt_and_out_of_range(root);
    n7_write_failures(root);
    n8_close_stops_timer(path_for("n8.json"));

    QApplication::processEvents();
    std::cout << (failures == 0 ? "navigation_settings_checks: ALL PASS\n"
                                : "navigation_settings_checks: FAILURES\n");
    return failures == 0 ? 0 : 1;
}
