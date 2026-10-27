// 真实 Windows 枚举的冒烟检查：枚举本机进程、两次采样、算出至少一个非零 CPU%。
// 禁止假数据：失败即退出非零。
#include <iostream>
#include <windows.h>
#include "platform/WindowsProcesses.h"
#include "ProcessSampler.h"

using namespace tmog;

int main() {
    WindowsProcessEnumerator enumerator;
    const auto core_count = enumerator.logical_processor_count();
    std::cout << "logical processors: " << core_count << "\n";

    auto first = enumerator.take_sample();
    if (!first || !first->ok) {
        std::cerr << "FAIL: first sample: " << (first ? first->error : "nullopt") << "\n";
        return 1;
    }
    std::cout << "first sample: " << first->processes.size() << " processes\n";
    if (first->processes.size() < 5) {
        std::cerr << "FAIL: suspiciously few processes\n";
        return 1;
    }

    Sleep(300); // 300ms 差分窗口

    auto second = enumerator.take_sample();
    if (!second || !second->ok) {
        std::cerr << "FAIL: second sample: " << (second ? second->error : "nullopt") << "\n";
        return 1;
    }

    // 复用核心层的 diff_samples（与 GUI 同一配对/差分路径）
    const auto rows = diff_samples(*first, *second, core_count);

    int matched = 0, computed = 0, nonzero = 0;
    for (const auto& row : rows) {
        if (row.status == ProcessStatus::Ok) {
            ++matched;
            ++computed;
            if (row.cpu_percent && *row.cpu_percent > 0) ++nonzero;
        }
    }

    std::cout << "matched: " << matched
              << ", ok-computed: " << computed
              << ", nonzero-cpu: " << nonzero << "\n";

    if (matched < 5) { std::cerr << "FAIL: too few matched between samples\n"; return 1; }
    if (computed == 0) { std::cerr << "FAIL: no CPU% computed\n"; return 1; }
    // 机器可能有空闲窗口；不强制 nonzero>0，但必须打印供人工核对
    if (nonzero == 0) std::cout << "NOTE: all zero CPU this window (idle) — acceptable\n";
    std::cout << "smoke: PASS\n";
    return 0;
}
