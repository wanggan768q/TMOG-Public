#include "ProcessTableModel.h"

namespace tmog {

ProcessTableModel::ProcessTableModel(QObject* parent) : QAbstractTableModel(parent) {}

int ProcessTableModel::rowCount(const QModelIndex& parent) const {
    return parent.isValid() ? 0 : static_cast<int>(rows_.size());
}

int ProcessTableModel::columnCount(const QModelIndex& parent) const {
    return parent.isValid() ? 0 : ColCount;
}

QVariant ProcessTableModel::data(const QModelIndex& index, int role) const {
    if (!index.isValid() || index.row() >= (int)rows_.size()) return {};
    const SampledRow& r = rows_[index.row()];

    if (role == Qt::DisplayRole) {
        switch (index.column()) {
        case ColName:   return QString::fromStdString(r.snapshot.name);
        case ColPid:    return static_cast<qulonglong>(r.snapshot.identity.pid);
        case ColCpu:
            return r.cpu_percent ? QString::number(*r.cpu_percent) + QStringLiteral(" %")
                                 : QStringLiteral("—");   // 待采样/不可用显式显示，不造零
        case ColMemory: {
            if (!r.snapshot.resident_available) return QStringLiteral("—");
            const double bytes = static_cast<double>(r.snapshot.resident_bytes);
            if (bytes >= 1024.0 * 1024.0 * 1024.0)
                return QString::number(bytes / (1024.0 * 1024.0 * 1024.0), 'f', 2)
                     + QStringLiteral(" GB");
            if (bytes >= 1024.0 * 1024.0)
                return QString::number(bytes / (1024.0 * 1024.0), 'f', 1)
                     + QStringLiteral(" MB");
            return QString::number(bytes / 1024.0, 'f', 0) + QStringLiteral(" KB");
        }
        case ColStatus:
            switch (r.status) {
            case ProcessStatus::Ok:             return {};
            case ProcessStatus::FirstSample:    return tr("待采样");
            case ProcessStatus::Unavailable:    return tr("不可用");
            case ProcessStatus::IdentityChanged:return tr("身份变化");
            case ProcessStatus::InvalidDelta:   return tr("无效增量");
            }
            return {};
        case ColIoRead:
        case ColIoWrite: {
            const bool is_read = index.column() == ColIoRead;
            const auto& rate = is_read ? r.io_read_bytes_per_sec
                                       : r.io_write_bytes_per_sec;
            const auto io_st = r.io_status;
            if (io_st == ProcessStatus::FirstSample) return QStringLiteral("待采样");
            if (io_st == ProcessStatus::Unavailable) return QStringLiteral("不可用");
            if (io_st == ProcessStatus::IdentityChanged) return QStringLiteral("身份变化");
            if (io_st == ProcessStatus::InvalidDelta) return QStringLiteral("无效增量");
            if (!rate) return QStringLiteral("—");
            const double bps = *rate;
            if (bps >= 1024.0 * 1024.0)
                return QString::number(bps / (1024.0 * 1024.0), 'f', 2)
                     + QStringLiteral(" MiB/s");
            if (bps >= 1024.0)
                return QString::number(bps / 1024.0, 'f', 1)
                     + QStringLiteral(" KiB/s");
            return QString::number(bps, 'f', 0) + QStringLiteral(" B/s");
        }
        }
    }
    // 排序角色：数值列按值；文本列返回原串（Qt 按字典序比较 QString）
    if (role == Qt::UserRole) {
        switch (index.column()) {
        case ColName:   return QString::fromStdString(r.snapshot.name);
        case ColPid:    return static_cast<qulonglong>(r.snapshot.identity.pid);
        case ColCpu:    return r.cpu_percent ? *r.cpu_percent : -1;
        case ColMemory: return r.snapshot.resident_available
                              ? static_cast<qulonglong>(r.snapshot.resident_bytes) : -1;
        // I/O 排序：始终同一 double 类型有效数值，无效哨兵 -1.0（同类型可比）
        case ColIoRead:  return r.io_read_bytes_per_sec  ? *r.io_read_bytes_per_sec  : -1.0;
        case ColIoWrite: return r.io_write_bytes_per_sec ? *r.io_write_bytes_per_sec : -1.0;
        default:        return {};
        }
    }
    if (role == Qt::ToolTipRole) {
        switch (index.column()) {
        case ColIoRead:
        case ColIoWrite: {
            const bool is_read = index.column() == ColIoRead;
            const auto& rate = is_read ? r.io_read_bytes_per_sec
                                       : r.io_write_bytes_per_sec;
            QString base = is_read ? tr("Windows 进程 I/O 读；并非物理磁盘吞吐")
                                   : tr("Windows 进程 I/O 写；并非物理磁盘吞吐");
            if (r.io_status == ProcessStatus::FirstSample)
                return base + tr("\n待采样：下一帧将建立基线");
            if (r.io_status == ProcessStatus::Unavailable)
                return base + tr("\n不可用：平台未提供或本次读取失败");
            if (r.io_status == ProcessStatus::IdentityChanged)
                return base + tr("\n身份变化：PID 复用，基线无效");
            if (r.io_status == ProcessStatus::InvalidDelta)
                return base + tr("\n无效增量：累计值倒退，速率不可信");
            if (!rate) return base + tr("\n无有效速率");
            return base + QStringLiteral("\n当前速率: ")
                 + data(index, Qt::DisplayRole).toString() + tr("（非物理磁盘吞吐）");
        }
        default: return {};
        }
    }
    return {};
}

QVariant ProcessTableModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (orientation != Qt::Horizontal || role != Qt::DisplayRole) return {};
    switch (section) {
    case ColName:    return tr("名称");
    case ColPid:     return tr("PID");
    case ColCpu:     return tr("CPU");
    case ColMemory:  return tr("内存");
    case ColIoRead:  return tr("I/O 读");
    case ColIoWrite: return tr("I/O 写");
    case ColStatus:  return tr("状态");
    }
    return {};
}

void ProcessTableModel::replace_snapshot(std::vector<SampledRow> rows) {
    beginResetModel();
    rows_ = std::move(rows);
    endResetModel();
}

const SampledRow* ProcessTableModel::row_at(int row) const {
    return row >= 0 && row < (int)rows_.size() ? &rows_[row] : nullptr;
}

} // namespace tmog
