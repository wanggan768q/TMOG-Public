# 只读查询：输出本地分支 / worktree / PR 状态的 Markdown 表，供 Lead 写入 .workflow/BOARD.md。
# 不删除任何东西、不改分支/提交；默认会 `git fetch origin --prune` 更新 remote-tracking refs，
# 只做纯本地查询时用 -NoFetch 跳过网络。gh 不可用或非零退出时 PR 列记为 unknown，不当作“无 PR”。
# "建议"列只是候选，真正清理仍按 .dsh/team/README.md 的核对规则逐项确认。
[CmdletBinding()]
param([switch]$NoFetch)
$ErrorActionPreference = 'Stop'
# .dsh/team 的上两级是工程根。
$root = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../..'))
Push-Location $root
try {
    if (-not $NoFetch) { git fetch origin --prune --quiet }
    $wt = @{}
    $path = $null
    foreach ($line in git worktree list --porcelain) {
        if ($line -like 'worktree *') { $path = $line.Substring(9) }
        elseif ($line -like 'branch refs/heads/*') { $wt[$line.Substring(18)] = $path }
    }
    $prs = @{}
    $gh = Get-Command gh -ErrorAction SilentlyContinue
    if (-not $gh) {
        Write-Warning 'gh 不可用，PR 列为 unknown。'
    } else {
        try {
            $prJson = gh pr list --state all --limit 200 --json number,state,headRefName,headRefOid
            # 原生命令非零退出不会触发 PowerShell 异常，必须显式检查，避免把失败当成“无 PR”。
            if ($LASTEXITCODE -ne 0) { throw "gh 退出码 $LASTEXITCODE" }
            $prJson | ConvertFrom-Json |
                ForEach-Object { if (-not $prs.ContainsKey($_.headRefName)) { $prs[$_.headRefName] = $_ } }
        } catch { Write-Warning "gh 查询失败，PR 列为 unknown：$($_.Exception.Message)" }
    }
    $merged = @(git branch --format='%(refname:short)' --merged origin/main)

    '| 分支 | 推断任务 | worktree | 相对 origin/main (落后/领先) | PR | 已并入 main | 建议 |'
    '|---|---|---|---|---|---|---|'
    foreach ($b in git branch --format='%(refname:short)') {
        if ($b -eq 'main') { continue }
        $task = if ($b -match 'issue-?(\d+)') { "#$($Matches[1])" } else { '-' }
        $dir = if ($wt.ContainsKey($b)) { $wt[$b] } else { '-' }
        $lr = (git rev-list --left-right --count "origin/main...$b") -split '\s+'
        $tip = git rev-parse $b
        $pr = $prs[$b]
        $prText = if ($pr) { "#$($pr.number) $($pr.state)" } else { '无' }
        $isMerged = $b -in $merged
        $advice =
            if ($pr -and $pr.state -eq 'MERGED' -and $pr.headRefOid -eq $tip) { '可清理（PR 已合并且无新提交）' }
            elseif ($pr -and $pr.state -eq 'MERGED') { '保留：合并后有新提交' }
            elseif ($pr -and $pr.state -eq 'OPEN') { '进行中' }
            elseif ($pr -and $pr.state -eq 'CLOSED') { '待用户确认：PR 已关闭未合并' }
            elseif ($isMerged -and $lr[1] -eq '0') { '可清理候选（内容已在 main，无 PR）' }
            else { '待用户确认：无 PR 的未合并提交' }
        "| $b | $task | $dir | $($lr[0])/$($lr[1]) | $prText | $(if ($isMerged) {'是'} else {'否'}) | $advice |"
    }
} finally { Pop-Location }
