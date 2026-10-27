#pragma once
#include "ProcessSnapshot.h"
#include <string>

namespace tmog {

// 结束进程的细分结果：区分取消/身份变化/拒绝/失败，"发出请求"不等于"已退出"
enum class KillResult {
    Ok,               // 请求已发出且确认退出
    Requested,        // 请求已发出，退出确认超时（调用方决定如何呈现）
    Cancelled,        // 用户取消
    SelfTarget,       // 拒绝：目标是自身
    CriticalTarget,   // 拒绝：关键/受保护进程
    IdentityChanged,  // 目标身份与请求时不符（PID 复用防御触发）
    AccessDenied,     // 平台拒绝访问（权限不足）
    Failed,           // 平台调用失败（GetLastError 等见 error）
};

// 单次结束操作结果
struct KillOutcome {
    KillResult result;
    std::string error;    // AccessDenied/Failed/Requested 时的平台错误或说明
};

// 进程操作接口：三平台各自实现安全绑定策略
//  - Windows: 句柄核实创建时间后 TerminateProcess（M3）
//  - Linux:   pidfd_open 防 PID 复用；内核不支持时失败而不是降级（M3）
//  - macOS:   无安全绑定方式 → 首版整体禁用（行为矩阵 §4 已定）
class IProcessOps {
public:
    virtual ~IProcessOps() = default;

    // 结束目标进程。target 必须来自最近一次快照（含创建身份）。
    // 实现必须：核实身份未变 → 拒绝自身/关键目标 → 发出终止 → 等待确认退出。
    // wait_timeout_ms: 发出终止后等待退出确认的时长；0 表示不等待。
    virtual KillOutcome terminate(const ProcessIdentity& target,
                                  int wait_timeout_ms) = 0;
};

} // namespace tmog
