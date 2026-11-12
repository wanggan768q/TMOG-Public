#pragma once
#include "SystemMetrics.h"

namespace tmog {

// Windows 整机采集：GetSystemTimes（CPU 累计时间）+ GlobalMemoryStatusEx
// （物理内存总量/可用）。不依赖进程枚举，也不累加进程数据。
class WindowsSystemMetricsSource final : public ISystemMetricsSource {
public:
    SystemReading read() override;
};

} // namespace tmog
