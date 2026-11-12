#include "MainWindow.h"
#include "ProcessTableModel.h"
#include "SamplingWorker.h"
#include "platform/WindowsProcesses.h"
#include "platform/WindowsProcessOps.h"
#include <QAction>
#include <QActionGroup>
#include <QButtonGroup>
#include <QCloseEvent>
#include <QDateTime>
#include <QDir>
#include <QFileInfo>
#include <QFont>
#include <QGroupBox>
#include <QHeaderView>
#include <QKeySequence>
#include <QLabel>
#include <QMessageBox>
#include <QRadioButton>
#include <QResizeEvent>
#include <QScreen>
#include <QSignalBlocker>
#include <QSortFilterProxyModel>
#include <QStackedWidget>
#include <QStandardPaths>
#include <QStatusBar>
#include <QTableView>
#include <QThread>
#include <QTimer>
#include <QToolBar>
#include <QVBoxLayout>
#include <utility>

namespace tmog {

namespace {

constexpr const char* kSettingsFileName = "display-settings.json";

// 生产设置路径：当前用户应用配置目录（main.cpp 已设 app/organization）。
// 不写厂商路径/源码目录/注册表；无法确定时返回空，由 MainWindow 反馈。
QString production_settings_path() {
    const QString dir =
        QStandardPaths::writableLocation(QStandardPaths::AppConfigLocation);
    if (dir.isEmpty()) return QString();
    return QDir(dir).filePath(QString::fromLatin1(kSettingsFileName));
}

} // namespace

MainWindow::MainWindow(QWidget* parent,
                       std::unique_ptr<IProcessEnumerator> enumerator_override,
                       std::unique_ptr<IProcessOps> process_ops_override,
                       QString settings_path_override)
    : QMainWindow(parent) {
    // #13：注入的 ops 最先接收（默认平台分支不得覆盖检查注入实例）
    process_ops_ = std::move(process_ops_override);
    settings_path_ = settings_path_override.isEmpty()
                         ? production_settings_path()
                         : settings_path_override;

    build_ui();

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
        if (!process_ops_) process_ops_ = std::make_unique<WindowsProcessOps>();
    }
#elif defined(__APPLE__)
    // #13 attempt2：枚举器赋值恢复 base 原行为（无条件，撤销 attempt1 越范围
    // 守卫）；ops 注入守卫为获准修改保留。
    enumerator_ = std::make_unique<MacProcessEnumerator>();
    if (!process_ops_) process_ops_ = std::make_unique<MacProcessOps>();
#elif defined(__unix__)
    enumerator_ = std::make_unique<LinuxProcessEnumerator>();
    if (!process_ops_) process_ops_ = std::make_unique<LinuxProcessOps>();
#endif

    // 加载设置：不存在→静默默认；损坏/越界/未知版本→整份安全默认+可见错误。
    load_and_apply_settings();

    // 采样 timer：对象名供检查定位；刷新档位只调此 timer（不建第二 worker）。
    sample_timer_ = new QTimer(this);
    sample_timer_->setObjectName(QStringLiteral("sample_timer"));
    connect(sample_timer_, &QTimer::timeout, this, &MainWindow::on_sample_tick);
    sample_timer_->start(refresh_interval_ms_);

    // #16 G5：持久陈旧标注。addPermanentWidget 的 widget 不被临时 showMessage
    // 隐藏——失败标注在 busy/"正在结束进程…"等短时消息期间持续可见。
    stale_label_ = new QLabel(this);
    stale_label_->setObjectName(QStringLiteral("stale_label"));
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

void MainWindow::build_ui() {
    model_ = new ProcessTableModel(this);
    proxy_ = new QSortFilterProxyModel(this);
    proxy_->setSourceModel(model_);
    proxy_->setSortRole(Qt::UserRole);

    stack_ = new QStackedWidget(this);
    stack_->setObjectName(QStringLiteral("main_stack"));
    setCentralWidget(stack_);

    // ---- Processes 页：现有表格作为独立真实页面（默认入口） ----
    processes_page_ = new QWidget(stack_);
    processes_page_->setObjectName(QStringLiteral("processes_page"));
    auto* processes_layout = new QVBoxLayout(processes_page_);
    processes_layout->setContentsMargins(0, 0, 0, 0);

    table_ = new QTableView(processes_page_);
    table_->setObjectName(QStringLiteral("process_table"));
    table_->setModel(proxy_);
    table_->setSortingEnabled(true);
    table_->horizontalHeader()->setStretchLastSection(true);
    table_->verticalHeader()->setVisible(false);
    table_->setSelectionBehavior(QAbstractItemView::SelectRows);
    table_->setSelectionMode(QAbstractItemView::SingleSelection);
    table_->setEditTriggers(QAbstractItemView::NoEditTriggers);
    table_->setAlternatingRowColors(true);
    processes_layout->addWidget(table_);
    stack_->addWidget(processes_page_);

    // ---- 显示设置页：真实四档刷新 + 窗口/排序偏好反馈 ----
    settings_page_ = new QWidget(stack_);
    settings_page_->setObjectName(QStringLiteral("settings_page"));
    auto* settings_layout = new QVBoxLayout(settings_page_);
    settings_layout->setContentsMargins(16, 16, 16, 16);
    settings_layout->setSpacing(10);

    auto* heading = new QLabel(tr("显示设置"), settings_page_);
    QFont heading_font = heading->font();
    heading_font.setPointSizeF(heading_font.pointSizeF() + 3.0);
    heading_font.setBold(true);
    heading->setFont(heading_font);
    settings_layout->addWidget(heading);

    auto* refresh_group_box = new QGroupBox(tr("刷新档位"), settings_page_);
    auto* refresh_layout = new QVBoxLayout(refresh_group_box);
    refresh_group_ = new QButtonGroup(this);
    refresh_group_->setExclusive(true);
    struct TierSpec {
        int ms;
        const char* label;
        const char* object_name;
    };
    static const TierSpec kTiers[] = {
        {500, "0.5 秒（500 ms）", "refresh_500"},
        {1000, "1 秒（1000 ms，默认）", "refresh_1000"},
        {2000, "2 秒（2000 ms）", "refresh_2000"},
        {5000, "5 秒（5000 ms）", "refresh_5000"},
    };
    for (int i = 0; i < 4; ++i) {
        auto* radio = new QRadioButton(tr(kTiers[i].label), refresh_group_box);
        radio->setObjectName(QString::fromLatin1(kTiers[i].object_name));
        radio->setToolTip(tr("采样间隔：%1 毫秒").arg(kTiers[i].ms));
        refresh_group_->addButton(radio, kTiers[i].ms);
        refresh_layout->addWidget(radio);
        refresh_radios_[i] = radio;
    }
    settings_layout->addWidget(refresh_group_box);
    for (int i = 1; i < 4; ++i)
        setTabOrder(refresh_radios_[i - 1], refresh_radios_[i]);
    connect(refresh_group_, &QButtonGroup::idClicked, this,
            [this](int id) { set_refresh_interval(id); });

    auto* refresh_hint = new QLabel(
        tr("修改档位后立即生效，并保存到本机设置文件。采样线程始终只有一个，"
           "改档不会新开采样。"),
        settings_page_);
    refresh_hint->setWordWrap(true);
    settings_layout->addWidget(refresh_hint);

    window_size_label_ = new QLabel(settings_page_);
    window_size_label_->setObjectName(QStringLiteral("window_size_label"));
    settings_layout->addWidget(window_size_label_);

    sort_preference_label_ = new QLabel(settings_page_);
    sort_preference_label_->setObjectName(QStringLiteral("sort_preference_label"));
    settings_layout->addWidget(sort_preference_label_);

    settings_error_label_ = new QLabel(settings_page_);
    settings_error_label_->setObjectName(QStringLiteral("settings_error_label"));
    settings_error_label_->setWordWrap(true);
    settings_error_label_->setStyleSheet(QStringLiteral("color: #b00020;"));
    settings_error_label_->setVisible(false);
    settings_layout->addWidget(settings_error_label_);

    settings_layout->addStretch(1);
    stack_->addWidget(settings_page_);

    // ---- 工具栏：既有进程操作 + 导航 action（Ctrl+1 / Ctrl+2） ----
    auto* toolbar = addToolBar(tr("main"));
    toolbar->setObjectName(QStringLiteral("main_toolbar"));

    pause_action_ = toolbar->addAction(tr("暂停"));
    pause_action_->setObjectName(QStringLiteral("pause_action"));
    pause_action_->setCheckable(true);
    connect(pause_action_, &QAction::toggled, this, &MainWindow::on_pause_toggled);

    refresh_action_ = toolbar->addAction(tr("刷新"));
    refresh_action_->setObjectName(QStringLiteral("refresh_action"));
    connect(refresh_action_, &QAction::triggered, this, &MainWindow::on_refresh_now);

    end_action_ = toolbar->addAction(tr("结束任务"));
    end_action_->setObjectName(QStringLiteral("end_task_action"));
    connect(end_action_, &QAction::triggered, this, &MainWindow::on_end_task);

    toolbar->addSeparator();

    auto* nav_group = new QActionGroup(this);
    nav_group->setExclusive(true);
    nav_processes_action_ = new QAction(tr("进程"), this);
    nav_processes_action_->setObjectName(QStringLiteral("nav_processes_action"));
    nav_processes_action_->setCheckable(true);
    nav_processes_action_->setShortcut(QKeySequence(QStringLiteral("Ctrl+1")));
    nav_processes_action_->setShortcutContext(Qt::WindowShortcut);
    nav_processes_action_->setToolTip(tr("显示进程页（Ctrl+1）"));
    nav_group->addAction(nav_processes_action_);
    toolbar->addAction(nav_processes_action_);

    nav_settings_action_ = new QAction(tr("显示设置"), this);
    nav_settings_action_->setObjectName(QStringLiteral("nav_settings_action"));
    nav_settings_action_->setCheckable(true);
    nav_settings_action_->setShortcut(QKeySequence(QStringLiteral("Ctrl+2")));
    nav_settings_action_->setShortcutContext(Qt::WindowShortcut);
    nav_settings_action_->setToolTip(tr("显示设置页（Ctrl+2）"));
    nav_group->addAction(nav_settings_action_);
    toolbar->addAction(nav_settings_action_);

    connect(nav_processes_action_, &QAction::triggered,
            this, &MainWindow::on_nav_processes);
    connect(nav_settings_action_, &QAction::triggered,
            this, &MainWindow::on_nav_settings);

    nav_processes_action_->setChecked(true);
    stack_->setCurrentWidget(processes_page_);

    connect(table_->selectionModel(), &QItemSelectionModel::selectionChanged,
            this, &MainWindow::on_selection_changed);

    // 排序偏好：视图排序变化即"明确偏好变化"→保存（加载期间被
    // preferences_ready_ 抑制）。窗口尺寸在关闭路径保存。
    connect(table_->horizontalHeader(), &QHeaderView::sortIndicatorChanged,
            this, [this](int, Qt::SortOrder) {
                update_preference_labels();
                save_preferences();
            });
}

void MainWindow::on_nav_processes() {
    stack_->setCurrentWidget(processes_page_);
    set_process_actions_enabled(true);
    nav_processes_action_->setChecked(true);
    table_->setFocus();
}

void MainWindow::on_nav_settings() {
    stack_->setCurrentWidget(settings_page_);
    // 现有进程操作（含破坏性"结束任务"）只在 Processes 页可用；切页不触发
    // 任何操作，也不改变暂停状态。
    set_process_actions_enabled(false);
    nav_settings_action_->setChecked(true);
    if (auto* checked = refresh_group_->checkedButton()) checked->setFocus();
}

void MainWindow::set_process_actions_enabled(bool enabled) {
    if (pause_action_) pause_action_->setEnabled(enabled);
    if (refresh_action_) refresh_action_->setEnabled(enabled);
    if (end_action_) end_action_->setEnabled(enabled);
}

void MainWindow::set_refresh_interval(int milliseconds) {
    const bool valid = is_valid_refresh(milliseconds);
    const int applied = valid ? milliseconds : 1000;
    if (!valid) {
        // 非模态可测反馈：状态栏消息，不用阻塞对话框。
        statusBar()->showMessage(
            tr("刷新档位无效：%1 ms；已回落到安全值 1000 ms。")
                .arg(milliseconds),
            5000);
    }
    const int previous = refresh_interval_ms_;
    refresh_interval_ms_ = applied;
    if (refresh_group_) {
        QSignalBlocker blocker(refresh_group_);
        if (auto* button = refresh_group_->button(applied)) button->setChecked(true);
    }
    if (sample_timer_) {
        if (sample_timer_->isActive()) {
            // 只调整同一个 timer；在途采样继续按真实时间差有效，不伪造 dt。
            sample_timer_->setInterval(applied);
        } else if (!paused_ && !closing_) {
            sample_timer_->start(applied);
        }
    }
    if (valid && applied != previous) save_preferences();
}

int MainWindow::current_sort_section() const {
    if (!table_) return ProcessTableModel::ColPid;
    const int section = table_->horizontalHeader()->sortIndicatorSection();
    if (section < 0 || section >= ProcessTableModel::ColCount)
        return ProcessTableModel::ColPid;
    return section;
}

QString MainWindow::sort_column_key(int section) const {
    switch (section) {
    case ProcessTableModel::ColName:   return QStringLiteral("name");
    case ProcessTableModel::ColPid:    return QStringLiteral("pid");
    case ProcessTableModel::ColCpu:    return QStringLiteral("cpu");
    case ProcessTableModel::ColMemory: return QStringLiteral("memory");
    case ProcessTableModel::ColIoRead: return QStringLiteral("io_read");
    case ProcessTableModel::ColIoWrite:return QStringLiteral("io_write");
    case ProcessTableModel::ColStatus: return QStringLiteral("status");
    }
    return QStringLiteral("pid");
}

int MainWindow::sort_section_for_key(const QString& key) {
    if (key == QLatin1String("name")) return ProcessTableModel::ColName;
    if (key == QLatin1String("pid")) return ProcessTableModel::ColPid;
    if (key == QLatin1String("cpu")) return ProcessTableModel::ColCpu;
    if (key == QLatin1String("memory")) return ProcessTableModel::ColMemory;
    if (key == QLatin1String("io_read")) return ProcessTableModel::ColIoRead;
    if (key == QLatin1String("io_write")) return ProcessTableModel::ColIoWrite;
    if (key == QLatin1String("status")) return ProcessTableModel::ColStatus;
    return -1;
}

void MainWindow::load_and_apply_settings() {
    if (settings_path_.isEmpty()) {
        show_settings_error(
            tr("无法确定设置文件位置：本次使用默认设置且不会保存。"));
        apply_loaded_settings(DisplaySettings{});
        return;
    }
    // 首次启动（文件不存在）：静默保留 Qt 默认窗口尺寸与排序，不用
    // DisplaySettings 的字段默认值覆写界面；仅同步刷新档位与偏好反馈。
    if (!QFileInfo::exists(settings_path_)) {
        apply_loaded_settings(DisplaySettings{}, false);
        return;
    }
    const SettingsLoadResult result = load_display_settings(settings_path_);
    if (!result.error.isEmpty()) {
        show_settings_error(
            tr("设置加载失败：%1（已使用安全默认，旧文件未改动）")
                .arg(result.error));
    }
    apply_loaded_settings(result.settings);
}

void MainWindow::apply_loaded_settings(const DisplaySettings& settings,
                                       bool apply_sort_and_size) {
    refresh_interval_ms_ =
        is_valid_refresh(settings.refresh_ms) ? settings.refresh_ms : 1000;
    if (refresh_group_) {
        QSignalBlocker blocker(refresh_group_);
        if (auto* button = refresh_group_->button(refresh_interval_ms_))
            button->setChecked(true);
    }

    if (apply_sort_and_size) {
        int section = sort_section_for_key(settings.sort_column);
        if (section < 0) section = ProcessTableModel::ColPid;
        table_->sortByColumn(
            section, settings.sort_descending ? Qt::DescendingOrder
                                              : Qt::AscendingOrder);

        // 尺寸夹到当前 screen availableGeometry，避免加载出不可见窗口。
        const QRect available =
            screen() ? screen()->availableGeometry() : QRect(0, 0, 1920, 1080);
        const int max_width = qMax(1, available.width());
        const int max_height = qMax(1, available.height());
        resize(qMax(1, qMin(settings.width, max_width)),
               qMax(1, qMin(settings.height, max_height)));
    }

    update_preference_labels();
    preferences_ready_ = true;
}

void MainWindow::save_preferences() {
    if (!preferences_ready_) return;

    DisplaySettings settings;
    settings.width = width();
    settings.height = height();
    settings.refresh_ms = refresh_interval_ms_;
    settings.sort_column = sort_column_key(current_sort_section());
    settings.sort_descending =
        table_->horizontalHeader()->sortIndicatorOrder() == Qt::DescendingOrder;

    if (settings_path_.isEmpty()) {
        show_settings_error(
            tr("设置保存失败：无法确定设置文件位置（本次更改未保存）。"));
        return;
    }

    const QString directory = QFileInfo(settings_path_).absolutePath();
    QString error;
    bool ok = false;
    if (!QDir().mkpath(directory)) {
        error = tr("无法创建设置目录：%1")
                    .arg(QDir::toNativeSeparators(directory));
    } else {
        ok = save_display_settings(settings_path_, settings, error);
    }
    if (!ok) {
        // 旧文件由 QSaveFile 保证不被破坏；不再弹阻塞模态。
        show_settings_error(
            tr("设置保存失败：%1（本次更改未写入；旧配置保持不变）")
                .arg(error));
    } else {
        clear_settings_error();
    }
}

void MainWindow::show_settings_error(const QString& text) {
    if (settings_error_label_) {
        settings_error_label_->setText(text);
        settings_error_label_->setToolTip(text);
        settings_error_label_->setVisible(true);
    }
    statusBar()->showMessage(text, 8000);
}

void MainWindow::clear_settings_error() {
    if (!settings_error_label_) return;
    settings_error_label_->clear();
    settings_error_label_->setToolTip(QString());
    settings_error_label_->setVisible(false);
}

void MainWindow::update_preference_labels() {
    if (window_size_label_) {
        window_size_label_->setText(
            tr("窗口尺寸：%1 × %2 像素").arg(width()).arg(height()));
    }
    if (sort_preference_label_) {
        const int section = current_sort_section();
        const QString column =
            model_->headerData(section, Qt::Horizontal, Qt::DisplayRole)
                .toString();
        const QString order =
            table_->horizontalHeader()->sortIndicatorOrder() ==
                    Qt::DescendingOrder
                ? tr("降序")
                : tr("升序");
        sort_preference_label_->setText(
            tr("排序偏好：%1（%2）").arg(column, order));
    }
}

void MainWindow::resizeEvent(QResizeEvent* event) {
    QMainWindow::resizeEvent(event);
    update_preference_labels();
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
                      // #11 R1：当前代际成功帧同步清 model 全表陈旧提示
                      //（失败回调置位；恢复首帧整表"待采样"时 tooltip 同步恢复）。
                      model_->set_table_stale(false);
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
                      // #11 R1：model 全表陈旧置位——I/O 列 tooltip 追加
                      // 陈旧提示（不隐藏各 I/O 具体状态，模型数据不动）。
                      model_->set_table_stale(true);
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

    // 确认框：名称、PID、创建身份、未保存数据警告；取消不得执行
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
    sample_timer_->stop();
    // #14：区分采样完成、线程实际退出与资源销毁。shutdown 等待在途线程
    // 实际退出；超时不伪报安全——拒绝本次关闭，枚举器等资源所有权保持，
    // 绝不带着在途线程销毁。失败路径 worker 内部恢复运行态，timer 重启后
    // 下个 tick 采样真正恢复（"请稍后重试"承诺成立）；成功路径 closing_
    // 为终态，accept 后迟到的队列回调被丢弃。
    if (!worker_.shutdown(2000)) {
        QMessageBox::warning(this, tr("退出"),
            tr("后台采样未能在 2 秒内结束，已取消关闭。请稍后重试。"));
        sample_timer_->start(refresh_interval_ms_);   // 恢复采样循环，用户可再次关闭
        event->ignore();
        return;
    }
    // #16：结束操作在途时同样有限等待（terminate 最长 3s + 余量）；超时
    // 拒绝关闭，绝不带在途线程销毁（线程 lambda 捕获 this）。
    if (kill_thread_ && !kill_thread_->wait(4000)) {
        QMessageBox::warning(this, tr("退出"),
            tr("结束进程操作未能在 4 秒内完成，已取消关闭。请稍后重试。"));
        sample_timer_->start(refresh_interval_ms_);
        event->ignore();
        return;
    }
    // 成功关闭路径：保存窗口尺寸/档位/排序偏好；失败反馈并保留旧配置
    // （QSaveFile 原子性由 DisplaySettings 保证），不跳过线程收束强关。
    save_preferences();
    closing_ = true;   // 线程已确认退出，迟到回调（若有）由 closing_ 丢弃
    event->accept();
}

} // namespace tmog
