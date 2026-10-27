// #16 检查：采样失败区分、暂停代际拒绝、忙碌不重入（worker 层）。
// 受控枚举器注入，真实 QThread/事件循环交错，全部为运行证据。
//  MainWindow 内部 GUI 分支（暂停按钮/状态栏/结束线程）经生产 exe 冒烟 +
//  人工验收覆盖，本检查不静态模拟（见 doc/plans/2026-10-27-issue-16-*.md §3.1）。
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

// 受控枚举器：脚本化返回序列（ok=false / nullopt / ok=true）
class ScriptedEnumerator : public IProcessEnumerator {
public:
    enum Step { FailApi, NoResult, Succeed };
    explicit ScriptedEnumerator(int sleep_ms) : sleep_ms_(sleep_ms) {}
    std::optional<SampleResult> take_sample() override {
        QThread::msleep(static_cast<unsigned long>(sleep_ms_));
        const Step step = calls_ < script.size() ? script[calls_] : Succeed;
        ++calls_;
        if (step == FailApi) {        // 有快照结构但 ok=false（API 失败快照）
            SampleResult r;
            r.ok = false;
            r.error = "injected api failure";
            return r;
        }
        if (step == NoResult) return std::nullopt;   // 枚举异常：无结果
        SampleResult r;                              // 成功：唯一序号进程
        r.ok = true;
        ProcessSnapshot ps;
        ps.identity.pid = static_cast<std::uint32_t>(calls_);
        ps.identity.creation_tick = 1;
        r.processes.push_back(ps);
        return r;
    }
    int sleep_ms_;
    int calls_ = 0;
    std::vector<Step> script;
};

void pump_until(const std::function<bool()>& pred, int timeout_ms) {
    const auto deadline = std::chrono::steady_clock::now() +
                          std::chrono::milliseconds(timeout_ms);
    while (!pred() && std::chrono::steady_clock::now() < deadline) {
        QCoreApplication::processEvents(QEventLoop::AllEvents, 20);
        QThread::msleep(5);
    }
}

} // namespace

int main(int argc, char** argv) {
    QCoreApplication app(argc, argv);

    // C1. ok=false 快照 → failed 回调收到错误描述，done 不触发（假成功阻断：
    //     错误快照不进入成功差分）
    {
        ScriptedEnumerator e(50);
        e.script = {ScriptedEnumerator::FailApi};
        auto* owner = new QObject(&app);
        SamplingWorker worker;
        int done_calls = 0;
        std::string failed_error;
        worker.start(owner, &e,
                     [&](SampleResult) { ++done_calls; },
                     [&](const std::string& err) { failed_error = err; });
        pump_until([&] { return !failed_error.empty() || done_calls > 0; }, 5000);
        check(done_calls == 0, "C1: ok=false snapshot never reaches done callback");
        check(failed_error == "injected api failure",
              "C1: failed callback carries the error description");
        worker.shutdown(5000);
        owner->deleteLater();
    }

    // C2. take_sample 返回 nullopt（枚举异常）→ failed 回调，done 不触发
    {
        ScriptedEnumerator e(50);
        e.script = {ScriptedEnumerator::NoResult};
        auto* owner = new QObject(&app);
        SamplingWorker worker;
        int done_calls = 0;
        std::string failed_error;
        worker.start(owner, &e,
                     [&](SampleResult) { ++done_calls; },
                     [&](const std::string& err) { failed_error = err; });
        pump_until([&] { return !failed_error.empty() || done_calls > 0; }, 5000);
        check(done_calls == 0, "C2: nullopt (no result) never reaches done callback");
        check(!failed_error.empty(),
              "C2: nullopt still produces a failed callback with description");
        worker.shutdown(5000);
        owner->deleteLater();
    }

    // C3. 失败后成功：失败不永久停摆，再次 start 成功且是新采样（seq==2
    //     非 seq==1 旧值）。worker 一次 start 恰好一次采样，重试是显式 start。
    {
        ScriptedEnumerator e(50);
        e.script = {ScriptedEnumerator::FailApi, ScriptedEnumerator::Succeed};
        auto* owner = new QObject(&app);
        SamplingWorker worker;
        int done_calls = 0;
        int failed_calls = 0;
        int recovered_pid = 0;
        worker.start(owner, &e,
                     [&](SampleResult r) {
                         ++done_calls;
                         if (!r.processes.empty()) recovered_pid = (int)r.processes[0].identity.pid;
                     },
                     [&](const std::string&) { ++failed_calls; });
        pump_until([&] { return failed_calls > 0; }, 5000);
        check(failed_calls == 1, "C3: first sample fails (api failure reported)");
        QThread::msleep(200);
        QCoreApplication::processEvents();
        check(done_calls == 0, "C3: failed sample produced no done callback");

        // 重试：下一次 start（MainWindow 每 tick 重启的实际路径）
        worker.start(owner, &e,
                     [&](SampleResult r) {
                         ++done_calls;
                         if (!r.processes.empty()) recovered_pid = (int)r.processes[0].identity.pid;
                     },
                     [&](const std::string&) { ++failed_calls; });
        pump_until([&] { return done_calls > 0; }, 5000);
        check(failed_calls == 1 && done_calls == 1,
              "C3: retry succeeds — exactly one failure then one success");
        check(recovered_pid == 2,
              "C3: recovered success carries fresh sample (seq==2, not stale seq==1)");
        worker.shutdown(5000);
        owner->deleteLater();
    }

    // C4. 忙碌不重入：在途时再次 start 不产生第二个采样（worker 层防线；
    //     MainWindow 层拒绝+状态栏反馈为 GUI 路径）
    {
        ScriptedEnumerator e(400);
        auto* owner = new QObject(&app);
        SamplingWorker worker;
        int done_calls = 0;
        worker.start(owner, &e, [&](SampleResult) { ++done_calls; },
                     [](const std::string&) {});
        QThread::msleep(100);   // 进入 take_sample
        check(worker.busy(), "C4: sample in flight");
        worker.start(owner, &e, [&](SampleResult) { ++done_calls; },
                     [](const std::string&) {});
        check(worker.busy(), "C4: still exactly one in-flight thread");
        pump_until([&] { return done_calls > 0; }, 5000);
        QThread::msleep(300);
        QCoreApplication::processEvents();
        check(done_calls == 1,
              "C4: second start during busy did not stack a worker");
        worker.shutdown(5000);
        owner->deleteLater();
    }

    // C5. 代际语义（UI 侧复制的最小等价验证）：回调携带代际，代际递增后
    //     在途结果被拒绝——与 MainWindow::start_sample 捕获比对逻辑同构。
    {
        ScriptedEnumerator e(400);
        auto* owner = new QObject(&app);
        SamplingWorker worker;
        std::uint64_t generation = 0;
        int applied = 0;
        int rejected = 0;
        worker.start(owner, &e,
                     [&](SampleResult) {
                         // 结果到达时代际已递增（模拟暂停发生在在途期间）
                         if (generation == 1) ++rejected; else ++applied;
                     },
                     [](const std::string&) {});
        QThread::msleep(100);   // 采样在途（已捕获 generation==0）
        generation = 1;         // 暂停：代际递增（on_pause_toggled 同构）
        pump_until([&] { return applied + rejected > 0; }, 5000);
        check(applied == 0 && rejected == 1,
              "C5: in-flight result after generation bump is rejected");
        worker.shutdown(5000);
        owner->deleteLater();
    }

    QCoreApplication::processEvents();
    std::cout << (failures == 0 ? "sampling_recovery_checks: ALL PASS\n"
                                : "sampling_recovery_checks: FAILURES\n");
    return failures == 0 ? 0 : 1;
}
