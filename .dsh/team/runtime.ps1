# 点加载的 DSH 团队纪律助手：只提供证据纪律（报告发布、检查执行、操作日志）。
# 不启动会话、不执行任务、不写 exit。DSH 无活动槽机制，旧版槽位文件锁与授权记录不再实现；
# 并发预算由 Lead 自查 maxTeammates，路径冲突与依赖由共享任务板 write_scopes/blocked_by 表达。

function Write-TeamReport([string]$Path, [string]$Content) {
    # CreateNew：目标已存在即失败。一次性路径由调用方选择，禁止覆盖历史证据。
    $bytes = [Text.UTF8Encoding]::new($false).GetBytes($Content)
    $stream = [IO.File]::Open($Path, [IO.FileMode]::CreateNew, [IO.FileAccess]::Write, [IO.FileShare]::None)
    try { $stream.Write($bytes, 0, $bytes.Length) } finally { $stream.Dispose() }
}

function Publish-TeamReport([string]$DraftPath, [string]$ReportPath, [string[]]$RequiredText) {
    if (-not $RequiredText -or $RequiredText.Count -eq 0) { throw '必须声明本报告必需的证据内容。' }
    # 严格 UTF-8 读取草稿；逐条核对必需证据，空白项视为缺失。
    $utf8 = [Text.UTF8Encoding]::new($false, $true)
    $content = [IO.File]::ReadAllText($DraftPath, $utf8)
    foreach ($text in $RequiredText) {
        if ([string]::IsNullOrWhiteSpace($text) -or -not $content.Contains($text)) { throw "报告缺少必需内容：$text" }
    }
    Write-TeamReport $ReportPath $content
    # 读回逐字比对，防止编码或换行在落盘时被改变。
    if ([IO.File]::ReadAllText($ReportPath, $utf8) -cne $content) { throw '报告落盘内容与草稿不一致；保留文件核查。' }
    (Get-FileHash -LiteralPath $ReportPath -Algorithm SHA256 -ErrorAction Stop).Hash
}

function Assert-TeamEvidencePath([string]$Path, [string]$Root) {
    if ([string]::IsNullOrWhiteSpace($Root)) { throw '证据根目录为空，拒绝执行。' }
    # 严格子路径：等于根或位于根之外都拒绝；Windows 路径大小写不敏感，其他平台按 Ordinal。
    $rootPath = [IO.Path]::GetFullPath($Root).TrimEnd([IO.Path]::DirectorySeparatorChar, [IO.Path]::AltDirectorySeparatorChar)
    $target = [IO.Path]::GetFullPath($Path)
    $comparison = if ($IsWindows) { [StringComparison]::OrdinalIgnoreCase } else { [StringComparison]::Ordinal }
    if (-not $target.StartsWith($rootPath + [IO.Path]::DirectorySeparatorChar, $comparison)) { throw '证据路径不在协调者批准的根目录内。' }
    # 父目录链中任何已存在目录含重解析点（联接/符号链接）都拒绝，防止写到根外。
    $current = [IO.DirectoryInfo]::new([IO.Path]::GetDirectoryName($target))
    while ($current) {
        if ($current.Exists -and ($current.Attributes -band [IO.FileAttributes]::ReparsePoint)) { throw '证据父目录包含链接或重解析点，拒绝写入。' }
        $current = $current.Parent
    }
}

function Invoke-TeamCheck([string]$ScriptPath, [string]$EvidencePath, [string]$EvidenceRoot, [string]$Actor) {
    # 执行者标识沿用旧纪律：只允许字母、数字、下划线和连字符，避免路径与日志注入。
    if ($Actor -notmatch '^[A-Za-z0-9_-]+$') { throw '执行者标识无效。' }
    $evidence = [IO.Path]::GetFullPath($EvidencePath)
    Assert-TeamEvidencePath $evidence $EvidenceRoot
    $script = [IO.Path]::GetFullPath($ScriptPath)
    if (-not [IO.File]::Exists($script)) { throw '检查脚本不存在。' }
    $scriptHash = (Get-FileHash -LiteralPath $script -Algorithm SHA256 -ErrorAction Stop).Hash
    if ([IO.Directory]::Exists($evidence) -or [IO.File]::Exists($evidence)) { throw '证据路径已存在，不启动检查。' }
    if ([IO.File]::Exists("$evidence.reserve")) { throw '证据目录已被占用（reserve 存在），不启动检查。' }
    # reserve 是排他占用标记：已占用或未知执行都不自动回收、不自动重跑。
    $reservation = [IO.File]::Open("$evidence.reserve", [IO.FileMode]::CreateNew, [IO.FileAccess]::Write, [IO.FileShare]::None)
    try {
        if ([IO.Directory]::Exists($evidence) -or [IO.File]::Exists($evidence)) { throw '证据路径已存在，不启动检查。' }
        [IO.Directory]::CreateDirectory($evidence) | Out-Null
        $stdout = $null
        $stderr = $null
        $process = $null
        try {
            $stdout = [IO.File]::Open((Join-Path $evidence 'stdout.txt'), [IO.FileMode]::CreateNew, [IO.FileAccess]::Write, [IO.FileShare]::None)
            $stderr = [IO.File]::Open((Join-Path $evidence 'stderr.txt'), [IO.FileMode]::CreateNew, [IO.FileAccess]::Write, [IO.FileShare]::None)
            $process = [Diagnostics.Process]::new()
            $process.StartInfo.FileName = (Get-Command pwsh -ErrorAction Stop).Source
            $process.StartInfo.UseShellExecute = $false
            $process.StartInfo.RedirectStandardOutput = $true
            $process.StartInfo.RedirectStandardError = $true
            $process.StartInfo.WorkingDirectory = [IO.Path]::GetDirectoryName($script)
            foreach ($arg in @('-NoProfile', '-NonInteractive', '-File', $script)) { $process.StartInfo.ArgumentList.Add($arg) }
            $started = [datetime]::UtcNow.ToString('o')
            if (-not $process.Start()) { throw '检查未启动。' }
            # 原始字节异步复制到文件：不读成文本、不经过命令行管道，避免大输出把双方写满而死锁。
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
            foreach ($copy in @($outCopy, $errCopy)) {
                # 用 $null 丢弃 GetResult 的返回值（.NET 10 下会返回 VoidTaskResult 结构），异常照常抛出。
                try { $null = $copy.GetAwaiter().GetResult() } catch { if (-not $captureError) { $captureError = $_.Exception.ToString() } }
            }
            $exitCode = $process.ExitCode
        } finally {
            if ($stdout) { $stdout.Dispose() }
            if ($stderr) { $stderr.Dispose() }
            if ($process) { $process.Dispose() }
        }
        # 捕获失败：抛错但保留已写出的 stdout/stderr 部分证据与 reserve，不能当作验收通过。
        if ($captureError) { throw "原始输出捕获失败，部分证据保留，不能验收：$captureError" }
        $record = @{
            actor = $Actor
            script = $script
            arguments = @('-NoProfile', '-NonInteractive', '-File', $script)
            started_utc = $started
            ended_utc = [datetime]::UtcNow.ToString('o')
            exit_code = $exitCode
            stdout_path = (Join-Path $evidence 'stdout.txt')
            stderr_path = (Join-Path $evidence 'stderr.txt')
            stdout_sha256 = (Get-FileHash -LiteralPath (Join-Path $evidence 'stdout.txt') -Algorithm SHA256 -ErrorAction Stop).Hash
            stderr_sha256 = (Get-FileHash -LiteralPath (Join-Path $evidence 'stderr.txt') -Algorithm SHA256 -ErrorAction Stop).Hash
            script_sha256 = $scriptHash
            script_after_sha256 = (Get-FileHash -LiteralPath $script -Algorithm SHA256 -ErrorAction Stop).Hash
        }
        Write-TeamReport (Join-Path $evidence 'receipt.json') ($record | ConvertTo-Json -Depth 5)
        $record
    } finally { $reservation.Dispose() }
}

function Add-TeamRecord([string]$Root, [string]$Actor, [string]$Kind, [System.Collections.IDictionary]$Data) {
    if ($Actor -notmatch '^[A-Za-z0-9_-]+$') { throw '日志执行者标识无效。' }
    if ($Kind -notin @('intent', 'receipt', 'event')) { throw '日志类型无效。' }
    $record = @{ utc = [datetime]::UtcNow.ToString('o'); actor = $Actor; kind = $Kind; data = $Data }
    $path = Join-Path $Root "$Actor.ops.jsonl"
    # 每个执行者一个文件；Append + FileShare.None：并发写会失败，不会覆盖旧内容或交错半行。
    $stream = [IO.File]::Open($path, [IO.FileMode]::Append, [IO.FileAccess]::Write, [IO.FileShare]::None)
    $writer = [IO.StreamWriter]::new($stream, [Text.UTF8Encoding]::new($false))
    try { $writer.WriteLine(($record | ConvertTo-Json -Depth 20 -Compress)) } finally { $writer.Dispose() }
}
