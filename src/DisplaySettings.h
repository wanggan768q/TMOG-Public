// 17S 独立设置模块：本地 JSON 显示设置加载/校验/原子保存。
// 不依赖 MainWindow/model/sampler；Qt Core 足够。路径由调用方提供。
#pragma once

#include <QString>

namespace tmog {

// 档位仅这四个；其他值无效。
constexpr int kValidRefreshTiers[] = {500, 1000, 2000, 5000};

// 尺寸合法区间（加载校验用；加载后由 UI 另夹到屏幕 availableGeometry）。
constexpr int kMinWidth = 640;
constexpr int kMaxWidth = 7680;
constexpr int kMinHeight = 480;
constexpr int kMaxHeight = 4320;

// 排序列白名单（字符串存储，避免 enum 序号在列插入后漂移）。
inline bool is_valid_sort_column(const QString& column) {
    return column == QLatin1String("name") || column == QLatin1String("pid") ||
           column == QLatin1String("cpu") ||
           column == QLatin1String("memory") ||
           column == QLatin1String("status") ||
           column == QLatin1String("io_read") ||
           column == QLatin1String("io_write");
}

inline bool is_valid_refresh(int ms) {
    for (const int tier : kValidRefreshTiers) {
        if (ms == tier) return true;
    }
    return false;
}

inline bool is_valid_size(int width, int height) {
    return width >= kMinWidth && width <= kMaxWidth &&
           height >= kMinHeight && height <= kMaxHeight;
}

struct DisplaySettings {
    int schema_version = 1;
    int width = 1000;
    int height = 700;
    int refresh_ms = 1000;
    QString sort_column = QStringLiteral("pid");
    bool sort_descending = false;
};

struct SettingsLoadResult {
    DisplaySettings settings;
    QString error; // 空 = 成功（含文件不存在→默认）；非空 = 使用安全默认
};

// 加载本地 UTF-8 JSON 设置。上限 64KiB；未知 version、损坏、错误类型、
// 越界或未知列→整份安全默认+非空 error；文件不存在→默认无 error；
// 未知额外 key 忽略。
SettingsLoadResult load_display_settings(const QString& path);

// 原子保存：QSaveFile（显式 setDirectWriteFallback(false)）全量 write+commit。
// 失败返回 false+error，旧文件字节保持不变；不弹阻塞模态。
bool save_display_settings(const QString& path, const DisplaySettings& settings,
                           QString& error);

} // namespace tmog
