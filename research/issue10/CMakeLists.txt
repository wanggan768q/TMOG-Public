cmake_minimum_required(VERSION 3.21)
project(TmogBenchResearch LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options($<$<CXX_COMPILER_ID:MSVC>:/utf-8>)

enable_testing()
add_executable(benchmark_small_checks benchmark_small_checks.cpp BenchAlgo.cpp)
add_test(NAME benchmark_small_checks COMMAND benchmark_small_checks)

# 历史检查包含完整负载，仅可显式编译，不加入默认构建或 CTest。
add_executable(benchmark_full_checks EXCLUDE_FROM_ALL benchmark_algo_checks.cpp BenchAlgo.cpp)
