#pragma once
#include "IProcessEnumerator.h"

namespace tmog {

// Linux 进程枚举：procfs（首版占位，M2 实现）
class LinuxProcessEnumerator : public IProcessEnumerator {
public:
    std::optional<SampleResult> take_sample() override;
};

} // namespace tmog
