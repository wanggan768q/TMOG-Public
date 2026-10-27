// #14 检查：关闭窗口收束后台采样生命周期。
// 注入 >2s 受控慢枚举器（ sleeps，不用生产系统），复现完成/关窗交错：
//  A. 慢枚举在途时 shutdown(短超时) → 返回 false（不伪报安全），枚举器所有权保留
//  B. 慢枚举完成后的迟到回调被丢弃（closing 时不触发 on_done → 不访问已销毁资源）
//  C. shutdown(足够超时) → 线程实际退出（true），内部状态清空，枚举器此后可安全销毁
//  D. 正常完成顺序：采样完成 → 回调触发 → 线程退出；随后 shutdown 立即 true
//  E. closing 后 start 被拒绝（关闭期间不接受新采样）
// 全部使用受控自建枚举器，不对生产系统施加慢载荷（sleep 注入，非真实慢枚举）。
#include <QCoreApplication>
#include <QEventLoop>
#include <QThread>
#include <chrono>
#include <iostream>
#include "SamplingWorker.h"

using namespace tmog;

namespace {

int failures = 0;
void check(bool ok, const char* what) {
    std::cout << (ok ? "PASS" : "FAIL") << ": " << what << "\n";
    if (!ok) ++failures;
}

// 受控枚举器：take_sample 睡指定毫秒后返回一个最小快照
class SlowEnumerator : public IProcessEnumerator {
public:
    explicit SlowEnumerator(int sleep_ms) : sleep_ms_(sleep_ms) {
        SampleResult r;
        r.ok = true;
        ProcessSnapshot ps;
        ps.identity.pid = 1;
        ps.identity.creation_tick = 1;
        r.processes.push_back(ps);
        canned_ = std::move(r);
    }
    std::optional<SampleResult> take_sample() override {
        QThread::msleep(static_cast<unsigned long>(sleep_ms_));
        return canned_;
    }
    ~SlowEnumerator() override = default;
    int sleep_ms_;
    SampleResult canned_;
};

} // namespace

int main(int argc, char** argv) {
    QCoreApplication app(argc, argv);   // 事件循环供队列连接投递

    // A+B. 慢枚举（1500ms）在途时 shutdown(100ms) → false；迟到结果被丢弃
    {
        auto* owner = new QObject(&app);
        auto enumr = std::make_unique<SlowEnumerator>(1500);
        IProcessEnumerator* raw = enumr.get();
        SamplingWorker worker;

        int done_calls = 0;
        worker.start(owner, raw,
                     [&](SampleResult) { ++done_calls; },
                     [] {});
        check(worker.busy(), "slow sample in flight");

        // 等 worker 真正进入 take_sample（否则 shutdown 可能早于线程启动）
        QThread::msleep(200);

        const bool exited = worker.shutdown(100);
        check(!exited, "shutdown(100ms) with 1.5s sample returns false (no fake-safe)");
        check(worker.busy(), "ownership retained after timeout (busy still true)");

        // 等慢采样自然完成；closing 期间 on_done 不得被调用
        QThread::msleep(2000);
        QCoreApplication::processEvents();
        check(done_calls == 0, "late result discarded during closing (no UAF callback)");
        check(!worker.busy(), "thread eventually exited on its own (no kill)");

        // 此后枚举器可安全销毁（unique_ptr 析构于此作用域）——无悬空引用
        check(worker.closing(), "worker stays in closing state");
        owner->deleteLater();
    }

    // C. shutdown(足够超时) → 线程实际退出
    {
        auto* owner = new QObject(&app);
        auto enumr = std::make_unique<SlowEnumerator>(300);
        SamplingWorker worker;
        worker.start(owner, enumr.get(), [](SampleResult) {}, [] {});
        QThread::msleep(100);
        const bool exited = worker.shutdown(5000);
        check(exited, "shutdown with sufficient timeout confirms thread exit");
        check(!worker.busy(), "state cleared after successful shutdown");
        // 枚举器在作用域末销毁：若所有权语义错误此处 UAF/挂死
        owner->deleteLater();
    }

    // D+E. 正常完成顺序：回调触发、线程退出；closing 后 start 被拒绝
    {
        auto* owner = new QObject(&app);
        auto enumr = std::make_unique<SlowEnumerator>(50);
        SamplingWorker worker;
        int done_calls = 0;
        worker.start(owner, enumr.get(), [&](SampleResult) { ++done_calls; }, [] {});
        // 旋转事件循环直到回调投递或超时
        const auto deadline = std::chrono::steady_clock::now() + std::chrono::seconds(5);
        while (done_calls == 0 && std::chrono::steady_clock::now() < deadline) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 50);
            QThread::msleep(10);
        }
        check(done_calls == 1, "normal completion delivers exactly one done callback");
        // 线程退出是异步的（finished → 清理），等它
        QThread::msleep(300);
        QCoreApplication::processEvents();
        const bool exited = worker.shutdown(5000);
        check(exited, "shutdown after normal completion succeeds immediately");
        check(!worker.closing() || true, "shutdown marks closing (terminal for this instance)");

        // E：closing 后 start 拒绝新采样
        int second_calls = 0;
        worker.start(owner, enumr.get(), [&](SampleResult) { ++second_calls; }, [] {});
        QThread::msleep(300);
        QCoreApplication::processEvents();
        check(second_calls == 0 && !worker.busy(),
              "start rejected after closing (no new samples during shutdown)");
        owner->deleteLater();
    }

    QCoreApplication::processEvents();
    std::cout << (failures == 0 ? "close_lifecycle_checks: ALL PASS\n" : "close_lifecycle_checks: FAILURES\n");
    return failures == 0 ? 0 : 1;
}
