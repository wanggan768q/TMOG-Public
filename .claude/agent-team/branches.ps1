# 只读：输出本地任务分支 / worktree / PR 状态的 Markdown 表，供 Product 写入 BOARD.md。
# 不删除任何东西；"建议"列只是候选，真正清理仍按 README“关闭与清理”逐项核查。
[CmdletBinding()]
param([switch]$NoFetch)
$ErrorActionPreference = 'Stop'
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
    try {
        gh pr list --state all --limit 200 --json number,state,headRefName,headRefOid | ConvertFrom-Json |
            ForEach-Object { if (-not $prs.ContainsKey($_.headRefName)) { $prs[$_.headRefName] = $_ } }
    } catch { Write-Warning "gh 不可用，PR 列为 unknown：$($_.Exception.Message)" }
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
