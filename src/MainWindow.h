#pragma once
#include <QMainWindow>
#include <QTimer>
#include <memory>
#include <optional>
#include "ProcessSampler.h"
#include "IProcessEnumerator.h"
#include "IProcessOps.h"

class QTableView;
class QSortFilterProxyModel;
class QThread;

namespace tmog {

class ProcessTableModel;

// 主窗口：单一后台采样循环 + 共享表格。
// 采样在 worker 线程执行，结果经队列连接投递回 UI 线程，禁止重叠采样。
// 选择保持：重置模型前捕获选中身份，重置后按身份经代理恢复。
class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow() override;

protected:
    void closeEvent(QCloseEvent* event) override;

private slots:
    void on_sample_tick();          // 定时器触发：若无在途采样则启动 worker
    void on_pause_toggled(bool paused);
    void on_selection_changed();
    void on_refresh_now();
    void on_end_task();             // 确认框 + 安全结束

private:
    void start_worker();
    void apply_sample(SampleResult result);
    void restore_selection();
    void invalidate_baseline();     // 基线作废：下帧整表"待采样"
    void show_kill_outcome(const KillOutcome& outcome);
    // 视图当前行 → 源模型行（经代理 mapToSource；排序激活时视图行≠源行）
    const SampledRow* current_source_row() const;

    QTableView* table_ = nullptr;
    ProcessTableModel* model_ = nullptr;
    QSortFilterProxyModel* proxy_ = nullptr;
    QTimer sample_timer_;

    std::unique_ptr<IProcessEnumerator> enumerator_;
    std::unique_ptr<IProcessOps> process_ops_;
    std::uint32_t core_count_ = 0;

    // 采样管线状态
    std::optional<SampleResult> last_sample_;     // 上一帧快照（差分基线）；nullopt = 无基线
    bool sampling_ = false;                        // 禁止重叠采样
    bool paused_ = false;                          // 暂停时不启动采样
    bool closing_ = false;
    QThread* in_flight_ = nullptr;                 // 在途采样线程（关窗时等待）

    // 选择保持：按 (pid, creation_tick) 身份
    std::optional<ProcessIdentity> selected_identity_;
};

} // namespace tmog
