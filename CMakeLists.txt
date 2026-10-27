cmake_minimum_required(VERSION 3.21)
project(TmogReplica VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 源码为 UTF-8（含中文注释），强制 MSVC 按 UTF-8 解码
add_compile_options($<$<CXX_COMPILER_ID:MSVC>:/utf-8>)

# Qt 为可选：未安装时仅构建核心库与检查，GUI 目标自动跳过
find_package(Qt6 COMPONENTS Core Widgets QUIET)

# AUTOMOC 必须在 target 创建前设置（SamplingWorker.cpp 内含 Q_OBJECT 桥）
if(TARGET Qt6::Core)
    set(CMAKE_AUTOMOC ON)
endif()

add_library(tmog_core STATIC
    src/ProcessSnapshot.cpp
    src/ProcessSampler.cpp
)
target_include_directories(tmog_core PUBLIC src)

# 采样生命周期（#14）依赖 Qt Core；Qt 可用时才编译（核心检查不受影响）
if(TARGET Qt6::Core)
    target_sources(tmog_core PRIVATE src/SamplingWorker.cpp)
    target_link_libraries(tmog_core PUBLIC Qt6::Core)
endif()

if(WIN32)
    target_sources(tmog_core PRIVATE src/platform/WindowsProcesses.cpp
                                     src/platform/WindowsProcessOps.cpp)
elseif(APPLE)
    target_sources(tmog_core PRIVATE src/platform/MacProcesses.cpp)
elseif(UNIX)
    target_sources(tmog_core PRIVATE src/platform/LinuxProcesses.cpp
                                     src/platform/LinuxProcessOps.cpp)
endif()

enable_testing()
add_executable(process_checks tests/process_checks.cpp)
target_link_libraries(process_checks PRIVATE tmog_core)
add_test(NAME process_checks COMMAND process_checks)

if(WIN32)
    add_executable(smoke_enumerate tests/smoke_enumerate.cpp)
    target_link_libraries(smoke_enumerate PRIVATE tmog_core)
    add_test(NAME smoke_enumerate COMMAND smoke_enumerate)

    add_executable(process_ops_checks tests/process_ops_checks.cpp)
    target_link_libraries(process_ops_checks PRIVATE tmog_core)
    add_test(NAME process_ops_checks COMMAND process_ops_checks)

    # #14 采样生命周期检查（需 Qt Core：QThread/事件循环交错）
    if(TARGET Qt6::Core)
        add_executable(close_lifecycle_checks tests/close_lifecycle_checks.cpp)
        target_link_libraries(close_lifecycle_checks PRIVATE tmog_core)
        add_test(NAME close_lifecycle_checks COMMAND close_lifecycle_checks)

        # #16 采样失败区分/代际/忙碌检查（同 #14，Qt Core 事件循环）
        add_executable(sampling_recovery_checks tests/sampling_recovery_checks.cpp)
        target_link_libraries(sampling_recovery_checks PRIVATE tmog_core)
        add_test(NAME sampling_recovery_checks COMMAND sampling_recovery_checks)
    endif()
endif()

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

    # M4：Windows 便携目录（windeployqt 收集 Qt 运行库与插件）
    if(WIN32)
        find_program(WINDEPLOYQT_EXE windeployqt HINTS "${Qt6_DIR}/../../../bin")
        if(WINDEPLOYQT_EXE)
            add_custom_command(TARGET TmogReplica POST_BUILD
                COMMAND "${WINDEPLOYQT_EXE}" --no-translations
                        --no-system-d3d-compiler --no-opengl-sw
                        "$<TARGET_FILE:TmogReplica>"
                COMMENT "windeployqt: collecting Qt runtime for portable dir"
            )
        endif()
    endif()
endif()
