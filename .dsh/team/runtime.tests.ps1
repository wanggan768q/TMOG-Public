# DSH 团队运行纪律测试：只验证“点加载”助手与证据纪律，不启动会话、不执行任务。
# 覆盖：报告不可变与逐字发布、证据根越界、真实退出码与双流原文、摘要、操作日志。
$ErrorActionPreference = 'Stop'

$helper = Join-Path $PSScriptRoot 'runtime.ps1'
if (-not (Test-Path -LiteralPath $helper)) { throw '缺少运行纪律助手。' }

# 点加载不得改变调用者的错误策略。
$callerPreference = $ErrorActionPreference
$ErrorActionPreference = 'Continue'
. $helper
if ($ErrorActionPreference -ne 'Continue') { throw '助手点加载改变了调用者错误策略。' }
$ErrorActionPreference = $callerPreference

$root = Join-Path ([IO.Path]::GetTempPath()) ('dsh-team-runtime-' + [guid]::NewGuid())
[IO.Directory]::CreateDirectory($root) | Out-Null
$outside = $null

function Rejects([scriptblock]$Action) {
    $failed = $false
    try { & $Action | Out-Null } catch { $failed = $true }
    if (-not $failed) { throw '应拒绝的操作被接受。' }
}

function Get-Sha([string]$Path) {
    (Get-FileHash -LiteralPath $Path -Algorithm SHA256 -ErrorAction Stop).Hash
}

# PowerShell 7.5+ 的 ConvertFrom-Json 会把 ISO 时间字符串转成 DateTime；统一转成 UTC 再比较。
function Get-Utc([object]$Value) {
    if ($Value -is [datetimeoffset]) { return $Value.UtcDateTime }
    if ($Value -is [datetime]) { return $Value.ToUniversalTime() }
    return [datetime]::Parse([string]$Value, [cultureinfo]::InvariantCulture, [System.Globalization.DateTimeStyles]::RoundtripKind).ToUniversalTime()
}

try {
    $utf8 = [Text.UTF8Encoding]::new($false)

    # ---- 1. Write-TeamReport：拒覆盖、UTF-8 无 BOM ----
    $report = Join-Path $root 'report-1.md'
    Write-TeamReport $report '原报告'
    Rejects { Write-TeamReport $report '追加也不得覆盖' }
    if ([IO.File]::ReadAllText($report, $utf8) -cne '原报告') { throw '旧报告被修改。' }
    $reportBytes = [IO.File]::ReadAllBytes($report)
    if ($reportBytes.Length -ge 3 -and $reportBytes[0] -eq 0xEF -and $reportBytes[1] -eq 0xBB -and $reportBytes[2] -eq 0xBF) {
        throw '报告写入带 UTF-8 BOM。'
    }

    # ---- 2. Publish-TeamReport：必需证据、不可覆盖、逐字一致、SHA256 ----
    $draft = Join-Path $root 'draft.md'
    $body = "# 中文报告`n" + '```powershell' + "`n" + '$Name = "甲"' + "`n" + '```' + "`nEXIT=1`nDSH_RUNTIME_RED"
    [IO.File]::WriteAllText($draft, $body, $utf8)

    $noEvidence = Join-Path $root 'no-evidence.md'
    Rejects { Publish-TeamReport $draft $noEvidence @() }
    if ([IO.File]::Exists($noEvidence)) { throw '未声明必需证据仍写入了报告。' }

    $blankEvidence = Join-Path $root 'blank-evidence.md'
    Rejects { Publish-TeamReport $draft $blankEvidence @('DSH_RUNTIME_RED', '   ') }
    if ([IO.File]::Exists($blankEvidence)) { throw '空白必需证据仍写入了报告。' }

    $missing = Join-Path $root 'missing-evidence.md'
    Rejects { Publish-TeamReport $draft $missing @('不存在的证据') }
    if ([IO.File]::Exists($missing)) { throw '缺必需证据仍写入了报告。' }

    $published = Join-Path $root 'report-2.md'
    $publishedHash = Publish-TeamReport $draft $published @('```powershell', '$Name = "甲"', 'EXIT=1', 'DSH_RUNTIME_RED')
    if ([IO.File]::ReadAllText($published, $utf8) -cne $body) { throw '报告正文在传输中改变。' }
    if ([Convert]::ToBase64String([IO.File]::ReadAllBytes($draft)) -cne [Convert]::ToBase64String([IO.File]::ReadAllBytes($published))) {
        throw '发布报告与草稿不是逐字一致。'
    }
    if ($publishedHash -cne (Get-Sha $published)) { throw '返回的 SHA256 与实际文件不一致。' }

    Rejects { Publish-TeamReport $draft $published @('DSH_RUNTIME_RED') }
    if ([IO.File]::ReadAllText($published, $utf8) -cne $body) { throw '已发布报告被覆盖。' }

    # ---- 3. Assert-TeamEvidencePath：空根拒绝、严格子路径 ----
    $evidenceRoot = Join-Path $root 'evidence'
    [IO.Directory]::CreateDirectory($evidenceRoot) | Out-Null
    Rejects { Assert-TeamEvidencePath (Join-Path $evidenceRoot 'ok') '' }
    Rejects { Assert-TeamEvidencePath $evidenceRoot $evidenceRoot }
    $outside = Join-Path ([IO.Path]::GetDirectoryName($root)) ('dsh-outside-' + [guid]::NewGuid())
    Rejects { Assert-TeamEvidencePath $outside $evidenceRoot }
    Assert-TeamEvidencePath (Join-Path $evidenceRoot 'ok') $evidenceRoot

    # ---- 4. Invoke-TeamCheck：越界/非法执行者/占用拒绝，真实退出码与原文 ----
    $checkScript = Join-Path $root 'check[1].ps1'
    [IO.File]::WriteAllText($checkScript, '[Console]::Out.Write("raw-out"); [Console]::Error.Write("raw-err"); exit 7', $utf8)
    $scriptHashBefore = Get-Sha $checkScript

    # 越界证据根：拒绝且不创建 reserve 与证据目录。
    $outsideEvidence = Join-Path $outside 'execution'
    Rejects { Invoke-TeamCheck $checkScript $outsideEvidence $evidenceRoot 'dev-a1' }
    if ([IO.File]::Exists("$outsideEvidence.reserve") -or [IO.Directory]::Exists($outsideEvidence)) { throw '越界检查创建了产物。' }

    # 非法执行者标识：拒绝且不创建产物。
    $badActorEvidence = Join-Path $evidenceRoot 'bad-actor'
    Rejects { Invoke-TeamCheck $checkScript $badActorEvidence $evidenceRoot '../escape' }
    if ([IO.File]::Exists("$badActorEvidence.reserve") -or [IO.Directory]::Exists($badActorEvidence)) { throw '非法执行者检查创建了产物。' }

    # reserve 已存在：拒绝启动。
    $reservedEvidence = Join-Path $evidenceRoot 'reserved'
    [IO.File]::WriteAllText("$reservedEvidence.reserve", '', $utf8)
    Rejects { Invoke-TeamCheck $checkScript $reservedEvidence $evidenceRoot 'dev-a1' }
    if ([IO.Directory]::Exists($reservedEvidence)) { throw 'reserve 已存在仍启动了检查。' }

    # 合法执行：真实退出码、stdout/stderr 原文、自动摘要。
    $evidence = Join-Path $evidenceRoot 'execution-1'
    $receipt = Invoke-TeamCheck $checkScript $evidence $evidenceRoot 'dev-a1'
    if ($receipt -isnot [hashtable]) { throw '未返回 receipt 对象。' }
    if ($receipt.exit_code -ne 7) { throw "未保存实际退出码，得到：$($receipt.exit_code)" }
    if ([IO.File]::ReadAllText((Join-Path $evidence 'stdout.txt'), $utf8) -cne 'raw-out') { throw 'stdout 被改变。' }
    if ([IO.File]::ReadAllText((Join-Path $evidence 'stderr.txt'), $utf8) -cne 'raw-err') { throw 'stderr 被改变。' }
    if ($receipt.stdout_sha256 -cne (Get-Sha (Join-Path $evidence 'stdout.txt'))) { throw 'stdout 摘要未取实际值。' }
    if ($receipt.stderr_sha256 -cne (Get-Sha (Join-Path $evidence 'stderr.txt'))) { throw 'stderr 摘要未取实际值。' }
    if ($receipt.script_sha256 -cne $scriptHashBefore) { throw '脚本启动前摘要错误。' }
    if ($receipt.script_after_sha256 -cne (Get-Sha $checkScript)) { throw '方括号脚本名的事后摘要错误。' }
    $receiptFile = Join-Path $evidence 'receipt.json'
    if (-not [IO.File]::Exists($receiptFile)) { throw 'receipt.json 未落盘。' }
    $receiptOnDisk = [IO.File]::ReadAllText($receiptFile, $utf8) | ConvertFrom-Json
    if ($receiptOnDisk.exit_code -ne 7 -or $receiptOnDisk.actor -cne 'dev-a1') { throw 'receipt.json 内容不完整。' }
    $started = Get-Utc $receipt.started_utc
    $ended = Get-Utc $receipt.ended_utc
    if ([math]::Abs(([datetime]::UtcNow - $started).TotalMinutes) -gt 1) { throw 'started_utc 不是真实时钟。' }
    if ($ended -lt $started) { throw 'ended_utc 早于 started_utc。' }
    if ([math]::Abs(([datetime]::UtcNow - $ended).TotalMinutes) -gt 1) { throw 'ended_utc 不是真实时钟。' }

    # 重复使用同一证据目录：拒绝且不改写旧证据。
    $stdoutHashBefore = Get-Sha (Join-Path $evidence 'stdout.txt')
    Rejects { Invoke-TeamCheck $checkScript $evidence $evidenceRoot 'dev-a1' }
    if ((Get-Sha (Join-Path $evidence 'stdout.txt')) -cne $stdoutHashBefore) { throw '重复使用证据目录时改写了旧证据。' }

    # 证据路径已存在（空目录）：拒绝且不写入。
    $occupied = Join-Path $evidenceRoot 'already-existing'
    [IO.Directory]::CreateDirectory($occupied) | Out-Null
    Rejects { Invoke-TeamCheck $checkScript $occupied $evidenceRoot 'dev-a1' }
    if ([IO.File]::Exists((Join-Path $occupied 'stdout.txt'))) { throw '已有目录仍启动了检查。' }

    # 检查脚本的工作目录为脚本所在目录。
    $cwdScript = Join-Path $root 'where-cwd.ps1'
    [IO.File]::WriteAllText($cwdScript, '[Console]::Out.Write([IO.Directory]::GetCurrentDirectory())', $utf8)
    $cwdEvidence = Join-Path $evidenceRoot 'cwd'
    $cwdReceipt = Invoke-TeamCheck $cwdScript $cwdEvidence $evidenceRoot 'dev-a1'
    if ($cwdReceipt.exit_code -ne 0) { throw 'cwd 检查退出码非 0。' }
    $reportedCwd = ([IO.File]::ReadAllText((Join-Path $cwdEvidence 'stdout.txt'), $utf8)).Trim()
    if ($reportedCwd -ne $root) { throw "检查脚本工作目录不是脚本所在目录：$reportedCwd" }

    # 200000 字节双流压力：异步复制避免死锁，原文完整。
    $largeScript = Join-Path $root 'large-output.ps1'
    [IO.File]::WriteAllText($largeScript, '[Console]::Out.Write(("o" * 200000)); [Console]::Error.Write(("e" * 200000))', $utf8)
    $largeEvidence = Join-Path $evidenceRoot 'large'
    $largeReceipt = Invoke-TeamCheck $largeScript $largeEvidence $evidenceRoot 'dev-a1'
    if ([IO.File]::ReadAllBytes((Join-Path $largeEvidence 'stdout.txt')).Length -ne 200000) { throw 'stdout 压力捕获不完整。' }
    if ([IO.File]::ReadAllBytes((Join-Path $largeEvidence 'stderr.txt')).Length -ne 200000) { throw 'stderr 压力捕获不完整。' }
    if ($largeReceipt.stdout_sha256 -cne (Get-Sha (Join-Path $largeEvidence 'stdout.txt'))) { throw '压力捕获 stdout 摘要错误。' }
    if ($largeReceipt.stderr_sha256 -cne (Get-Sha (Join-Path $largeEvidence 'stderr.txt'))) { throw '压力捕获 stderr 摘要错误。' }

    # ---- 5. Add-TeamRecord：真实 UTC、类型、按执行者隔离、非法标识 ----
    Add-TeamRecord $root 'dev-a1' 'intent' @{ operation_id = 'red-1'; command = 'pwsh check.ps1' }
    Add-TeamRecord $root 'dev-a1' 'receipt' @{ operation_id = 'red-1'; exit_code = 1; output = '实际失败' }
    Add-TeamRecord $root 'dev-a1' 'event' @{ note = '追加不覆盖' }
    Add-TeamRecord $root 'review-1' 'receipt' @{ operation_id = 'check-1'; exit_code = 0 }

    $devLines = [IO.File]::ReadAllLines((Join-Path $root 'dev-a1.ops.jsonl'), $utf8)
    $dev = @($devLines | ForEach-Object { $_ | ConvertFrom-Json })
    if ($dev.Count -ne 3) { throw "intent/receipt/event 记录条数错误：$($dev.Count)" }
    if ($dev[0].kind -cne 'intent' -or $dev[1].kind -cne 'receipt' -or $dev[2].kind -cne 'event') { throw '记录类型未保留。' }
    if ($dev[1].data.exit_code -ne 1 -or $dev[1].data.output -cne '实际失败') { throw 'receipt 数据未保留。' }
    $lineUtc = Get-Utc $dev[0].utc
    if ([math]::Abs(([datetime]::UtcNow - $lineUtc).TotalMinutes) -gt 1) { throw '操作日志未记录真实 UTC。' }
    if (-not [IO.File]::Exists((Join-Path $root 'review-1.ops.jsonl'))) { throw '不同执行者日志未隔离。' }

    Rejects { Add-TeamRecord $root '../escape' 'receipt' @{} }
    Rejects { Add-TeamRecord $root 'bad actor' 'receipt' @{} }
    Rejects { Add-TeamRecord $root 'dev-a1' 'unknown' @{} }

    'PASS：报告不可变且逐字发布；证据根越界/占用/非法执行者被拒且无产物；真实退出码、双流原文、方括号脚本摘要、真实 UTC 全部落盘；操作日志按执行者隔离。'
} finally {
    Remove-Item -LiteralPath $root -Recurse -Force -Confirm:$false -ErrorAction SilentlyContinue
    if ($outside -and (Test-Path -LiteralPath $outside)) {
        Remove-Item -LiteralPath $outside -Recurse -Force -Confirm:$false -ErrorAction SilentlyContinue
    }
}
