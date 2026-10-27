#pragma once
#include <QMainWindow>
#include <QTimer>
#include <memory>
#include <optional>
#include "ProcessSampler.h"
#include "IProcessEnumerator.h"
#include "IProcessOps.h"
#include "SamplingWorker.h"

class QTableView;
class QLabel;
class QSortFilterProxyModel;
class QThread;

namespace tmog {

class ProcessTableModel;

// 主窗口：单一后台采样循环 + 共享表格。
// 采样生命周期由 SamplingWorker 管理（#14）：完成结果、线程实际退出与资源
// 销毁分离；关窗时 shutdown 确认线程退出才销毁，超时拒绝关闭不伪报安全。
class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    // enumerator_override 仅检查用（G5）：注入受控枚举器驱动生产采样路径；
    // 生产路径传默认值，编译期平台选择不受影响。
    explicit MainWindow(QWidget* parent = nullptr,
                        std::unique_ptr<IProcessEnumerator> enumerator_override = nullptr);
    ~MainWindow() override;

protected:
    void closeEvent(QCloseEvent* event) override;

private slots:
    void on_sample_tick();          // 定时器触发：空闲时启动一次采样
    void on_pause_toggled(bool paused);
    void on_selection_changed();
    void on_refresh_now();
    void on_end_task();             // 确认框 + 安全结束（结束在工作线程执行，#16）

private:
    void apply_sample(SampleResult result);
    void restore_selection();
    void invalidate_baseline();     // 基线作废：下帧整表"待采样"
    void start_sample();            // 启动一次采样（带代际；暂停/忙碌/关闭时调用方决策）
    void show_kill_outcome(const KillOutcome& outcome);
    // 视图当前行 → 源模型行（经代理 mapToSource；排序激活时视图行≠源行）
    const SampledRow* current_source_row() const;

    QTableView* table_ = nullptr;
    ProcessTableModel* model_ = nullptr;
    QSortFilterProxyModel* proxy_ = nullptr;
    QTimer sample_timer_;
    // #16 G5：持久陈旧标注（addPermanentWidget，不被临时 showMessage 隐藏/覆盖）。
    // 失败置位，持续到当前代际真实成功帧清除；无"恢复3秒"timer。
    QLabel* stale_label_ = nullptr;

    std::unique_ptr<IProcessEnumerator> enumerator_;
    std::unique_ptr<IProcessOps> process_ops_;
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
