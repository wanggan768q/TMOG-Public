# 17S 独立设置检查（无公共注册，只在本目录构建）
# 由 Product 合同允许；不调用根 CMake，不注册应用目标。
cmake_minimum_required(VERSION 3.21)
project(settings_checks LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC OFF)

find_package(Qt6 REQUIRED COMPONENTS Core)

enable_testing()

add_executable(settings_checks
    settings_checks.cpp
    ../../src/DisplaySettings.cpp
)
target_include_directories(settings_checks PRIVATE ../../src)
target_link_libraries(settings_checks PRIVATE Qt6::Core)
add_test(NAME settings_checks COMMAND settings_checks)
