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
        default:        return {};
        }
    }
    return {};
}

QVariant ProcessTableModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (orientation != Qt::Horizontal || role != Qt::DisplayRole) return {};
    switch (section) {
    case ColName:   return tr("名称");
    case ColPid:    return tr("PID");
    case ColCpu:    return tr("CPU");
    case ColMemory: return tr("内存");
    case ColStatus: return tr("状态");
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
