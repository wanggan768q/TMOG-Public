#pragma once
#include "IProcessEnumerator.h"

namespace tmog {

// macOS 进程枚举：libproc（首版占位，M2 实现）
// 计划 M3 警告：macOS 结束操作若无安全目标绑定方式则禁用。
class MacProcessEnumerator : public IProcessEnumerator {
public:
    std::optional<SampleResult> take_sample() override;
};

} // namespace tmog
