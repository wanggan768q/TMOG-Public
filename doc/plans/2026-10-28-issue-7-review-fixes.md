# Issue #7：D1–D8 审查修正记录

日期：2026-10-28。范围：`E:/Git/TMOG-Public-WorkTree/issue-7-process-network-contract`，基于已审 `07a8002`；用户批准修正审查发现。仅改合同与研究文档，未修改探针源码或原始 run 日志，没有新实验、提交、推送、合并或关票。

## 逐项结果

| 发现 | 修正结果 | 证据与仍保留的限制 |
|---|---|---|
| D1 活跃事件率低报 | 已修。撤回“瞬时数千/s”和全会话总量除以单独2.5s尾窗；记录210265/229449全会话总数及约3s估算，量级约7–9万/s | 保存源码有300ms预热+未计时子进程+2500ms尾窗；无起止时间戳，精确事件率/瞬时峰值仍未知。run10约29.9/s只对应0x20，不作为完整0x30安静基线 |
| D2 hdrPid/payloadPid计数混用 | 已修。各桶明确维度，撤回可靠归属下“77824=65536+server12288”的解释 | run12 hdrPid25584的op10/11/18各65536；run13 hdrPid73356的op10=65536、op11/18各77824。payloadPID子进程混合总量两轮均196608=3×65536，只是自洽旁证；payloadPid×opcode分解未留存 |
| D3 零事件归因与hdrPid恒4 | 已修。头PID有时正确、有时4或别的进程；早期零事件根因改未知 | run2 total events=0不能由PID归属误读解释；保留消费者先就绪防线，不伪造竞态/配置原因 |
| D4 op18专门输出未归档 | 已修。明确仅源码/构建入口保存，运行输出不可复查 | 不追加运行、不凭源码重建成功输出；op18防双计仅引用已保存run12/13与MOF语义 |
| D5 端口数值和mDNS定性 | 已修。样例sport=61226、dport=63465；背景UDP应用协议与跨主机性质未证实 | `ef2a`/`f7e9`按网络序解码。PID69688、size1102保持；撤回“外部mDNS、归属合理” |
| D6 EventsLost状态演练 | 已修。合同未实测表及研究留存限制明确标未触发 | 已保存有效QUERY样例均为0；run11输出为空，不能称全部13轮均完成有效QUERY |
| D7 UDP size已知量对照 | 已修。明确MOF候选口径与背景观察，载荷字节精度未验证 | UDP回环盲区按本机/场景限定为不可用非0；背景事件无独立实发量基准 |
| D8 MinimumBuffers不一致 | 已修。候选合同与推荐组合固定64KB/Min16/Max64/Flush1s | 官方一般缓冲建议保留为引用，不是本项目另一组参数。名义1MB/4MB不冒充已测常驻总量 |

与 D1 的资源评估一并纠正：保存探针使用 `std::map`，查找/插入为O(log P)，不是O(1)；没有证明每PID桶总内存仅48B，CPU<1%仍为未验证目标。不新增生产结构或资源实验。

## 只读离线核查结果

使用 `python -I` 从可信脚本环境只读解析已保存文件，没有执行exe、创建ETW会话、使用logman或产生网络流量。

```text
run12-output.txt total=210265
payload_pid=72860 all_opcode_bytes=196608
header_bucket=25584 op10/11/18=[65536,65536,65536]
按3s估算事件率=70088.3/s（估算，不是实测时长/峰值）

run13-output.txt total=229449
payload_pid=73356 all_opcode_bytes=196608
header_bucket=73356 op10/11/18=[65536,77824,77824]
按3s估算事件率=76483.0/s（估算，不是实测时长/峰值）

UDP sample PID=69688 size=1102 sport=61226 dport=63465
run11-unpriv.txt与run11-err.txt均0字节
没有op18专门输出文件
```

可重复的最小计数检查（PowerShell，仅读本工作树的已保存日志）：

```powershell
python -I -c "from pathlib import Path; import re; r=Path('E:/Git/TMOG-Public-WorkTree/issue-7-process-network-contract/research/issue7/etw-probe'); [(print(n, re.search(r'total events=(\d+)', (r/n).read_text(encoding='utf-8')).group(1))) for n in ('run12-output.txt','run13-output.txt')]; assert int.from_bytes(bytes.fromhex('ef2a'),'big')==61226; assert int.from_bytes(bytes.fromhex('f7e9'),'big')==63465"
```

## 交付与边界

修改文件：
- `doc/plans/2026-10-27-issue-7-measurement-contract.md`
- `doc/plans/2026-10-27-issue-7-network-feasibility-research.md`
- 本记录 `doc/plans/2026-10-28-issue-7-review-fixes.md`

D1–D8 的文档误述已修；缺失实验/输出仍明确未验证，未伪造补证。既往管理员ETW实验的授权缺失事实与后续须先批准的边界保持，合同仍待维护者确认，#37不解锁。本记录是修正核查，不替代新一轮独立Review。
