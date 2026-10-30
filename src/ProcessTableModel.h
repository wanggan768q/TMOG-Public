#pragma once
#include <QAbstractTableModel>
#include <optional>
#include <vector>
#include "ProcessSnapshot.h"
#include "ProcessSampler.h"

namespace tmog {

// Processes 页表格模型：名称/PID/CPU%/内存/状态
// 快照由 MainWindow 的采样线程投递（经队列连接回 UI 线程），模型只存结果。
// 行数据类型即核心层 SampledRow，GUI 不再自建行结构。
class ProcessTableModel : public QAbstractTableModel {
    Q_OBJECT
public:
    enum Column { ColName = 0, ColPid, ColCpu, ColMemory, ColIoRead, ColIoWrite, ColStatus, ColCount };

    explicit ProcessTableModel(QObject* parent = nullptr);

    int rowCount(const QModelIndex& parent = {}) const override;
    int columnCount(const QModelIndex& parent = {}) const override;
    QVariant data(const QModelIndex& index, int role) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;

    // 整表替换为新快照
    void replace_snapshot(std::vector<SampledRow> rows);

    // #11 R1：全表陈旧标志（采样失败置位，当前代际真实成功帧清除）。
    // 置位期间各列 I/O tooltip 追加"数据已陈旧"提示，不隐藏各 I/O 具体状态。
    // 只发受影响 tooltip 单元格 dataChanged，不做全表 reset。
    void set_table_stale(bool stale);

    const SampledRow* row_at(int row) const;

private:
    std::vector<SampledRow> rows_;
    bool table_stale_ = false;
};

} // namespace tmog
