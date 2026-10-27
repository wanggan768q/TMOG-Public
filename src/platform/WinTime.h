#pragma once
#include <cstdint>
#include <windows.h>

namespace tmog::win {

// FILETIME → 64 位 100ns 刻度（进程创建身份用）；全仓库唯一打包点
inline std::uint64_t filetime_to_tick(const FILETIME& ft) {
    return (static_cast<std::uint64_t>(ft.dwHighDateTime) << 32) | ft.dwLowDateTime;
}

} // namespace tmog::win
