#include "SystemMetrics.h"

#if !defined(_WIN32)

namespace tmog {
namespace {

// 非 Windows 平台：本票验收平台为 Windows；此处诚实降级，不生成假数据。
// 返回 times_available=false / memory_available=false + 明确错误，UI 显示
// 「不可用」而不是 0。
class UnsupportedSystemMetricsSource final : public ISystemMetricsSource {
public:
    SystemReading read() override {
        SystemReading reading;
        reading.error =
            "整机性能采集尚未在此平台实现（仅 Windows 提供 GetSystemTimes/"
            "GlobalMemoryStatusEx 口径）";
        return reading;
    }
};

} // namespace

std::unique_ptr<ISystemMetricsSource> make_system_metrics_source() {
    return std::make_unique<UnsupportedSystemMetricsSource>();
}

} // namespace tmog

#endif // !defined(_WIN32)
