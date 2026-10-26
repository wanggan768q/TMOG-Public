#include "LinuxProcesses.h"

namespace tmog {

// M2 实现：/proc/[pid]/stat（utime+stime、starttime、rss、comm）
std::optional<SampleResult> LinuxProcessEnumerator::take_sample() {
    SampleResult result;
    result.error = "Linux enumerator not implemented yet (M2)";
    return result; // ok=false
}

} // namespace tmog
