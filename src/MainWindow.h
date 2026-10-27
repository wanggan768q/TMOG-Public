#pragma once
#include <QMainWindow>
#include <QTimer>
#include <memory>
#include "ProcessTableModel.h"
#include "IProcessEnumerator.h"

class QTableView;
class QAbstractItemModel;
class QModelIndex;

namespace tmog {

// 主窗口：单一后台采样循环 + 共享表格。
// 采样在 worker 线程执行，结果经 invokeMethod 投递回 UI 线程，禁止重叠采样。
class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow() override;

protected:
    void closeEvent(QCloseEvent* event) override;

private slots:
    void on_sample_tick();          // 定时器触发：若无在途采样则启动 worker
    void on_pause_toggled();
    void on_selection_changed();
    void on_refresh_now();

private:
    void start_worker();
    void apply_sample(SampleResult result);

    QTableView* table_ = nullptr;
    ProcessTableModel* model_ = nullptr;
    QTimer sample_timer_;

    std::unique_ptr<IProcessEnumerator> enumerator_;
    std::uint32_t core_count_ = 0;

    // 采样管线状态
    std::unique_ptr<SampleResult> last_sample_;   // 上一帧快照（差分基线）
    bool sampling_ = false;                        // 禁止重叠采样
    bool paused_ = false;
    bool closing_ = false;

    // 选择保持：按 (pid, creation_tick) 身份
    std::optional<ProcessIdentity> selected_identity_;
};

} // namespace tmog
