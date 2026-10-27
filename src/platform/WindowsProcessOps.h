#pragma once
#include "IProcessOps.h"

namespace tmog {

// Windows 实现：OpenProcess → 核实创建时间 → 拒绝自身/关键进程 → TerminateProcess → 等待退出
class WindowsProcessOps : public IProcessOps {
public:
    KillOutcome terminate(const ProcessIdentity& target, int wait_timeout_ms) override;
};

} // namespace tmog
