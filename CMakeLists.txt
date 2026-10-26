cmake_minimum_required(VERSION 3.21)
project(TmogReplica VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 源码为 UTF-8（含中文注释），强制 MSVC 按 UTF-8 解码
add_compile_options($<$<CXX_COMPILER_ID:MSVC>:/utf-8>)

# Qt 为可选：未安装时仅构建核心库与检查，GUI 目标自动跳过
find_package(Qt6 COMPONENTS Widgets QUIET)

add_library(tmog_core STATIC
    src/ProcessSnapshot.cpp
    src/ProcessSampler.cpp
)
target_include_directories(tmog_core PUBLIC src)

if(WIN32)
    target_sources(tmog_core PRIVATE src/platform/WindowsProcesses.cpp)
elseif(APPLE)
    target_sources(tmog_core PRIVATE src/platform/MacProcesses.cpp)
elseif(UNIX)
    target_sources(tmog_core PRIVATE src/platform/LinuxProcesses.cpp)
endif()

enable_testing()
add_executable(process_checks tests/process_checks.cpp)
target_link_libraries(process_checks PRIVATE tmog_core)
add_test(NAME process_checks COMMAND process_checks)

if(TARGET Qt6::Widgets)
    add_executable(TmogReplica
        src/main.cpp
        src/MainWindow.cpp
        src/ProcessTableModel.cpp
    )
    target_link_libraries(TmogReplica PRIVATE tmog_core Qt6::Widgets)
    set_target_properties(TmogReplica PROPERTIES
        WIN32_EXECUTABLE ON
        MACOSX_BUNDLE ON
    )
endif()
