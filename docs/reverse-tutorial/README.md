# Task Manager TMOG 逆向分析产物索引

> 来源：`F:\Work\txtest\Task Manager TMOG\`（2026-10-26 归档入库）
> 授权前提：仅用于本机自有软件的授权测试。
> 关联 issue：[#1 复刻 Task Manager v1.1.0](https://github.com/wanggan768q/TMOG-Public/issues/1)

## 顶层文档（阅读顺序）

| 文件 | 内容 |
|---|---|
| `analysis_overview.md` / `analysis_v101.md` | REA 二进制概览 evidence（v1.0.1：8098 函数 / 8765 字符串） |
| `license_analysis_v101.md` | v1.0.1 授权机制完整规格：网络协议、machineId 派生、请求体 JSON、验证链 |
| `POC_vulnerability_report_v101.md` | v1.0.1 审计最终版：Ed25519 验签细节（内嵌公钥、群阶表、常数时间比较）、动态验证结论 |
| `patch_bypass_analysis_v101.md` | v1.0.1 补丁点审计（3 处 10 字节） |
| `patch_bypass_analysis_v110.md` | **v1.1.0 回归审计（本次复刻的主要规格）**：门控拓扑表、3 处 9 字节补丁点、动态验证矩阵 |
| `REVERSE_TUTORIAL.md` | 从零手动复现指南：REA CLI + Ghidra 12.1.4 完整操作流程 |
| `poc_license.json` | POC 测试用 license 结构样例 |
| `screenshot_baseline_pro_page.png` / `screenshot_patched_pro_page.png` | 基线 vs 补丁版 Pro 页对比截图 |

## evidence/ 子目录（224 个原始分析文件）

- `f110_*.md` — v1.1.0 关键函数分析（Pro 写入、getter、feature 判定、网络激活 WorkerLicenseService::Activate 等）
- `func_*.md` — v1.0.1 函数反编译记录
- `trace_*.md` — 调用追踪记录（bcrypt、guid、licserv、machineid、pem、sig 等）
- `search_*.md` — 字符串侦察记录
- `s110_*.md` — v1.1.0 追踪记录
- `body_*.txt` — 网络请求体抓包 dump

## 未入库项

- `tmog101.snapshot`（241.6M）/ `tmog110.snapshot`（62.2M）— Ghidra 分析快照，超过 GitHub 100M 单文件限制，留在 F 盘原目录。复用方法见 `REVERSE_TUTORIAL.md` §0.2（`GHIDRA_INSTALL_DIR` 指向 F 盘 + `--snapshot` 参数）。
- `ghidra_12.1.4_PUBLIC/`、`GhidraMCP-release-1-4/` — 工具本体，不入库。
- 各版本 exe 原件 — 在仓库 `Raw/` 目录（v1.1.0 两个）。
