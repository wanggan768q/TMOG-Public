#pragma once
#include "IProcessOps.h"

namespace tmog {

// Linux 实现：pidfd_open 防止 PID 复用（M3）；内核 < 5.3 时明确失败不降级
class LinuxProcessOps : public IProcessOps {
public:
    KillOutcome terminate(const ProcessIdentity& target, int wait_timeout_ms) override;
};

} // namespace tmog
