# 工作流实测纪律缺陷修复与复测

用户已明确“继续修复”。基于 WF-SMOKE-01 结果及 addendum-1，不重写旧证据或已通过的问候实现。

## 根因

提示词约定未提供可验证的活动槽放行标识；Review直接消息与Product放行存在竞争。报告和日志没有统一的排他写入/真实时钟入口，角色把追加当不可覆写、共写日志、事后补写时间与RED结论。

## 最小修复

- runtime.ps1点加载助手：CreateNew活动槽+唯一grant，每组操作前Assert；Product核验RELEASE_READY后释放旧grant，发新grant。未知占用保留，不冒称权限沙箱或自动进程检测。
- Write-TeamReport CreateNew，已存在报告拒写；更新新版本。
- Add-TeamRecord角色独立日志、排他追加、真实UTC；原始RED/GREEN命令/退出码/输出当次留痕，回放不补历史。
- 更新合同和五角色正文，tools不变；TeamReview用户独立边界不变。

## 验证

- [x] runtime.tests首次缺实现失败（RED）。
- [x] 当前回归通过：无grant/错actor/过期grant拒绝、槽占用拒绝、报告拒覆盖、角色分日志、真实UTC与RED receipt。
- [x] 配置自检及diff --check通过。
- [ ] 独立代码审查及必要修正。
- [ ] 真实两角色grant交接/迟到PASS拒绝/报告新版本/日志隔离复测，独立run记录，旧证据保留。

时间测试的中间失败来自ConvertFrom-Json自动转换DateTime后默认string格式，已改从原始UTC字段解析，生产仍真实UTC。尚未声称真实复测通过。不提交、不推送、不操作GitHub、不关闭旧测试资源。
