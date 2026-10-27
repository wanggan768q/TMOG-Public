#pragma once
#include "IProcessOps.h"
#include <windows.h>

namespace tmog {

// 进程关键性判定（ProcessBreakOnTermination）。查询失败视为关键（保守拒绝）。
// 抽成自由函数供 terminate 与测试边界共用；测试可通过构造注入替换判定。
bool is_process_critical(HANDLE process);

// Windows 实现：OpenProcess → 核实创建时间 → 拒绝自身/关键进程 → TerminateProcess → 等待退出
class WindowsProcessOps : public IProcessOps {
public:
    // criticality_override 仅测试用：替换关键性判定，验证拒绝分支不影响生产行为
    using CriticalityFn = bool (*)(HANDLE);
    explicit WindowsProcessOps(CriticalityFn criticality_override = nullptr);

    KillOutcome terminate(const ProcessIdentity& target, int wait_timeout_ms) override;

private:
    CriticalityFn criticality_;
};

} // namespace tmog
