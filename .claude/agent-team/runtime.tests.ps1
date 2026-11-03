$ErrorActionPreference = 'Stop'
$helper = Join-Path $PSScriptRoot 'runtime.ps1'
if (-not (Test-Path $helper)) { throw '缺少运行纪律助手。' }
$originalPreference = $ErrorActionPreference
$ErrorActionPreference = 'Continue'
. $helper
if ($ErrorActionPreference -ne 'Continue') { throw '助手点加载改变了调用者错误策略。' }
$ErrorActionPreference = $originalPreference
$root = Join-Path ([IO.Path]::GetTempPath()) ('tmog-runtime-' + [guid]::NewGuid())
[IO.Directory]::CreateDirectory($root) | Out-Null
function Rejects([scriptblock]$Action) {
    $failed = $false
    try { & $Action | Out-Null } catch { $failed = $true }
    if (-not $failed) { throw '应拒绝的操作被接受。' }
}
try {
    $lockPath = Join-Path $root 'slot-1.lock'
    $lock = [IO.File]::Open($lockPath, [IO.FileMode]::OpenOrCreate, [IO.FileAccess]::ReadWrite, [IO.FileShare]::None)
    try { Rejects { Grant-TeamSlot $root 'blocked-grant' } } finally { $lock.Dispose() }
    Rejects { Assert-TeamSlot $root 'dev-a1' 'no-grant' }
    $grant = Grant-TeamSlot $root 'dev-a1'
    Assert-TeamSlot $root 'dev-a1' $grant
    $lock = [IO.File]::Open($lockPath, [IO.FileMode]::OpenOrCreate, [IO.FileAccess]::ReadWrite, [IO.FileShare]::None)
    try { Rejects { Release-TeamSlot $root 'dev-a1' $grant } } finally { $lock.Dispose() }
    Assert-TeamSlot $root 'dev-a1' $grant
    Rejects { Grant-TeamSlot $root 'review-1' }
    Rejects { Assert-TeamSlot $root 'review-1' $grant }
    Rejects { Release-TeamSlot $root 'dev-a1' 'wrong' }
    Release-TeamSlot $root 'dev-a1' $grant
    Rejects { Assert-TeamSlot $root 'dev-a1' $grant }
    $reviewGrant = Grant-TeamSlot $root 'review-1'
    Rejects { Assert-TeamSlot $root 'dev-a1' $grant }
    Release-TeamSlot $root 'review-1' $reviewGrant
    $next = Grant-TeamSlot $root 'dev-a1'
    Rejects { Assert-TeamSlot $root 'dev-a1' $grant }
    Assert-TeamSlot $root 'dev-a1' $next

    $report = Join-Path $root 'report-1.md'
    Write-TeamReport $report '原报告'
    Rejects { Write-TeamReport $report '追加也不得覆盖' }
    if ([IO.File]::ReadAllText($report) -cne '原报告') { throw '旧报告被修改。' }

    $draft = Join-Path $root 'draft.md'
    $body = "# 中文报告`n" + '```powershell' + "`n" + '$Name = "甲"' + "`n" + '```' + "`nEXIT=1`nWF_RETEST_RED"
    [IO.File]::WriteAllText($draft, $body, [Text.UTF8Encoding]::new($false))
    $published = Join-Path $root 'report-2.md'
    Publish-TeamReport $draft $published @('```powershell', '$Name = "甲"', 'EXIT=1', 'WF_RETEST_RED')
    if ([IO.File]::ReadAllText($published) -cne $body) { throw '报告正文在传输中改变。' }
    Rejects { Publish-TeamReport $draft $published @('WF_RETEST_RED') }
    $missing = Join-Path $root 'incomplete.md'
    Rejects { Publish-TeamReport $draft $missing @('不存在的证据') }
    if (Test-Path $missing) { throw '缺证据报告不应落盘。' }

    $checkScript = Join-Path $root 'check[1].ps1'
    [IO.File]::WriteAllText($checkScript, '[Console]::Out.Write("raw-out"); [Console]::Error.Write("raw-err"); exit 7')
    $outside = Join-Path ([IO.Path]::GetDirectoryName($root)) ('outside-' + [guid]::NewGuid())
    Rejects { Invoke-TeamCheck $checkScript $outside $root 'dev-a1' $next }
    if ([IO.File]::Exists("$outside.reserve") -or [IO.Directory]::Exists($outside)) { throw '越界检查创建了产物。' }
    $evidence = Join-Path $root 'execution-1'
    $receipt = Invoke-TeamCheck $checkScript $evidence $root 'dev-a1' $next
    if ($receipt.exit_code -ne 7) { throw '未保存实际退出码。' }
    if ([IO.File]::ReadAllText((Join-Path $evidence 'stdout.txt')) -cne 'raw-out') { throw 'stdout 被改变。' }
    if ([IO.File]::ReadAllText((Join-Path $evidence 'stderr.txt')) -cne 'raw-err') { throw 'stderr 被改变。' }
    if ($receipt.stdout_sha256 -cne (Get-FileHash (Join-Path $evidence 'stdout.txt')).Hash) { throw '摘要未自动取实际值。' }
    if ($receipt.script_after_sha256 -cne (Get-FileHash -LiteralPath $checkScript).Hash) { throw '合法方括号路径的脚本摘要错误。' }
    Rejects { Invoke-TeamCheck $checkScript $evidence $root 'dev-a1' $next }
    Rejects { Invoke-TeamCheck $checkScript (Join-Path $root 'ungranted') $root 'dev-a1' $grant }
    if (Test-Path (Join-Path $root 'ungranted')) { throw '无grant创建了执行证据。' }

    $occupied = Join-Path $root 'already-existing'
    [IO.Directory]::CreateDirectory($occupied) | Out-Null
    Rejects { Invoke-TeamCheck $checkScript $occupied $root 'dev-a1' $next }
    if ([IO.File]::Exists((Join-Path $occupied 'stdout.txt'))) { throw '已有目录仍启动了检查。' }
    $largeScript = Join-Path $root 'large.ps1'
    [IO.File]::WriteAllText($largeScript, '[Console]::Out.Write(("o" * 200000)); [Console]::Error.Write(("e" * 200000))')
    $largePath = Join-Path $root 'large-evidence'
    $large = Invoke-TeamCheck $largeScript $largePath $root 'dev-a1' $next
    if ([IO.File]::ReadAllBytes($large.stdout_path).Length -ne 200000 -or [IO.File]::ReadAllBytes($large.stderr_path).Length -ne 200000) { throw '双流压力捕获缺失。' }
    if ($large.stderr_sha256 -cne (Get-FileHash -LiteralPath $large.stderr_path).Hash) { throw 'stderr摘要错误。' }
    if (-not $large.started_utc -or -not $large.ended_utc) { throw '未记录真实开始结束UTC。' }

    Add-TeamRecord $root 'dev-a1' 'intent' @{ operation_id = 'red-1'; command = 'pwsh check.ps1' }
    Add-TeamRecord $root 'dev-a1' 'receipt' @{ operation_id = 'red-1'; exit_code = 1; output = '实际失败' }
    Add-TeamRecord $root 'review-1' 'receipt' @{ operation_id = 'check-1'; exit_code = 0 }
    $raw = Get-Content (Join-Path $root 'dev-a1.ops.jsonl')
    $dev = $raw | ForEach-Object { $_ | ConvertFrom-Json }
    if (@($dev).Count -ne 2 -or $dev[1].data.exit_code -ne 1) { throw 'RED receipt 未保留。' }
    if ($raw[0] -notmatch '"utc":"([^"]+)"') { throw '缺少 UTC。' }
    if ([datetimeoffset]::Parse($Matches[1]) -lt [datetimeoffset]::UtcNow.AddMinutes(-1)) { throw '未记录真实 UTC。' }
    if (-not (Test-Path (Join-Path $root 'review-1.ops.jsonl'))) { throw '角色日志未隔离。' }
    Rejects { Add-TeamRecord $root '../escape' 'receipt' @{} }
    'PASS：槽位旧授权拒绝、跨角色拒绝、报告不可变、角色日志及实际UTC/RED留痕。'
} finally {
    Remove-Item -LiteralPath $root -Recurse -Confirm:$false
}
