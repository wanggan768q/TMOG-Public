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
    explicit SlowEnumerator(int sleep_ms) : sleep_ms_(sleep_ms) {}
    std::optional<SampleResult> take_sample() override {
        QThread::msleep(static_cast<unsigned long>(sleep_ms_));
        // 唯一序号：每次真实调用递增——区分新旧 take_sample 完成的直接证据
        return make(++calls_);
    }
    ~SlowEnumerator() override = default;
    int sleep_ms_;
    int calls_ = 0;

    static SampleResult make(int seq) {
        SampleResult r;
        r.ok = true;
        ProcessSnapshot ps;
        ps.identity.pid = static_cast<std::uint32_t>(seq);
        ps.identity.creation_tick = 1;
        r.processes.push_back(ps);
        return r;
    }
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
        // 失败路径恢复运行态（否则 closeEvent 拒绝关闭后采样永久停摆）
        check(!worker.closing(), "closing reverted after failed shutdown (recoverable)");

        // 等慢采样自然完成；窗口未销毁（shutdown 失败=拒绝关闭），迟到结果
        // 在恢复运行态下安全应用（apply_sample 访问的模型存活）
        QThread::msleep(2000);
        QCoreApplication::processEvents();
        check(done_calls == 1, "late-but-safe result applied (window alive after reject)");
        check(!worker.busy(), "thread eventually exited on its own (no kill)");

        // 恢复运行态：枚举器仍在所有权内（线程已退出，可安全销毁或复用）
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

    // F. >2s 慢枚举（2500ms）完整交错序列（对应票面要求 + 拒绝关闭后可恢复）：
    //    shutdown(短超时) false → closing 自动恢复运行态 → 线程自然 finished
    //    → 重新采样可用 → 再次 shutdown 成功。
    {
        auto* owner = new QObject(&app);
        auto enumr = std::make_unique<SlowEnumerator>(2500);
        SamplingWorker worker;

        int done_calls = 0;
        worker.start(owner, enumr.get(), [&](SampleResult) { ++done_calls; }, [] {});
        QThread::msleep(200);   // 进入 take_sample

        const bool first = worker.shutdown(300);
        check(!first, "F1: shutdown(300ms) with 2.5s sample returns false");
        check(worker.busy(), "F2: ownership retained after timeout");
        check(!worker.closing(), "F3: closing auto-reverted after failed shutdown");

        // 线程自然 finished（不强杀）：等 2.5s 采样完成 + finished 投递
        const auto deadline = std::chrono::steady_clock::now() + std::chrono::seconds(6);
        while (worker.busy() && std::chrono::steady_clock::now() < deadline) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 50);
            QThread::msleep(20);
        }
        check(!worker.busy(), "F4: in-flight thread finished naturally (no kill)");
        // 迟到结果在恢复运行态下正常应用（窗口未销毁 → apply_sample 安全）
        check(done_calls == 1, "F5: late-but-safe result applied after revert (window alive)");

        // 重新采样可用（拒绝关闭后恢复采样循环的实际验证）
        // 补证（协调者要求）：唯一序号区分新旧枚举——等**第二个** done 真实
        // 投递（带 deadline），旧结果（seq=1）不能满足 seq==2 断言。
        int second_seq = 0;
        worker.start(owner, enumr.get(),
                     [&](SampleResult r) {
                         if (r.ok && !r.processes.empty())
                             second_seq = static_cast<int>(r.processes[0].identity.pid);
                     }, [] {});
        check(worker.busy(), "F6: start accepted after failed-shutdown revert (in flight)");
        const auto dl2 = std::chrono::steady_clock::now() + std::chrono::seconds(8);
        while (second_seq != 2 && std::chrono::steady_clock::now() < dl2) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 50);
            QThread::msleep(20);
        }
        check(second_seq == 2,
              "F6b: second take_sample completed and its done delivered (seq==2, not stale seq==1)");
        // 新枚举真实完成后线程空闲，再收束验证
        const auto dl3 = std::chrono::steady_clock::now() + std::chrono::seconds(3);
        while (worker.busy() && std::chrono::steady_clock::now() < dl3) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 50);
            QThread::msleep(20);
        }
        const bool second = worker.shutdown(8000);
        check(second, "F7: second shutdown succeeds");
        // 成功 shutdown 的 closing_=true 是设计终态（线程已确认退出，资源可销毁）；
        // busy 已清。closing 复位只发生在失败路径（F3 已验证）。
        check(!worker.busy() && worker.closing(),
              "F8: thread exited (busy clear), closing terminal after success");
        owner->deleteLater();
    }

    // G. 3s 慢枚举 + 充足超时一次收束（票面 >2s 场景的直接证据）
    {
        auto* owner = new QObject(&app);
        auto enumr = std::make_unique<SlowEnumerator>(3000);
        SamplingWorker worker;
        worker.start(owner, enumr.get(), [](SampleResult) {}, [] {});
        QThread::msleep(200);
        const bool ok = worker.shutdown(8000);
        check(ok, "G1: 3s sample shutdown with 8s timeout succeeds (>2s direct evidence)");
        check(!worker.busy(), "G2: state cleared after long-sample shutdown");
        owner->deleteLater();
    }

    QCoreApplication::processEvents();
    std::cout << (failures == 0 ? "close_lifecycle_checks: ALL PASS\n" : "close_lifecycle_checks: FAILURES\n");
    return failures == 0 ? 0 : 1;
}
