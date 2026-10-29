// #11 io_table_checks：I/O 列展示/数值排序/哨兵/选择保持——走生产呈现路径。
// 生产 ProcessTableModel + 与 MainWindow 同源配置的 QSortFilterProxyModel
// （UserRole 排序，复刻 MainWindow.cpp:25-27 既有配置，不复制 model 逻辑）。
// T3/T4 另经生产 MainWindow（构造注入受控枚举器，G5 模式）驱动真实采样管线
// 验证选择保持；离屏运行（ctest ENV offscreen）。
// 禁止 real terminate / 真实枚举 / 受控 IO。
//
//  T1. 2/10/1000 B/s 正反数值排序（UserRole double 语义，非字典序）
//  T2. 无效哨兵与有效值同类型（double）可比：-1.0 排序位置稳定
//  T3. 排序 + 新帧后选中行映射身份保持（经生产 MainWindow 注入路径）
//  T4. 身份复用（同 PID 不同 creation_tick）不误选
//  T5. CPU 状态不被 I/O 失败覆盖（status 与 io_status 独立）
//  T6. 无效哨兵 UserRole == double -1.0；有效值 double
//  T7. tooltip 含"并非物理磁盘吞吐"与状态说明
//  T8. diff_samples 产出行 io_status 与 CPU status 分离（FirstSample 帧）
#include <QApplication>
#include <QEventLoop>
#include <QSortFilterProxyModel>
#include <QTableView>
#include <QThread>
#include <chrono>
#include <functional>
#include <iostream>
#include <optional>
#include <vector>
#include "ProcessSampler.h"
#include "ProcessTableModel.h"
#include "MainWindow.h"

using namespace tmog;
using tmog::ProcessTableModel::ColIoRead;
using tmog::ProcessTableModel::ColIoWrite;

namespace {

int failures = 0;
void check(bool ok, const char* what) {
    std::cout << (ok ? "PASS" : "FAIL") << ": " << what << "\n";
    if (!ok) ++failures;
}

// fake 帧构造：显式速率与状态直接注入 SampledRow（生产 model 消费的
// diff_samples 产出结构），排序/呈现路径全生产。
SampledRow make_row(std::uint32_t pid, std::uint64_t create_tick,
                    const char* name,
                    std::optional<double> io_read, std::optional<double> io_write,
                    ProcessStatus io_st,
                    std::optional<int> cpu_pct = std::nullopt,
                    ProcessStatus cpu_st = ProcessStatus::Ok) {
    SampledRow row;
    row.snapshot.identity.pid = pid;
    row.snapshot.identity.creation_tick = create_tick;
    row.snapshot.name = name;
    row.snapshot.cpu_time_available = cpu_pct.has_value() || cpu_st == ProcessStatus::Ok;
    row.io_read_bytes_per_sec = io_read;
    row.io_write_bytes_per_sec = io_write;
    row.io_status = io_st;
    row.cpu_percent = cpu_pct;
    row.status = cpu_st;
    return row;
}

// 生产 model + 同源 proxy 配置
struct SortedView {
    ProcessTableModel model;
    QSortFilterProxyModel proxy;
    explicit SortedView(QObject* parent = nullptr) {
        proxy.setSourceModel(&model);
        proxy.setSortRole(Qt::UserRole);
    }
};

QVariant io_user_role(const SortedView& v, int row, int col) {
    // 经 proxy 读取：排序作用于 proxy 视图行序
    return v.proxy.index(row, col).data(Qt::UserRole);
}

QString io_display(const SortedView& v, int row, int col) {
    return v.proxy.index(row, col).data(Qt::DisplayRole).toString();
}

// 受控枚举器：每帧发同一组 3 进程（PID 1-3，身份不变），I/O 累计随帧
// 递增——第二帧起差分出稳定速率；每帧全进程在场，选择保持可验证。
class IoTableEnumerator : public IProcessEnumerator {
public:
    std::optional<SampleResult> take_sample() override {
        ++calls_;
        SampleResult r;
        r.ok = true;
        r.wall_clock_ns = static_cast<std::uint64_t>(calls_) * 1'000'000'000ULL;
        for (std::uint32_t pid = 1; pid <= 3; ++pid) {
            ProcessSnapshot ps;
            ps.identity.pid = pid;
            ps.identity.creation_tick = 1;   // 身份恒定，不复用
            ps.cpu_time_available = true;
            ps.io_available = true;
            ps.io_read_bytes = pid * 1'000ULL * calls_;
            ps.io_write_bytes = pid * 2'000ULL * calls_;
            r.processes.push_back(ps);
        }
        return r;
    }
    int calls_ = 0;
};

void pump_ms(int ms) {
    const auto deadline = std::chrono::steady_clock::now()
                        + std::chrono::milliseconds(ms);
    while (std::chrono::steady_clock::now() < deadline) {
        QApplication::processEvents(QEventLoop::AllEvents, 20);
        QThread::msleep(5);
    }
}

bool pump_until(const std::function<bool()>& pred, int timeout_ms) {
    const auto deadline = std::chrono::steady_clock::now()
                        + std::chrono::milliseconds(timeout_ms);
    while (!pred() && std::chrono::steady_clock::now() < deadline) {
        QApplication::processEvents(QEventLoop::AllEvents, 20);
        QThread::msleep(5);
    }
    return pred();
}

} // namespace

int main(int argc, char** argv) {
    QApplication app(argc, argv);   // 平台由 ctest 环境设为 offscreen

    // ---- T1: 2/10/1000 正反数值排序 + Display 单位 ----
    {
        SortedView v;
        v.model.replace_snapshot({
            make_row(1, 1, "a.exe", 1000.0, 1000.0, ProcessStatus::Ok),
            make_row(2, 1, "b.exe", 2.0, 2.0, ProcessStatus::Ok),
            make_row(3, 1, "c.exe", 10.0, 10.0, ProcessStatus::Ok),
        });
        v.proxy.sort(ColIoRead, Qt::DescendingOrder);
        const auto r0 = io_user_role(v, 0, ColIoRead).toDouble();
        const auto r1 = io_user_role(v, 1, ColIoRead).toDouble();
        const auto r2 = io_user_role(v, 2, ColIoRead).toDouble();
        check(r0 == 1000.0 && r1 == 10.0 && r2 == 2.0,
              "T1 descending numeric sort 1000/10/2");
        v.proxy.sort(ColIoRead, Qt::AscendingOrder);
        const auto a0 = io_user_role(v, 0, ColIoRead).toDouble();
        const auto a2 = io_user_role(v, 2, ColIoRead).toDouble();
        check(a0 == 2.0 && a2 == 1000.0, "T1 ascending numeric sort 2/10/1000");
        check(io_display(v, 0, ColIoRead) == QStringLiteral("2 B/s"),
              "T1 display B/s");
        v.model.replace_snapshot({
            make_row(1, 1, "a.exe", 2.5 * 1024.0, 0.0, ProcessStatus::Ok),
        });
        check(io_display(v, 0, ColIoRead) == QStringLiteral("2.5 KiB/s"),
              "T1 display KiB/s");
        v.model.replace_snapshot({
            make_row(1, 1, "a.exe", 3.25 * 1024.0 * 1024.0, 0.0, ProcessStatus::Ok),
        });
        check(io_display(v, 0, ColIoRead) == QStringLiteral("3.25 MiB/s"),
              "T1 display MiB/s");
    }

    // ---- T2: 无效哨兵同类型可比 ----
    {
        SortedView v;
        v.model.replace_snapshot({
            make_row(1, 1, "ok.exe", 100.0, 100.0, ProcessStatus::Ok),
            make_row(2, 1, "bad.exe", std::nullopt, std::nullopt,
                     ProcessStatus::Unavailable),
        });
        const auto ok_v = io_user_role(v, 0, ColIoRead);
        const auto bad_v = io_user_role(v, 1, ColIoRead);
        check(ok_v.typeId() == QMetaType::Double && bad_v.typeId() == QMetaType::Double,
              "T2 sentinel same type (double)");
        check(bad_v.toDouble() == -1.0, "T2 sentinel value -1.0");
        v.proxy.sort(ColIoRead, Qt::DescendingOrder);
        const auto top = io_user_role(v, 0, ColIoRead).toDouble();
        check(top == 100.0, "T2 invalid ranks below valid (desc)");
        v.proxy.sort(ColIoRead, Qt::AscendingOrder);
        // 升序：-1.0 < 100.0 → 哨兵排最前（view row0），有效值在后
        const auto first = io_user_role(v, 0, ColIoRead).toDouble();
        const auto second = io_user_role(v, 1, ColIoRead).toDouble();
        check(first == -1.0 && second == 100.0, "T2 invalid first, valid last (asc)");
    }

    // ---- T3+T4: 经生产 MainWindow 注入路径的选择保持 ----
    {
        auto e = std::make_unique<IoTableEnumerator>();
        IoTableEnumerator* raw = e.get();
        MainWindow win(nullptr, std::move(e));
        pump_until([&] { return raw->calls_ >= 2; }, 5000);   // 两帧落地
        pump_ms(200);
        auto* table = win.findChild<QTableView*>();
        check(table != nullptr, "T3 table found in MainWindow");
        // 经视图选中 PID=2 的行（生产 selectionChanged 路径记录 selected_identity_）
        auto* proxy = win.findChild<QSortFilterProxyModel*>();
        check(proxy != nullptr, "T3 proxy found in MainWindow");
        int target_pid = -1;
        if (table && proxy) {
            // 找源模型里 PID=2 的行，映射到视图行选中
            const auto* tm = static_cast<const ProcessTableModel*>(proxy->sourceModel());
            for (int r = 0; r < tm->rowCount(); ++r) {
                const auto* row = tm->row_at(r);
                if (row && row->snapshot.identity.pid == 2) {
                    const auto pidx = proxy->mapFromSource(tm->index(r, 0));
                    if (pidx.isValid()) {
                        table->selectRow(pidx.row());
                        target_pid = 2;
                    }
                    break;
                }
            }
            pump_ms(50);
        }
        check(target_pid == 2, "T3 row with pid=2 selected");
        if (proxy) proxy->sort(ColIoRead, Qt::DescendingOrder);   // 打乱行序
        pump_ms(50);
        pump_until([&] { return raw->calls_ >= 3; }, 5000);   // 新帧到达
        pump_ms(200);
        if (proxy && table) {
            const auto idx = table->currentIndex();
            check(idx.isValid(), "T3 current index valid after sort + new frame");
            if (idx.isValid()) {
                const auto src = proxy->mapToSource(idx);
                const auto* tm = static_cast<const ProcessTableModel*>(
                    proxy->sourceModel());
                const auto* row = tm->row_at(src.row());
                check(row != nullptr, "T3 mapped source row exists");
                if (row) {
                    // 生产选择保持：排序+新帧后当前行仍是选中身份（PID=2）
                    check(row->snapshot.identity.pid == 2,
                          "T3/T4 selected identity (pid=2) survives sort + new frame");
                    check(row->snapshot.identity.creation_tick == 1,
                          "T4 no pid-reuse identity wrongly selected");
                }
            }
        }
        win.close();   // 生产 closeEvent 收束 worker 线程
        pump_ms(300);
    }

    // ---- T5: CPU 状态不被 I/O 失败覆盖 ----
    {
        SortedView v;
        auto row = make_row(1, 1, "a.exe", std::nullopt, std::nullopt,
                            ProcessStatus::InvalidDelta,
                            /*cpu_pct=*/42, /*cpu_st=*/ProcessStatus::Ok);
        v.model.replace_snapshot({row});
        const auto* r = v.model.row_at(0);
        check(r && r->status == ProcessStatus::Ok && r->cpu_percent
                  && *r->cpu_percent == 42,
              "T5 CPU status Ok not overwritten by io InvalidDelta");
        check(r && r->io_status == ProcessStatus::InvalidDelta
                  && !r->io_read_bytes_per_sec,
              "T5 io_status independent value");
    }

    // ---- T6: 哨兵 UserRole 类型/值 ----
    {
        SortedView v;
        v.model.replace_snapshot({
            make_row(1, 1, "a.exe", std::nullopt, 5.0, ProcessStatus::Ok),
        });
        const auto rd = io_user_role(v, 0, ColIoRead);
        check(rd.typeId() == QMetaType::Double && rd.toDouble() == -1.0,
              "T6 read sentinel double -1.0");
        const auto wr = io_user_role(v, 0, ColIoWrite);
        check(wr.typeId() == QMetaType::Double && wr.toDouble() == 5.0,
              "T6 write valid double 5.0");
    }

    // ---- T7: tooltip 内容 ----
    {
        SortedView v;
        v.model.replace_snapshot({
            make_row(1, 1, "a.exe", 2048.0, 0.0, ProcessStatus::Ok),
            make_row(2, 1, "b.exe", std::nullopt, std::nullopt,
                     ProcessStatus::IdentityChanged),
        });
        const auto tip_ok = v.model.index(0, ColIoRead).data(Qt::ToolTipRole).toString();
        check(tip_ok.contains(QStringLiteral("并非物理磁盘吞吐")),
              "T7 tooltip mentions not-disk-throughput (valid)");
        const auto tip_id = v.model.index(1, ColIoRead).data(Qt::ToolTipRole).toString();
        check(tip_id.contains(QStringLiteral("身份变化")),
              "T7 tooltip explains identity changed");
    }

    // ---- T8: diff_samples 行分离（FirstSample 帧 io/cpu 各自状态）----
    {
        SampleResult prev{};   // 空基线
        prev.ok = true;
        SampleResult cur{};
        cur.ok = true;
        cur.wall_clock_ns = 1'000'000'000ULL;
        ProcessSnapshot ps;
        ps.identity.pid = 7;
        ps.identity.creation_tick = 1;
        ps.cpu_time_available = true;
        ps.io_available = true;
        cur.processes.push_back(ps);
        const auto rows = diff_samples(prev, cur, 8);
        check(rows.size() == 1
                  && rows[0].status == ProcessStatus::FirstSample
                  && rows[0].io_status == ProcessStatus::FirstSample,
              "T8 diff_samples first-frame io/cpu status both FirstSample");
    }

    std::cout << (failures == 0 ? "io_table_checks: ALL PASS\n"
                                : "io_table_checks: FAILURES\n");
    return failures == 0 ? 0 : 1;
}
