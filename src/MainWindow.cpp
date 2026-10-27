#include "MainWindow.h"
#include "ProcessTableModel.h"
#include "SamplingWorker.h"
#include "platform/WindowsProcesses.h"
#include "platform/WindowsProcessOps.h"
#include <QTableView>
#include <QToolBar>
#include <QAction>
#include <QHeaderView>
#include <QCloseEvent>
#include <QSortFilterProxyModel>
#include <QMessageBox>
#include <QDateTime>
#include <QLabel>
#include <QStatusBar>
#include <QThread>
#include <utility>

namespace tmog {

MainWindow::MainWindow(QWidget* parent,
                       std::unique_ptr<IProcessEnumerator> enumerator_override)
    : QMainWindow(parent) {
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
    if (enumerator_override) {
        // 检查注入（G5）：受控枚举器驱动生产采样路径（真实 worker/事件循环）。
        core_count_ = 4;   // 注入路径无平台枚举器可询，取常数（检查不依赖核数）
        enumerator_ = std::move(enumerator_override);
    }
#if defined(_WIN32)
    if (!enumerator_) {
        auto* we = new WindowsProcessEnumerator();
        core_count_ = we->logical_processor_count();
        enumerator_.reset(we);
        process_ops_ = std::make_unique<WindowsProcessOps>();
    }
#elif defined(__APPLE__)
    enumerator_ = std::make_unique<MacProcessEnumerator>();
    process_ops_ = std::make_unique<MacProcessOps>();
#elif defined(__unix__)
    enumerator_ = std::make_unique<LinuxProcessEnumerator>();
    process_ops_ = std::make_unique<LinuxProcessOps>();
#endif

    connect(&sample_timer_, &QTimer::timeout, this, &MainWindow::on_sample_tick);
    sample_timer_.start(1000);   // 1/sec，对应原版 Normal — 1/sec

    // #16 G5：持久陈旧标注。addPermanentWidget 的 widget 不被临时 showMessage
    // 隐藏——失败标注在 busy/"正在结束进程…"等短时消息期间持续可见。
    stale_label_ = new QLabel(this);
    stale_label_->setVisible(false);
    statusBar()->addPermanentWidget(stale_label_);

    // 触发首次采样
    QMetaObject::invokeMethod(this, &MainWindow::on_sample_tick, Qt::QueuedConnection);
}

MainWindow::~MainWindow() {
    // #16 防御：正常路径 closeEvent 已确认两线程退出；若构造后未走
    // closeEvent（如测试直接销毁），尽力等待在途结束线程（terminate 有限）。
    if (kill_thread_) kill_thread_->wait(4000);
}

void MainWindow::on_sample_tick() {
    // 定时器路径：暂停/关闭中不采样（手动刷新路径见 on_refresh_now）
    if (!paused_ && !closing_) start_sample();
}

// #16：启动一次采样，捕获当前代际。结果回调先比对代际——暂停（代际递增）
// 前发出的在途结果到达后被直接丢弃，不进入差分、不建立基线。
void MainWindow::start_sample() {
    if (worker_.busy() || closing_ || !enumerator_) return;   // 忙碌/关闭中不重入
    const auto generation = sample_generation_;
    worker_.start(this, enumerator_.get(),
                  [this, generation](SampleResult result) {
                      if (generation != sample_generation_) return;   // 跨代际旧结果：丢弃
                      apply_sample(std::move(result));
                      if (sample_failed_) {
                          // #16 G5：真实新样本成功才清陈旧——立即清除，无延时
                          // timer（避免延时回调误清后续新失败）。旧代际成功
                          // 在上方代际守卫已被丢弃，到此必为当前代际。
                          sample_failed_ = false;
                          stale_label_->setVisible(false);
                      }
                  },
                  [this, generation](const std::string& error) {
                      if (generation != sample_generation_) return;   // 跨代际失败：静默丢弃
                      // 失败：保留上次数据显示（模型不动），基线作废。陈旧标注
                      // 为持久 widget（addPermanentWidget），持续到当前代际真实
                      // 成功帧清除——worker 迟缓/挂起时不消失，旧表不冒充当前。
                      sample_failed_ = true;
                      invalidate_baseline();
                      stale_label_->setText(
                          tr("数据已陈旧（采样失败：%1）")
                              .arg(QString::fromStdString(error)));
                      stale_label_->setVisible(true);
                  });
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
    paused_ = paused;
    if (paused) {
        // 暂停：代际递增——暂停前所有在途采样结果作废（快速暂停→恢复场景下
        // 旧结果到达即被拒绝）；基线作废，恢复后首帧整表"待采样"。
        ++sample_generation_;
        invalidate_baseline();
    } else {
        // 恢复：基线也作废（暂停期手动刷新帧建立的基线不跨恢复差分），
        // 下个 tick 正常采样并建立新基线
        invalidate_baseline();
    }
}

void MainWindow::invalidate_baseline() { last_sample_.reset(); }

// #16 手动刷新闭环：
//  - 忙碌：拒绝重入并明确反馈（不叠加 worker，worker 内部也还有防线）。
//  - 暂停：仍允许采一次（显示+可建立暂停期基线），paused_ 保持不变。
//  - 关闭中：忽略。
void MainWindow::on_refresh_now() {
    if (closing_) return;
    if (worker_.busy()) {
        statusBar()->showMessage(tr("正在采样，请稍候…"), 2000);
        return;
    }
    start_sample();
}

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
    if (!process_ops_) return;
    // #16：先值拷贝目标身份——模态确认框期间 sample_timer_ 继续采样并
    // replace_snapshot 重分配模型行，原 row/snap 指针会悬空；身份以值语义
    // 持有，终止时再由平台层核实创建时间未变（PID 复用防御不受影响）。
    const SampledRow* row = current_source_row();
    if (!row) return;
    const ProcessSnapshot snap = row->snapshot;
    if (kill_thread_) {   // 已有结束操作在途：不叠加线程，给用户反馈
        statusBar()->showMessage(tr("已有结束操作进行中，请稍候…"), 2000);
        return;
    }

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

    // #16：terminate（含 WaitForSingleObject 退出确认，最多 3s）在一次性
    // 工作线程执行，等待期间 GUI 保持响应（不冻结）。结果经队列连接回
    // UI 线程展示；线程实际退出后由 finished 回调清指针。
    statusBar()->showMessage(tr("正在结束进程…"));
    auto* thread = QThread::create([this, identity = snap.identity]() {
        const auto outcome = process_ops_->terminate(identity, /*wait_timeout_ms=*/3000);
        QMetaObject::invokeMethod(this, [this, outcome]() {
            statusBar()->clearMessage();
            show_kill_outcome(outcome);
            if (outcome.result == KillResult::Ok || outcome.result == KillResult::Requested)
                on_refresh_now();   // 立即刷新反映结果
        }, Qt::QueuedConnection);
    });
    kill_thread_ = thread;
    connect(thread, &QThread::finished, this, [this, thread]() {
        if (kill_thread_ == thread) kill_thread_ = nullptr;
        thread->deleteLater();
    });
    thread->start();
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
    sample_timer_.stop();
    // #14：区分采样完成、线程实际退出与资源销毁。shutdown 等待在途线程
    // 实际退出；超时不伪报安全——拒绝本次关闭，枚举器等资源所有权保持，
    // 绝不带着在途线程销毁。失败路径 worker 内部恢复运行态，timer 重启后
    // 下个 tick 采样真正恢复（"请稍后重试"承诺成立）；成功路径 closing_
    // 为终态，accept 后迟到的队列回调被丢弃。
    if (!worker_.shutdown(2000)) {
        QMessageBox::warning(this, tr("退出"),
            tr("后台采样未能在 2 秒内结束，已取消关闭。请稍后重试。"));
        sample_timer_.start(1000);   // 恢复采样循环，用户可再次关闭
        event->ignore();
        return;
    }
    // #16：结束操作在途时同样有限等待（terminate 最长 3s + 余量）；超时
    // 拒绝关闭，绝不带在途线程销毁（线程 lambda 捕获 this）。
    if (kill_thread_ && !kill_thread_->wait(4000)) {
        QMessageBox::warning(this, tr("退出"),
            tr("结束进程操作未能在 4 秒内完成，已取消关闭。请稍后重试。"));
        sample_timer_.start(1000);
        event->ignore();
        return;
    }
    closing_ = true;   // 线程已确认退出，迟到回调（若有）由 closing_ 丢弃
    event->accept();
}

} // namespace tmog
