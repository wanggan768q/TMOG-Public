#requires -Version 7.0
<#
.SYNOPSIS
  便携包干净环境启动验证（W35 / Issue #15 验收标准 2）。

.DESCRIPTION
  在"无开发 PATH"的干净环境中启动包内 TmogReplica.exe，验证：
  1) 进程能启动并出现可见主窗口（标题非空）；
  2) Qt6Core/Qt6Gui/Qt6Widgets、MSVC 运行库与平台插件 qwindows.dll
     均从【包目录】加载（证明 windeployqt + --compiler-runtime 部署生效，
     且不依赖开发机 Qt/MSVC 安装）；
  3) 未从 Qt/MSVC/CMake 等开发工具链目录加载任何模块；
  4) 关闭主窗口（兜底结束进程）后退出。

  这是"启动级"验证：证明独立包在无开发环境可运行、无缺失依赖；
  不等于全页功能验收（不替代 ctest 与人工验收）。

  通过 exit 0；失败 exit 1。

.PARAMETER PackageDir
  便携包根目录（含 TmogReplica.exe）。

.PARAMETER TempDir
  验证用临时目录，TEMP/TMP 指向此处；同时写入 launch-evidence.json 证据。
  默认：<PackageDir 的父目录>\launch-temp。

.PARAMETER TimeoutSec
  等待主窗口出现的超时（秒），默认 60。

.EXAMPLE
  pwsh -NoProfile -File scripts/verify-portable-launch.ps1 -PackageDir build/msvc-release/portable
#>
[CmdletBinding()]
param(
    [Parameter(Mandatory = $true)][string]$PackageDir,
    [string]$TempDir,
    [int]$TimeoutSec = 60
)

Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'

function Fail([string]$Message) { Write-Host "FAIL: $Message"; exit 1 }
function Info([string]$Message) { Write-Host "verify-portable-launch: $Message" }

$pkg = [System.IO.Path]::GetFullPath($PackageDir)
if (-not (Test-Path -LiteralPath $pkg -PathType Container)) { Fail "PackageDir 不是目录: $pkg" }
$pkgItem = Get-Item -LiteralPath $pkg -Force
if ($pkgItem.LinkType) { Fail "PackageDir 不得是链接/重解析点: $pkg" }
$exe = Join-Path $pkg 'TmogReplica.exe'
if (-not (Test-Path -LiteralPath $exe -PathType Leaf)) { Fail "缺可执行文件: $exe" }

if (-not $TempDir) { $TempDir = Join-Path (Split-Path -LiteralPath $pkg -Parent) 'launch-temp' }
$tempAbs = [System.IO.Path]::GetFullPath($TempDir)
New-Item -ItemType Directory -Force -Path $tempAbs | Out-Null
$tempItem = Get-Item -LiteralPath $tempAbs -Force
if ($tempItem.LinkType) { Fail "TempDir 不得是链接/重解析点: $tempAbs" }

# Release 包用 Qt6Core.dll，Debug 包用 Qt6Cored.dll；二者择一，互斥声明。
$hasDebugQt = Test-Path -LiteralPath (Join-Path $pkg 'Qt6Cored.dll')
$hasReleaseQt = Test-Path -LiteralPath (Join-Path $pkg 'Qt6Core.dll')
if ($hasDebugQt -eq $hasReleaseQt) { Fail '包内 Qt6Core.dll / Qt6Cored.dll 必须恰有其一（不能都没有或都有）' }
$suffix = if ($hasDebugQt) { 'd' } else { '' }
$configName = if ($hasDebugQt) { 'Debug' } else { 'Release' }
Info ("package: {0}" -f $pkg)
Info ("配置: {0}（Qt DLL 后缀: '{1}'）" -f $configName, $suffix)

# ---- 构造干净环境：PATH 仅系统目录；清除开发工具链相关变量；TEMP/TMP 指向 TempDir ----
$cleanPath = "$env:SystemRoot\System32;$env:SystemRoot"
$devVarPatterns = @('QT_*', 'QTDIR', 'CMAKE_*', 'VC*', 'VS*', 'INCLUDE', 'LIB', 'LIBPATH',
                    'NINJA*', 'MSYS*', 'MINGW*', 'GCC*')
$savedEnv = @{}
$removedVars = [System.Collections.Generic.List[string]]::new()
foreach ($name in @('PATH', 'TEMP', 'TMP')) {
    $savedEnv[$name] = [Environment]::GetEnvironmentVariable($name)
}
foreach ($name in @([Environment]::GetEnvironmentVariables().Keys)) {
    if ($name -in @('PATH', 'TEMP', 'TMP')) { continue }
    $matched = $false
    foreach ($pat in $devVarPatterns) {
        if ($name -like $pat) { $matched = $true; break }
    }
    if (-not $matched) { continue }
    $savedEnv[$name] = [Environment]::GetEnvironmentVariable($name)
    $removedVars.Add($name)
}
Info ("干净 PATH: {0}" -f $cleanPath)
Info ("清除的开发环境变量: {0}" -f ($(if ($removedVars.Count -gt 0) { $removedVars -join ', ' } else { '<none>' })))

$exitCode = 1
try {
    $env:PATH = $cleanPath
    $env:TEMP = $tempAbs
    $env:TMP = $tempAbs

    $proc = Start-Process -FilePath $exe -WorkingDirectory $pkg -PassThru
    if (-not $proc) { Fail 'Start-Process 未返回进程对象' }
    Info ("已启动: pid={0}" -f $proc.Id)

    # ---- 1. 等待可见主窗口 ----
    $deadline = (Get-Date).AddSeconds($TimeoutSec)
    $p = $null
    while ((Get-Date) -lt $deadline) {
        Start-Sleep -Milliseconds 250
        if ($proc.HasExited) {
            Fail ("进程在窗口出现前退出: exit={0}（常见原因: 缺 DLL / 平台插件加载失败）" -f $proc.ExitCode)
        }
        $p = Get-Process -Id $proc.Id -ErrorAction SilentlyContinue
        if (-not $p) { Fail '进程对象消失（可能已退出）' }
        if ($p.MainWindowHandle -ne 0) { break }
    }
    if (-not $p -or $p.MainWindowHandle -eq 0) {
        try { $proc.Kill() } catch { }
        Fail ("{0}s 内未出现可见主窗口" -f $TimeoutSec)
    }
    $title = $p.MainWindowTitle
    if ([string]::IsNullOrWhiteSpace($title)) {
        try { $proc.Kill() } catch { }
        Fail '主窗口标题为空（无法作为启动证据）'
    }
    Info ("主窗口: pid={0} title='{1}'" -f $proc.Id, $title)

    # ---- 2. 进程模块证据：必需模块必须全部从包目录加载 ----
    $modules = @()
    try {
        $modules = @($p.Modules | ForEach-Object { [System.IO.Path]::GetFullPath($_.FileName) })
    } catch {
        try { $proc.Kill() } catch { }
        Fail ("无法读取进程模块列表: " + $_.Exception.Message)
    }
    $moduleMap = @{}
    foreach ($m in $modules) {
        $leaf = [System.IO.Path]::GetFileName($m).ToLowerInvariant()
        if (-not $moduleMap.ContainsKey($leaf)) { $moduleMap[$leaf] = $m }
    }
    $required = @(
        ('Qt6Core{0}.dll' -f $suffix),
        ('Qt6Gui{0}.dll' -f $suffix),
        ('Qt6Widgets{0}.dll' -f $suffix),
        'vcruntime140.dll',
        'msvcp140.dll',
        'qwindows.dll'
    )
    $requiredEvidence = @()
    foreach ($name in $required) {
        $key = $name.ToLowerInvariant()
        if (-not $moduleMap.ContainsKey($key)) {
            try { $proc.Kill() } catch { }
            Fail ("进程未加载必需模块: {0}（模块总数 {1}）" -f $name, $modules.Count)
        }
        $modPath = $moduleMap[$key]
        if (-not $modPath.StartsWith($pkg + '\', [System.StringComparison]::OrdinalIgnoreCase)) {
            try { $proc.Kill() } catch { }
            Fail ("模块 {0} 未从包目录加载: {1}" -f $name, $modPath)
        }
        $requiredEvidence += [pscustomobject]@{ name = $name; path = $modPath }
        Info ("模块 {0} <- {1}" -f $name, $modPath)
    }

    $foreign = @($modules | Where-Object { -not $_.StartsWith($pkg + '\', [System.StringComparison]::OrdinalIgnoreCase) })
    $devForeign = @($foreign | Where-Object {
            $_ -match '\\Qt\\|\\msvc2022_64\\|\\mingw_64\\|\\Visual Studio\\|\\CMake\\|\\Ninja\\'
        })
    if ($devForeign.Count -gt 0) {
        try { $proc.Kill() } catch { }
        Fail ("检测到从开发工具链目录加载的模块（不应发生）: " + ($devForeign -join '; '))
    }
    Info ("模块总数: {0}；包内模块: {1}；系统模块: {2}（未发现开发工具链模块）" -f `
            $modules.Count, ($modules.Count - $foreign.Count), $foreign.Count)

    # ---- 3. 证据落盘（TEMP 目录内，供报告引用） ----
    $evidence = [ordered]@{
        generated              = (Get-Date).ToString('o')
        package                = $pkg
        configuration          = $configName
        exe                    = $exe
        pid                    = $proc.Id
        windowTitle            = $title
        cleanPath              = $cleanPath
        removedEnvVars         = @($removedVars)
        requiredModules        = @($requiredEvidence)
        moduleCount            = $modules.Count
        packageLocalModuleCount = ($modules.Count - $foreign.Count)
        systemModuleCount      = $foreign.Count
    }
    $evidencePath = Join-Path $tempAbs 'launch-evidence.json'
    $evidence | ConvertTo-Json -Depth 6 | Set-Content -LiteralPath $evidencePath -Encoding utf8
    Info ("证据: {0}" -f $evidencePath)

    # ---- 4. 正常关闭；10s 未退出则兜底结束（仅针对本次启动的进程） ----
    $closeSent = $false
    try { $closeSent = $proc.CloseMainWindow() } catch { }
    if (-not $proc.WaitForExit(10000)) {
        Info '关闭主窗口后 10s 未退出，兜底结束本次验证进程'
        try { $proc.Kill() } catch { }
        [void]$proc.WaitForExit(5000)
    }
    $exitCode = 0
    Info ("关闭方式: CloseMainWindow={0}；进程退出码: {1}" -f $closeSent, $proc.ExitCode)
    Info 'PASS: 干净环境启动验证通过（可见窗口 + 无开发 PATH + 包内 Qt/运行库模块 + 未加载开发工具链模块）'
} finally {
    # 恢复本验证进程的环境，避免影响后续步骤
    foreach ($name in $savedEnv.Keys) {
        [Environment]::SetEnvironmentVariable($name, $savedEnv[$name])
    }
}
exit $exitCode
