#pragma once
#include <QAbstractTableModel>
#include <optional>
#include <vector>
#include "ProcessSnapshot.h"
#include "ProcessSampler.h"

namespace tmog {

// Processes 页表格模型：名称/PID/CPU%/内存/状态
// 快照由 MainWindow 的采样线程投递（通过 invokeMethod 回 UI 线程），模型只存结果
class ProcessTableModel : public QAbstractTableModel {
    Q_OBJECT
public:
    enum Column { ColName = 0, ColPid, ColCpu, ColMemory, ColStatus, ColCount };

    explicit ProcessTableModel(QObject* parent = nullptr);

    int rowCount(const QModelIndex& parent = {}) const override;
    int columnCount(const QModelIndex& parent = {}) const override;
    QVariant data(const QModelIndex& index, int role) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;

    struct Row {
        ProcessSnapshot snapshot;
        std::optional<int> cpu_percent;   // 有值才显示数字
        ProcessStatus status = ProcessStatus::FirstSample;
    };

    // 整表替换为新快照；保持按 (pid, creation_tick) 匹配的选中行
    void replace_snapshot(std::vector<Row> rows);

    const Row* row_at(int row) const;

private:
    std::vector<Row> rows_;
};

} // namespace tmog
