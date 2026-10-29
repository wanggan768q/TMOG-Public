// #11 io_activity_checks：11H 受控本地 I/O 实验入口（本次仅入口，不执行）。
//
// 安全边界（计划 §4任务11/§5.4/§5.5）：
//  - 无显式 --allow-controlled-io 时立即 exit 2，无子进程、无文件副作用。
//    argv gate 必须在 QApplication/任何实验逻辑之前。
//  - 未获用户单独批准前，不默认加入 CTest（root CMake 不 add_test）。
//  - 本文件内 helper 代码允许实现但不真正运行（同上 gate）。
//
// 11H 实验设计（后续单独授权后执行）：
//  - 程序只创建一个持有创建身份/句柄的受控 helper（自造数据读/写）。
//  - 工作目录：仅命令行 --work-dir 指定的登记目录；拒绝既有非空目录、
//    拒绝符号链接、拒绝工程根目录。
//  - 段协议：idle / write / read 交替，各段 ≥2 个有效样本；记录每段
//    累计值（GetProcessIoCounters 同口径）、QPC 时间戳、真实 dt、差分速率。
//  - 预算：--budget-seconds（默认 30）、--max-bytes（默认 16MiB）；预算
//    耗尽设置取消标志，关闭自持句柄，等待 helper 自然退出；不能自然退出
//    时记录 helper 身份（PID+creation+句柄归属）等用户处理，不强杀。
//  - 验收（届时）：活动区间累计单调增、显示趋势与同口径累计差一致；
//    不要求等于 Disk 物理吞吐，不按文件大小强推缓存策略。
//  - 缺运行环境/权限/趋势或无法安全退出均 FAIL/BLOCKED，不得改为
//    "不可用跳过通过"。
#include <cstring>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
    // ---- argv gate：必须最先执行，早于一切副作用与框架初始化 ----
    bool authorized = false;
    for (int i = 1; i < argc; ++i) {
        if (std::strcmp(argv[i], "--allow-controlled-io") == 0) {
            authorized = true;
            break;
        }
    }
    if (!authorized) {
        std::cout << "io_activity_checks: controlled I/O experiment not authorized "
                     "(pass --allow-controlled-io to run; user approval required).\n";
        return 2;   // 无授权：无子进程、无文件、无窗口——纯入口退出
    }

    // ---- 授权路径（11H，本次不执行）：设计仅记录于上方注释与计划 §5.4/§5.5。
    // 实际实验逻辑待用户单独批准后按批准版本实现并另行评审。 ----
    std::cerr << "io_activity_checks: authorized path not yet implemented "
                 "(11H pending user approval).\n";
    return 3;
}
