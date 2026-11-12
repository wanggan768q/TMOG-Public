# W35 / Issue #15：MSVC x64 可重复构建脚本（Windows + Visual Studio 2022 + Ninja）。
#
# 设计原则（对应 Issue #15 验收）：缺 Qt / 缺部署工具 / 缺编译器时必须显式失败，
# 不允许静默降级为“只构建核心目标”。只有显式传入 -CoreOnly 时才构建无 Qt 的核心
# 目标，并且把“GUI/便携包目标不存在”作为断言（而不是成功跳过）记录到日志。
#
# 用法：
#   pwsh -NoProfile -File scripts/build-msvc.ps1 -Configuration Debug
#   pwsh -NoProfile -File scripts/build-msvc.ps1 -Configuration Release -Package
#   pwsh -NoProfile -File scripts/build-msvc.ps1 -Configuration Debug -CoreOnly   # 仅无 Qt 前置时
#   pwsh -NoProfile -File scripts/build-msvc.ps1 -Configuration Release -Package -SkipCtest
#       （-SkipCtest 仅在“ctest 因环境限制存在已知失败、但仍需产出并验证便携包”时使用；
#         日志与 toolchain-versions.txt 会显式记录 skipped，不能当作测试通过）
#
# 参数可用环境变量覆盖：TMOG_QT_MSVC_DIR、TMOG_VCVARS64、TMOG_CMAKE_EXE、TMOG_NINJA_EXE。
# 退出码：0 = 构建与 ctest 全通过（打包时还要求 check-package 与干净环境启动验证通过）；
#         非 0 = 任一步失败（错误信息含原因与日志路径）。
param(
    [ValidateSet('Debug','Release')][string]$Configuration = 'Debug',
    [string]$SourceDir = '',
    [string]$BuildDir = '',
    [string]$QtDir = '',
    [string]$VcVarsBat = '',
    [string]$CMakeExe = '',
    [string]$NinjaExe = '',
    [int]$Parallel = 0,
    [switch]$CoreOnly,
    [switch]$Package,
    # 显式跳过 ctest：仅用于环境限制导致个别用例无法通过时仍要产出/验证便携包。
    [switch]$SkipCtest,
    # 显式跳过干净 PATH 启动验证（默认 -Package 必做，跳过会在日志显式记录）。
    [switch]$SkipLaunchVerify
)
$ErrorActionPreference = 'Stop'
Set-StrictMode -Version 2.0

function Fail([string]$Message) { throw "build-msvc: $Message" }
function Info([string]$Message) { Write-Host "build-msvc: $Message" }

function Resolve-NativeTool {
    param([string]$Explicit, [string]$EnvName, [string[]]$NameOnPath, [string[]]$KnownPaths, [string]$What)
    if ($Explicit) {
        if (-not (Test-Path -LiteralPath $Explicit)) { Fail "$What 不存在: $Explicit" }
        return (Resolve-Path -LiteralPath $Explicit).Path
    }
    if ($EnvName) {
        $fromEnv = [Environment]::GetEnvironmentVariable($EnvName)
        if ($fromEnv) {
            if (-not (Test-Path -LiteralPath $fromEnv)) { Fail "$What 环境变量 $EnvName 指向不存在路径: $fromEnv" }
            return (Resolve-Path -LiteralPath $fromEnv).Path
        }
    }
    foreach ($n in $NameOnPath) {
        $cmd = Get-Command $n -ErrorAction SilentlyContinue
        if ($cmd -and $cmd.Path) { return $cmd.Path }
    }
    foreach ($p in $KnownPaths) {
        if ($p -and (Test-Path -LiteralPath $p)) { return (Resolve-Path -LiteralPath $p).Path }
    }
    Fail "$What 找不到（可用参数、环境变量 $EnvName 或 PATH 指定）"
}

function Resolve-VcVars {
    param([string]$Explicit, [string]$SourceRoot)
    if ($Explicit) {
        if (-not (Test-Path -LiteralPath $Explicit)) { Fail "vcvars64.bat 不存在: $Explicit" }
        return (Resolve-Path -LiteralPath $Explicit).Path
    }
    $fromEnv = [Environment]::GetEnvironmentVariable('TMOG_VCVARS64')
    if ($fromEnv) {
        if (-not (Test-Path -LiteralPath $fromEnv)) { Fail "环境变量 TMOG_VCVARS64 指向不存在路径: $fromEnv" }
        return (Resolve-Path -LiteralPath $fromEnv).Path
    }
    $vswhere = Join-Path ${env:ProgramFiles(x86)} 'Microsoft Visual Studio\Installer\vswhere.exe'
    if (Test-Path -LiteralPath $vswhere) {
        $install = & $vswhere -latest -products '*' -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath 2>$null
        if ($LASTEXITCODE -eq 0 -and $install) {
            foreach ($line in @($install)) {
                $candidate = Join-Path $line.Trim() 'VC\Auxiliary\Build\vcvars64.bat'
                if (Test-Path -LiteralPath $candidate) { return $candidate }
            }
        }
    }
    $known = @(
        'C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Auxiliary\Build\vcvars64.bat',
        'C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat',
        'C:\Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Auxiliary\Build\vcvars64.bat',
        'C:\Program Files\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat'
    )
    foreach ($p in $known) { if (Test-Path -LiteralPath $p) { return $p } }
    Fail "vcvars64.bat 找不到。请用 -VcVarsBat 指定，或安装 VS2022 C++ x64 工具集。"
}

function Import-VcEnvironment {
    param([string]$VcVars)
    Info "导入 MSVC 环境: $VcVars"
    # 在独立 cmd 中调用 vcvars64.bat，再把结果环境变量导入当前 PowerShell 会话。
    $cmdLine = 'call "{0}" >nul 2>&1 && set' -f $VcVars
    $lines = & cmd /c $cmdLine 2>&1
    if ($LASTEXITCODE -ne 0) { Fail "vcvars64.bat 执行失败 (exit=$LASTEXITCODE): $VcVars" }
    $imported = 0
    foreach ($line in $lines) {
        if ($line -match '^([^=]+)=(.*)$') {
            $name = $Matches[1]
            # 只导入编译相关变量，避免覆盖 PATH 之外的有害值；PATH 必须导入。
            [Environment]::SetEnvironmentVariable($name, $Matches[2], 'Process')
            $imported++
        }
    }
    if ($imported -lt 5) { Fail "vcvars64.bat 未产生有效环境变量（仅 $imported 项）" }
    foreach ($tool in 'cl.exe', 'link.exe', 'rc.exe') {
        $cmd = Get-Command $tool -ErrorAction SilentlyContinue
        if (-not $cmd) { Fail "MSVC 环境导入后 $tool 仍不可用（vcvars64 未提供 x64 工具链）" }
    }
    Info ("MSVC 环境就绪: cl=" + (& cl 2>&1 | Select-Object -First 1))
}

function Test-QtKitComplete {
    # 返回 @{ Ok = $true/$false; Missing = @(...) ; Prefix = ...; IsStub = ... }
    param([string]$Prefix)
    $missing = @()
    if (-not $Prefix -or -not (Test-Path -LiteralPath $Prefix)) {
        return @{ Ok = $false; Missing = @('<QtDir 不存在>'); Prefix = $Prefix; IsStub = $false }
    }
    $Prefix = (Resolve-Path -LiteralPath $Prefix).Path
    $required = @(
        'lib\cmake\Qt6\Qt6Config.cmake',
        'bin\Qt6Core.dll',
        'bin\Qt6Widgets.dll',
        'bin\windeployqt.exe',
        'bin\qmake.exe',
        'include\QtCore'
    )
    foreach ($rel in $required) {
        if (-not (Test-Path -LiteralPath (Join-Path $Prefix $rel))) { $missing += $rel }
    }
    $leaf = Split-Path $Prefix -Leaf
    $isStub = $missing.Count -gt 0 -and (Test-Path -LiteralPath (Join-Path $Prefix 'include\QtMcp'))
    return @{ Ok = ($missing.Count -eq 0); Missing = $missing; Prefix = $Prefix; IsStub = $isStub; Leaf = $leaf }
}

function Find-QtMsvcKit {
    param([string]$Explicit)
    if ($Explicit) {
        $probe = Test-QtKitComplete -Prefix $Explicit
        if (-not $probe.Ok) {
            $msg = "指定的 MSVC Qt kit 不完整: $($probe.Prefix)" + [Environment]::NewLine +
                   "  缺失: " + ($probe.Missing -join ', ')
            if ($probe.IsStub) { $msg += [Environment]::NewLine + "  提示：该目录像是 Qt MCP 插件桩，不是完整 Qt SDK。需要安装组件 qt.qt6.6120.win64_msvc2022_64。" }
            Fail $msg
        }
        return $probe
    }
    $fromEnv = [Environment]::GetEnvironmentVariable('TMOG_QT_MSVC_DIR')
    if ($fromEnv) {
        $probe = Test-QtKitComplete -Prefix $fromEnv
        if (-not $probe.Ok) {
            $msg = "环境变量 TMOG_QT_MSVC_DIR 指向的 Qt kit 不完整: $fromEnv" + [Environment]::NewLine +
                   "  缺失: " + ($probe.Missing -join ', ')
            Fail $msg
        }
        return $probe
    }
    # 自动探测：只接受完整的 msvc2022_64 kit；不完整目录（含 Qt MCP 桩）仅作诊断信息。
    $roots = @($env:TMOG_QT_ROOT, 'E:\InstallApplication\Qt', 'D:\InstallApplication\Qt', 'C:\Qt') |
             Where-Object { $_ -and (Test-Path -LiteralPath $_) } | Select-Object -Unique
    $candidates = @()
    foreach ($root in $roots) {
        $candidates += @(Get-ChildItem -LiteralPath $root -Directory -ErrorAction SilentlyContinue |
                         ForEach-Object { Join-Path $_.FullName 'msvc2022_64' })
    }
    $incomplete = @()
    foreach ($cand in $candidates) {
        if (-not (Test-Path -LiteralPath $cand)) { continue }
        $probe = Test-QtKitComplete -Prefix $cand
        if ($probe.Ok) { return $probe }
        $incomplete += ("{0}（缺失 {1}）" -f $cand, ($probe.Missing -join ','))
    }
    $detail = ''
    if ($incomplete.Count -gt 0) { $detail = [Environment]::NewLine + "  探测到但不完整: " + ($incomplete -join [Environment]::NewLine + '  ') }
    Fail ("找不到完整的 MSVC Qt kit（需要 msvc2022_64 完整 SDK：Qt6Config.cmake/Qt6Core.dll/Qt6Widgets.dll/windeployqt.exe/qmake.exe/include/QtCore）。" +
          [Environment]::NewLine + "  请安装组件 qt.qt6.6120.win64_msvc2022_64（需用户批准），或用 -QtDir / TMOG_QT_MSVC_DIR 指定完整 kit。" + $detail)
}

function Invoke-Logged {
    param([string]$What, [string]$FilePath, [string[]]$Arguments, [string]$LogPath, [switch]$AllowFailure)
    $cmdText = '"{0}" {1}' -f $FilePath, ($Arguments -join ' ')
    Add-Content -LiteralPath $LogPath -Value ("# {0} :: {1}" -f (Get-Date).ToString('o'), $cmdText)
    $sw = [System.Diagnostics.Stopwatch]::StartNew()
    & $FilePath @Arguments 2>&1 | Tee-Object -FilePath $LogPath -Append | ForEach-Object { Write-Host $_ }
    $code = $LASTEXITCODE
    $sw.Stop()
    Add-Content -LiteralPath $LogPath -Value ("# exit={0} elapsed={1:N1}s" -f $code, $sw.Elapsed.TotalSeconds)
    if ($code -ne 0 -and -not $AllowFailure) {
        Fail ("{0} 失败 (exit={1})，日志: {2}" -f $What, $code, $LogPath)
    }
    return $code
}

function Resolve-MsvcRedistCrtDir {
    # 定位 Visual Studio 的 Microsoft.VC143.CRT 可再发行目录（含 app-local 允许复制的运行库 DLL）。
    # 候选：VSINSTALLDIR\VC\Redist\MSVC\*，以及 cl.exe 所在的 ...\VC\Redist\MSVC\*。
    $roots = @()
    $vsInstall = [Environment]::GetEnvironmentVariable('VSINSTALLDIR')
    if ($vsInstall) { $roots += (Join-Path $vsInstall 'VC\Redist\MSVC') }
    $clCmd = Get-Command cl.exe -ErrorAction SilentlyContinue
    if ($clCmd) {
        $vcRoot = $clCmd.Source -replace '\\Tools\\MSVC\\[^\\]+\\bin\\[^\\]+\\[^\\]+\\cl\.exe$', ''
        if ($vcRoot -ne $clCmd.Source) { $roots += (Join-Path $vcRoot 'Redist\MSVC') }
    }
    $best = $null
    $bestVersion = $null
    foreach ($root in ($roots | Select-Object -Unique)) {
        if (-not (Test-Path -LiteralPath $root)) { continue }
        foreach ($dir in Get-ChildItem -LiteralPath $root -Directory -ErrorAction SilentlyContinue) {
            $crt = Join-Path $dir.FullName 'x64\Microsoft.VC143.CRT'
            if (-not (Test-Path -LiteralPath (Join-Path $crt 'vcruntime140.dll'))) { continue }
            $ver = $null
            if (-not [version]::TryParse($dir.Name, [ref]$ver)) { continue }
            if (-not $bestVersion -or $ver -gt $bestVersion) { $bestVersion = $ver; $best = $crt }
        }
    }
    return $best
}

function Copy-MsvcCrtRuntime {
    # Qt 6.12 的 windeployqt --compiler-runtime 只放 vc_redist.x64.exe 安装器；独立包要求
    # 目标机免安装运行，因此从 VS 的 Microsoft.VC143.CRT 目录做 app-local 部署。
    # 需要的 DLL 由包内 exe/DLL 的 import 表闭包推导（dumpbin /dependents），
    # 避免凭猜测携带多余文件；dumpbin 不可用时退回固定核心三件套。
    param([string]$PackageDir)
    $crtDir = Resolve-MsvcRedistCrtDir
    $available = @{}
    if ($crtDir) {
        Info ("MSVC CRT 可再发行目录: {0}" -f $crtDir)
        foreach ($f in Get-ChildItem -LiteralPath $crtDir -File) { $available[$f.Name.ToLowerInvariant()] = $f.FullName }
    } else {
        Info '未找到 VC\Redist\MSVC\*\x64\Microsoft.VC143.CRT（将尝试固定运行库清单）'
    }
    $needed = @{}
    $dumpbin = Get-Command dumpbin.exe -ErrorAction SilentlyContinue
    if ($crtDir -and $dumpbin) {
        $pending = @(Get-ChildItem -LiteralPath $PackageDir -File |
                Where-Object { $_.Extension -in @('.exe', '.dll') } | ForEach-Object { $_.FullName })
        $pending += @(Get-ChildItem -LiteralPath $PackageDir -Recurse -File -Filter '*.dll' |
                ForEach-Object { $_.FullName })
        $seen = @{}
        $round = 0
        while ($pending.Count -gt 0 -and $round -lt 8) {
            $round++
            $next = @()
            foreach ($file in $pending) {
                $key = $file.ToLowerInvariant()
                if ($seen.ContainsKey($key)) { continue }
                $seen[$key] = $true
                $text = (& $dumpbin.Source /nologo /dependents $file 2>&1) -join "`n"
                foreach ($m in [regex]::Matches($text, '(?im)^\s+([A-Za-z0-9_.\-]+\.dll)\s*$')) {
                    $dep = $m.Groups[1].Value.ToLowerInvariant()
                    if (-not $available.ContainsKey($dep)) { continue }
                    if (-not $needed.ContainsKey($dep)) {
                        $needed[$dep] = $available[$dep]
                        $next += $available[$dep]
                    }
                }
            }
            $pending = $next
        }
    }
    if ($needed.Count -eq 0) {
        Info '未能通过 import 表推导运行库，使用固定清单 vcruntime140/vcruntime140_1/msvcp140'
        foreach ($name in @('vcruntime140.dll', 'vcruntime140_1.dll', 'msvcp140.dll')) {
            if ($available.ContainsKey($name)) { $needed[$name] = $available[$name] }
        }
    }
    if ($needed.Count -eq 0) {
        Fail '无法定位 MSVC 运行库（需要 VC\Redist\MSVC\*\x64\Microsoft.VC143.CRT 中的 vcruntime140/msvcp140）'
    }
    foreach ($name in ($needed.Keys | Sort-Object)) {
        Copy-Item -LiteralPath $needed[$name] -Destination (Join-Path $PackageDir $name) -Force
        Info ("已 app-local 部署 MSVC 运行库: {0}" -f $name)
    }
    foreach ($must in 'vcruntime140.dll', 'vcruntime140_1.dll', 'msvcp140.dll') {
        if (-not (Test-Path -LiteralPath (Join-Path $PackageDir $must))) {
            Fail "app-local 部署后仍缺运行库: $must"
        }
    }
}

# ---------- 0. 路径与构建目录 ----------
if (-not $SourceDir) { $SourceDir = Split-Path $PSScriptRoot -Parent }
if (-not (Test-Path -LiteralPath (Join-Path $SourceDir 'CMakeLists.txt'))) {
    Fail "SourceDir 不是工程根（缺 CMakeLists.txt）: $SourceDir"
}
$SourceDir = (Resolve-Path -LiteralPath $SourceDir).Path
$srcItem = Get-Item -LiteralPath $SourceDir -Force
if ($srcItem.LinkType) { Fail "SourceDir 不得是链接/重解析点: $SourceDir" }

if (-not $BuildDir) { $BuildDir = Join-Path $SourceDir ('build\msvc-' + $Configuration.ToLower()) }
$BuildDir = [System.IO.Path]::GetFullPath($BuildDir)
if (-not $BuildDir.StartsWith($SourceDir + [System.IO.Path]::DirectorySeparatorChar)) {
    Fail "BuildDir 必须位于 SourceDir 内: $BuildDir"
}
if ($BuildDir.TrimEnd('\') -eq $SourceDir.TrimEnd('\')) { Fail "BuildDir 不得是源码根" }
New-Item -ItemType Directory -Force -Path $BuildDir | Out-Null
$LogDir = Join-Path $BuildDir 'logs'
New-Item -ItemType Directory -Force -Path $LogDir | Out-Null
$VersionLog = Join-Path $LogDir 'toolchain-versions.txt'

# ---------- 1. MSVC 环境 ----------
$vcvars = Resolve-VcVars -Explicit $VcVarsBat -SourceRoot $SourceDir
Import-VcEnvironment -VcVars $vcvars
$cmake = Resolve-NativeTool -Explicit $CMakeExe -EnvName 'TMOG_CMAKE_EXE' -NameOnPath @('cmake.exe','cmake') `
    -KnownPaths @('D:\InstallApplication\CMake\bin\cmake.exe') -What 'cmake'
$ninja = Resolve-NativeTool -Explicit $NinjaExe -EnvName 'TMOG_NINJA_EXE' -NameOnPath @('ninja.exe','ninja') `
    -KnownPaths @('E:\InstallApplication\Qt\Tools\Ninja\ninja.exe') -What 'ninja'
if ($Parallel -le 0) { $Parallel = [Math]::Max(2, [Environment]::ProcessorCount) }

# ---------- 2. Qt kit 解析（-CoreOnly 时显式禁用 Qt） ----------
$qt = $null
if ($CoreOnly) {
    if ($Package) { Fail "-CoreOnly 与 -Package 不能同时使用（打包必须完整 Qt）" }
    if ($QtDir) { Fail "-CoreOnly 不接受 -QtDir；无 Qt 核心构建不使用 Qt kit" }
    Info "模式: -CoreOnly（无 Qt 核心目标；GUI/便携包不覆盖，下方断言目标缺失）"
    if (Test-Path -LiteralPath (Join-Path $SourceDir 'CMakeLists.txt')) {
        # 仅提示：自动探测到的完整 kit 不影响本模式（本模式显式禁用 Qt6）
        $maybe = @('E:\InstallApplication\Qt\6.12.0\msvc2022_64') | Where-Object { Test-Path -LiteralPath $_ }
        if ($maybe) { Info "注意：检测到目录 $($maybe[0])，本模式仍显式禁用 Qt6（-DCMAKE_DISABLE_FIND_PACKAGE_Qt6=ON）" }
    }
} else {
    $qt = Find-QtMsvcKit -Explicit $QtDir
    Info ("Qt kit: {0}（完整，msvc2022_64）" -f $qt.Prefix)
    if ((Split-Path $qt.Prefix -Leaf) -ne 'msvc2022_64') {
        Fail ("Qt kit 目录名必须为 msvc2022_64（防 MinGW kit 混入）: {0}" -f $qt.Prefix)
    }
}

# ---------- 3. 工具链版本记录 ----------
$lines = @(
    '# build-msvc toolchain versions',
    ('generated: ' + (Get-Date).ToUniversalTime().ToString('yyyy-MM-ddTHH:mm:ssZ')),
    ('configuration: ' + $Configuration),
    ('core-only: ' + [bool]$CoreOnly),
    ('package: ' + [bool]$Package),
    ('ctest: ' + $(if ($SkipCtest) { 'SKIPPED (-SkipCtest) — 不据此声明测试通过' } else { 'run' })),
    ('source-dir: ' + $SourceDir),
    ('build-dir: ' + $BuildDir),
    ('vcvars64: ' + $vcvars),
    ('cmake: ' + $cmake),
    ('ninja: ' + $ninja)
)
if ($qt) { $lines += ('qt-prefix: ' + $qt.Prefix) }
$lines += '# cl: ' + ((& cl 2>&1) -join ' | ')
$lines += '# cmake-version: ' + ((& $cmake --version 2>&1 | Select-Object -First 1))
$lines += '# ninja-version: ' + ((& $ninja --version 2>&1))
if ($qt) {
    $qmake = Join-Path $qt.Prefix 'bin\qmake.exe'
    if (Test-Path -LiteralPath $qmake) {
        $lines += '# qt-version: ' + ((& $qmake -query QT_VERSION 2>&1))
        $lines += '# qt-install-prefix: ' + ((& $qmake -query QT_INSTALL_PREFIX 2>&1))
    }
    $coreDll = Join-Path $qt.Prefix 'bin\Qt6Core.dll'
    if (Test-Path -LiteralPath $coreDll) {
        $lines += '# Qt6Core.dll FileVersion: ' + ((Get-Item -LiteralPath $coreDll).VersionInfo.FileVersion)
    }
}
$os = Get-CimInstance Win32_OperatingSystem
$lines += ('# windows: ' + $os.Caption + ' ' + $os.Version + ' build ' + $os.BuildNumber)
Set-Content -LiteralPath $VersionLog -Value $lines -Encoding utf8
$lines | ForEach-Object { Write-Host $_ }

# ---------- 4. 配置 ----------
if (Test-Path -LiteralPath (Join-Path $BuildDir 'CMakeCache.txt')) {
    $cache = Get-Content -LiteralPath (Join-Path $BuildDir 'CMakeCache.txt') -Raw
    if ($cache -match 'CMAKE_BUILD_TYPE:STRING=([^\r\n]*)') {
        $existing = $Matches[1]
        if ($existing -and $existing -ne $Configuration) {
            Fail ("BuildDir 已有不同配置的缓存 (CMAKE_BUILD_TYPE=$existing，期望 $Configuration)。请改用新的 -BuildDir。")
        }
    }
}
$configureArgs = @(
    '-S', $SourceDir, '-B', $BuildDir, '-G', 'Ninja',
    ('-DCMAKE_BUILD_TYPE=' + $Configuration),
    ('-DCMAKE_MAKE_PROGRAM=' + $ninja),
    '-DCMAKE_CXX_COMPILER=cl'
)
if ($CoreOnly) {
    $configureArgs += '-DCMAKE_DISABLE_FIND_PACKAGE_Qt6=ON'
} else {
    # 覆盖可能残留的 -CoreOnly 缓存（CMAKE_DISABLE_FIND_PACKAGE_Qt6=ON 会被 CMakeCache 记住，
    # 否则复用同一 BuildDir 切回完整模式时会再次静默找不到 Qt）。
    $configureArgs += '-DCMAKE_DISABLE_FIND_PACKAGE_Qt6=OFF'
    $configureArgs += ('-DCMAKE_PREFIX_PATH=' + $qt.Prefix)
    $configureArgs += '-DTMOG_PORTABLE_STRICT=ON'
}
$configureLog = Join-Path $LogDir ('configure-' + $Configuration + '.log')
Invoke-Logged -What 'cmake configure' -FilePath $cmake -Arguments $configureArgs -LogPath $configureLog | Out-Null

# ---------- 5. 配置后断言：GUI/打包目标是否存在 ----------
$ninjaFile = Join-Path $BuildDir 'build.ninja'
if (-not (Test-Path -LiteralPath $ninjaFile)) { Fail "配置后未见 build.ninja: $ninjaFile" }
$targetText = Get-Content -LiteralPath $ninjaFile -Raw
$hasGui = [bool]($targetText -match 'build\s+TmogReplica(\.exe)?\s*:')
$hasPortable = [bool]($targetText -match 'build\s+portable_package\s*:')
if ($CoreOnly) {
    if ($hasGui -or $hasPortable) {
        Fail "-CoreOnly 模式却生成了 GUI/便携包目标（TmogReplica=$hasGui portable_package=$hasPortable）——无法证明缺 Qt 时的目标集合"
    }
    Info '断言通过: 无 Qt 核心模式未生成 TmogReplica/portable_package 目标（显式记录为“不覆盖 GUI”，非静默跳过）'
} else {
    if (-not $hasGui) { Fail '完整模式配置后缺少 TmogReplica 目标——Qt Widgets 未生效' }
    if (-not $hasPortable) { Fail '完整模式配置后缺少 portable_package 目标——windeployqt 未生效' }
    # 配置来源复核：Qt6_DIR 必须来自传入 kit（防系统 Qt 错配）
    $cache = Get-Content -LiteralPath (Join-Path $BuildDir 'CMakeCache.txt') -Raw
    if ($cache -match 'Qt6_DIR:PATH=([^\r\n]*)') {
        $qt6dir = $Matches[1].Trim()
        $qt6dirReal = [System.IO.Path]::GetFullPath($qt6dir)
        $expectPrefix = [System.IO.Path]::GetFullPath((Join-Path $qt.Prefix 'lib\cmake\Qt6'))
        if ($qt6dirReal -ne $expectPrefix) {
            Fail ("Qt6_DIR 与传入 kit 不一致: {0} != {1}" -f $qt6dirReal, $expectPrefix)
        }
        # CMAKE_SIZEOF_VOID_P 在现代 CMake 里不是缓存项，实际值写在
        # CMakeFiles/<ver>/CMakeCXXCompiler.cmake 的 CMAKE_CXX_SIZEOF_DATA_PTR 中。
        $compilerCmake = Get-ChildItem -LiteralPath (Join-Path $BuildDir 'CMakeFiles') `
            -Recurse -Filter 'CMakeCXXCompiler.cmake' -ErrorAction SilentlyContinue |
            Select-Object -First 1
        if (-not $compilerCmake) { Fail '未找到 CMakeCXXCompiler.cmake，无法核对编译器 ABI' }
        $compilerText = Get-Content -LiteralPath $compilerCmake.FullName -Raw
        if ($compilerText -notmatch 'CMAKE_CXX_COMPILER_ID "MSVC"') {
            Fail ("CXX 编译器不是 MSVC: {0}" -f $compilerCmake.FullName)
        }
        if ($compilerText -notmatch 'set\(CMAKE_CXX_SIZEOF_DATA_PTR\s+"?8"?\)') {
            Fail 'CMake 配置不是 64 位目标（CMAKE_CXX_SIZEOF_DATA_PTR != 8）'
        }
        if ($compilerText -notmatch 'MSVC_CXX_ARCHITECTURE_ID x64') {
            Fail 'MSVC 目标架构不是 x64（MSVC_CXX_ARCHITECTURE_ID != x64）'
        }
        Info '断言通过: Qt6_DIR 来自传入 kit、编译器为 MSVC x64（CMAKE_CXX_SIZEOF_DATA_PTR=8）'
    } else {
        Fail 'CMakeCache 中缺少 Qt6_DIR——Qt 配置来源未知'
    }
}

# ---------- 6. 构建 ----------
$buildLog = Join-Path $LogDir ('build-' + $Configuration + '.log')
Invoke-Logged -What 'cmake build' -FilePath $cmake `
    -Arguments @('--build', $BuildDir, '--parallel', "$Parallel") -LogPath $buildLog | Out-Null

# ---------- 7. ctest ----------
if ($SkipCtest) {
    Info '已跳过 ctest（-SkipCtest）：本次仅生成/验证便携包；toolchain-versions.txt 记录为 SKIPPED，不声明测试通过'
} else {
    $ctestExe = Join-Path (Split-Path $cmake -Parent) 'ctest.exe'
    if (-not (Test-Path -LiteralPath $ctestExe)) { $ctestExe = (Get-Command ctest.exe -ErrorAction Stop).Path }
    $ctestLog = Join-Path $LogDir ('ctest-' + $Configuration + '.log')
    # 测试运行环境（如实记录，非弱化断言）：
    # 1) PATH 前置 Qt bin：测试可执行文件链接 Qt6::Test/Widgets，运行时需能找到对应 DLL；
    # 2) TEMP/TMP 指到构建目录内：本会话的 %TEMP% 目录 ACL 对受限令牌拒绝创建子目录，
    #    QTemporaryDir 因此失败（environment 限制，与 MinGW/MSVC 无关）。
    $ctestTmp = Join-Path $BuildDir 'tmp'
    New-Item -ItemType Directory -Path $ctestTmp -Force | Out-Null
    $savedPath = $env:PATH
    $savedTemp = $env:TEMP
    $savedTmp = $env:TMP
    $qtBinForTests = if ($qt) { Join-Path $qt.Prefix 'bin' } else { $null }
    if ($qtBinForTests) { $env:PATH = $qtBinForTests + ';' + $env:PATH }
    $env:TEMP = $ctestTmp
    $env:TMP = $ctestTmp
    try {
        $ctestCode = Invoke-Logged -What 'ctest' -FilePath $ctestExe `
            -Arguments @('--test-dir', $BuildDir, '--output-on-failure') -LogPath $ctestLog -AllowFailure
    } finally {
        $env:PATH = $savedPath
        $env:TEMP = $savedTemp
        $env:TMP = $savedTmp
    }
    if ($ctestCode -ne 0) {
        Fail ("ctest 有失败项 (exit=$ctestCode)，日志: {0}" -f $ctestLog)
    }
}

# ---------- 8. 便携包（仅完整模式 + -Package） ----------
if ($Package) {
    if ($CoreOnly) { Fail '-CoreOnly 不能打包' }
    $pkgLog = Join-Path $LogDir ('package-' + $Configuration + '.log')
    Invoke-Logged -What 'portable_package' -FilePath $cmake `
        -Arguments @('--build', $BuildDir, '--target', 'portable_package') -LogPath $pkgLog | Out-Null
    $pkgDir = Join-Path $BuildDir 'portable'
    if (-not (Test-Path -LiteralPath (Join-Path $pkgDir 'TmogReplica.exe'))) {
        Fail "未生成便携包: $(Join-Path $pkgDir 'TmogReplica.exe') 缺失"
    }
    # 发布包只允许 Release：Debug CRT 属于开发机调试运行时，不可再发行，不能作为独立发布包。
    if ($Configuration -eq 'Debug') {
        Fail '便携包仅支持 Release（Debug CRT 不可再发行）；Debug 构建请不带 -Package 运行'
    }
    # MSVC 运行库：CMakeLists 的 windeployqt 未带 --compiler-runtime（本票不改 CMakeLists），
    # 由本脚本对 staged exe 追加部署。注意 Qt 6.12 的 windeployqt --compiler-runtime 只放
    # vc_redist.x64.exe 安装器、不放运行库 DLL；便携包要求目标机免安装运行，因此再从
    # VS 的 Microsoft.VC143.CRT 可再发行目录做 app-local 部署（Microsoft 允许 app-local 复制）。
    $windeployqt = Join-Path $qt.Prefix 'bin\windeployqt.exe'
    $wdArgs = @('--no-translations', '--no-system-d3d-compiler', '--no-opengl-sw', '--compiler-runtime')
    $wdArgs += (Join-Path $pkgDir 'TmogReplica.exe')
    Invoke-Logged -What 'windeployqt --compiler-runtime' -FilePath $windeployqt -Arguments $wdArgs `
        -LogPath (Join-Path $LogDir ('windeployqt-' + $Configuration + '.log')) | Out-Null
    # windeployqt 缺省会放 vc_redist.x64.exe 安装器；本包选择直接携带运行库 DLL（目标机无需预装），
    # 因此移除安装器；保留则违反“单一 exe”与白名单，且不属于最小运行集合。
    $redistExe = Join-Path $pkgDir 'vc_redist.x64.exe'
    if (Test-Path -LiteralPath $redistExe) {
        Remove-Item -LiteralPath $redistExe -Force
        Info '已移除 windeployqt 生成的 vc_redist.x64.exe（包内直接携带运行库 DLL）'
    }
    Copy-MsvcCrtRuntime -PackageDir $pkgDir

    # ---- 8.1 必需运行库断言（ABI=MSVC x64；Debug/Release 变体分别匹配） ----
    $suffix = if ($Configuration -eq 'Debug') { 'd' } else { '' }
    $requireAny = @(
        @{ Label = 'TmogReplica.exe'; Alt = @('TmogReplica.exe') },
        @{ Label = 'Qt6Core';        Alt = @(('Qt6Core{0}.dll' -f $suffix)) },
        @{ Label = 'Qt6Gui';         Alt = @(('Qt6Gui{0}.dll' -f $suffix)) },
        @{ Label = 'Qt6Widgets';     Alt = @(('Qt6Widgets{0}.dll' -f $suffix)) },
        @{ Label = 'platforms/qwindows.dll'; Alt = @('platforms\qwindows.dll') },
        @{ Label = 'vcruntime140';   Alt = @('vcruntime140.dll','vcruntime140d.dll') },
        @{ Label = 'vcruntime140_1'; Alt = @('vcruntime140_1.dll','vcruntime140_1d.dll') },
        @{ Label = 'msvcp140';       Alt = @('msvcp140.dll','msvcp140d.dll') }
    )
    foreach ($req in $requireAny) {
        $hit = $null
        foreach ($alt in $req.Alt) { if (Test-Path -LiteralPath (Join-Path $pkgDir $alt)) { $hit = $alt; break } }
        if (-not $hit) { Fail ("便携包缺必需文件: {0}（候选: {1}）" -f $req.Label, ($req.Alt -join ' / ')) }
    }
    foreach ($mingw in 'libgcc_s_seh-1.dll', 'libstdc++-6.dll', 'libwinpthread-1.dll') {
        if (Test-Path -LiteralPath (Join-Path $pkgDir $mingw)) { Fail "MSVC 包混入 MinGW 运行库: $mingw" }
    }

    # ---- 8.2 覆盖为 MSVC 口径文档（README / 第三方声明） ----
    $packagingDir = Join-Path $SourceDir 'packaging'
    foreach ($pair in @(
            @{ Src = 'README-PACKAGE-MSVC.md'; Dst = 'README-PACKAGE.md' },
            @{ Src = 'THIRD-PARTY-NOTICES-MSVC.md'; Dst = 'THIRD-PARTY-NOTICES.md' })) {
        $srcFile = Join-Path $packagingDir $pair.Src
        if (-not (Test-Path -LiteralPath $srcFile)) { Fail "缺 MSVC 口径文档源文件: packaging/$($pair.Src)" }
        Copy-Item -LiteralPath $srcFile -Destination (Join-Path $pkgDir $pair.Dst) -Force
    }

    # ---- 8.3 许可材料（24 = 22 内嵌 + Qt-LICENSE + Qt-COPYING）：按 ABI 从
    #          packaging/license-sources.json 过滤；逐文件 hash 与源清单核对后复制。 ----
    $licSrcDir = Join-Path $packagingDir 'licenses'
    $sourcesJsonPath = Join-Path $packagingDir 'license-sources.json'
    if (-not (Test-Path -LiteralPath $sourcesJsonPath)) { Fail '缺 packaging/license-sources.json' }
    $srcSources = Get-Content -LiteralPath $sourcesJsonPath -Raw | ConvertFrom-Json
    $excludedLic = @('licenses/gcc-COPYING3.txt', 'licenses/gcc-COPYING.RUNTIME.txt',
                     'licenses/winpthreads-COPYING.txt', 'licenses/mingw-w64-runtime-COPYING.txt')
    $keptFiles = @()
    $keptHash = @{}
    foreach ($licEntry in $srcSources.files) {
        if ($excludedLic -contains $licEntry.file) { continue }
        $keptFiles += $licEntry
        $keptHash[$licEntry.file] = $licEntry.sha256
    }
    if ($keptFiles.Count -ne 24) {
        Fail ("MSVC 许可清单应为 24 项（22 内嵌 + Qt 2），实际 {0}" -f $keptFiles.Count)
    }
    $licPkgDir = Join-Path $pkgDir 'licenses'
    if (Test-Path -LiteralPath $licPkgDir) { Remove-Item -LiteralPath $licPkgDir -Recurse -Force }
    New-Item -ItemType Directory -Path $licPkgDir | Out-Null
    foreach ($licEntry in $keptFiles) {
        $leafName = $licEntry.file.Substring('licenses/'.Length)
        $srcFile = Join-Path $licSrcDir $leafName
        if (-not (Test-Path -LiteralPath $srcFile)) { Fail "缺许可源文件: packaging/licenses/$leafName" }
        $srcHash = (Get-FileHash -LiteralPath $srcFile -Algorithm SHA256).Hash.ToLower()
        if ($srcHash -ne $licEntry.sha256) { Fail ("许可源 hash 与 packaging/license-sources.json 不符: {0}" -f $licEntry.file) }
        Copy-Item -LiteralPath $srcFile -Destination (Join-Path $licPkgDir $leafName) -Force
    }
    # 重建 MSVC 版 license-sources.json（保留 11 个内嵌组件 + 1 个 Qt 组件）
    $outComponents = @()
    foreach ($c in $srcSources.components) {
        $keptRefs = @($c.license_files | Where-Object { $keptHash.ContainsKey($_.file) })
        if ($keptRefs.Count -eq 0) { continue }
        if ($c.component -match 'GCC|工具链') {
            $qtRefs = @($keptRefs | Where-Object { $_.file -match 'Qt-(LICENSE|COPYING)\.txt$' })
            $outComponents += [pscustomobject]@{
                component         = 'Qt 6.12.0 本体许可（msvc2022_64 工具链随附文本）'
                version           = 'Qt 6.12.0'
                embedded_in       = '包内 Qt6*.dll'
                license_ids       = @('LGPL-3.0-only', 'GPL-3.0-only')
                license_files     = $qtRefs
                upstream_download = 'https://download.qt.io/official_releases/qt/6.12/6.12.0/'
                notes             = 'Qt-LICENSE.txt 为 Qt 官方安装器 Licenses/LICENSE（LGPLv3/GPLv3 多许可，本包分发许可依据）；Qt-COPYING.txt 为官方随附 Apache-2.0 全文，不作为本包分发许可依据。MSVC 包不含 GCC/MinGW 运行库。'
            }
        } else {
            $copy = [pscustomobject]@{}
            foreach ($prop in $c.PSObject.Properties) {
                if ($prop.Name -eq 'license_files') { continue }
                $copy | Add-Member -NotePropertyName $prop.Name -NotePropertyValue $prop.Value
            }
            $copy | Add-Member -NotePropertyName 'license_files' -NotePropertyValue $keptRefs
            $outComponents += $copy
        }
    }
    $outSources = [pscustomobject]@{
        schema     = $srcSources.schema
        provenance = $srcSources.provenance
        components = $outComponents
        files      = $keptFiles
    }
    $outJsonPath = Join-Path $pkgDir 'license-sources.json'
    $outSources | ConvertTo-Json -Depth 8 | Set-Content -LiteralPath $outJsonPath -Encoding utf8
    $roundTrip = Get-Content -LiteralPath $outJsonPath -Raw | ConvertFrom-Json
    if ($roundTrip.files.Count -ne 24) { Fail ("打包后 license-sources.json files 项应为 24，实际 {0}" -f $roundTrip.files.Count) }
    foreach ($c in $roundTrip.components) {
        foreach ($f in $c.license_files) {
            $k = $f.file.ToLower()
            if (-not $keptHash.ContainsKey($f.file)) { Fail "组件引用包外许可文件: $($f.file)" }
        }
    }

    # ---- 8.4 MSVC 运行库说明（包根；不在 licenses/ 内，避免与来源清单冲突） ----
    $clVersion = 'unknown'
    $clText = ((& cl 2>&1) -join ' ')
    if ($clText -match 'Version ([0-9]+\.[0-9]+\.[0-9]+)') { $clVersion = $Matches[1] }
    $rtCandidates = @('vcruntime140.dll', 'vcruntime140_1.dll', 'vcruntime140_threads.dll',
                      'msvcp140.dll', 'msvcp140_1.dll', 'msvcp140_2.dll', 'msvcp140_atomic_wait.dll',
                      'msvcp140_codecvt_ids.dll', 'concrt140.dll')
    $rtRows = @()
    $rtFound = @()
    foreach ($d in $rtCandidates) {
        $p = Join-Path $pkgDir $d
        if (Test-Path -LiteralPath $p) {
            $vi = (Get-Item -LiteralPath $p).VersionInfo
            $desc = if ($vi.FileDescription) { $vi.FileDescription } else { '' }
            $rtRows += ('| {0} | {1} | {2} |' -f $d, $vi.FileVersion, $desc)
            $rtFound += $d
        }
    }
    if ($rtFound.Count -eq 0) { Fail '包内未发现任何 MSVC 运行库 DLL（windeployqt --compiler-runtime 未生效）' }
    $noticeText = @"
# MSVC 运行库说明（TmogReplica 便携包，MSVC x64）

本包随附 Microsoft Visual C++ 2015-2022 Redistributable 运行库 DLL。它们来自本机
Visual Studio 2022 Professional 的 MSVC v143 工具集（cl $clVersion）对应的可再发行目录，
经 windeployqt --compiler-runtime 部署；二进制未修改。

| 文件 | FileVersion | 描述 |
|---|---|---|
$($rtRows -join "`r`n")

许可与再分发：这些文件按 Microsoft 的 Visual C++ Redistributable 许可条款随应用分发。
条款入口（Microsoft 官方）：https://visualstudio.microsoft.com/license-terms/
本机 Visual Studio 安装目录内的许可/第三方声明文本为条款随附件，未复制进本包
licenses/（它们不是 LGPL/GPL 类库全文）；分发者须自行确认再分发权利与适用条款版本。

其他说明：
- 运行库版本随构建工具集固定（见上表）；替换包内运行库须保持 v14.x ABI 兼容，
  并同步更新 MANIFEST.txt 与本文件。
- 本包不包含 GCC/MinGW 运行库（libgcc_s_seh-1.dll、libstdc++-6.dll、
  libwinpthread-1.dll）；scripts/check-package.ps1 -Toolchain msvc 会拒绝其混入。
- 完整性核验：对包目录运行 scripts/check-package.ps1 -PackageDir <包目录> -Toolchain msvc。
"@
    Set-Content -LiteralPath (Join-Path $pkgDir 'MSVC-RUNTIME-NOTICE.md') -Value $noticeText -Encoding utf8

    # ---- 8.5 MANIFEST.txt（hash + size 双向清单；check-package 校验） ----
    $manifestHeader = @(
        '# TmogReplica portable package manifest (MSVC x64)',
        ('# compiler-runtime: MSVC cl ' + $clVersion + ' (Visual Studio 2022 v14.44)'),
        ('# qt: 6.12.0 (msvc2022_64)'),
        ('# configuration: ' + $Configuration),
        ('# generated: ' + (Get-Date).ToUniversalTime().ToString('yyyy-MM-ddTHH:mm:ssZ')),
        '# format: sha256<TAB>size<TAB>relative-path'
    )
    $manifestLines = @($manifestHeader)
    $pkgFiles = @(Get-ChildItem -LiteralPath $pkgDir -Recurse -File | Sort-Object FullName)
    foreach ($f in $pkgFiles) {
        $rel = $f.FullName.Substring($pkgDir.Length + 1) -replace '\\', '/'
        if ($rel -ieq 'MANIFEST.txt') { continue }
        $h = (Get-FileHash -LiteralPath $f.FullName -Algorithm SHA256).Hash.ToLower()
        $manifestLines += ("$h`t$($f.Length)`t$rel")
    }
    Set-Content -LiteralPath (Join-Path $pkgDir 'MANIFEST.txt') -Value $manifestLines -Encoding utf8
    Info ("MANIFEST.txt: {0} 条文件记录（不含 MANIFEST 自身）" -f ($manifestLines.Count - $manifestHeader.Count))

    # ---- 8.6 check-package（独立 pwsh 进程；exit 非 0 即失败） ----
    $checkScript = Join-Path $SourceDir 'scripts\check-package.ps1'
    if (-not (Test-Path -LiteralPath $checkScript)) { Fail '缺 scripts/check-package.ps1' }
    $pwshExe = [System.Diagnostics.Process]::GetCurrentProcess().MainModule.FileName
    $checkLog = Join-Path $LogDir ('check-package-' + $Configuration + '.log')
    $checkCode = Invoke-Logged -What 'check-package' -FilePath $pwshExe `
        -Arguments @('-NoProfile', '-File', $checkScript, '-PackageDir', $pkgDir, '-Toolchain', 'msvc') `
        -LogPath $checkLog -AllowFailure
    if ($checkCode -ne 0) { Fail ("check-package 失败 (exit=$checkCode)，日志: {0}" -f $checkLog) }

    # ---- 8.7 干净 PATH 环境启动验证（无开发 PATH；窗口 + 包内模块证据） ----
    if ($SkipLaunchVerify) {
        Info '已跳过干净环境启动验证（-SkipLaunchVerify）：不能据此声明“干净环境启动通过”'
    } else {
        $verifyScript = Join-Path $SourceDir 'scripts\verify-portable-launch.ps1'
        if (-not (Test-Path -LiteralPath $verifyScript)) { Fail '缺启动验证脚本: scripts/verify-portable-launch.ps1' }
        $vLog = Join-Path $LogDir ('launch-verify-' + $Configuration + '.log')
        $vCode = Invoke-Logged -What 'verify-portable-launch' -FilePath $pwshExe `
            -Arguments @('-NoProfile', '-File', $verifyScript, '-PackageDir', $pkgDir,
                         '-TempDir', (Join-Path $BuildDir 'launch-temp')) -LogPath $vLog -AllowFailure
        if ($vCode -ne 0) { Fail ("干净环境启动验证失败 (exit=$vCode)，日志: {0}" -f $vLog) }
        Info '干净 PATH 环境启动验证通过（窗口出现 + 包内模块加载 + 正常关闭）'
    }

    # ---- 8.8 包清单证据（文件数/字节/关键 DLL 版本），写入 logs 而非包内 ----
    $finalFiles = @(Get-ChildItem -LiteralPath $pkgDir -Recurse -File)
    $bytes = ($finalFiles | Measure-Object Length -Sum).Sum
    $inventory = @(
        '# portable package inventory (MSVC x64)',
        ('generated: ' + (Get-Date).ToUniversalTime().ToString('yyyy-MM-ddTHH:mm:ssZ')),
        ('package-dir: ' + $pkgDir),
        ('files: ' + $finalFiles.Count),
        ('bytes: ' + $bytes),
        ('configuration: ' + $Configuration),
        ('cl: ' + $clVersion),
        ('qt: 6.12.0 (msvc2022_64)'),
        ('msvc-runtime-dlls: ' + ($rtFound -join ', '))
    )
    foreach ($keyDll in @('TmogReplica.exe', 'Qt6Core.dll', 'Qt6Gui.dll', 'Qt6Widgets.dll',
                          'Qt6Network.dll', 'Qt6Svg.dll', 'vcruntime140.dll', 'vcruntime140_1.dll',
                          'msvcp140.dll', 'concrt140.dll', 'platforms\qwindows.dll')) {
        $p = Join-Path $pkgDir $keyDll
        if (Test-Path -LiteralPath $p) {
            $item = Get-Item -LiteralPath $p
            $inventory += ('{0}: size={1} version={2}' -f $keyDll, $item.Length, $item.VersionInfo.FileVersion)
        } else {
            $inventory += ('{0}: <absent>' -f $keyDll)
            if ($keyDll -in @('TmogReplica.exe', 'vcruntime140.dll', 'msvcp140.dll')) { Fail "包清单缺少关键 DLL: $keyDll" }
        }
    }
    $invPath = Join-Path $LogDir ('package-inventory-' + $Configuration + '.txt')
    Set-Content -LiteralPath $invPath -Value $inventory -Encoding utf8
    $inventory | ForEach-Object { Write-Host $_ }
    Info ("便携包: {0} 个文件, {1} 字节, 目录: {2}；清单证据: {3}" -f $finalFiles.Count, $bytes, $pkgDir, $invPath)
}

Info ("完成: {0} {1}，日志目录: {2}" -f $Configuration, $(if ($CoreOnly) { '(core-only)' } else { '' }), $LogDir)
exit 0
