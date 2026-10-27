#include "MainWindow.h"
#include "ProcessTableModel.h"
#include "platform/WindowsProcesses.h"
#include <QTableView>
#include <QToolBar>
#include <QAction>
#include <QHeaderView>
#include <QCloseEvent>
#include <QThread>
#include <QSortFilterProxyModel>
#include <utility>

namespace tmog {

namespace {
// 采样 worker：在独立线程执行 take_sample，完成后经队列连接回到 UI 线程。
// 用 QObject 桥而不是 QThread 子类，保持核心平台无关。
class WorkerBridge : public QObject {
    Q_OBJECT
public:
    IProcessEnumerator* enumerator = nullptr;
public slots:
    void run() {
        auto result = enumerator->take_sample();
        if (result) emit done(std::move(*result));
        else emit failed();
    }
signals:
    void done(SampleResult result);
    void failed();
};
} // namespace

#include "MainWindow.moc" // WorkerBridge 的 moc 由此展开

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    model_ = new ProcessTableModel(this);
    auto* proxy = new QSortFilterProxyModel(this);
    proxy->setSourceModel(model_);
    proxy->setSortRole(Qt::UserRole);

    table_ = new QTableView(this);
    table_->setModel(proxy);
    table_->setSortingEnabled(true);
    table_->horizontalHeader()->setStretchLastSection(true);
    table_->verticalHeader()->setVisible(false);
    table_->setSelectionBehavior(QAbstractItemView::SelectRows);
    table_->setSelectionMode(QAbstractItemView::SingleSelection);
    table_->setEditTriggers(QAbstractItemView::NoEditTriggers);
    table_->setAlternatingRowColors(true);
    setCentralWidget(table_);

    auto* toolbar = addToolBar(tr("main"));
    auto* pause_act = toolbar->addAction(tr("暂停"));
    pause_act->setCheckable(true);
    connect(pause_act, &QAction::toggled, this, &MainWindow::on_pause_toggled);
    auto* refresh_act = toolbar->addAction(tr("刷新"));
    connect(refresh_act, &QAction::triggered, this, &MainWindow::on_refresh_now);

    // 平台枚举器：编译期选择
    core_count_ = 0;
#if defined(_WIN32)
    auto* we = new WindowsProcessEnumerator();
    core_count_ = we->logical_processor_count();
    enumerator_.reset(we);
#elif defined(__APPLE__)
    enumerator_ = std::make_unique<MacProcessEnumerator>();
#elif defined(__unix__)
    enumerator_ = std::make_unique<LinuxProcessEnumerator>();
#endif

    connect(&sample_timer_, &QTimer::timeout, this, &MainWindow::on_sample_tick);
    sample_timer_.start(1000);   // 1/sec，对应原版 Normal — 1/sec

    // 触发首次采样
    QMetaObject::invokeMethod(this, &MainWindow::on_sample_tick, Qt::QueuedConnection);
}

MainWindow::~MainWindow() = default;

void MainWindow::on_sample_tick() {
    if (paused_ || sampling_ || !enumerator_ || closing_) return; // 禁止重叠采样
    start_worker();
}

void MainWindow::start_worker() {
    sampling_ = true;
    auto* bridge = new WorkerBridge();
    bridge->enumerator = enumerator_.get();
    auto* thread = new QThread(this);
    // done 信号跨线程 → 队列连接自动切回 UI 线程
    connect(bridge, &WorkerBridge::done, this,
            [this, bridge](SampleResult result) {
                bridge->deleteLater();
                sampling_ = false;
                if (closing_) return;
                apply_sample(std::move(result));
            },
            Qt::QueuedConnection);
    connect(bridge, &WorkerBridge::failed, this,
            [this, bridge]() {
                bridge->deleteLater();
                sampling_ = false;
                // 采样失败：跳过本帧，下个 tick 重试；错误语义在状态栏后续补充
            },
            Qt::QueuedConnection);
    bridge->moveToThread(thread);
    connect(thread, &QThread::started, bridge, &WorkerBridge::run);
    connect(bridge, &WorkerBridge::done, thread, &QThread::quit);
    connect(bridge, &WorkerBridge::failed, thread, &QThread::quit);
    connect(thread, &QThread::finished, thread, &QThread::deleteLater);
    thread->start();
}

void MainWindow::apply_sample(SampleResult result) {
    const auto wall_now = result.wall_clock_ns;
    std::vector<ProcessTableModel::Row> rows;
    rows.reserve(result.processes.size());

    bool have_prev = last_sample_ && last_sample_->ok;
    const auto wall_delta = have_prev && wall_now > last_sample_->wall_clock_ns
                          ? wall_now - last_sample_->wall_clock_ns : 0;

    for (const auto& cur : result.processes) {
        ProcessTableModel::Row row;
        row.snapshot = cur;

        std::optional<ProcessSnapshot> prev;
        if (have_prev) {
            for (const auto& p : last_sample_->processes) {
                if (p.identity.pid == cur.identity.pid) { prev = p; break; }
            }
        }
        row.status = compute_cpu_percent(prev, cur, wall_delta, core_count_,
                                         row.cpu_percent);
        rows.push_back(std::move(row));
    }
    model_->replace_snapshot(std::move(rows));
    last_sample_ = std::make_unique<SampleResult>(std::move(result));

    // 选择保持���按身份恢复选中行
    if (selected_identity_) {
        const auto& identity = *selected_identity_;
        for (int r = 0; r < model_->rowCount(); ++r) {
            const auto* row = model_->row_at(r);
            if (row && row->snapshot.identity == identity) {
                table_->selectRow(r);
                break;
            }
        }
    }
}

void MainWindow::on_pause_toggled() {
    paused_ = !paused_;
    // 差分基线作废由下次 tick 的 FirstSample 状态自然表达
}

void MainWindow::on_refresh_now() { on_sample_tick(); }

void MainWindow::on_selection_changed() {
    selected_identity_.reset();
    const auto* row = model_->row_at(table_->currentIndex().row());
    if (row) selected_identity_ = row->snapshot.identity;
}

void MainWindow::closeEvent(QCloseEvent* event) {
    closing_ = true;
    sample_timer_.stop();
    // 在途采样完成后由队列回调丢弃结果；worker 线程对象由父子关系随窗口销毁
    event->accept();
}

} // namespace tmog
