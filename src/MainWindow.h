#pragma once
#include <QMainWindow>
#include <QString>
#include <memory>
#include <optional>
#include "DisplaySettings.h"
#include "ProcessSampler.h"
#include "IProcessEnumerator.h"
#include "IProcessOps.h"
#include "SamplingWorker.h"
#include "SystemMetrics.h"
#include "SystemMetricsSampler.h"

class QAction;
class QButtonGroup;
class QLabel;
class QRadioButton;
class QResizeEvent;
class QSortFilterProxyModel;
class QStackedWidget;
class QTableView;
class QTimer;
class QThread;
class QWidget;

namespace tmog {

class PerformancePage;
class ProcessTableModel;

// 主窗口：单一后台采样循环 + 三个真实页面（Processes / 显示设置 / 性能）。
// #17U：QStackedWidget + Qt action 导航（Ctrl+1/Ctrl+2），每次启动默认
// Processes；显示设置在独立页面提供四档刷新；窗口尺寸/刷新档位/排序偏好
// 经 DisplaySettings 持久化（QStandardPaths::AppConfigLocation，测试可
// 注入临时路径）。
// #19：性能页数据来自独立整机系统 API（SystemMetricsSampler），不累加进程；
// 与进程采样共用同一个 SamplingWorker/调度，界面只接收样本快照。
// 采样生命周期由 SamplingWorker 管理（#14）：完成结果、线程实际退出与资源
// 销毁分离；关窗时 shutdown 确认线程退出才销毁，超时拒绝关闭不伪报安全。
class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    // enumerator_override / process_ops_override 仅检查用（G5/#13）：注入
    // 受控枚举器与进程操作驱动生产采样/结束路径；生产路径传默认值，编译期
    // 平台选择不受影响（各平台默认 ops 仅在未注入时创建，不覆盖注入实例）。
    // 所有权仍 MainWindow 持有至在途线程退出；外部不留销毁后裸指针。
    // settings_path_override 为空 → 生产路径；测试传自建临时文件，不污染
    // 真实用户配置。
    explicit MainWindow(QWidget* parent = nullptr,
                        std::unique_ptr<IProcessEnumerator> enumerator_override = nullptr,
                        std::unique_ptr<IProcessOps> process_ops_override = nullptr,
                        QString settings_path_override = QString(),
                        std::unique_ptr<ISystemMetricsSource> system_metrics_override = nullptr);
    ~MainWindow() override;

    // 刷新档位：仅接受 500/1000/2000/5000；非法值回安全 1000，并在状态栏
    // 给非模态可测反馈（不用阻塞对话框）。只调整同一个采样 timer，不新建
    // 第二 worker、不重叠采样。暂停中改档不主动启动（timer 仍未运行）。
    void set_refresh_interval(int milliseconds);
    int refresh_interval_ms() const { return refresh_interval_ms_; }

protected:
    void closeEvent(QCloseEvent* event) override;
    void resizeEvent(QResizeEvent* event) override;

private slots:
    void on_sample_tick();          // 定时器触发：空闲时启动一次采样
    void on_pause_toggled(bool paused);
    void on_selection_changed();
    void on_refresh_now();
    void on_end_task();             // 确认框 + 安全结束（结束在工作线程执行，#16）
    void on_nav_processes();        // Ctrl+1：Processes 页（默认入口）
    void on_nav_settings();         // Ctrl+2：显示设置页
    void on_nav_performance();      // Ctrl+3：整机性能页（#19）

private:
    void build_ui();
    void load_and_apply_settings();
    void apply_loaded_settings(const DisplaySettings& settings,
                               bool apply_sort_and_size = true);
    void save_preferences();        // 明确偏好变化/成功关闭路径；失败给反馈
    void show_settings_error(const QString& text);
    void clear_settings_error();
    void update_preference_labels();
    void set_process_actions_enabled(bool enabled);

    int current_sort_section() const;
    QString sort_column_key(int section) const;
    static int sort_section_for_key(const QString& key);

    void apply_sample(SampleResult result);
    void restore_selection();
    void invalidate_baseline();     // 基线作废：下帧整表"待采样"
    void start_sample();            // 启动一次采样（带代际；暂停/忙碌/关闭时调用方决策）
    void show_kill_outcome(const KillOutcome& outcome);
    // 视图当前行 → 源模型行（经代理 mapToSource；排序激活时视图行≠源行）
    const SampledRow* current_source_row() const;

    // 导航与设置页面
    QStackedWidget* stack_ = nullptr;
    QWidget* processes_page_ = nullptr;
    QWidget* settings_page_ = nullptr;
    PerformancePage* performance_page_ = nullptr;   // #19：整机 CPU/内存快照页
    QAction* nav_processes_action_ = nullptr;
    QAction* nav_settings_action_ = nullptr;
    QAction* nav_performance_action_ = nullptr;

    QTableView* table_ = nullptr;
    ProcessTableModel* model_ = nullptr;
    QSortFilterProxyModel* proxy_ = nullptr;
    QTimer* sample_timer_ = nullptr;      // objectName "sample_timer"（检查定位）
    QButtonGroup* refresh_group_ = nullptr;
    QRadioButton* refresh_radios_[4] = {}; // 500/1000/2000/5000（objectName 定位）
    QLabel* window_size_label_ = nullptr;
    QLabel* sort_preference_label_ = nullptr;
    QLabel* settings_error_label_ = nullptr;  // 持久可见错误区（加载/保存失败）
    QAction* pause_action_ = nullptr;
    QAction* refresh_action_ = nullptr;
    QAction* end_action_ = nullptr;
    // #16 G5：持久陈旧标注（addPermanentWidget，不被临时 showMessage 隐藏/覆盖）。
    // 失败置位，持续到当前代际真实成功帧清除；无"恢复3秒"timer。
    QLabel* stale_label_ = nullptr;

    QString settings_path_;          // 空 = 无法确定生产路径
    int refresh_interval_ms_ = 1000; // 安全默认；timer 启动/关闭失败恢复都用它
    bool preferences_ready_ = false; // 加载应用完成前禁止"偏好变化"保存

    std::unique_ptr<IProcessEnumerator> enumerator_;
    std::unique_ptr<IProcessOps> process_ops_;
    // #19：整机系统指标来源（独立系统 API，非进程枚举接口）；仅在未注入时
    // 按平台创建。采样器保存差分基线与有界历史，UI 只读快照。
    std::unique_ptr<ISystemMetricsSource> system_source_;
    SystemMetricsSampler system_sampler_;
    SamplingWorker worker_;         // 采样线程所有权与收束（#14）
    std::uint32_t core_count_ = 0;

    // 采样管线状态
    std::optional<SampleResult> last_sample_;     // 上一帧快照（差分基线）；nullopt = 无基线
    bool paused_ = false;                          // 暂停时不启动采样
    bool closing_ = false;
    // #16 采样代际：暂停时递增，使暂停前所有在途结果到达后被拒绝，
    // 不污染新基线（覆盖快速暂停→恢复场景）。
    std::uint64_t sample_generation_ = 0;
    bool sample_failed_ = false;                   // 上次采样失败：恢复成功帧给"已恢复"反馈

    // #16 结束操作：terminate 在一次性工作线程执行（WaitForSingleObject
    // 不占 UI 线程，等待期间窗口保持响应）；收束合同与 #14 相同——有限等待、
    // 超时拒绝关闭、绝不带在途线程销毁资源。
    QThread* kill_thread_ = nullptr;

    // 选择保持：按 (pid, creation_tick) 身份
    std::optional<ProcessIdentity> selected_identity_;
};

} // namespace tmog
