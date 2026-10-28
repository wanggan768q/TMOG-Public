// Issue #13 检查：真实生产 Qt 模态事件路径（结束任务确认）。
// 真实 MainWindow（三参构造注入）+ StepEnumerator（受控枚举）+ RecordingOps
// （fake ops，仅记录、零平台调用）经真实 SamplingWorker / QMessageBox /
// 异步 kill 线程 / 采样定时器事件路径。不做真实终止（A 范围）。
//
// 场景（≤8）：C 取消 / Y 确认 / X 目标已退出 / R 同 PID 复用 / N 无注入覆盖。
// 每场景模态打开期间 ≥3 次真实 source modelReset（证明 apply_sample 实际
// 发生），模态文本逐轮恒等（含原 PID/名称/创建时间——值冻结语义）；
// Yes 后断言 RecordingOps 实际收到原创建身份、timeout_ms=3000、非 GUI 线程。
//
// --negative-oracle：仅把 Y 场景期望目标改为 B（仍 fake、生产值冻结不动），
// 预期 exit 1——证明 oracle 有效；不代表原缺陷已动态复现。
//
// --idle-child / --manual 为 Task3（B 范围）入口：本构建仅识别并拒绝执行，
// 不实现 helper / 人工协调（真实进程操作未获批准）。
//
// 预算：场景≤8、fake 记录≤16、fixture 行≤64、单场景 deadline 20s、
// CTest TIMEOUT 120s；超限失败退出，不静默 skip。
//
// 安全：fake 模式绝不实例化真实 WindowsProcessOps（N 场景由 RecordingOps
// 实际收到调用证明注入未被平台分支覆盖）；不访问已失效指针、不故意 UAF；
// 退出前唤醒受控枚举等待者并确认 worker 实际退出，不带在途线程析构。
#include <QApplication>
#include <QAbstractButton>
#include <QAbstractItemModel>
#include <QAction>
#include <QDateTime>
#include <QHeaderView>
#include <QMessageBox>
#include <QSortFilterProxyModel>
#include <QThread>
#include <QTimer>
#include <QTableView>
#include <chrono>
#include <condition_variable>
#include <deque>
#include <functional>
#include <iostream>
#include <memory>
#include <mutex>
#include <string>
#include <vector>
#include "MainWindow.h"
#include "ProcessTableModel.h"

using namespace tmog;

namespace {

int failures = 0;
void check(bool ok, const std::string& what) {
    std::cout << (ok ? "PASS" : "FAIL") << ": " << what << std::endl;
    if (!ok) ++failures;
}

constexpr std::uint64_t kTickA = 132000000000000000ULL;
constexpr std::uint64_t kTickB = 132000000000000001ULL;
constexpr std::uint32_t kPidA = 101;
constexpr std::uint32_t kPidB = 202;
constexpr int kModalRounds = 3;
constexpr int kFillers = 60;   // r2 行数 62 ≤ 64

ProcessSnapshot mk(const char* name, std::uint32_t pid, std::uint64_t tick,
                   std::uint64_t cpu_ns) {
    ProcessSnapshot s;
    s.identity.pid = pid;
    s.identity.creation_tick = tick;
    s.name = name;
    s.cpu_time_ns = cpu_ns;
    s.cpu_time_available = true;
    s.resident_bytes = 1024 * 1024;
    s.resident_available = true;
    return s;
}

ProcessSnapshot fixture_a(std::uint64_t cpu_ns) {
    return mk("fixture-A", kPidA, kTickA, cpu_ns);
}
ProcessSnapshot fixture_b(std::uint64_t cpu_ns) {
    return mk("fixture-B", kPidB, kTickB, cpu_ns);
}
ProcessSnapshot fixture_reused(std::uint64_t cpu_ns) {
    // R 场景：同 PID、creation_tick+1、新名称——身份已变（PID 复用模拟）
    return mk("fixture-reused", kPidA, kTickA + 1, cpu_ns);
}
std::vector<ProcessSnapshot> fillers(std::uint64_t cpu_ns) {
    std::vector<ProcessSnapshot> v;
    for (int i = 0; i < kFillers; ++i)
        v.push_back(mk("fixture-filler", static_cast<std::uint32_t>(1001 + i),
                       132000000000001000ULL + static_cast<std::uint64_t>(i),
                       cpu_ns + static_cast<std::uint64_t>(i) * 1000000ULL));
    return v;
}

// ---- 受控枚举器：permit 队列 + 20s 可收束等待 ------------------------------
class StepEnumerator final : public IProcessEnumerator {
public:
    std::optional<SampleResult> take_sample() override {
        std::unique_lock<std::mutex> lk(m_);
        ++calls_;
        ++active_;
        const bool got = cv_.wait_for(lk, std::chrono::seconds(20),
                                      [&] { return !frames_.empty() || stop_; });
        --active_;
        if (!got || frames_.empty())
            return empty_ok_frame();   // 超时/停止：可收束空帧，不挂死 worker
        auto frame = std::move(frames_.front());
        frames_.pop_front();
        return frame;   // wall_clock_ns 已由 push 时写入（真实单调递增）
    }
    // 场景驱动：投递一帧 permit（模态轮次 / drain）
    void push(SampleResult frame) {
        frame.wall_clock_ns = monotonic_ns();
        {
            std::lock_guard<std::mutex> lk(m_);
            frames_.push_back(std::move(frame));
        }
        cv_.notify_all();
    }
    // 收束：唤醒全部等待者（析构前必须调用并确认 active 归零）
    void stop() {
        {
            std::lock_guard<std::mutex> lk(m_);
            stop_ = true;
        }
        cv_.notify_all();
    }
    int calls() {
        std::lock_guard<std::mutex> lk(m_);
        return calls_;
    }
    int active() {
        std::lock_guard<std::mutex> lk(m_);
        return active_;
    }

private:
    static std::uint64_t monotonic_ns() {
        return static_cast<std::uint64_t>(
            std::chrono::steady_clock::now().time_since_epoch().count());
    }
    static SampleResult empty_ok_frame() { return SampleResult{}; }   // ok=true、空表

    std::mutex m_;
    std::condition_variable cv_;
    std::deque<SampleResult> frames_;
    bool stop_ = false;
    int calls_ = 0;
    int active_ = 0;
};

// ---- fake ops：仅记录，绝不触碰任何平台 API --------------------------------
struct OpsState {
    std::mutex mutex;
    std::vector<tmog::ProcessIdentity> targets;   // ≤16（fake 记录预算）
    std::vector<QThread*> threads;
    int timeout_ms = -1;
    tmog::KillOutcome outcome{tmog::KillResult::Ok, {}};
};

class RecordingOps final : public tmog::IProcessOps {
public:
    explicit RecordingOps(std::shared_ptr<OpsState> s) : state_(std::move(s)) {}
    tmog::KillOutcome terminate(const tmog::ProcessIdentity& id, int ms) override {
        std::lock_guard<std::mutex> lock(state_->mutex);
        state_->targets.push_back(id);
        state_->threads.push_back(QThread::currentThread());
        state_->timeout_ms = ms;
        return state_->outcome;
    }

private:
    std::shared_ptr<OpsState> state_;
};

// ---- 测试基础设施 -----------------------------------------------------------
void pump_ms(int ms) {
    const auto deadline = std::chrono::steady_clock::now() +
                          std::chrono::milliseconds(ms);
    while (std::chrono::steady_clock::now() < deadline) {
        QApplication::processEvents(QEventLoop::AllEvents, 20);
        QThread::msleep(5);
    }
}

void pump_until(const std::function<bool()>& pred, int timeout_ms,
                const char* what) {
    const auto deadline = std::chrono::steady_clock::now() +
                          std::chrono::milliseconds(timeout_ms);
    while (!pred()) {
        if (std::chrono::steady_clock::now() > deadline) {
            check(false, std::string("pump timeout: ") + what);
            return;
        }
        QApplication::processEvents(QEventLoop::AllEvents, 20);
        QThread::msleep(5);
    }
}

bool pump_until_bool(const std::function<bool()>& pred, int timeout_ms) {
    const auto deadline = std::chrono::steady_clock::now() +
                          std::chrono::milliseconds(timeout_ms);
    while (!pred() && std::chrono::steady_clock::now() < deadline) {
        QApplication::processEvents(QEventLoop::AllEvents, 20);
        QThread::msleep(5);
    }
    return pred();
}

QSortFilterProxyModel* proxy_of(MainWindow& win) {
    auto* table = win.findChild<QTableView*>();
    return table ? qobject_cast<QSortFilterProxyModel*>(table->model()) : nullptr;
}

QTableView* table_of(MainWindow& win) { return win.findChild<QTableView*>(); }

// proxy 显示序（PID 序列）——排序/行集变化证据
QList<std::uint32_t> read_pid_order(QSortFilterProxyModel* proxy) {
    QList<std::uint32_t> out;
    for (int r = 0; r < proxy->rowCount(); ++r)
        out.push_back(static_cast<std::uint32_t>(
            proxy->index(r, ProcessTableModel::ColPid)
                .data(Qt::DisplayRole)
                .toULongLong()));
    return out;
}

int find_proxy_row(QSortFilterProxyModel* proxy, std::uint32_t pid) {
    for (int r = 0; r < proxy->rowCount(); ++r)
        if (static_cast<std::uint32_t>(
                proxy->index(r, ProcessTableModel::ColPid)
                    .data(Qt::DisplayRole)
                    .toULongLong()) == pid)
            return r;
    return -1;
}

// 模态期间驱动状态机
struct Drive {
    int modal_resets = 0;          // 仅模态打开后开始推进（初始化 reset 不计入：
                                   // round 从 confirm_seen 起为 1，1>1 为假）
    QString initial_text;
    QList<std::uint32_t> last_order;
    int round = 0;                 // 已投递的模态轮次
    bool confirm_seen = false;
    bool confirm_closed = false;
    QStringList outcome_texts;     // 结果对话框（警告）文本
    std::chrono::steady_clock::time_point modal_at{};
    bool force_closed = false;     // 超时兜底（防挂死）
};

// 模态轮次帧构造：round 1..3。A/B CPU 逐轮不同且互不相等（排序方向翻转
// 真实改变 A/B 相对顺序）；r2 附加 fillers（行容量变化 ≤64 行）；r3 按场景
// 去 A（X）或换同 PID 新身份（R）。
using FrameFn = std::function<std::vector<ProcessSnapshot>(int round)>;

FrameFn frames_common(bool drop_a_r2, bool reuse_r3) {
    return [drop_a_r2, reuse_r3](int round) {
        const std::uint64_t a_cpu =
            5000000000ULL + static_cast<std::uint64_t>(round) * 800000000ULL;
        std::vector<ProcessSnapshot> ps;
        if (reuse_r3 && round == kModalRounds)
            ps.push_back(fixture_reused(a_cpu));
        else if (drop_a_r2 && round >= 2)
            ;   // X：A 已退出
        else
            ps.push_back(fixture_a(a_cpu));
        ps.push_back(fixture_b(a_cpu - 100000000ULL));   // 每轮保留 B
        if (round == 2) {   // 仅 r2 扩容：2 + 60 = 62 行 ≤ 64
            auto fl = fillers(a_cpu);
            ps.insert(ps.end(), fl.begin(), fl.end());
        }
        return ps;
    };
}

struct ScenarioCfg {
    const char* name;
    FrameFn frame_for_round;
    QMessageBox::StandardButton click;   // No（C）或 Yes（Y/X/R/N）
    tmog::KillOutcome scripted_outcome;
    tmog::ProcessIdentity expect_target;          // negative-oracle 翻转此值
    const char* expect_target_desc;
    bool expect_outcome_dialog = false;           // X/R：警告框；Y/N：静默
    const char* outcome_text_contains = nullptr;  // 结果框必须包含的串
};

// 单场景：完整真实流。断言计入全局 failures。
void run_scenario(QApplication& app, const ScenarioCfg& cfg) {
    const auto scenario_start = std::chrono::steady_clock::now();
    std::cout << "== scenario " << cfg.name << " ==" << std::endl;

    auto enumr = std::make_unique<StepEnumerator>();
    StepEnumerator* raw = enumr.get();
    auto ops_state = std::make_shared<OpsState>();
    ops_state->outcome = cfg.scripted_outcome;

    // 声明顺序：win 先入栈 → 最后析构；drive/timer 后入栈 → 先析构（先于 win）
    MainWindow win(nullptr, std::move(enumr),
                   std::make_unique<RecordingOps>(ops_state));
    Drive d;
    QTimer driver;
    QTimer heartbeat;
    int heartbeat_ticks = 0;

    // 真实 source modelReset 计数（模态打开后才推进断言轮次）
    auto* proxy = proxy_of(win);
    auto* model = qobject_cast<ProcessTableModel*>(proxy->sourceModel());
    QObject::connect(model, &QAbstractItemModel::modelReset, &win,
                     [&d] { ++d.modal_resets; });

    // 主循环心跳：模态期间与结束投递前后持续
    QObject::connect(&heartbeat, &QTimer::timeout, &win,
                     [&heartbeat_ticks] { ++heartbeat_ticks; });
    heartbeat.start(50);

    // 初始帧：A/B（模态外）
    {
        SampleResult f;
        f.ok = true;
        f.processes = {fixture_a(5000000000ULL), fixture_b(4900000000ULL)};
        raw->push(std::move(f));
    }
    win.show();
    pump_until([&] { return proxy->rowCount() >= 2; }, 8000, "initial table rows");
    check(proxy->rowCount() >= 2,
          "initial fixture rows visible (real modelReset path)");

    // 真实 CPU 列降序排序（程序化 sort 为测试路径；模态期间不允许人工点父表）
    proxy->sort(ProcessTableModel::ColCpu, Qt::DescendingOrder);
    pump_ms(100);
    d.last_order = read_pid_order(proxy);

    // 按 proxy PID 列寻找 A 并选中，核对 currentIndex 映射显示 PID
    const int row_a = find_proxy_row(proxy, kPidA);
    check(row_a >= 0, "fixture-A found via proxy PID column");
    if (row_a >= 0) {
        auto* table = table_of(win);
        const QModelIndex idx = proxy->index(row_a, 0);
        table->selectionModel()->select(
            idx, QItemSelectionModel::ClearAndSelect | QItemSelectionModel::Rows);
        table->setCurrentIndex(idx);
        const QModelIndex src = proxy->mapToSource(table->currentIndex());
        const auto* selected =
            qobject_cast<ProcessTableModel*>(proxy->sourceModel())
                ->row_at(src.row());
        check(selected && selected->snapshot.identity.pid == kPidA,
              "currentIndex maps to fixture-A (pid 101)");
    }

    // 按文案唯一查找真实“结束任务”QAction（0 或多个都 fail）
    QAction* end_act = nullptr;
    int end_act_count = 0;
    const QString end_text = MainWindow::tr("结束任务");
    for (auto* a : win.findChildren<QAction*>())
        if (a->text() == end_text) {
            end_act = a;
            ++end_act_count;
        }
    check(end_act_count == 1 && end_act != nullptr,
          "exactly one 'end task' action found by tr text");

    // 模态文本期望（与生产同式换算创建时间）
    const auto created_expected =
        QDateTime::fromMSecsSinceEpoch(
            static_cast<qint64>(kTickA / 10000) - 11644473600000LL)
            .toString(QStringLiteral("yyyy-MM-dd HH:mm:ss"));

    QObject::connect(&driver, &QTimer::timeout, &win, [&] {
        auto* modal = QApplication::activeModalWidget();
        auto* box = qobject_cast<QMessageBox*>(modal);
        if (!box || box->parentWidget() != &win) return;

        if (!d.confirm_seen) {
            // 确认框：首次出现——记录初始文本，投递轮次1
            d.confirm_seen = true;
            d.modal_at = std::chrono::steady_clock::now();
            d.initial_text = box->text();
            d.round = 1;
            check(box->button(QMessageBox::Yes) != nullptr &&
                      box->button(QMessageBox::No) != nullptr,
                  "modal is real question box (Yes/No buttons)");
            check(d.initial_text.contains(QString::fromUtf8("fixture-A")) &&
                      d.initial_text.contains(QString::number(kPidA)) &&
                      d.initial_text.contains(created_expected),
                  "modal initial text contains A name/PID/creation time");
            SampleResult f;
            f.ok = true;
            f.processes = cfg.frame_for_round(1);
            raw->push(std::move(f));
            return;
        }
        if (!d.confirm_closed) {
            // 超时兜底：15s 未完成 → 强制 No 防挂死（并 fail）
            const auto held = std::chrono::steady_clock::now() - d.modal_at;
            if (std::chrono::duration_cast<std::chrono::milliseconds>(held)
                    .count() > 15000) {
                d.force_closed = true;
                check(false, "modal force-closed by 15s watchdog (hang guard)");
                if (auto* b = box->button(QMessageBox::No)) b->click();
                d.confirm_closed = true;
                return;
            }
            // 新 reset 到达（modal_resets > round）→ 验证恒等/变化 → 下一轮或点击
            if (d.modal_resets > d.round) {
                check(box->text() == d.initial_text,
                      "modal text unchanged at round " +
                          std::to_string(d.round));
                const QList<std::uint32_t> order = read_pid_order(proxy);
                check(order != d.last_order,
                      "proxy order changed at round " +
                          std::to_string(d.round));
                d.last_order = order;
                // 真实 proxy sort 请求切换顺序（程序化，非人工交互）
                proxy->sort(ProcessTableModel::ColCpu,
                            d.round % 2 ? Qt::AscendingOrder
                                        : Qt::DescendingOrder);
                if (d.modal_resets < kModalRounds) {
                    SampleResult f;
                    f.ok = true;
                    f.processes = cfg.frame_for_round(d.modal_resets);
                    raw->push(std::move(f));
                    d.round = d.modal_resets;
                } else {
                    // ≥3 次真实 reset 后才点击（计划硬性顺序）
                    auto* btn = box->button(cfg.click);
                    check(btn != nullptr, "confirm button exists");
                    if (btn) btn->click();
                    d.confirm_closed = true;
                }
            }
            return;
        }
        // 确认已点：后续模态 = 结果对话框（警告/信息）→ 记录并关闭
        d.outcome_texts.push_back(box->text());
        if (auto* ok_btn = box->button(QMessageBox::Ok))
            ok_btn->click();
        else
            box->close();
    });
    driver.start(10);

    // 触发真实 QAction（on_end_task → 真实 question 模态阻塞在此调用栈，
    // driver 在模态事件循环内驱动三轮后点击返回）
    const int hb_before = heartbeat_ticks;
    if (end_act) end_act->trigger();
    check(d.confirm_seen, "real modal appeared (activeModalWidget with parent)");
    check(!d.force_closed, "modal not force-closed by watchdog");
    check(d.modal_resets >= kModalRounds,
          std::to_string(kModalRounds) +
              "+ real source modelReset during modal (apply_sample evidence)");

    // ---- 点击后断言 ----
    std::size_t target_count = 0;
    tmog::ProcessIdentity recorded{};
    int recorded_timeout = -1;
    QThread* recorded_thread = nullptr;
    if (cfg.click == QMessageBox::Yes) {
        pump_until([&] {
            std::lock_guard<std::mutex> lk(ops_state->mutex);
            return !ops_state->targets.empty();
        }, 8000, "RecordingOps terminate recorded (Yes path)");
        std::lock_guard<std::mutex> lk(ops_state->mutex);
        target_count = ops_state->targets.size();
        if (!ops_state->targets.empty()) recorded = ops_state->targets[0];
        recorded_timeout = ops_state->timeout_ms;
        if (!ops_state->threads.empty()) recorded_thread = ops_state->threads[0];
    }
    if (cfg.click == QMessageBox::Yes) {
        check(target_count == 1, "exactly 1 ops call (no double-fire)");
        // negative-oracle：期望被翻转为 B，生产仍传原 A → 此 check 失败 → exit 1
        const bool target_ok = target_count == 1 && recorded == cfg.expect_target;
        check(target_ok, std::string("terminate target == ") +
                             cfg.expect_target_desc +
                             " (value-frozen identity from modal open)");
        if (target_count == 1 && !target_ok)
            std::cout << "    oracle: recorded pid=" << recorded.pid
                      << " tick=" << recorded.creation_tick << std::endl;
        check(recorded_timeout == 3000, "timeout_ms == 3000");
        check(recorded_thread != nullptr &&
                  recorded_thread != app.instance()->thread(),
              "terminate ran on non-GUI thread (async kill worker)");
    } else {
        // C 取消：零 ops 调用，模型仍 A
        pump_ms(500);
        std::lock_guard<std::mutex> lk(ops_state->mutex);
        target_count = ops_state->targets.size();
        check(target_count == 0,
              "cancel: zero ops calls (kill worker never mis-started)");
        const QList<std::uint32_t> order = read_pid_order(proxy);
        check(order.contains(kPidA), "cancel: fixture-A still in model");
    }

    // 心跳跨结束投递前后持续（GUI 循环未被阻塞）
    pump_ms(300);
    check(heartbeat_ticks > hb_before,
          "main-loop heartbeat advanced across end-task delivery");

    // 结果对话框断言（X/R：真实 UI 呈现失败/身份变化；Y/N：静默无框）
    if (cfg.expect_outcome_dialog) {
        const bool shown =
            pump_until_bool([&] { return !d.outcome_texts.isEmpty(); }, 8000);
        check(shown, "outcome dialog actually shown (real UI path)");
        if (shown)
            check(d.outcome_texts.last().contains(
                      QString::fromUtf8(cfg.outcome_text_contains)),
                  std::string("outcome text contains '") +
                      cfg.outcome_text_contains + "'");
    } else {
        pump_ms(800);   // 给可能迟到的结果框机会（不应出现）
        check(d.outcome_texts.isEmpty(),
              "no outcome dialog for silent success path");
    }

    // ---- 收束：drain（Ok 路径刷新帧）→ stop → worker 实际退出 ----
    if (cfg.click == QMessageBox::Yes) {
        const int calls_before = raw->calls();
        SampleResult drain;
        drain.ok = true;
        drain.processes = {fixture_b(9000000000ULL)};
        raw->push(std::move(drain));
        pump_until([&] { return raw->calls() > calls_before; }, 5000,
                   "drain frame consumed (post-Yes refresh/tick)");
    }
    driver.stop();
    heartbeat.stop();
    raw->stop();
    pump_until([&] { return raw->active() == 0; }, 5000,
               "worker fully exited before destruction");
    check(raw->active() == 0, "teardown: no in-flight worker at destruction");
    pump_ms(200);   // 队列回调排空（kill finished / 迟到 reset）

    // 场景预算：单场景 ≤20s
    const auto elapsed_ms =
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now() - scenario_start)
            .count();
    check(elapsed_ms <= 20000,
          "scenario within 20s deadline (" + std::to_string(elapsed_ms) +
              " ms)");
    std::cout << "   summary: resets=" << d.modal_resets
              << " targets=" << target_count
              << " timeout_ms=" << recorded_timeout
              << " outcomes=" << d.outcome_texts.size()
              << " elapsed_ms=" << elapsed_ms << std::endl;
    // win 在此析构：kill 线程已确认退出、worker 空闲 → 析构合同满足
}

} // namespace

int main(int argc, char** argv) {
    bool negative = false;
    for (int i = 1; i < argc; ++i) {
        const std::string arg = argv[i];
        if (arg == "--negative-oracle") {
            negative = true;
        } else if (arg == "--idle-child" || arg == "--manual") {
            std::cout
                << "NOT AVAILABLE: --idle-child/--manual are Task-3 (B-scope) "
                   "deliverables (helper + manual coordination with real "
                   "process handles). Not built in this approved-A scope; "
                   "see doc/plans/2026-10-28-issue-13-manual-verification-v4.md."
                << std::endl;
            return 2;
        } else {
            std::cout << "usage: end_confirm_checks [--negative-oracle]\n"
                         "       --idle-child/--manual: B-scope, rejected here"
                      << std::endl;
            return 2;
        }
    }
    if (negative)
        std::cout << "NEGATIVE-ORACLE MODE: Y expectation flipped to B; "
                     "exit 1 expected (oracle validity check)" << std::endl;

    QApplication app(argc, argv);   // 平台由 ctest 环境设为 offscreen

    const tmog::ProcessIdentity id_a{kPidA, kTickA};
    const tmog::ProcessIdentity id_b{kPidB, kTickB};
    const tmog::ProcessIdentity expect_y = negative ? id_b : id_a;

    // C 取消：No；A 保留，零 ops 调用
    run_scenario(app, {"C-cancel", frames_common(false, false), QMessageBox::No,
                       {tmog::KillResult::Ok, {}}, id_a,
                       "A (original identity)"});
    // Y 确认：Yes；exactly1 原身份/3000ms/非GUI线程；Ok 静默 + 刷新 drain
    run_scenario(app, {"Y-confirm", frames_common(false, false), QMessageBox::Yes,
                       {tmog::KillResult::Ok, {}}, expect_y,
                       negative ? "B (negative-oracle expectation)"
                                : "A (original identity)"});
    // X 目标已退出：r2 删 A；Failed("fixture exited")；Yes 仍传原 A；UI 失败框
    run_scenario(app, {"X-exited", frames_common(true, false), QMessageBox::Yes,
                       {tmog::KillResult::Failed, "fixture exited"}, id_a,
                       "A (original identity; target exited)", true,
                       "fixture exited"});
    // R 同 PID 复用：r3 引入 A'(tick+1/fixture-reused)；IdentityChanged；
    // Yes 仍传原 A 创建身份；UI 身份变化警告
    run_scenario(app, {"R-reuse", frames_common(false, true), QMessageBox::Yes,
                       {tmog::KillResult::IdentityChanged, {}}, id_a,
                       "A (original creation identity, not reused)", true,
                       "身份已变化"});
    // N 无注入覆盖：注入枚举器/ops 走真实 Yes；RecordingOps 实际收到调用
    // （防平台分支覆盖注入的运行时证明，不只查构造形参）
    run_scenario(app, {"N-no-override", frames_common(false, false),
                       QMessageBox::Yes, {tmog::KillResult::Ok, {}}, id_a,
                       "A (injected ops receives call)"});

    QApplication::processEvents();
    std::cout << (negative ? "[negative-oracle] " : "")
              << "end_confirm_checks: failures=" << failures
              << (negative ? " (exit 1 expected)" : "") << std::endl;
    return failures == 0 ? 0 : 1;
}
