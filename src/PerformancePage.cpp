#include "PerformancePage.h"

#include <QFont>
#include <QFrame>
#include <QGroupBox>
#include <QLabel>
#include <QPaintEvent>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QScrollArea>
#include <QVBoxLayout>

#include <algorithm>
#include <string>

namespace tmog {

// 自绘整机指标曲线：纵轴 0–100，横轴固定最近 5 分钟（右端 = 最新样本）。
// CPU 与内存按各自序列独立判定可绘制性：任一 API 失败只断开自己那条曲线，
// 不连带对方；各自缺口处断开，不跨缺口伪连。
class SystemHistoryChart final : public QWidget {
public:
    enum class Metric { CpuPercent, MemoryPercent };

    explicit SystemHistoryChart(Metric metric, QWidget* parent = nullptr)
        : QWidget(parent), metric_(metric) {
        setMinimumHeight(130);
        setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    }

    void set_samples(const std::deque<SystemSample>* samples) {
        samples_ = samples;
        segment_count_ = 0;
        bool in_segment = false;
        if (samples_) {
            for (const auto& sample : *samples_) {
                if (drawable(sample)) {
                    if (!in_segment) {
                        ++segment_count_;
                        in_segment = true;
                    }
                } else {
                    in_segment = false;
                }
            }
        }
        update();
    }

    int segment_count() const { return segment_count_; }

protected:
    void paintEvent(QPaintEvent*) override {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing, true);

        const QRectF plot = QRectF(rect()).adjusted(48.0, 10.0, -10.0, -24.0);
        if (plot.width() <= 1.0 || plot.height() <= 1.0) return;

        painter.fillRect(rect(), palette().color(QPalette::Base));

        QPen grid_pen(palette().color(QPalette::Mid), 1.0, Qt::DotLine);
        painter.setPen(grid_pen);
        for (int value = 0; value <= 100; value += 25) {
            const double y = y_of(value, plot);
            painter.drawLine(QPointF(plot.left(), y), QPointF(plot.right(), y));
        }

        painter.setPen(palette().color(QPalette::Text));
        QFont small = painter.font();
        small.setPointSizeF(std::max(7.0, small.pointSizeF() - 1.0));
        painter.setFont(small);
        for (int value : {0, 50, 100}) {
            const double y = y_of(value, plot);
            painter.drawText(QRectF(0.0, y - 8.0, plot.left() - 6.0, 16.0),
                             Qt::AlignRight | Qt::AlignVCenter,
                             QString::number(value));
        }
        painter.drawText(QRectF(plot.left(), plot.bottom() + 4.0, plot.width(), 18.0),
                         Qt::AlignRight, QStringLiteral("最近 5 分钟"));

        if (!samples_ || samples_->empty()) {
            painter.drawText(plot, Qt::AlignCenter, QStringLiteral("等待采样…"));
            return;
        }

        const std::deque<SystemSample>& samples = *samples_;
        const std::uint64_t latest = samples.back().wall_clock_ns;
        const double window = static_cast<double>(SystemMetricsSampler::kHistoryWindowNs);

        auto x_of = [&](std::uint64_t timestamp) -> double {
            if (latest <= timestamp) return plot.right();
            const double age = static_cast<double>(latest - timestamp);
            const double ratio = std::clamp(age / window, 0.0, 1.0);
            return plot.right() - ratio * plot.width();
        };
        auto y_of_value = [&](double value) -> double {
            return plot.bottom() -
                   std::clamp(value, 0.0, 100.0) / 100.0 * plot.height();
        };

        QPainterPath path;
        bool have_previous = false;
        bool have_point = false;
        QPointF last_point;
        for (const auto& sample : samples) {
            if (!drawable(sample)) {
                have_previous = false; // 缺口：断开，不跨缺口连线
                continue;
            }
            const QPointF point(x_of(sample.wall_clock_ns),
                                y_of_value(value_of(sample)));
            if (have_previous)
                path.lineTo(point);
            else
                path.moveTo(point);
            have_previous = true;
            last_point = point;
            have_point = true;
        }

        QPen line_pen(palette().color(QPalette::Highlight), 2.0);
        painter.setPen(line_pen);
        painter.drawPath(path);
        if (have_point) {
            painter.setBrush(palette().color(QPalette::Highlight));
            painter.drawEllipse(last_point, 3.0, 3.0);
        }
    }

private:
    static double y_of(double value, const QRectF& plot) {
        return plot.bottom() - std::clamp(value, 0.0, 100.0) / 100.0 * plot.height();
    }

    bool drawable(const SystemSample& sample) const {
        // CPU 曲线要求该帧 CPU 时间差分成功；内存曲线只要求该帧内存 API 成功。
        // 两者互不连累：CPU 为 Gap/待采样时，内存点仍应保留在曲线上（反之亦然）。
        if (metric_ == Metric::CpuPercent) {
            return sample.status == SystemSampleStatus::Ok &&
                   sample.cpu_percent.has_value();
        }
        return sample.memory_available && sample.total_memory_bytes > 0;
    }

    double value_of(const SystemSample& sample) const {
        if (metric_ == Metric::CpuPercent) return sample.cpu_percent.value_or(0.0);
        return 100.0 * static_cast<double>(sample.used_memory_bytes) /
               static_cast<double>(sample.total_memory_bytes);
    }

    Metric metric_;
    const std::deque<SystemSample>* samples_ = nullptr;
    int segment_count_ = 0;
};

PerformancePage::PerformancePage(QWidget* parent) : QWidget(parent) {
    setObjectName(QStringLiteral("performance_page"));

    // 用滚动区包住内容：窗口被缩小时页面可滚动，而不会把主窗口最小高度
    // 撑高到无法恢复到既有设置档位（1000x700 / 700x520）。
    auto* outer = new QVBoxLayout(this);
    outer->setContentsMargins(0, 0, 0, 0);
    auto* scroll = new QScrollArea(this);
    scroll->setObjectName(QStringLiteral("performance_scroll"));
    scroll->setWidgetResizable(true);
    scroll->setFrameShape(QFrame::NoFrame);
    auto* content = new QWidget(scroll);
    content->setObjectName(QStringLiteral("performance_content"));

    auto* layout = new QVBoxLayout(content);
    layout->setContentsMargins(16, 16, 16, 16);
    layout->setSpacing(10);

    auto* heading = new QLabel(QStringLiteral("性能"), this);
    QFont heading_font = heading->font();
    heading_font.setPointSizeF(heading_font.pointSizeF() + 3.0);
    heading_font.setBold(true);
    heading->setFont(heading_font);
    layout->addWidget(heading);

    // ---- 整机 CPU ----
    auto* cpu_box = new QGroupBox(QStringLiteral("整机 CPU"), this);
    auto* cpu_layout = new QVBoxLayout(cpu_box);
    cpu_value_label_ = new QLabel(QStringLiteral("待采样"), cpu_box);
    cpu_value_label_->setObjectName(QStringLiteral("cpu_value_label"));
    QFont value_font = cpu_value_label_->font();
    value_font.setPointSizeF(value_font.pointSizeF() + 14.0);
    value_font.setBold(true);
    cpu_value_label_->setFont(value_font);
    cpu_layout->addWidget(cpu_value_label_);

    cpu_state_label_ = new QLabel(QStringLiteral("等待首次采样…"), cpu_box);
    cpu_state_label_->setObjectName(QStringLiteral("cpu_state_label"));
    cpu_layout->addWidget(cpu_state_label_);

    cpu_chart_ = new SystemHistoryChart(SystemHistoryChart::Metric::CpuPercent, cpu_box);
    cpu_chart_->setObjectName(QStringLiteral("cpu_chart"));
    cpu_layout->addWidget(cpu_chart_);

    auto* cpu_note = new QLabel(
        QStringLiteral("口径：整机 GetSystemTimes 累计时间差（idle/kernel/user，"
                       "所有逻辑处理器合计）；0.0% 表示有效空闲。"),
        cpu_box);
    cpu_note->setWordWrap(true);
    cpu_layout->addWidget(cpu_note);
    layout->addWidget(cpu_box);

    // ---- 物理内存 ----
    auto* memory_box = new QGroupBox(QStringLiteral("物理内存"), this);
    auto* memory_layout = new QVBoxLayout(memory_box);
    memory_used_label_ = new QLabel(QStringLiteral("已用 — / —"), memory_box);
    memory_used_label_->setObjectName(QStringLiteral("memory_used_label"));
    QFont memory_font = memory_used_label_->font();
    memory_font.setPointSizeF(memory_font.pointSizeF() + 6.0);
    memory_font.setBold(true);
    memory_used_label_->setFont(memory_font);
    memory_layout->addWidget(memory_used_label_);

    memory_percent_label_ = new QLabel(QStringLiteral("使用率 —"), memory_box);
    memory_percent_label_->setObjectName(QStringLiteral("memory_percent_label"));
    memory_layout->addWidget(memory_percent_label_);

    memory_available_label_ = new QLabel(QStringLiteral("可用 —"), memory_box);
    memory_available_label_->setObjectName(QStringLiteral("memory_available_label"));
    memory_layout->addWidget(memory_available_label_);

    memory_chart_ = new SystemHistoryChart(SystemHistoryChart::Metric::MemoryPercent,
                                           memory_box);
    memory_chart_->setObjectName(QStringLiteral("memory_chart"));
    memory_layout->addWidget(memory_chart_);

    auto* memory_note = new QLabel(
        QStringLiteral("口径：GlobalMemoryStatusEx 的 ullTotalPhys / ullAvailPhys；"
                       "已用 = 总量 − 可用。按 1024 进制显示 GiB/MiB，"
                       "非工作集、非提交量。"),
        memory_box);
    memory_note->setWordWrap(true);
    memory_layout->addWidget(memory_note);
    layout->addWidget(memory_box);

    auto* history_note = new QLabel(
        QStringLiteral("历史窗口：最近 5 分钟（最多 600 个样本，超期/超限淘汰）；"
                       "暂停、读取失败等缺口处曲线断开，不跨缺口连线。"),
        this);
    history_note->setObjectName(QStringLiteral("performance_history_note"));
    history_note->setWordWrap(true);
    layout->addWidget(history_note);

    error_label_ = new QLabel(this);
    error_label_->setObjectName(QStringLiteral("performance_error_label"));
    error_label_->setWordWrap(true);
    error_label_->setStyleSheet(QStringLiteral("color: #b00020;"));
    error_label_->setVisible(false);
    layout->addWidget(error_label_);

    layout->addStretch(1);

    scroll->setWidget(content);
    outer->addWidget(scroll);
}

void PerformancePage::set_history(const std::deque<SystemSample>& history) {
    history_ = history;
    const SystemSample* last = history_.empty() ? nullptr : &history_.back();

    if (last == nullptr) {
        cpu_value_label_->setText(QStringLiteral("待采样"));
        cpu_state_label_->setText(QStringLiteral("等待首次采样…"));
        memory_used_label_->setText(QStringLiteral("已用 — / —"));
        memory_percent_label_->setText(QStringLiteral("使用率 —"));
        memory_available_label_->setText(QStringLiteral("可用 —"));
        error_label_->clear();
        error_label_->setVisible(false);
    } else {
        if (last->status == SystemSampleStatus::Ok && last->cpu_percent) {
            cpu_value_label_->setText(
                QString::fromStdString(format_percent(*last->cpu_percent)));
            cpu_state_label_->setText(
                QStringLiteral("整机 · 所有逻辑处理器合计（累计时间差）"));
        } else if (last->status == SystemSampleStatus::Gap) {
            // 错误不显示为 0：明确「不可用」，原因在错误区。
            cpu_value_label_->setText(QStringLiteral("不可用"));
            cpu_state_label_->setText(
                QStringLiteral("整机 CPU 时间读取失败，等待下次采样恢复"));
        } else {
            cpu_value_label_->setText(QStringLiteral("待采样"));
            cpu_state_label_->setText(QString::fromStdString(
                last->detail.empty() ? "等待下一次采样形成时间差" : last->detail));
        }

        if (last->memory_available) {
            const std::string used = format_bytes(last->used_memory_bytes);
            const std::string total = format_bytes(last->total_memory_bytes);
            const std::string available = format_bytes(last->available_memory_bytes);
            memory_used_label_->setText(
                QStringLiteral("已用 %1 / %2")
                    .arg(QString::fromStdString(used),
                         QString::fromStdString(total)));
            const double percent =
                last->total_memory_bytes == 0
                    ? 0.0
                    : 100.0 * static_cast<double>(last->used_memory_bytes) /
                          static_cast<double>(last->total_memory_bytes);
            memory_percent_label_->setText(
                QStringLiteral("使用率 %1")
                    .arg(QString::fromStdString(format_percent(percent))));
            memory_available_label_->setText(
                QStringLiteral("可用 %1").arg(QString::fromStdString(available)));
        } else {
            // 内存读取失败：不显示 0，明确不可用。
            memory_used_label_->setText(QStringLiteral("已用 不可用"));
            memory_percent_label_->setText(QStringLiteral("使用率 不可用"));
            memory_available_label_->setText(QStringLiteral("可用 不可用"));
        }

        const bool failure =
            last->status == SystemSampleStatus::Gap ||
            (!last->memory_available && !last->detail.empty());
        error_label_->setText(QString::fromStdString(last->detail));
        error_label_->setVisible(failure && !last->detail.empty());
    }

    cpu_chart_->set_samples(&history_);
    memory_chart_->set_samples(&history_);
}

int PerformancePage::cpu_curve_segments() const {
    return cpu_chart_->segment_count();
}

int PerformancePage::memory_curve_segments() const {
    return memory_chart_->segment_count();
}

} // namespace tmog
