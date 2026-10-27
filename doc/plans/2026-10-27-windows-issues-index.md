# Windows 议题发布索引

发布日期：2026-10-27。36 个 Issue 已创建，69 条 GitHub 原生阻塞关系已逐项读取验证，无依赖API错误。每票正文保留 Blocked by 便于阅读。#1 与 #2 未修改；实际Issue编号不从#3开始，不能用W编号推算。

## 推荐开始

先做 [#5 Release有效检查](https://github.com/wanggan768q/TMOG-Public/issues/5)，之后 [#13 冻结确认目标](https://github.com/wanggan768q/TMOG-Public/issues/13) 和 [#14 关闭采样生命周期](https://github.com/wanggan768q/TMOG-Public/issues/14)。

Windows性能主线：`#5 → #14 → #16 → #17 → #19 → #32/#33 → #36`。

创建时无阻塞，可立即开始：#5、#6、#7、#8、#9、#10。其中#7—#10为研究／合同票，完成必须确定合同并获维护者确认；创建票不自动授权工具安装、原件运行或提权。

## 完整映射

| 计划ID | Issue | 内容 | 前置Issue |
|---|---|---|---|
| W01 | [#5](https://github.com/wanggan768q/TMOG-Public/issues/5) | Release有效检查与安全测试目标 | 无 |
| W02 | [#6](https://github.com/wanggan768q/TMOG-Public/issues/6) | 便携包许可证与干净环境 | 无 |
| W11 | [#7](https://github.com/wanggan768q/TMOG-Public/issues/7) | 进程网络测量合同 | 无 |
| W20 | [#8](https://github.com/wanggan768q/TMOG-Public/issues/8) | Connections范围合同 | 无 |
| W22 | [#9](https://github.com/wanggan768q/TMOG-Public/issues/9) | Power & Freq能力合同 | 无 |
| W24 | [#10](https://github.com/wanggan768q/TMOG-Public/issues/10) | Benchmarks安全合同 | 无 |
| W10 | [#11](https://github.com/wanggan768q/TMOG-Public/issues/11) | 进程磁盘I/O | #5 |
| W30 | [#12](https://github.com/wanggan768q/TMOG-Public/issues/12) | Windows ARM64验收 | #5、#6 |
| W32 | [#13](https://github.com/wanggan768q/TMOG-Public/issues/13) | 确认跨刷新冻结身份 | #5 |
| W33 | [#14](https://github.com/wanggan768q/TMOG-Public/issues/14) | 关窗收束采样生命周期 | #5 |
| W35 | [#15](https://github.com/wanggan768q/TMOG-Public/issues/15) | MSVC x64验收 | #5、#6 |
| W34 | [#16](https://github.com/wanggan768q/TMOG-Public/issues/16) | 采样失败／暂停刷新闭环 | #5、#14 |
| W03 | [#17](https://github.com/wanggan768q/TMOG-Public/issues/17) | 导航与显示设置 | #16 |
| W09 | [#18](https://github.com/wanggan768q/TMOG-Public/issues/18) | 进程搜索／树形／详情 | #13、#16 |
| W04 | [#19](https://github.com/wanggan768q/TMOG-Public/issues/19) | 整机CPU／内存性能 | #5、#17 |
| W13 | [#20](https://github.com/wanggan768q/TMOG-Public/issues/20) | System Info | #17 |
| W14 | [#21](https://github.com/wanggan768q/TMOG-Public/issues/21) | Startup apps | #17 |
| W15 | [#22](https://github.com/wanggan768q/TMOG-Public/issues/22) | Users | #17 |
| W16 | [#23](https://github.com/wanggan768q/TMOG-Public/issues/23) | Services只读 | #17 |
| W18 | [#24](https://github.com/wanggan768q/TMOG-Public/issues/24) | Installed Apps | #17 |
| W19 | [#25](https://github.com/wanggan768q/TMOG-Public/issues/25) | Disk Space | #17 |
| W21 | [#26](https://github.com/wanggan768q/TMOG-Public/issues/26) | Connections本机查看 | #17、#8 |
| W23 | [#27](https://github.com/wanggan768q/TMOG-Public/issues/27) | Power & Freq真实页 | #17、#9 |
| W25 | [#28](https://github.com/wanggan768q/TMOG-Public/issues/28) | Benchmarks运行页 | #17、#10 |
| W28 | [#29](https://github.com/wanggan768q/TMOG-Public/issues/29) | 主题 | #17 |
| W36 | [#30](https://github.com/wanggan768q/TMOG-Public/issues/30) | Drivers只读 | #17 |
| W05 | [#31](https://github.com/wanggan768q/TMOG-Public/issues/31) | 逻辑核与NUMA | #19 |
| W06 | [#32](https://github.com/wanggan768q/TMOG-Public/issues/32) | 磁盘活动性能 | #19 |
| W07 | [#33](https://github.com/wanggan768q/TMOG-Public/issues/33) | 网络接口性能 | #19 |
| W17 | [#34](https://github.com/wanggan768q/TMOG-Public/issues/34) | 服务安全启动／停止 | #23、#5 |
| W29 | [#35](https://github.com/wanggan768q/TMOG-Public/issues/35) | 自监控 | #19 |
| W08 | [#36](https://github.com/wanggan768q/TMOG-Public/issues/36) | Summary | #19、#32、#33 |
| W12 | [#37](https://github.com/wanggan768q/TMOG-Public/issues/37) | 进程网络活动 | #5、#33、#7 |
| W26 | [#38](https://github.com/wanggan768q/TMOG-Public/issues/38) | Flight Recorder录制 | #19、#32、#33、#27 |
| W27 | [#39](https://github.com/wanggan768q/TMOG-Public/issues/39) | Flight Recorder回放 | #38 |
| W31 | [#40](https://github.com/wanggan768q/TMOG-Public/issues/40) | 全功能与发布验收 | #6、#31、#36、#18、#11、#37、#20、#21、#22、#34、#24、#25、#26、#27、#28、#39、#29、#35、#12、#13、#14、#16、#15、#30 |

## 本地材料

- 完整路线：`2026-10-27-windows-roadmap-tickets.md`。
- 自包含正文：`W01-issue.md` 等，共36份，保存在同一工程计划目录。
- 正文数据合同：`windows-issues-manifest.json`。
- 远端编号与依赖验证记录：`windows-issues-published.json`。
- 可断点恢复的发布工具：`publish_windows_issues.py`。只对带独有标识的本路线票去重，不修改历史 #1/#2。

依赖顺序是阻塞门槛，不是必须单线执行；当票的所有前置已完成且合同已确定即可开始。平台环境、人工合规和安全运行授权仍须满足。

本轮只创建议题与计划材料，未实施应用代码、运行原程序或测试、安装工具、提交或推送。
