#pragma once
#include <map>
#include <optional>
#include "ProcessSnapshot.h"

namespace tmog {

// 平台进程枚举适配器接口；仅声明三平台实际共同需求
class IProcessEnumerator {
public:
    virtual ~IProcessEnumerator() = default;
    // 一次原子快照：枚举所有进程并读累计 CPU 时间与驻留内存。
    // 返回 nullopt 表示本次快照失败（error 给出原因）。
    virtual std::optional<SampleResult> take_sample() = 0;
};

} // namespace tmog
