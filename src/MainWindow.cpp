#include "MainWindow.h"
#include "ProcessTableModel.h"
#include "platform/WindowsProcesses.h"
#include "platform/WindowsProcessOps.h"
#include <QTableView>
#include <QToolBar>
#include <QAction>
#include <QHeaderView>
#include <QCloseEvent>
#include <QThread>
#include <QSortFilterProxyModel>
#include <QMessageBox>
#include <QDateTime>
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
    proxy_ = new QSortFilterProxyModel(this);
    proxy_->setSourceModel(model_);
    proxy_->setSortRole(Qt::UserRole);

    table_ = new QTableView(this);
    table_->setModel(proxy_);
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
    auto* end_act = toolbar->addAction(tr("结束任务"));
    connect(end_act, &QAction::triggered, this, &MainWindow::on_end_task);
    connect(table_->selectionModel(), &QItemSelectionModel::selectionChanged,
            this, &MainWindow::on_selection_changed);

    // 平台枚举器与进程操作：编译期选择
    core_count_ = 0;
#if defined(_WIN32)
    auto* we = new WindowsProcessEnumerator();
    core_count_ = we->logical_processor_count();
    enumerator_.reset(we);
    process_ops_ = std::make_unique<WindowsProcessOps>();
#elif defined(__APPLE__)
    enumerator_ = std::make_unique<MacProcessEnumerator>();
    process_ops_ = std::make_unique<MacProcessOps>();
#elif defined(__unix__)
    enumerator_ = std::make_unique<LinuxProcessEnumerator>();
    process_ops_ = std::make_unique<LinuxProcessOps>();
#endif

    connect(&sample_timer_, &QTimer::timeout, this, &MainWindow::on_sample_tick);
    sample_timer_.start(1000);   // 1/sec，对应原版 Normal — 1/sec

    // 触发首次采样
    QMetaObject::invokeMethod(this, &MainWindow::on_sample_tick, Qt::QueuedConnection);
}

MainWindow::~MainWindow() = default;

void MainWindow::on_sample_tick() {
    if (!paused_ && !sampling_ && enumerator_ && !closing_)
        start_worker();
}

void MainWindow::start_worker() {
    sampling_ = true;
    auto* bridge = new WorkerBridge();
    bridge->enumerator = enumerator_.get();
    auto* thread = new QThread(/*无 parent：生命周期由 in_flight_ 显式管理*/);
    in_flight_ = thread;
    // done 信号跨线程 → 队列连接自动切回 UI 线程
    connect(bridge, &WorkerBridge::done, this,
            [this, bridge](SampleResult result) {
                bridge->deleteLater();
                sampling_ = false;
                in_flight_ = nullptr;
                if (closing_) return;
                if (paused_) return;   // 暂停瞬间在途的采样：丢弃，不回填基线
                apply_sample(std::move(result));
            },
            Qt::QueuedConnection);
    connect(bridge, &WorkerBridge::failed, this,
            [this, bridge]() {
                bridge->deleteLater();
                sampling_ = false;
                in_flight_ = nullptr;
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
    std::vector<SampledRow> rows;
    if (last_sample_) {
        // 正常帧：与基线配对差分
        rows = diff_samples(*last_sample_, result, core_count_);
    } else {
        // 无基线（首帧/暂停恢复后）：空基线自差分 → 全表"待采样"，本帧建立基线
        static const SampleResult kEmpty{};
        rows = diff_samples(kEmpty, result, core_count_);
    }

    model_->replace_snapshot(std::move(rows));
    last_sample_ = std::move(result);
    restore_selection();
    // 语义注记：选中进程退出后锚点保留（不自动清除），进程重现时自动恢复选中；
    // 仅用户点空白才清除。进程列表场景下这是合理行为（进程可重现），非缺陷。
}

void MainWindow::restore_selection() {
    if (!selected_identity_) return;
    const auto& identity = *selected_identity_;
    for (int r = 0; r < model_->rowCount(); ++r) {
        const auto* row = model_->row_at(r);
        if (row && row->snapshot.identity == identity) {
            const QModelIndex proxy_index =
                proxy_->mapFromSource(model_->index(r, 0));
            if (proxy_index.isValid()) {
                table_->selectionModel()->select(
                    proxy_index, QItemSelectionModel::ClearAndSelect | QItemSelectionModel::Rows);
                table_->setCurrentIndex(proxy_index);
            }
            break;
        }
    }
}

const SampledRow* MainWindow::current_source_row() const {
    const QModelIndex proxy_index = table_->currentIndex();
    if (!proxy_index.isValid()) return nullptr;
    const QModelIndex source_index = proxy_->mapToSource(proxy_index);
    return model_->row_at(source_index.row());
}

void MainWindow::on_pause_toggled(bool paused) {
    if (paused) {
        // 暂停：基线作废，恢复后首帧整表"待采样"，差分不跨暂停期
        invalidate_baseline();
    }
    // 恢复：无额外动作，下个 tick 正常采样并建立新基线
}

void MainWindow::invalidate_baseline() { last_sample_.reset(); }

void MainWindow::on_refresh_now() { on_sample_tick(); }

void MainWindow::on_selection_changed() {
    const auto* row = current_source_row();
    if (row)
        selected_identity_ = row->snapshot.identity;
    else
        selected_identity_.reset();
    // 无效索引 → 清锚点（用户点空白取消选择）。
    // 注意：模型重置（replace_snapshot）清空视图选择时 selectionChanged
    // 实测不触发（Qt 6.12 行为，非文档契约），handler 不被调用，锚点自然存活，
    // restore_selection 随后按锚点恢复。若升级 Qt 后重置开始发此信号，
    // 此处会误清锚点破坏选择保持——届时加 resetGuard 标志在 apply_sample
    // 期间抑制清锚点。
}

void MainWindow::on_end_task() {
    const auto* row = current_source_row();
    if (!row || !process_ops_) return;
    const ProcessSnapshot& snap = row->snapshot;

    // 确认框：名称、PID、创建身份、未保存数据警告；取��不得执行
    const QDateTime created = QDateTime::fromMSecsSinceEpoch(
        static_cast<qint64>(snap.identity.creation_tick / 10000) - 11644473600000LL);
    QMessageBox::StandardButton reply = QMessageBox::question(
        this, tr("结束任务"),
        tr("确定结束进程“%1”（PID %2，创建于 %3）吗？\n\n该进程可能有未保存的数据，结束将导致数据丢失。")
            .arg(QString::fromStdString(snap.name),
                 QString::number(snap.identity.pid),
                 created.toString(QStringLiteral("yyyy-MM-dd HH:mm:ss"))),
        QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
    if (reply != QMessageBox::Yes) {
        show_kill_outcome({KillResult::Cancelled, {}});
        return;
    }

    const auto outcome = process_ops_->terminate(snap.identity, /*wait_timeout_ms=*/3000);
    show_kill_outcome(outcome);
    if (outcome.result == KillResult::Ok || outcome.result == KillResult::Requested)
        on_refresh_now();   // 立即刷新反映结果
}

void MainWindow::show_kill_outcome(const KillOutcome& outcome) {
    switch (outcome.result) {
    case KillResult::Ok:            return;  // 静默成功，列表刷新即反馈
    case KillResult::Cancelled:     return;  // 用户取消无需提示
    case KillResult::Requested:
        QMessageBox::information(this, tr("结束任务"),
            tr("终止请求已发出，但在超时内未确认退出。进程可能很快退出或需要管理员权限。"));
        return;
    case KillResult::SelfTarget:
        QMessageBox::warning(this, tr("结束任务"), tr("不能结束自身进程。"));
        return;
    case KillResult::CriticalTarget:
        QMessageBox::warning(this, tr("结束任务"),
            tr("该进程是系统关键或受保护进程，已拒绝操作。"));
        return;
    case KillResult::IdentityChanged:
        QMessageBox::warning(this, tr("结束任务"),
            tr("目标进程身份已变化（PID 可能被复用），操作已取消。请刷新后重试。"));
        return;
    case KillResult::AccessDenied:
        QMessageBox::warning(this, tr("结束任务"),
            tr("访问被拒绝。可能需要以管理员身份运行。"));
        return;
    case KillResult::Failed:
        QMessageBox::warning(this, tr("结束任务"),
            tr("操作失败：") + QString::fromStdString(outcome.error));
        return;
    }
}

void MainWindow::closeEvent(QCloseEvent* event) {
    closing_ = true;
    sample_timer_.stop();
    // 等待在途采样收尾（take_sample 是有限操作），避免窗口销毁时线程仍引用枚举器。
    // ponytail: wait 超时（2s）时仍 accept，理论 UAF 窗口；take_sample 实测 <100ms，
    // 正常不可能超时。若未来引入长阻塞枚举，改为拒绝关闭或强杀线程池。
    if (in_flight_) {
        in_flight_->quit();
        if (!in_flight_->wait(2000))
            QMessageBox::warning(this, tr("退出"),
                tr("后台采样未能在 2 秒内结束，程序即将退出。"));
    }
    event->accept();
}

} // namespace tmog
