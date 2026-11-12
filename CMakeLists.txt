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
    # #19：整机 CPU／物理内存采集（独立系统 API）与有界历史采样器（纯计算）
    src/SystemMetrics.cpp
    src/SystemMetricsSampler.cpp
)
target_include_directories(tmog_core PUBLIC src)

# 采样生命周期（#14）依赖 Qt Core；Qt 可用时才编译（核心检查不受影响）
if(TARGET Qt6::Core)
    target_sources(tmog_core PRIVATE src/SamplingWorker.cpp)
    target_link_libraries(tmog_core PUBLIC Qt6::Core)
endif()

if(WIN32)
    target_sources(tmog_core PRIVATE src/platform/WindowsProcesses.cpp
                                     src/platform/WindowsProcessOps.cpp
                                     # #19：GetSystemTimes / GlobalMemoryStatusEx
                                     src/platform/WindowsSystemMetrics.cpp)
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

# #19 整机采样器纯计算检查（无 Qt/平台依赖）：首样本待采样、时间差百分比、
# 有效空闲 0.0%、计数器回退/读取失败缺样、内存口径与不可用、历史 5 分钟窗口
# 与 600 样本上限、格式化单位。
add_executable(system_metrics_sampler_checks tests/system_metrics_sampler_checks.cpp)
target_link_libraries(system_metrics_sampler_checks PRIVATE tmog_core)
add_test(NAME system_metrics_sampler_checks COMMAND system_metrics_sampler_checks)

# 17S 设置检查：复用既有 tests/settings/settings_checks.cpp（不复制实现），
# 同源编入 DisplaySettings.cpp；显式传 test root（build 目录）供临时目录
# 约束，TIMEOUT 60。此前只在 tests/settings 独立工程构建，本版纳入 root CTest。
if(TARGET Qt6::Core)
    add_executable(settings_checks
        tests/settings/settings_checks.cpp
        src/DisplaySettings.cpp
    )
    target_include_directories(settings_checks PRIVATE src)
    target_link_libraries(settings_checks PRIVATE Qt6::Core)
    add_test(NAME settings_checks
             COMMAND settings_checks $<TARGET_FILE_DIR:settings_checks>)
    set_tests_properties(settings_checks PROPERTIES TIMEOUT 60)
endif()

if(WIN32)
    add_executable(smoke_enumerate tests/smoke_enumerate.cpp)
    target_link_libraries(smoke_enumerate PRIVATE tmog_core)
    add_test(NAME smoke_enumerate COMMAND smoke_enumerate)

    # #11 受控 I/O 实验入口（11H）：纯 Win32（windows.h），置于 WIN32 门内；
    # 只构建，不默认 add_test。无 --allow-controlled-io 时 exit 2；
    # 执行需用户单独批准（计划 §5.4）。
    # shell32：CommandLineToArgvW（宽入口解析，helper-binding 修复计划 D2）。
    add_executable(io_activity_checks tests/io_activity_checks.cpp)
    target_link_libraries(io_activity_checks PRIVATE tmog_core shell32)

    # helper-binding 安全检查（本版计划 D7）：同源纯参数/状态检查入口，
    # 无真实 helper/文件/进程副作用；故障即 exit 1（不使用 assert）。
    add_test(NAME io_helper_binding_checks
             COMMAND io_activity_checks --check-helper-binding-only)
    set_tests_properties(io_helper_binding_checks PROPERTIES TIMEOUT 120)

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
    # #17U：Ctrl+1/Ctrl+2 键序列交付检查需要 Qt Test（可选；缺失时测试内
    # 回退为 shortcut 绑定 + action 触发断言并显式打印 SKIP）。
    find_package(Qt6 COMPONENTS Test QUIET)

    add_executable(TmogReplica
        src/main.cpp
        src/MainWindow.cpp
        src/ProcessTableModel.cpp
        src/DisplaySettings.cpp
        src/PerformancePage.cpp
    )
    target_link_libraries(TmogReplica PRIVATE tmog_core Qt6::Widgets)
    set_target_properties(TmogReplica PROPERTIES
        WIN32_EXECUTABLE ON
        MACOSX_BUNDLE ON
    )

    # #16 G5 检查：持久陈旧标注走生产呈现路径（离屏真实 MainWindow +
    # 生产 SamplingWorker；GUI 目标可用时才有意义）。MainWindow.cpp 与
    # TmogReplica 同源编入（非镜像）。offscreen 需要合法 Qt 插件路径
    # （Qt6::Core 位于 <Qt>/bin，插件在 <Qt>/plugins/platforms）。
    add_executable(stale_persistence_checks
        tests/stale_persistence_checks.cpp
        src/MainWindow.cpp
        src/ProcessTableModel.cpp
        src/DisplaySettings.cpp
        src/PerformancePage.cpp
    )
    target_link_libraries(stale_persistence_checks PRIVATE tmog_core Qt6::Widgets)
    add_test(NAME stale_persistence_checks
             COMMAND stale_persistence_checks)
    set_tests_properties(stale_persistence_checks PROPERTIES
        ENVIRONMENT "QT_QPA_PLATFORM=offscreen;QT_QPA_PLATFORM_PLUGIN_PATH=$<TARGET_FILE_DIR:Qt6::Core>/../plugins/platforms")

    # #11 检查：I/O 列模型呈现/数值排序/哨兵/选择保持（生产 model + 同源
    # proxy + 生产 MainWindow 注入路径；离屏）。合法 Qt 插件路径 + TIMEOUT 120。
    add_executable(io_table_checks
        tests/io_table_checks.cpp
        src/MainWindow.cpp
        src/ProcessTableModel.cpp
        src/DisplaySettings.cpp
        src/PerformancePage.cpp
    )
    target_link_libraries(io_table_checks PRIVATE tmog_core Qt6::Widgets)
    add_test(NAME io_table_checks COMMAND io_table_checks)
    set_tests_properties(io_table_checks PROPERTIES
        ENVIRONMENT "QT_QPA_PLATFORM=offscreen;QT_QPA_PLATFORM_PLUGIN_PATH=$<TARGET_FILE_DIR:Qt6::Core>/../plugins/platforms"
        TIMEOUT 120)

    # #17U 检查：页面导航（QStackedWidget/action/Ctrl 键）+ 四档刷新 +
    # 显示设置持久化（窗口尺寸/档位/排序）经生产 MainWindow + fake 枚举器；
    # 全程离屏，不写真实用户配置（测试传临时路径）。TIMEOUT 120。
    add_executable(navigation_settings_checks
        tests/navigation_settings_checks.cpp
        src/MainWindow.cpp
        src/ProcessTableModel.cpp
        src/DisplaySettings.cpp
        src/PerformancePage.cpp
    )
    target_link_libraries(navigation_settings_checks PRIVATE tmog_core Qt6::Widgets)
    if(TARGET Qt6::Test)
        target_link_libraries(navigation_settings_checks PRIVATE Qt6::Test)
        target_compile_definitions(navigation_settings_checks PRIVATE TMOG_HAVE_QT_TEST=1)
        # windeployqt 只收集生产程序运行库，不部署 Qt6Test.dll；测试 EXE 与
        # windeployqt 输出同目录运行，必须把链接到的 Qt6::Test 运行库复制到
        # EXE 目录，否则 Windows 下以 0xc0000135 (STATUS_DLL_NOT_FOUND) 退出。
        add_custom_command(TARGET navigation_settings_checks POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "$<TARGET_FILE:Qt6::Test>"
                "$<TARGET_FILE_DIR:navigation_settings_checks>"
            VERBATIM)
    endif()
    add_test(NAME navigation_settings_checks COMMAND navigation_settings_checks)
    set_tests_properties(navigation_settings_checks PROPERTIES
        ENVIRONMENT "QT_QPA_PLATFORM=offscreen;QT_QPA_PLATFORM_PLUGIN_PATH=$<TARGET_FILE_DIR:Qt6::Core>/../plugins/platforms"
        TIMEOUT 120)

    # #19 检查：整机性能页（生产 MainWindow + PerformancePage，注入受控整机
    # 来源与枚举器）——首样本「待采样」、累计时间差百分比、有效空闲 0.0%、
    # 读取失败缺样与错误不显示 0、恢复后重建基线、曲线断口分段、内存单位与
    # 口径、切页/暂停不中断采样且无冻结。全程离屏，TIMEOUT 120。
    add_executable(performance_checks
        tests/performance_checks.cpp
        src/MainWindow.cpp
        src/ProcessTableModel.cpp
        src/DisplaySettings.cpp
        src/PerformancePage.cpp
    )
    target_link_libraries(performance_checks PRIVATE tmog_core Qt6::Widgets)
    if(TARGET Qt6::Test)
        target_link_libraries(performance_checks PRIVATE Qt6::Test)
        target_compile_definitions(performance_checks PRIVATE TMOG_HAVE_QT_TEST=1)
        add_custom_command(TARGET performance_checks POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "$<TARGET_FILE:Qt6::Test>"
                "$<TARGET_FILE_DIR:performance_checks>"
            VERBATIM)
    endif()
    add_test(NAME performance_checks COMMAND performance_checks)
    set_tests_properties(performance_checks PROPERTIES
        ENVIRONMENT "QT_QPA_PLATFORM=offscreen;QT_QPA_PLATFORM_PLUGIN_PATH=$<TARGET_FILE_DIR:Qt6::Core>/../plugins/platforms"
        TIMEOUT 120)

    # #13 检查：真实生产模态事件路径（结束任务确认）。真实 MainWindow 三参
    # 构造注入（枚举器 + fake ops 仅记录）驱动真实 SamplingWorker/QMessageBox/
    # 异步 kill 线程；仅默认 fake 场景，manual/idle 模式入口在此 EXE 内
    # 拒绝执行（Task-3/B 范围另批）。独立测试 EXE 非 GUI 业务入口。
    # WIN32 守卫：同批准计划 §3 原样要求（本目标依赖 Windows 测试环境语义）。
    if(WIN32)
        add_executable(end_confirm_checks
            tests/end_confirm_checks.cpp
            src/MainWindow.cpp
            src/ProcessTableModel.cpp
            src/DisplaySettings.cpp
            src/PerformancePage.cpp
        )
        target_link_libraries(end_confirm_checks PRIVATE tmog_core Qt6::Widgets)
        add_test(NAME end_confirm_checks COMMAND end_confirm_checks)
        # #13 修复（Dev 范围内澄清）：windeployqt 会把 platforms/qwindows.dll
        # 部署进构建目录；同目录测试 EXE 请求 offscreen 平台时 Qt 在 appDir
        # plugins 内找不到 qoffscreen.dll → QApplication 初始化可能挂起
        # （假说，当前环境观察：Debug 18.9s PASS / Release ctest 120s 超时
        # 零输出；设 QT_PLUGIN_PATH 指向同一 Qt 安装 plugins 后 Release 直跑
        # 18.9s PASS——支持性对照证据，因果未唯一证实）。从本工程
        # find_package 的同一 Qt 配置导出插件路径（QtInstallPaths.cmake 官方
        # 变量），不硬编码个人路径、不改生产部署；校验失败显式报错，不做
        # 静默兜底。
        if(NOT DEFINED QT6_INSTALL_PREFIX OR NOT DEFINED QT6_INSTALL_PLUGINS
           OR "${QT6_INSTALL_PREFIX}" STREQUAL ""
           OR "${QT6_INSTALL_PLUGINS}" STREQUAL "")
            message(FATAL_ERROR "end_confirm_checks: Qt install path variables "
                                "undefined or empty; cannot derive test plugin path")
        endif()
        string(FIND "${QT6_INSTALL_PREFIX}" ";" _prefix_sep)
        if(NOT _prefix_sep EQUAL -1)
            message(FATAL_ERROR "end_confirm_checks: QT6_INSTALL_PREFIX contains "
                                "';' (${QT6_INSTALL_PREFIX}); cannot derive single path")
        endif()
        string(FIND "${QT6_INSTALL_PLUGINS}" ";" _plugin_path_sep)
        if(NOT _plugin_path_sep EQUAL -1)
            message(FATAL_ERROR "end_confirm_checks: QT6_INSTALL_PLUGINS contains "
                                "';' (${QT6_INSTALL_PLUGINS}); cannot derive "
                                "single plugin path")
        endif()
        # 来源匹配（精确布局核对，非任意祖先）：当前 Qt 6 布局固定为
        # <prefix>/lib/cmake/Qt6；派生路径必须与 find_package 实际来源
        # REALPATH 相等，防 Qt 错配与 ../ 逃逸。不泛化到任意 Qt 布局。
        get_filename_component(_qt_cmake_real "${Qt6_DIR}" REALPATH)
        get_filename_component(_prefix_expect_real
            "${Qt6_DIR}/../../.." REALPATH)
        get_filename_component(_prefix_real "${QT6_INSTALL_PREFIX}" REALPATH)
        if(NOT _prefix_real STREQUAL _prefix_expect_real)
            message(FATAL_ERROR "end_confirm_checks: Qt install prefix mismatch: "
                                "QT6_INSTALL_PREFIX (${_prefix_real}) != "
                                "${_prefix_expect_real} derived from Qt6_DIR "
                                "(${_qt_cmake_real})")
        endif()
        set(_tmog_test_plugin_dir "${QT6_INSTALL_PREFIX}/${QT6_INSTALL_PLUGINS}")
        get_filename_component(_plugin_dir_real "${_tmog_test_plugin_dir}" REALPATH)
        get_filename_component(_plugin_expect_real
            "${QT6_INSTALL_PREFIX}/plugins" REALPATH)
        if(NOT _plugin_dir_real STREQUAL _plugin_expect_real)
            message(FATAL_ERROR "end_confirm_checks: derived plugin path mismatch: "
                                "${_plugin_dir_real} != ${_plugin_expect_real}")
        endif()
        if(NOT EXISTS "${_plugin_dir_real}/platforms/qoffscreen.dll")
            message(FATAL_ERROR "end_confirm_checks: offscreen platform plugin "
                                "not found at ${_plugin_dir_real}/platforms/"
                                "qoffscreen.dll (Qt install mismatch?)")
        endif()
        set_tests_properties(end_confirm_checks PROPERTIES
            ENVIRONMENT "QT_QPA_PLATFORM=offscreen;QT_PLUGIN_PATH=${_plugin_dir_real}"
            TIMEOUT 120)
        # #15 修复（Dev 范围内澄清，同源派生路径复用）：stale_persistence_checks
        # 与 end_confirm_checks 同处构建目录根，同受 windeployqt platforms/
        # 部署影响（Release 在途挂起观测见 acceptance；假说未证实）。Windows
        # 下覆盖既有 offscreen 属性并补匹配插件路径与有限 TIMEOUT 120；
        # 非 Windows 保持下方既有 offscreen 属性。测试本体零改动（5.3s
        # D1 断言/完整 4 PASS 不变）。
        set_tests_properties(stale_persistence_checks PROPERTIES
            ENVIRONMENT "QT_QPA_PLATFORM=offscreen;QT_PLUGIN_PATH=${_plugin_dir_real}"
            TIMEOUT 120)
        # #17U：新导航/设置测试与上述测试同在构建目录根，同受 windeployqt
        # platforms/ 部署影响；Windows 下统一用同源派生插件路径。
        set_tests_properties(navigation_settings_checks PROPERTIES
            ENVIRONMENT "QT_QPA_PLATFORM=offscreen;QT_PLUGIN_PATH=${_plugin_dir_real}"
            TIMEOUT 120)
        # #19：性能页离屏测试同处构建目录根，同样使用同源派生插件路径。
        set_tests_properties(performance_checks PROPERTIES
            ENVIRONMENT "QT_QPA_PLATFORM=offscreen;QT_PLUGIN_PATH=${_plugin_dir_real}"
            TIMEOUT 120)
        unset(_qt_cmake_real)
        unset(_prefix_expect_real)
        unset(_prefix_real)
        unset(_tmog_test_plugin_dir)
        unset(_plugin_dir_real)
        unset(_plugin_expect_real)
        unset(_prefix_sep)
        unset(_plugin_path_sep)
    endif()

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

# W02：便携包发布严格模式——GUI/部署工具不齐备时配置失败，不静默跳过。
# strict 模式供 scripts/package-portable.ps1 使用；默认开发构建不受影响。
option(TMOG_PORTABLE_STRICT "便携包发布：缺 Qt 或 windeployqt 时配置失败" OFF)
if(TMOG_PORTABLE_STRICT)
    if(NOT TARGET Qt6::Widgets)
        message(FATAL_ERROR "TMOG_PORTABLE_STRICT=ON 但未找到 Qt6 Widgets：便携包要求 GUI 与部署工具齐备")
    endif()
    if(WIN32 AND NOT WINDEPLOYQT_EXE)
        message(FATAL_ERROR "TMOG_PORTABLE_STRICT=ON 但未找到 windeployqt：便携包要求部署工具齐备")
    endif()
endif()

# W02：独立 staging 便携包（cmake --install 到专用构建目录内 portable/，
# 对 staged exe 再跑 windeployqt；不触及源码目录或工程根）。
if(WIN32 AND TARGET Qt6::Widgets AND WINDEPLOYQT_EXE)
    install(TARGETS TmogReplica RUNTIME DESTINATION . COMPONENT portable)
    install(FILES
        "${CMAKE_SOURCE_DIR}/packaging/THIRD-PARTY-NOTICES.md"
        "${CMAKE_SOURCE_DIR}/packaging/README-PACKAGE.md"
        DESTINATION . COMPONENT portable)
    set(TMOG_PORTABLE_DIR "${CMAKE_BINARY_DIR}/portable")
    add_custom_target(portable_package
        COMMAND ${CMAKE_COMMAND} -E remove_directory "${TMOG_PORTABLE_DIR}"
        COMMAND ${CMAKE_COMMAND} --install "${CMAKE_BINARY_DIR}"
                --component portable --prefix "${TMOG_PORTABLE_DIR}"
        COMMAND "${WINDEPLOYQT_EXE}" --no-translations
                --no-system-d3d-compiler --no-opengl-sw
                "${TMOG_PORTABLE_DIR}/TmogReplica.exe"
        COMMENT "portable_package: staging into ${TMOG_PORTABLE_DIR}"
        VERBATIM)
    add_dependencies(portable_package TmogReplica)
endif()
