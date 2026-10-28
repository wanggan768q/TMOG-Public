#pragma once
#include <QThread>
#include <functional>
#include <memory>
#include <utility>
#include "IProcessEnumerator.h"
#include "ProcessSnapshot.h"

class QObject;

namespace tmog {

// 采样生命周期（#14）：单次采样 worker 的线程所有权与收束语义。
//
// 职责（与 UI 解耦，可独立检查）：
//  - start(enumerator, on_done, on_failed)：在独立 QThread 执行 take_sample，
//    结果经队列连接回到 owner 所在线程；同一时刻至多一个在途采样。
//  - shutdown(timeout_ms)：关闭时收束——置 closing，未开始的采样不再启动；
//    等待在途线程实际退出。返回 true 表示线程已确认退出（资源可安全销毁）。
//    false 表示超时仍未退出——调用方不得销毁枚举器（所有权在此保留），
//    由调用方决定拒绝关闭或延后重试；绝不假装已安全。
//  - 不强杀线程；线程经事件循环 quit 优雅退出（take_sample 是有限操作）。
//
// 所有权：线程与 bridge 由本类管理；枚举器所有权仍在调用方（MainWindow），
// shutdown 返回 true 后调用方才可释放。
class SamplingWorker {
public:
    using DoneFn = std::function<void(SampleResult)>;
    // #16：失败回调带错误描述（结果不存在或 ok=false 均到达此处）
    using FailedFn = std::function<void(const std::string&)>;

    SamplingWorker() = default;
    // 析构前必须已 shutdown 成功（调用方保证；shutdown 失败时禁止析构枚举器）
    ~SamplingWorker();

    SamplingWorker(const SamplingWorker&) = delete;
    SamplingWorker& operator=(const SamplingWorker&) = delete;

    bool busy() const { return in_flight_ != nullptr; }
    bool closing() const { return closing_; }

    // owner: 结果回调接收者（生命周期由调用方保证长于回调投递）。
    void start(QObject* owner, IProcessEnumerator* enumerator,
               DoneFn on_done, FailedFn on_failed);

    // 收束：返回线程是否在 timeout 内实际退出。成功后内部状态清空，可再次 start。
    bool shutdown(int timeout_ms);

private:
    class Bridge;
    QThread* in_flight_ = nullptr;   // 在途采样线程；nullptr = 空闲
    bool closing_ = false;
};

} // namespace tmog
