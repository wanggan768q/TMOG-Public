#pragma once
#include "IProcessEnumerator.h"

namespace tmog {

// Windows 进程枚举：Toolhelp32 快照 + OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION)
class WindowsProcessEnumerator : public IProcessEnumerator {
public:
    std::optional<SampleResult> take_sample() override;
    std::uint32_t logical_processor_count() const;
};

} // namespace tmog
