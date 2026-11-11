// 17S 独立设置模块实现：JSON 校验 + QSaveFile 原子保存。
#include "DisplaySettings.h"

#include <QFile>
#include <QFileInfo>
#include <QJsonDocument>
#include <QJsonObject>
#include <QSaveFile>

namespace tmog {

namespace {

// 上限 64KiB（文件字节数）。
constexpr qint64 kMaxSettingsBytes = 64 * 1024;

} // namespace

SettingsLoadResult load_display_settings(const QString& path) {
    SettingsLoadResult result; // settings 即安全默认

    QFile file(path);
    if (!file.exists()) {
        return result; // 不存在→默认，无错误
    }
    if (!file.open(QIODevice::ReadOnly)) {
        result.error = QStringLiteral("无法打开设置文件: %1")
                           .arg(QFileInfo(path).absoluteFilePath());
        return result;
    }
    const QByteArray raw = file.readAll();
    file.close();

    if (raw.size() > kMaxSettingsBytes) {
        result.error = QStringLiteral("设置文件超过 64KiB 上限 (%1 字节)")
                           .arg(raw.size());
        return result;
    }

    QJsonParseError parse_error{};
    const QJsonDocument doc =
        QJsonDocument::fromJson(raw, &parse_error);
    if (parse_error.error != QJsonParseError::NoError || !doc.isObject()) {
        result.error = QStringLiteral("设置文件不是有效 JSON 对象: %1")
                           .arg(parse_error.errorString());
        return result;
    }

    const QJsonObject obj = doc.object();

    // 未知 version→整份默认+错误
    if (!obj.contains(QStringLiteral("schema_version")) ||
        !obj.value(QStringLiteral("schema_version")).isDouble() ||
        obj.value(QStringLiteral("schema_version")).toInt() != 1) {
        result.error = QStringLiteral("不支持的设置 schema_version");
        return result;
    }

    // 类型/值校验：任一字段失败→整份默认+错误（不做部分应用）
    const auto invalid = [&](const char* field) {
        result.error = QStringLiteral("设置字段无效: %1").arg(
            QString::fromLatin1(field));
    };

    const QJsonValue width = obj.value(QStringLiteral("width"));
    if (!width.isDouble()) {
        invalid("width");
        return result;
    }
    const int w = width.toInt();
    if (w < kMinWidth || w > kMaxWidth) {
        invalid("width");
        return result;
    }

    const QJsonValue height = obj.value(QStringLiteral("height"));
    if (!height.isDouble()) {
        invalid("height");
        return result;
    }
    const int h = height.toInt();
    if (h < kMinHeight || h > kMaxHeight) {
        invalid("height");
        return result;
    }

    const QJsonValue refresh = obj.value(QStringLiteral("refresh_ms"));
    if (!refresh.isDouble() || !is_valid_refresh(refresh.toInt())) {
        invalid("refresh_ms");
        return result;
    }

    const QJsonValue sort_col = obj.value(QStringLiteral("sort_column"));
    if (!sort_col.isString() ||
        !is_valid_sort_column(sort_col.toString())) {
        invalid("sort_column");
        return result;
    }

    const QJsonValue sort_desc = obj.value(QStringLiteral("sort_descending"));
    if (!sort_desc.isBool()) {
        invalid("sort_descending");
        return result;
    }

    // 全部有效才应用；未知额外 key 天然忽略（只读已知字段）
    result.settings.width = w;
    result.settings.height = h;
    result.settings.refresh_ms = refresh.toInt();
    result.settings.sort_column = sort_col.toString();
    result.settings.sort_descending = sort_desc.toBool();
    return result;
}

bool save_display_settings(const QString& path, const DisplaySettings& settings,
                           QString& error) {
    error.clear();

    QJsonObject obj;
    obj.insert(QStringLiteral("schema_version"), settings.schema_version);
    obj.insert(QStringLiteral("width"), settings.width);
    obj.insert(QStringLiteral("height"), settings.height);
    obj.insert(QStringLiteral("refresh_ms"), settings.refresh_ms);
    obj.insert(QStringLiteral("sort_column"), settings.sort_column);
    obj.insert(QStringLiteral("sort_descending"), settings.sort_descending);

    const QJsonDocument doc(obj);
    const QByteArray payload = doc.toJson(QJsonDocument::Indented);
    if (payload.size() > kMaxSettingsBytes) {
        error = QStringLiteral("序列化结果超过 64KiB 上限");
        return false;
    }

    QSaveFile file(path);
    file.setDirectWriteFallback(false); // 原子性：禁用直接写回退
    if (!file.open(QIODevice::WriteOnly)) {
        error = QStringLiteral("无法打开保存目标: %1")
                    .arg(QFileInfo(path).absoluteFilePath());
        return false;
    }
    if (file.write(payload) != payload.size()) {
        error = QStringLiteral("写入设置数据失败: %1").arg(file.errorString());
        file.cancelWriting();
        return false;
    }
    if (!file.commit()) {
        error = QStringLiteral("提交设置文件失败: %1").arg(file.errorString());
        return false;
    }
    return true;
}

} // namespace tmog
