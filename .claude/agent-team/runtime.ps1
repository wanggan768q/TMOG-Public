# 点加载的本地纪律助手；不启动会话、不执行任务，不提供权限沙箱。

function Get-TeamSlotPath([string]$Root, [int]$Slot = 1) {
    if ($Slot -lt 1 -or $Slot -gt 16) { throw '槽号必须为 1–16。' }
    Join-Path $Root "slot-$Slot.json"
}

function Grant-TeamSlot([string]$Root, [string]$Actor, [int]$Slot = 1, [string]$EvidenceRoot = $Root) {
    if ($Actor -notmatch '^[A-Za-z0-9_-]+$') { throw '执行者标识无效。' }
    $path = Get-TeamSlotPath $Root $Slot
    $lock = [IO.File]::Open((Join-Path $Root "slot-$Slot.lock"), [IO.FileMode]::OpenOrCreate, [IO.FileAccess]::ReadWrite, [IO.FileShare]::None)
    try {
    $grant = [guid]::NewGuid().ToString()
    $record = @{ actor = $Actor; grant = $grant; utc = [datetime]::UtcNow.ToString('o'); slot = $Slot; evidence_root = [IO.Path]::GetFullPath($EvidenceRoot) }
    $bytes = [Text.Encoding]::UTF8.GetBytes(($record | ConvertTo-Json -Compress))
    # CreateNew：占用存在即失败，避免并发覆盖；未知/崩溃占用不自动回收。
    $stream = [IO.File]::Open($path, [IO.FileMode]::CreateNew, [IO.FileAccess]::Write, [IO.FileShare]::None)
    try { $stream.Write($bytes, 0, $bytes.Length) } finally { $stream.Dispose() }
    $grant
    } finally { $lock.Dispose() }
}

function Assert-TeamSlot([string]$Root, [string]$Actor, [string]$Grant, [int]$Slot = 1) {
    $path = Get-TeamSlotPath $Root $Slot
    $record = [IO.File]::ReadAllText($path) | ConvertFrom-Json
    if ($record.actor -cne $Actor -or $record.grant -cne $Grant -or [string]::IsNullOrWhiteSpace($Grant)) {
        throw '活动槽未放行，或授权已失效；消息/审查PASS不代替槽位授权。'
    }
}

function Release-TeamSlot([string]$Root, [string]$Actor, [string]$Grant, [int]$Slot = 1) {
    $path = Get-TeamSlotPath $Root $Slot
    $lock = [IO.File]::Open((Join-Path $Root "slot-$Slot.lock"), [IO.FileMode]::OpenOrCreate, [IO.FileAccess]::ReadWrite, [IO.FileShare]::None)
    try {
        Assert-TeamSlot $Root $Actor $Grant $Slot
        # 校验与删除共用Grant的排他边界，旧Release不能删除新grant。
        [IO.File]::Delete($path)
    } finally { $lock.Dispose() }
}

function Write-TeamReport([string]$Path, [string]$Content) {
    $bytes = [Text.Encoding]::UTF8.GetBytes($Content)
    $stream = [IO.File]::Open($Path, [IO.FileMode]::CreateNew, [IO.FileAccess]::Write, [IO.FileShare]::None)
    try { $stream.Write($bytes, 0, $bytes.Length) } finally { $stream.Dispose() }
}

function Publish-TeamReport([string]$DraftPath, [string]$ReportPath, [string[]]$RequiredText) {
    if (-not $RequiredText -or $RequiredText.Count -eq 0) { throw '必须声明本报告必需的证据内容。' }
    $utf8 = [Text.UTF8Encoding]::new($false, $true)
    $content = [IO.File]::ReadAllText($DraftPath, $utf8)
    foreach ($text in $RequiredText) {
        if ([string]::IsNullOrWhiteSpace($text) -or -not $content.Contains($text)) { throw "报告缺少必需内容：$text" }
    }
    Write-TeamReport $ReportPath $content
    if ([IO.File]::ReadAllText($ReportPath, $utf8) -cne $content) { throw '报告落盘内容与草稿不一致；保留文件核查。' }
    (Get-FileHash -LiteralPath $ReportPath -Algorithm SHA256 -ErrorAction Stop).Hash
}

function Assert-TeamEvidencePath([string]$Path, [string]$Root) {
    if ([string]::IsNullOrWhiteSpace($Root)) { throw '槽位未登记证据根目录，拒绝执行。' }
    $rootPath = [IO.Path]::GetFullPath($Root).TrimEnd([IO.Path]::DirectorySeparatorChar, [IO.Path]::AltDirectorySeparatorChar)
    $target = [IO.Path]::GetFullPath($Path)
    $comparison = if ($IsWindows) { [StringComparison]::OrdinalIgnoreCase } else { [StringComparison]::Ordinal }
    if (-not $target.StartsWith($rootPath + [IO.Path]::DirectorySeparatorChar, $comparison)) { throw '证据路径不在协调者批准的根目录内。' }
    $current = [IO.DirectoryInfo]::new([IO.Path]::GetDirectoryName($target))
    while ($current) {
        if ($current.Exists -and ($current.Attributes -band [IO.FileAttributes]::ReparsePoint)) { throw '证据父目录包含链接或重解析点，拒绝写入。' }
        $current = $current.Parent
    }
}

function Invoke-TeamCheck([string]$ScriptPath, [string]$EvidencePath, [string]$SlotsRoot, [string]$Actor, [string]$Grant, [int]$Slot = 1) {
    Assert-TeamSlot $SlotsRoot $Actor $Grant $Slot
    $script = [IO.Path]::GetFullPath($ScriptPath)
    if (-not [IO.File]::Exists($script)) { throw '检查脚本不存在。' }
    $scriptHash = (Get-FileHash -LiteralPath $script -ErrorAction Stop).Hash
    $evidence = [IO.Path]::GetFullPath($EvidencePath)
    $slotRecord = [IO.File]::ReadAllText((Get-TeamSlotPath $SlotsRoot $Slot)) | ConvertFrom-Json
    Assert-TeamEvidencePath $evidence $slotRecord.evidence_root
    $reservation = [IO.File]::Open("$evidence.reserve", [IO.FileMode]::CreateNew, [IO.FileAccess]::Write, [IO.FileShare]::None)
    try {
        if ([IO.Directory]::Exists($evidence) -or [IO.File]::Exists($evidence)) { throw '证据路径已存在，不启动检查。' }
        [IO.Directory]::CreateDirectory($evidence) | Out-Null
        $stdout = $null
        $stderr = $null
        $process = $null
        try {
            $stdout = [IO.File]::Open((Join-Path $evidence 'stdout.txt'), [IO.FileMode]::CreateNew, [IO.FileAccess]::Write)
            $stderr = [IO.File]::Open((Join-Path $evidence 'stderr.txt'), [IO.FileMode]::CreateNew, [IO.FileAccess]::Write)
            $process = [Diagnostics.Process]::new()
            $process.StartInfo.FileName = (Get-Command pwsh -ErrorAction Stop).Source
            $process.StartInfo.UseShellExecute = $false
            $process.StartInfo.RedirectStandardOutput = $true
            $process.StartInfo.RedirectStandardError = $true
            $process.StartInfo.WorkingDirectory = [IO.Path]::GetDirectoryName($script)
            foreach ($arg in @('-NoProfile', '-NonInteractive', '-File', $script)) { $process.StartInfo.ArgumentList.Add($arg) }
            $started = [datetime]::UtcNow.ToString('o')
            if (-not $process.Start()) { throw '检查未启动。' }
            $outCopy = $process.StandardOutput.BaseStream.CopyToAsync($stdout)
            $errCopy = $process.StandardError.BaseStream.CopyToAsync($stderr)
            $captureError = $null
            while (-not $process.WaitForExit(100)) {
                if ($outCopy.IsFaulted) {
                    $captureError = $outCopy.Exception.ToString()
                    $outCopy = $process.StandardOutput.BaseStream.CopyToAsync([IO.Stream]::Null)
                }
                if ($errCopy.IsFaulted) {
                    $captureError = $errCopy.Exception.ToString()
                    $errCopy = $process.StandardError.BaseStream.CopyToAsync([IO.Stream]::Null)
                }
            }
            $outCopy.GetAwaiter().GetResult()
            $errCopy.GetAwaiter().GetResult()
            if ($captureError) { throw "原始输出捕获失败，部分证据保留，不能验收：$captureError" }
            $exitCode = $process.ExitCode
        } finally {
            if ($stdout) { $stdout.Dispose() }
            if ($stderr) { $stderr.Dispose() }
            if ($process) { $process.Dispose() }
        }
        $record = @{
            actor = $Actor; script = $script; arguments = @('-NoProfile', '-NonInteractive', '-File', $script)
            started_utc = $started; ended_utc = [datetime]::UtcNow.ToString('o'); exit_code = $exitCode
            stdout_path = Join-Path $evidence 'stdout.txt'; stderr_path = Join-Path $evidence 'stderr.txt'
            stdout_sha256 = (Get-FileHash -LiteralPath (Join-Path $evidence 'stdout.txt') -ErrorAction Stop).Hash
            stderr_sha256 = (Get-FileHash -LiteralPath (Join-Path $evidence 'stderr.txt') -ErrorAction Stop).Hash
            script_sha256 = $scriptHash
            script_after_sha256 = (Get-FileHash -LiteralPath $script -ErrorAction Stop).Hash
        }
        Write-TeamReport (Join-Path $evidence 'receipt.json') ($record | ConvertTo-Json -Depth 5)
        $record
    } finally { $reservation.Dispose() }
    # reserve 文件和失败时的部分证据保留，未知执行不自动重跑。
}

function Add-TeamRecord([string]$Root, [string]$Actor, [string]$Kind, [System.Collections.IDictionary]$Data) {
    if ($Actor -notmatch '^[A-Za-z0-9_-]+$') { throw '日志执行者标识无效。' }
    if ($Kind -notin @('intent', 'receipt', 'event')) { throw '日志类型无效。' }
    $record = @{ utc = [datetime]::UtcNow.ToString('o'); actor = $Actor; kind = $Kind; data = $Data }
    $path = Join-Path $Root "$Actor.ops.jsonl"
    # 每执行者一个文件；排他打开，忙碌时失败而非覆盖旧内容。
    $stream = [IO.File]::Open($path, [IO.FileMode]::Append, [IO.FileAccess]::Write, [IO.FileShare]::None)
    $writer = [IO.StreamWriter]::new($stream, [Text.UTF8Encoding]::new($false))
    try { $writer.WriteLine(($record | ConvertTo-Json -Depth 20 -Compress)) } finally { $writer.Dispose() }
}
