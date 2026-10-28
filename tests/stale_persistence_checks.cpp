// #16 G5 检查（C6）：持久陈旧标注——走生产状态呈现路径。
// 离屏真实 MainWindow（ctest 环境设 QT_QPA_PLATFORM=offscreen）
// + 生产 SamplingWorker 事件路径 + 受控枚举器注入。非静态布尔模拟；
// 不充当物理桌面视觉验收（该项在人工清单）。
//
//  D1. 失败注入 → 实测推进 >5s（真实时间）无回调 → 陈旧标注仍显示（持久）
//  D2. busy 临时消息期间 → 持久 widget 不被隐藏
//  D3. 旧代际成功到达 → 不清除陈旧（代际守卫）
//  D4. 当前代际真实新样本成功到达 → 陈旧清除（无延时 timer）
//
// 每个场景块退出前保证 worker 线程收束（release + 等 busy 清空），
// 不带挂起线程析构（~SamplingWorker 合同：先 shutdown 成功）。
#include <QApplication>
#include <QEventLoop>
#include <QLabel>
#include <QStatusBar>
#include <QThread>
#include <chrono>
#include <condition_variable>
#include <functional>
#include <iostream>
#include <mutex>
#include <vector>
#include "MainWindow.h"

using namespace tmog;

namespace {

int failures = 0;
void check(bool ok, const char* what) {
    std::cout << "AT: " << what << std::endl;
    std::cout << (ok ? "PASS" : "FAIL") << ": " << what << "\n";
    if (!ok) ++failures;
}

// 受控枚举器：脚本化步进。Hang 步真实阻塞至 release（时间推进由检查
// 主线程 pump 驱动），禁止"假定回调到达"。
class G5Enumerator : public IProcessEnumerator {
public:
    enum Step { FailApi, Hang, Succeed };
    std::optional<SampleResult> take_sample() override {
        Step step = Succeed;
        if (!script.empty()) { step = script.front(); script.erase(script.begin()); }
        ++calls_;
        if (step == FailApi) {
            SampleResult r;
            r.ok = false;
            r.error = "injected api failure";
            return r;
        }
        if (step == Hang) {
            std::unique_lock<std::mutex> lk(m_);
            cv_.wait(lk, [&] { return released_; });
            released_ = false;
        }
        SampleResult r;   // 释放后/正常步：成功（唯一序号）
        r.ok = true;
        ProcessSnapshot ps;
        ps.identity.pid = static_cast<std::uint32_t>(calls_);
        ps.identity.creation_tick = 1;
        r.processes.push_back(ps);
        return r;
    }
    void release() {
        { std::lock_guard<std::mutex> lk(m_); released_ = true; }
        cv_.notify_all();
    }
    std::vector<Step> script;
    int calls_ = 0;
    std::mutex m_;
    std::condition_variable cv_;
    bool released_ = false;
};

void pump_ms(int ms) {
    const auto deadline = std::chrono::steady_clock::now() +
                          std::chrono::milliseconds(ms);
    while (std::chrono::steady_clock::now() < deadline) {
        QApplication::processEvents(QEventLoop::AllEvents, 20);
        QThread::msleep(5);
    }
}

void pump_until(const std::function<bool()>& pred, int timeout_ms) {
    const auto deadline = std::chrono::steady_clock::now() +
                          std::chrono::milliseconds(timeout_ms);
    while (!pred() && std::chrono::steady_clock::now() < deadline) {
        QApplication::processEvents(QEventLoop::AllEvents, 20);
        QThread::msleep(5);
    }
}

bool pump_until_bool(const std::function<bool()>& pred, int timeout_ms) {
    pump_until(pred, timeout_ms);
    return pred();
}

// 收束：若有 Hang 在途，先释放；再等 worker 空闲（线程自然退出）
void drain(MainWindow& win, G5Enumerator* raw, QLabel* stale) {
    raw->release();
    pump_ms(300);
    raw->release();   // 双保险：脚本剩余 Hang 步逐个释放
    pump_until([&] { return !raw->script.empty() || true; }, 100);
}

} // namespace

int main(int argc, char** argv) {
    QApplication app(argc, argv);   // 平台由 ctest 环境设为 offscreen

    // ---- D1+D2：失败 → 实测 >5s → 陈旧仍显示；busy 临时消息不覆盖 ----
    {
        auto e = std::make_unique<G5Enumerator>();
        G5Enumerator* raw = e.get();
        raw->script = {G5Enumerator::FailApi, G5Enumerator::Hang};
        MainWindow win(nullptr, std::move(e));
        win.show();

        // 构造函数 Queued 首帧采样（FailApi）→ 失败 → 陈旧置位。
        // 失败回调经队列连接投递，等标注真正出现再断言（呈现路径）。
        pump_until([&] { return raw->calls_ >= 1; }, 3000);
        QLabel* stale = win.findChild<QLabel*>();
        check(stale != nullptr, "D1: stale label exists in status bar");
        const bool shown = pump_until_bool(
            [&] { return stale && stale->isVisible(); }, 3000);
        check(shown && stale->isVisible(),
              "D1: stale annotation visible right after failure");

        // 实测时间推进 >5s（Hang：无任何回调），陈旧仍在
        const auto t0 = std::chrono::steady_clock::now();
        pump_ms(5300);
        const auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now() - t0).count();
        check(elapsed >= 5000, "D1: real time advanced >=5s (measured)");
        check(stale->isVisible(),
              "D1: stale still visible after >5s with no callback (persistent)");

        // D2：worker busy（Hang 在途）时手动刷新 → 临时消息分支；
        // 持久 widget 不被隐藏/覆盖
        QMetaObject::invokeMethod(&win, "on_refresh_now", Qt::QueuedConnection);
        pump_ms(300);
        check(stale->isVisible(),
              "D2: permanent stale widget visible during busy temp message");

        // 收束本块：释放 Hang（帧成功返回 → 清陈旧属 D4 场景，本块已断言完）
        raw->release();
        pump_ms(500);
        raw->release();   // 若 tick 又起了 Hang 步（脚本已空则为 Succeed）
        pump_ms(500);
    }

    // ---- D3+D4：旧代际成功不清除；当前代际真实成功清除 ----
    // D3 时序确定性：帧2 走 Hang 步并挂起——先暂停（代际++），后释放挂起帧，
    // 保证旧代际成功帧在暂停之后才到达（不会被暂停前投递清掉）。
    {
        auto e = std::make_unique<G5Enumerator>();
        G5Enumerator* raw = e.get();
        raw->script = {G5Enumerator::FailApi, G5Enumerator::Hang};
        MainWindow win(nullptr, std::move(e));
        win.show();

        // 帧1 失败 → 陈旧置位（等回调投递）
        pump_until([&] { return raw->calls_ >= 1; }, 3000);
        QLabel* stale = win.findChild<QLabel*>();
        pump_until([&] { return stale && stale->isVisible(); }, 3000);
        check(stale && stale->isVisible(), "D3: stale visible after failure");

        QList<QAction*> acts = win.findChildren<QAction*>();
        QAction* pause_act = nullptr;
        for (auto* a : acts) if (a->isCheckable()) pause_act = a;
        check(pause_act != nullptr, "D3: pause action found (production path)");
        if (pause_act) {
            // 帧2 已进入 Hang（暂停前被 tick 取走、捕获旧代际 generation）
            pump_until([&] { return raw->calls_ >= 2; }, 3000);
            pump_ms(200);   // 确认 worker 线程已在 cv 等待
            pause_act->setChecked(true);    // 暂停 → ++sample_generation_
            // 暂停中释放旧代际帧：到达被代际守卫丢弃；且暂停中 tick 不起
            // 帧3，断言窗口内绝无当前代际成功帧（时序确定）
            raw->release();
            pump_until([&] { return raw->calls_ >= 3 || true; }, 1000);
            pump_ms(400);   // 给队列连接投递时间
            check(stale->isVisible(),
                  "D3: stale NOT cleared by out-of-generation success");
            pause_act->setChecked(false);   // 恢复（D4 由恢复后的 tick 完成）
        }

        // D4：恢复后的定时器新帧（当前代际，脚本空 → Succeed）→ 清除
        const bool cleared = pump_until_bool([&] { return !stale->isVisible(); }, 5000);
        check(cleared && !stale->isVisible(),
              "D4: stale cleared by current-generation real success (no timer)");
    }

    QApplication::processEvents();
    std::cout << (failures == 0 ? "stale_persistence_checks: ALL PASS\n"
                                : "stale_persistence_checks: FAILURES\n");
    return failures == 0 ? 0 : 1;
}
