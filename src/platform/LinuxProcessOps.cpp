#include "LinuxProcessOps.h"

namespace tmog {

// M3 Linux 实现（无本机环境，编译占位）：
//   pidfd_open(pid, 0) → pidfd_send_signal(pidfd, SIGTERM)
//   打开后读 /proc/<pid>/stat 的 starttime 核实身份，与 target.creation_tick 比对。
//   pidfd 不可用（内核 < 5.3）返回 Failed 并说明，不降级到裸 kill(pid)。
KillOutcome LinuxProcessOps::terminate(const ProcessIdentity&, int) {
    return {KillResult::Failed, "Linux terminate not implemented yet (M2/M3 on real host)"};
}

} // namespace tmog
