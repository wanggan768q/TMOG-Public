#include "SamplingWorker.h"
#include <QObject>
#include <utility>

namespace tmog {

// worker 桥：在采样线程执行 take_sample，结果信号回 owner 线程。
// enumerator 裸指针：所有权在 MainWindow；shutdown 保证线程退出后才析构。
class SamplingWorker::Bridge : public QObject {
    Q_OBJECT
public:
    IProcessEnumerator* enumerator = nullptr;
public slots:
    void run() {
        auto result = enumerator->take_sample();
        // #16：结果存在与成功标志分别检查——ok=false 的 API 失败快照
        // 不再被当成功投递（不进入成功差分、不污染基线）。
        if (result && result->ok)
            emit done(std::move(*result));
        else
            emit failed(result ? std::move(result->error)
                               : std::string("take_sample returned no result"));
    }
signals:
    void done(SampleResult result);
    void failed(const std::string& error);
};

SamplingWorker::~SamplingWorker() {
    // 防御：未 shutdown 就析构时尽力收束（正常路径由调用方先 shutdown）
    if (in_flight_)
        shutdown(5000);
}

void SamplingWorker::start(QObject* owner, IProcessEnumerator* enumerator,
                           DoneFn on_done, FailedFn on_failed) {
    if (in_flight_ || closing_) return;   // 至多一个在途；关闭中不接受新采样
    auto* bridge = new Bridge();
    bridge->enumerator = enumerator;
    auto* thread = new QThread(/*无 parent：生命周期由本类显式管理*/);
    in_flight_ = thread;

    // 结果跨线程 → 队列连接回 owner 线程；closing_ 时回调直接丢弃，
    // 队列迟到回调不访问已销毁资源（owner 保证连接上下文存活到此处执行）。
    QObject::connect(bridge, &Bridge::done, owner,
            [this, on_done = std::move(on_done)](SampleResult result) {
                if (closing_) return;   // 关闭期间迟到结果：丢弃
                on_done(std::move(result));
            },
            Qt::QueuedConnection);
    QObject::connect(bridge, &Bridge::failed, owner,
            [this, on_failed = std::move(on_failed)](const std::string& error) {
                if (closing_) return;
                on_failed(error);
            },
            Qt::QueuedConnection);

    bridge->moveToThread(thread);
    QObject::connect(thread, &QThread::started, bridge, &Bridge::run);
    QObject::connect(bridge, &Bridge::done, thread, &QThread::quit);
    QObject::connect(bridge, &Bridge::failed, thread, &QThread::quit);
    QObject::connect(thread, &QThread::finished, owner, [this, thread]() {
        // 线程实际退出：清理标识并释放线程对象（在本对象所在线程执行）
        if (in_flight_ == thread) in_flight_ = nullptr;
        thread->deleteLater();
    });
    thread->start();
}

bool SamplingWorker::shutdown(int timeout_ms) {
    closing_ = true;
    if (!in_flight_) return true;   // 无在途：立即安全
    QThread* thread = in_flight_;
    thread->quit();                 // 退出事件循环；run() 中的 take_sample 完成后
                                    // done/failed → quit，或空转退出
    const bool exited = thread->wait(timeout_ms);
    // 不强杀。未退出时保持所有权：in_flight_ 不清空，枚举器不可销毁（调用方据此拒绝关闭）。
    // 成功路径：wait 已确认线程终止；finished 的队列清理回调（receiver=owner）此刻
    // 尚未投递，因此这里直接清标识——finished 回调里的 in_flight_==thread 守卫防重复。
    // 失败路径：收束未完成，恢复 closing_=false 回到正常运行态——否则 closeEvent
    // 拒绝关闭后 start 会被 closing_ 永久拒绝，"可重试"实际变成采样永久停止。
    // 此后迟到的采样结果正常应用（窗口未销毁，模型存活）；真正的销毁后回调
    // 由收束成功（closing_ 终态）或 GUI accept 顺序排除。
    if (exited) {
        if (in_flight_ == thread) in_flight_ = nullptr;
    } else {
        closing_ = false;
    }
    return exited;
}

} // namespace tmog

#include "SamplingWorker.moc"
