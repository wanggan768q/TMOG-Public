# TmogReplica Windows 便携包发布命令（issue6 迁入自旧 #6 树 HEAD c62992b8，最小安全修正版）。
# 任何前置缺失 => 非零退出，不静默跳过。
#
# 与旧版差异（计划 §1.3 最小整改）：
# - BuildDir 必须显式传入并规范化为绝对路径；拒绝工程根、源码目录、链接/重解析点，
#   只允许登记的专用构建目录（<tree>/build/issue6-*）。
# - 移除固定 $env:TEMP\tmog-portable-verify 实验段：默认不启动应用、不 Stop-Process、
#   不删除任何 TEMP 对象。清 PATH 运行属于人工授权步骤，由 6H 单独执行。
# - CMake/Ninja/编译器必须用绝对路径显式传入；每个原生命令检查退出码，非零立即失败。
#
# 用法（示例，参数为绝对路径）：
#   pwsh -NoProfile -File scripts/package-portable.ps1 `
#     -SourceDir <worktree> -BuildDir <worktree>/build/issue6-release `
#     -QtDir <Qt> -MinGWDir <MinGW> -CMakeExe <cmake.exe> -NinjaExe <ninja.exe>
param(
    [Parameter(Mandatory)][string]$SourceDir,
    [Parameter(Mandatory)][string]$BuildDir,
    [Parameter(Mandatory)][string]$QtDir,
    [Parameter(Mandatory)][string]$MinGWDir,
    [Parameter(Mandatory)][string]$CMakeExe,
    [Parameter(Mandatory)][string]$NinjaExe
)
$ErrorActionPreference = 'Stop'

function Assert-NativeOk([string]$What) {
    if ($LASTEXITCODE -ne 0) { throw "$What 失败 (exit=$LASTEXITCODE)" }
}

# 0) 参数核对
$SourceDir = (Resolve-Path $SourceDir).Path
foreach ($d in $QtDir, $MinGWDir) { if (-not (Test-Path $d)) { throw "目录不存在: $d" } }
foreach ($t in $CMakeExe, $NinjaExe) { if (-not (Test-Path $t)) { throw "工具不存在: $t" } }
$windeployqt = Join-Path $QtDir 'bin\windeployqt.exe'
if (-not (Test-Path $windeployqt)) { throw "windeployqt 缺失: $windeployqt" }
foreach ($lic in (Join-Path $QtDir '..\..\Licenses\LICENSE'),
                  (Join-Path $QtDir '..\..\Licenses\COPYING.txt'),
                  (Join-Path $MinGWDir 'licenses\gcc\COPYING3'),
                  (Join-Path $MinGWDir 'licenses\gcc\COPYING.RUNTIME'),
                  (Join-Path $MinGWDir 'licenses\winpthreads\COPYING'),
                  (Join-Path $MinGWDir 'licenses\mingw-w64\COPYING.MinGW-w64-runtime.txt')) {
    if (-not (Test-Path $lic)) { throw "许可证源缺失: $lic" }
}
$gcc = Join-Path $MinGWDir 'bin\g++.exe'
if (-not (Test-Path $gcc)) { throw "g++ 缺失: $gcc" }

# BuildDir 规范化与边界检查（计划 §1.3：拒绝工程根/源码/链接路径）
$BuildDirFull = if ([System.IO.Path]::IsPathRooted($BuildDir)) {
    [System.IO.Path]::GetFullPath($BuildDir)
} else {
    [System.IO.Path]::GetFullPath((Join-Path $SourceDir $BuildDir))
}
if (-not $BuildDirFull.StartsWith($SourceDir + [System.IO.Path]::DirectorySeparatorChar)) {
    throw "BuildDir 必须位于 SourceDir 内: $BuildDirFull"
}
$buildLeaf = Split-Path $BuildDirFull -Leaf
if ((Split-Path $BuildDirFull -Parent) -ne (Join-Path $SourceDir 'build') -or
    $buildLeaf -notmatch '^issue6-[a-z0-9-]+$') {
    throw ("BuildDir 必须是 <SourceDir>/build/issue6-* 专用目录，实际: {0} " +
           "(parent={1}, leaf={2})") -f $BuildDirFull, (Split-Path $BuildDirFull -Parent), $buildLeaf
}
$srcRootItem = Get-Item $SourceDir
if ($srcRootItem.LinkType) { throw "SourceDir 不得是链接/重解析点: $($srcRootItem.LinkType)" }
if (-not (Test-Path $BuildDirFull)) { throw "构建目录不存在，请先用 cmake 配置: $BuildDirFull" }
$buildItem = Get-Item $BuildDirFull
if ($buildItem.LinkType) { throw "BuildDir 不得是链接/重解析点: $($buildItem.LinkType)" }

# 1) Release 严格配置 + 构建 + staging（绝对工具路径，逐命令退出码检查）
& $CMakeExe -S $SourceDir -B $BuildDirFull -G Ninja -DCMAKE_BUILD_TYPE=Release `
    "-DCMAKE_PREFIX_PATH=$QtDir" "-DCMAKE_CXX_COMPILER=$gcc" "-DCMAKE_MAKE_PROGRAM=$NinjaExe" `
    -DTMOG_PORTABLE_STRICT=ON
Assert-NativeOk 'configure'
& $CMakeExe --build $BuildDirFull --target portable_package --parallel 2
Assert-NativeOk 'build/staging'
$pkg = Join-Path $BuildDirFull 'portable'

# 2) staged 运行库验证（windeployqt 若静默失败会在这里暴露）
foreach ($dll in 'Qt6Core.dll','Qt6Gui.dll','Qt6Widgets.dll','platforms/qwindows.dll',
                 'libgcc_s_seh-1.dll','libstdc++-6.dll','libwinpthread-1.dll') {
    if (-not (Test-Path (Join-Path $pkg $dll))) { throw "staged 包缺运行库: $dll（windeployqt 或 install 未完成）" }
}

# 3) 许可证文本收集（只复制本机明确合法源的单个文本文件，不复制整个 licenses 目录）
New-Item -ItemType Directory -Force (Join-Path $pkg 'licenses') | Out-Null
Copy-Item (Join-Path $QtDir '..\..\Licenses\LICENSE')    (Join-Path $pkg 'licenses\Qt-LICENSE.txt')
Copy-Item (Join-Path $QtDir '..\..\Licenses\COPYING.txt')(Join-Path $pkg 'licenses\Qt-COPYING.txt')
Copy-Item (Join-Path $MinGWDir 'licenses\gcc\COPYING3')  (Join-Path $pkg 'licenses\gcc-COPYING3.txt')
Copy-Item (Join-Path $MinGWDir 'licenses\gcc\COPYING.RUNTIME') (Join-Path $pkg 'licenses\gcc-COPYING.RUNTIME.txt')
Copy-Item (Join-Path $MinGWDir 'licenses\winpthreads\COPYING') (Join-Path $pkg 'licenses\winpthreads-COPYING.txt')
Copy-Item (Join-Path $MinGWDir 'licenses\mingw-w64\COPYING.MinGW-w64-runtime.txt') (Join-Path $pkg 'licenses\mingw-w64-runtime-COPYING.txt')

# 4) MANIFEST.txt（文件 SHA-256 + size + 包内相对路径）
$qtVer = (Get-Item (Join-Path $pkg 'Qt6Core.dll')).VersionInfo.FileVersion
$gccVer = ((& $gcc -dumpfullversion) -join '')
if ($LASTEXITCODE -ne 0) { throw "g++ -dumpfullversion 失败 (exit=$LASTEXITCODE)" }
$appVer = 'unknown'
if ((Get-Content (Join-Path $SourceDir 'CMakeLists.txt') -Raw) -match 'project\(TmogReplica\s+VERSION\s+([0-9.]+)') { $appVer = $Matches[1] }
$lines = @(
    "# TmogReplica portable package manifest",
    "# generated: $((Get-Date).ToUniversalTime().ToString('yyyy-MM-ddTHH:mm:ssZ'))",
    "# app-version: $appVer",
    "# qt: $qtVer",
    "# compiler-runtime: MinGW-w64 GCC $gccVer (libgcc_s_seh-1, libstdc++-6, libwinpthread-1)",
    "# format: sha256<TAB>size<TAB>path (path 为包内相对路径，'/' 分隔；MANIFEST.txt 自身不在列)")
foreach ($f in (Get-ChildItem $pkg -Recurse -File | Where-Object Name -ne 'MANIFEST.txt' | Sort-Object FullName)) {
    $rel = $f.FullName.Substring($pkg.Length + 1) -replace '\\', '/'
    $lines += "$((Get-FileHash $f.FullName -Algorithm SHA256).Hash.ToLower())`t$($f.Length)`t$rel"
}
Set-Content -Path (Join-Path $pkg 'MANIFEST.txt') -Value $lines -Encoding utf8

# 5) 包自检（不含启动；check-package.ps1 与本脚本同目录）
& (Join-Path $PSScriptRoot 'check-package.ps1') -PackageDir $pkg
if ($LASTEXITCODE -ne 0) { throw '包自检失败' }

Write-Host "portable package OK: $pkg"
exit 0
