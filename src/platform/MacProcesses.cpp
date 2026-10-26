#include "MacProcesses.h"

namespace tmog {

// M2 实现：proc_listallpids + proc_pidinfo(PROC_PIDTASKINFO / PROC_PIDT)
std::optional<SampleResult> MacProcessEnumerator::take_sample() {
    SampleResult result;
    result.error = "macOS enumerator not implemented yet (M2)";
    return result; // ok=false
}

} // namespace tmog
