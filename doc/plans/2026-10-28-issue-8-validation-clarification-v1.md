# Issue #8 原字节扫描归档验收澄清 v1

> 仅验收命令修订方案，**awaiting_approval**。不修改既有批准计划/历史档案，不授权提交。后续执行者使用批准合同逐项验证，可用 superpowers:executing-plans；所有步骤保留复选框。

**Goal：** 同时保持历史扫描原字节与空白检查，把仅CRLF引起的默认失败单独记录，不全局放宽检查。
**Architecture：** 其他七文件默认检查；唯一固定归档文件使用单次Git `-c core.whitespace=cr-at-eol` 检查，辅以历史/index/worktree原始SHA验证。默认全文件失败诊断保留为事实，不能改写为PASS。
**Tech Stack：** Git 2.46.0.windows.1、PowerShell、Python隔离模式只读原始Git字节；零新依赖/安装/实验。

## 1. 身份、范围与依赖

- run_id=product-20261028-issue8；task_id=issue8-validation-clarification；attempt=1；Plan_i8_20261028_1。
- 主工程E:/Git/TMOG-Public；Dev树E:/Git/TMOG-Public-WorkTree/issue-8-contract-v2-20261028（Plan只读）。
- 原批准计划：doc/plans/2026-10-28-issue-8-contract-revision-plan-v1.md，SHA256 `0fd4828aa09b316428bab1476a24221beedd8f66b0ebe3b50ffb0ddc69977249`，不覆写。
- 唯一例外路径：`doc/plans/issue-8-u16scan-output.txt`；归档历史HEAD `86da6ee019a6aca2d2bc02419f5aa395b94a757f`；SHA256 `7821c9b3243a5b4b9446de1957a191714261d91bb6fd918749a8ff37453b6d30`。
- 本Plan只新增本文件与自己的workflow报告。后续Dev必须得到本澄清用户批准+Product放行后执行验收；提交仍另intent。不得改Git全局/仓库配置、attributes、索引转换、行尾或历史报告；不Normalize档案，不把例外扩至其他文件。
- 首批优先级方案审批独立，不能挪用#8批准；本澄清**改变验收命令**需新独立批准，旧v1内容/字段等其他门槛全部不变。

## 2. 问题来源与独立核验

Product转达Dev：八文件已暂存未提交，默认cached空白检查exit2、484 trailing whitespace均属于扫描CRLF；其他7无错误。Plan只读独立复核：

| 项 | 当前实查 |
|---|---|
| Dev HEAD | 54596d28d96ac497b6100901dcd093e5954ef07c |
| 暂存文件 | 8个新增md/py/txt，详见§3七路径及扫描路径；未提交 |
| `ls-files --eol` | 扫描 i/crlf、w/crlf，无attr转换规则值 |
| 默认all `git diff --check --cached` | exit2、484条trailing whitespace；诊断原始stdout+stderr SHA256 `7e7f011476fbed7bf9e41d7b986544827fe2d1e9d21db16634e625eca21c0d11` |
| 扫描历史/index | 原始Git blob字节均28,472；hash均7821c9...；字节相等；484 CRLF、0 bare LF |
| 扫描工作树 | Get-FileHash同7821c9... |
| 七文件默认check | exit0，stdout/stderr均0字节 |
| 单扫描 `-c core.whitespace=cr-at-eol` check | exit0，stdout/stderr均0字节 |
| 显式core.whitespace配置查询 | exit1、无值；本轮未写config；不据此担保以后配置永不变化 |

这是保留历史字节与默认检查的冲突，不是新文档存在484个普通空格缺陷。`cr-at-eol`只允许行尾CR；Git默认其他空白规则仍启用，不禁止其他诊断。若未来环境显式设置其他whitespace规则，Review需记录实际配置并核验，无权因此悄悄关掉默认错误。

Plan本轮捕获完整诊断于进程内并计算hash，仅工具展示前500字节，**未落盘完整诊断**（避免越本轮两个输出边界）。Dev须在自己的已登记报告/日志边界保留默认命令完整原始输出及exit2；没有该保存证据不能用本Plan摘要冒充完整runtime receipt。

## 3. 最小验收变更建议（用户批准后）

### Task 1：确认固定例外，不提交
- [ ] 用户批准本v1+SHA，明确替代旧计划中的全文件默认空白检查PASS要求仅此CRLF档案；Product记录批准与Dev任务关联。
- [ ] 核对Dev HEAD、暂存路径清单与索引blob；发生文件/HEAD变化重新核验，不假定这次index是最终commit。

### Task 2：三个并列门槛，均保留实际结果

在Dev树使用以下准确PowerShell命令。默认all诊断不作为预期PASS，**真实exit2必须保留**；新增其他错误或数量/路径变化必须调查，不自动豁免。

```powershell
# 诊断：保留完整输出/exit，不能声称该命令通过
git -C E:/Git/TMOG-Public-WorkTree/issue-8-contract-v2-20261028 diff --check --cached

# 门槛A：七个非例外文件默认规则，预期exit0
git -C E:/Git/TMOG-Public-WorkTree/issue-8-contract-v2-20261028 diff --check --cached -- . ':(exclude)doc/plans/issue-8-u16scan-output.txt'

# 门槛B：仅此固定档案，单次命令配置，预期exit0
git -C E:/Git/TMOG-Public-WorkTree/issue-8-contract-v2-20261028 -c core.whitespace=cr-at-eol diff --check --cached -- doc/plans/issue-8-u16scan-output.txt
```

其他七路径：
1. doc/plans/2026-10-28-issue-8-contract-revision-plan-v1.md
2. doc/plans/issue-8-connections-contract-v2.md
3. doc/plans/issue-8-connections-contract.md
4. doc/plans/issue-8-pe-import-parse.py
5. doc/plans/issue-8-review.md
6. doc/plans/issue-8-session-handoff.md
7. doc/plans/issue-8-u16scan.py

A使用exclude pathspec覆盖所有非例外暂存文件，不因为新增第九文件漏检查；实际清单若超批准八文件仍属于范围越界，先停，不由A结果合法化。

门槛C必须对**原始Git字节**验证历史blob、暂存blob、worktree，不用PowerShell文本重定向改变行尾/编码。下面只读Python -I，不执行归档脚本、不写文件：

```powershell
python -I -c "import subprocess,hashlib,pathlib,sys; w='E:/Git/TMOG-Public-WorkTree/issue-8-contract-v2-20261028'; p='doc/plans/issue-8-u16scan-output.txt'; expected='7821c9b3243a5b4b9446de1957a191714261d91bb6fd918749a8ff37453b6d30'; blobs=[subprocess.run(['git','-C','E:/Git/TMOG-Public','show','86da6ee019a6aca2d2bc02419f5aa395b94a757f:'+p],capture_output=True,check=True).stdout,subprocess.run(['git','-C',w,'show',':'+p],capture_output=True,check=True).stdout,pathlib.Path(w,p).read_bytes()]; hashes=[hashlib.sha256(b).hexdigest() for b in blobs]; print('historical/index/worktree',hashes); sys.exit(0 if all(h==expected for h in hashes) and all(b==blobs[0] for b in blobs) else 1)"
```

预期exit0且三个hash都精确等expected；任何不一致为失败，不能说“仅行尾变化所以可接受”。hash固定也使新增普通空白/内容变动无法被cr-at-eol例外掩盖。

### Task 3：独立Review与最终SHA门槛
- [ ] Dev报告如实记录诊断exit2和A/B/C分别exit0及完整日志路径/hash；不得“所有diff --check通过”。原档案只称字节保真，不称规范化质量已改善。
- [ ] 用户批准并由Product确认验收合规后，提交依然另intent；不是本澄清放行。
- [ ] 新最终commit冻结，Review绑定原计划v1SHA+本澄清批准SHA+合同v2SHA+HEAD；A/B改为比较固定base与最终head，C索引selector改为**Review实查固定完整HEAD**blob，与历史expected/worktree校验。具体最终SHA必须在Review任务合同提供，不猜测未来值；此计划现在无最终commit。
- [ ] 默认all失败诊断保留，独立Review重新证实只此CRLF路径，并验证其他原批准验收、代码diff范围/文档内容不变。若发现非CRLF尾空白，B仍失败或C失败，停回Product。

## 4. 替代与风险

当前实查建议可行，优先采用单次单文件例外+hash。替代“仅hash而跳空白检查”漏格式诊断，不推荐；“转LF再保存”破坏已批准原字节归档，不采用；全局core.whitespace/attributes放宽会影响无关任务，不授权。若Git版本或配置导致本选项不足，重新提供失败receipt，可将历史原档案只作为外部只读引用、不纳入提交，但这是交付范围改变，需新计划用户批准，不能自动换方案。

Git检查本轮基于暂存新增patch，不替代内容审核/证据级别/业务验收；数量484不是所有未来diff固定断言，固定字节hash与诊断路径才是保真门槛。Python解释器当前可用，不需安装；未来不可用先阻塞或批准等价原始bytes读取方法，不能用文本流假校验。

## 5. 验收与待办状态

本澄清可观察交付：诊断原始exit2/路径/CRLF数量与三个hash成立；A/B各exit0；新方案未改变档案/索引/config，原批准计划与历史报告保留；记录验收变更来源、影响、替代与批准门槛。**本轮只完成澄清草稿，待用户批准**；Dev仍blocked，不提交、不把此前原批准当此例外已授权。
