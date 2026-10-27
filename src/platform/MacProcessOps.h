#pragma once
#include "IProcessOps.h"

namespace tmog {

// macOS 实现：**首版禁用**（行为矩阵 §4 / 计划 M3.2 已定）。
// 原因：macOS 无 pidfd 等价物；"检查创建时间后按 PID 发信号"存在 PID 复用竞态，
// 不满足安全目标绑定要求。若未来提供安全方案再启用。
class MacProcessOps : public IProcessOps {
public:
    KillOutcome terminate(const ProcessIdentity&, int) override {
        return {KillResult::Failed,
                "terminate disabled on macOS in first release: no race-free target binding"};
    }
};

} // namespace tmog
