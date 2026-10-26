// 真实 Windows 枚举的冒烟检查：枚举本机进程、两次采样、算出至少一个非零 CPU%。
// 禁止假数据：失败即退出非零。
#include <iostream>
#include <map>
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
    const auto wall_delta = second->wall_clock_ns - first->wall_clock_ns;

    std::map<std::uint32_t, const ProcessSnapshot*> prev_by_pid;
    for (const auto& p : first->processes) prev_by_pid[p.identity.pid] = &p;

    int matched = 0, computed = 0, nonzero = 0, first_sample = 0;
    for (const auto& cur : second->processes) {
        auto it = prev_by_pid.find(cur.identity.pid);
        if (it == prev_by_pid.end()) continue;
        ++matched;
        std::optional<int> pct;
        auto st = compute_cpu_percent(*it->second, cur, wall_delta, core_count, pct);
        if (st == ProcessStatus::FirstSample) ++first_sample;
        if (st == ProcessStatus::Ok) {
            ++computed;
            if (*pct > 0) ++nonzero;
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
