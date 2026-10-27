#include "SamplingWorker.h"
#include <QObject>

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
        if (result) emit done(std::move(*result));
        else emit failed();
    }
signals:
    void done(SampleResult result);
    void failed();
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
            [this, on_failed = std::move(on_failed)]() {
                if (closing_) return;
                on_failed();
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
    if (exited && in_flight_ == thread)
        in_flight_ = nullptr;
    return exited;
}

} // namespace tmog

#include "SamplingWorker.moc"
