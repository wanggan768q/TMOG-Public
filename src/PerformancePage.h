#pragma once
#include <QWidget>

#include <cstddef>
#include <deque>

class QLabel;

namespace tmog {

struct SystemSample;
class SystemHistoryChart;

// 整机 CPU／内存实时性能页（#19）。
// UI 只接收 SystemMetricsSampler 的样本历史快照（值语义），不在页面里读系统
// API；曲线由固定 5 分钟窗口的历史绘制，缺口（Pending/Gap）断开不伪连。
class PerformancePage final : public QWidget {
    Q_OBJECT
public:
    explicit PerformancePage(QWidget* parent = nullptr);

    // 由 MainWindow 在每次采样摄入后调用（UI 线程）。
    void set_history(const std::deque<SystemSample>& history);

    // 检查用：当前历史长度与 CPU/内存曲线连续段数（缺口会新增一段）。
    std::size_t history_size() const { return history_.size(); }
    int cpu_curve_segments() const;
    int memory_curve_segments() const;

private:
    QLabel* cpu_value_label_ = nullptr;
    QLabel* cpu_state_label_ = nullptr;
    QLabel* memory_used_label_ = nullptr;
    QLabel* memory_percent_label_ = nullptr;
    QLabel* memory_available_label_ = nullptr;
    QLabel* error_label_ = nullptr;
    SystemHistoryChart* cpu_chart_ = nullptr;
    SystemHistoryChart* memory_chart_ = nullptr;

    std::deque<SystemSample> history_;
};

} // namespace tmog
