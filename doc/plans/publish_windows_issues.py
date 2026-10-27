"""发布已批准的 Windows 议题；支持按映射断点续跑，不修改现有 #1/#2。"""
import json
import os
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parent
MANIFEST = ROOT / "windows-issues-manifest.json"
MAPPING = ROOT / "windows-issues-published.json"


def gh(*args):
    env = dict(os.environ, GH_PAGER="", GH_PROMPT_DISABLED="1")
    result = subprocess.run(["gh", *args], capture_output=True, text=True,
                            encoding="utf-8", errors="strict", env=env)
    if result.returncode:
        raise RuntimeError(result.stderr.strip() or result.stdout.strip())
    return result.stdout.strip()


def persist(state):
    temporary = MAPPING.with_suffix(".json.tmp")
    temporary.write_text(json.dumps(state, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    temporary.replace(MAPPING)


def body(ticket, published):
    blockers = ticket["blocked_by"]
    dependencies = "\n".join(f"- #{published[b]['number']}（{b}）" for b in blockers) if blockers else "无，可立即开始。"
    checks = "\n".join("- [ ] " + c for c in ticket["acceptance"])
    scope = "\n".join("- " + c for c in ticket["scope"])
    return f"""<!-- tmog-windows-roadmap-2026-10-27:{ticket['id']} -->
## 计划编号

{ticket['id']}；来自维护者于 2026-10-27 批准的 Windows 后续拆分。历史首轮 #1 已完成；本票仅增加或收尾所述能力，不重做首轮。

## What to build

{ticket['goal']}

## 实现边界

{scope}

## Acceptance criteria

{checks}

## Blocked by

{dependencies}

此列表保留为可读的依赖说明；同时尝试登记 GitHub 原生阻塞关系。阻塞票关闭且其合同已确认后才能开始本票。

## 共用约束与验证要求

- 沿用现有 C++20、Qt Widgets、CMake 及已完成的进程身份／可用性／安全操作能力，不改成新 UI 框架、不预建服务、插件、数据库或商业授权系统。
- Windows 优先；Linux／macOS 仅由 #2 暂缓记录，不是本票的依赖或实现范围。原厂 Windows 使用 C++／Win32，本项目为独立 Qt 实现，不承诺像素级或原厂格式等价。
- 实测零值、待采样、不可用、陈旧与缺样分别表示，禁止假数据。系统汇总不靠进程求和，功耗不按 CPU% 伪造。
- 不连接厂商授权／遥测、不使用补丁解锁、不复用许可证、密钥或厂商品牌资产，不默认启用更新检查或自动下载。
- 不自动提权、不绕过系统保护；危险操作必须确认并绑定身份。所有破坏性检查仅针对明确创建的可丢弃对象，禁止真实关键系统对象实验。
- 至少有一个可运行行为检查，Debug／Release 必须有效；实际功能还须 UI／实机证据。构建、自动检查、运行及人工验收分别记录，缺少硬件／权限／环境则标阻塞或未验证，不伪报通过。
- 工具安装、原件运行、创建系统测试服务、外部 runner／凭据、签名或公网发布不由本票自动授权；维护者具备条件并明确许可后执行。
- 原版证据不足的字段明确为自主设计；范围合同票必须交付确定合同并获维护者确认，不能以继续调研关闭。
- 所有计划、设计和验收记录保存到当前工程 doc/plans；Issue 本文为独立执行合同，不依赖本聊天或工程外文档。

## 来源与交付

官网功能参考：https://www.tmog.org/ 。官网声明不替代 Windows 行为验证。

完成时在本票记录检查命令／结果、实机环境、演示路径、失败状态、支持限制和对应变更；维护者自行按 Issue 实现。本次创建议题不会开始编码。
"""


def main():
    manifest = json.loads(MANIFEST.read_text(encoding="utf-8"))
    tickets = manifest["tickets"]
    repo = manifest["repository"]
    by_id = {t["id"]: t for t in tickets}
    if len(by_id) != 36 or len(tickets) != 36:
        raise ValueError("议题应有36个唯一计划编号")
    for t in tickets:
        if not t["scope"] or not t["acceptance"] or any(b not in by_id for b in t["blocked_by"]):
            raise ValueError(f"不完整议题: {t['id']}")
    order, remaining = [], list(tickets)
    while remaining:
        ready = [t for t in remaining if all(b in order for b in t["blocked_by"])]
        if not ready:
            raise ValueError("阻塞依赖存在循环")
        for t in ready:
            order.append(t["id"])
            remaining.remove(t)
    state = json.loads(MAPPING.read_text(encoding="utf-8")) if MAPPING.exists() else {
        "repository": repo, "tickets": {}, "edges": [], "edge_errors": []}
    published = state["tickets"]
    existing = json.loads(gh("issue", "list", "--repo", repo, "--state", "all", "--limit", "200",
                             "--json", "number,title,body,url"))
    for t_id in order:
        ticket = by_id[t_id]
        marker = f"<!-- tmog-windows-roadmap-2026-10-27:{t_id} -->"
        matches = [i for i in existing if marker in i["body"]]
        if len(matches) > 1:
            raise ValueError(f"存在重复发布标识: {t_id}")
        if t_id in published:
            print(f"保留 {t_id} #{published[t_id]['number']}", flush=True)
            continue
        if matches:
            item = matches[0]
        else:
            title = f"[Windows {t_id}] {ticket['title']}"
            text = body(ticket, published)
            issue_file = ROOT / f"{t_id}-issue.md"
            issue_file.write_text(text, encoding="utf-8")
            url = gh("issue", "create", "--repo", repo, "--title", title,
                     "--body-file", str(issue_file), "--label", "ready-for-agent")
            number = int(url.rstrip("/").rsplit("/", 1)[1])
            item = {"number": number, "title": title, "url": url, "body": text}
            existing.append(item)
        published[t_id] = {"number": item["number"], "title": item["title"], "url": item["url"]}
        persist(state)
        print(f"已创建 {t_id} #{item['number']}", flush=True)
    database_ids = {}
    for t_id in order:
        number = published[t_id]["number"]
        data = json.loads(gh("api", f"repos/{repo}/issues/{number}"))
        database_ids[t_id] = data["id"]
    errors = []
    for t_id in order:
        for blocker in by_id[t_id]["blocked_by"]:
            edge = f"{t_id}<-{blocker}"
            if edge in state["edges"]:
                continue
            try:
                gh("api", "--method", "POST",
                   f"repos/{repo}/issues/{published[t_id]['number']}/dependencies/blocked_by",
                   "-F", f"issue_id={database_ids[blocker]}")
                state["edges"].append(edge)
                print(f"已登记依赖 {edge}", flush=True)
            except RuntimeError as exc:
                errors.append({"edge": edge, "error": str(exc)})
                print(f"依赖API未成功 {edge}: {exc}；正文已有回退说明", flush=True)
            persist(state)
    state["edge_errors"] = errors
    persist(state)
    # 读取远端验证所有议题正文与原生依赖，不以创建输出代替验收。
    verification = []
    for t_id in order:
        expected = by_id[t_id]
        number = published[t_id]["number"]
        item = json.loads(gh("api", f"repos/{repo}/issues/{number}"))
        if item["title"] != f"[Windows {t_id}] {expected['title']}" or "Acceptance criteria" not in item["body"]:
            raise ValueError(f"远端正文／标题不符 {t_id}")
        for b in expected["blocked_by"]:
            if f"#{published[b]['number']}（{b}）" not in item["body"]:
                raise ValueError(f"正文依赖缺失 {t_id}<-{b}")
        actual = json.loads(gh("api", f"repos/{repo}/issues/{number}/dependencies/blocked_by"))
        if not isinstance(actual, list):
            raise ValueError(f"依赖API返回形状异常 {t_id}")
        actual_ids = {i["id"] for i in actual}
        native_ok = actual_ids == {database_ids[b] for b in expected["blocked_by"]}
        verification.append({"id": t_id, "number": number, "native_dependencies_verified": native_ok})
        print(f"已验证 {t_id} #{number} 原生依赖={native_ok}", flush=True)
    state["verification"] = verification
    persist(state)
    print(f"完成：{len(published)}个议题，{len(state['edges'])}条原生依赖，{len(errors)}条API错误。", flush=True)
    if errors or not all(v["native_dependencies_verified"] for v in verification):
        sys.exit(2)


if __name__ == "__main__":
    main()
