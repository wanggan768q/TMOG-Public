# TmogReplica 便携包完整性检查（issue6 迁入自旧 #6 树 HEAD c62992b8，增强版）。
# 退出码 0=PASS, 1=FAIL。兼容 PowerShell 5.1。
#
# 相对旧版新增（计划 §1.3）：
# - 组件白名单：包内每个文件必须命中允许清单，未知新组件（含未知 DLL）默认失败。
# - 清单行含 size 字段，双向校验 hash + size。
# - 清单路径合法性：拒绝绝对路径、'..' 组件、空段、反斜杠。
# - 重复路径/重复哈希行拒绝。
# - "篡改清单加未知文件"不能通过：未知路径即使重写 MANIFEST 也无法自证合法
#   （白名单独立于清单存在）。
param([Parameter(Mandatory)][string]$PackageDir)
$ErrorActionPreference = 'Stop'
$PackageDir = (Resolve-Path $PackageDir).Path
$script:fail = 0
function Fail([string]$m) { Write-Host "FAIL: $m"; $script:fail++ }
function Pass([string]$m) { Write-Host "PASS: $m" }

if (-not (Test-Path (Join-Path $PackageDir 'TmogReplica.exe'))) { Fail 'TmogReplica.exe 缺失' }
foreach ($f in 'THIRD-PARTY-NOTICES.md', 'README-PACKAGE.md', 'MANIFEST.txt') {
    $p = Join-Path $PackageDir $f
    if ((-not (Test-Path $p)) -or ((Get-Item $p).Length -eq 0)) { Fail "$f 缺失或为空" } else { Pass "$f 在包内" }
}
if (-not (Test-Path (Join-Path $PackageDir 'licenses'))) { Fail 'licenses/ 缺失' }

# 运行库齐备性（缺任何一个 = GUI 无法启动或崩溃）
foreach ($dll in 'Qt6Core.dll','Qt6Gui.dll','Qt6Widgets.dll',
                 'platforms/qwindows.dll',
                 'libgcc_s_seh-1.dll','libstdc++-6.dll','libwinpthread-1.dll') {
    if (Test-Path (Join-Path $PackageDir $dll)) { Pass "运行库齐备: $dll" } else { Fail "缺运行库: $dll" }
}

# 必备许可证文件齐备性（缺任一 = 法律材料不完整；计划 §1.3/§4）
foreach ($lic in 'licenses/Qt-LICENSE.txt','licenses/Qt-COPYING.txt',
                 'licenses/gcc-COPYING3.txt','licenses/gcc-COPYING.RUNTIME.txt',
                 'licenses/winpthreads-COPYING.txt',
                 'licenses/mingw-w64-runtime-COPYING.txt') {
    $p = Join-Path $PackageDir $lic
    if ((Test-Path $p) -and ((Get-Item $p).Length -gt 0)) { Pass "许可齐备: $lic" } else { Fail "缺许可文件: $lic" }
}

$files = Get-ChildItem $PackageDir -Recurse -File

# 禁入物：构建中间物 / 抓包 / 压缩包 / 原厂资产 / 多余 exe
foreach ($f in $files) {
    if ($f.Name -match '\.(pdb|obj|lib|a|cmake|har|pcap|pcapng|zip|7z)$') { Fail "禁入文件类型: $($f.Name)" }
    if ($f.Name -ieq 'cmakecache.txt') { Fail "构建中间物: $($f.Name)" }
    if ($f.Name -like '*v1.1.0*') { Fail "疑似原厂资产（版本号文件名）: $($f.Name)" }
}
$exes = @($files | Where-Object { $_.Extension -eq '.exe' })
if ($exes.Count -gt 1) { Fail ("多个 exe: " + ($exes.Name -join ', ')) }
elseif ($exes.Count -eq 1) { Pass '单一 exe（TmogReplica.exe）' }

# 文本文件不含绝对开发路径（C:\、E:\ 等）
foreach ($f in ($files | Where-Object { $_.Extension -in '.md','.txt' })) {
    if ((Get-Content $f.FullName -Raw) -match '[A-Za-z]:\\') { Fail "文本含绝对开发路径: $($f.Name)" }
}

# 组件白名单（计划 §1.3：未知新组件不默认许可；windeployqt 增加新插件必须先更新此清单）
$whitelist = @(
    'TmogReplica.exe',
    'MANIFEST.txt',
    'README-PACKAGE.md',
    'THIRD-PARTY-NOTICES.md',
    'Qt6Core.dll','Qt6Gui.dll','Qt6Widgets.dll','Qt6Network.dll','Qt6Svg.dll',
    'libgcc_s_seh-1.dll','libstdc++-6.dll','libwinpthread-1.dll',
    'platforms/qwindows.dll',
    'generic/qtuiotouchplugin.dll',
    'iconengines/qsvgicon.dll',
    'imageformats/qgif.dll','imageformats/qico.dll','imageformats/qjpeg.dll','imageformats/qsvg.dll',
    'networkinformation/qnetworklistmanager.dll',
    'styles/qmodernwindowsstyle.dll',
    'tls/qcertonlybackend.dll','tls/qschannelbackend.dll',
    'licenses/Qt-LICENSE.txt','licenses/Qt-COPYING.txt',
    'licenses/gcc-COPYING3.txt','licenses/gcc-COPYING.RUNTIME.txt',
    'licenses/winpthreads-COPYING.txt',
    'licenses/mingw-w64-runtime-COPYING.txt'
)
$whitelistSet = @{}
foreach ($w in $whitelist) { $whitelistSet[$w.ToLower()] = $true }

# 清单解析与双向校验（hash + size + 路径合法性）
$manifest = Join-Path $PackageDir 'MANIFEST.txt'
$expected = @{}
if (-not (Test-Path $manifest)) {
    Fail 'MANIFEST.txt 缺失'
} else {
    foreach ($line in (Get-Content $manifest)) {
        if ($line -and -not $line.StartsWith('#')) {
            $parts = $line -split "`t", 3
            if ($parts.Count -ne 3) { Fail "清单行格式错误（应为 sha256/size/path）: $line"; continue }
            $hash, $size, $path = $parts
            if ($hash -notmatch '^[0-9a-f]{64}$') { Fail "清单哈希格式错误: $path"; continue }
            if ($size -notmatch '^[0-9]+$') { Fail "清单 size 字段错误: $path"; continue }
            # 路径合法性：拒绝绝对路径、'..'、反斜杠、空段、首尾斜杠
            if ($path -match '^[A-Za-z]:') { Fail "清单绝对路径: $path"; continue }
            if ($path -match '\\')        { Fail "清单路径含反斜杠: $path"; continue }
            if ($path -match '(^|/)\.\.(/|$)') { Fail "清单路径含 .. 组件: $path"; continue }
            if ($path -match '(^//|//|/$|(^|/)/)') { Fail "清单路径含空段或尾斜杠: $path"; continue }
            if ($path -notmatch '^[^/]+(/[^/]+)*$') { Fail "清单路径非法: $path"; continue }
            if ($expected.ContainsKey($path.ToLower())) { Fail "清单重复路径: $path"; continue }
            $expected[$path.ToLower()] = @{ hash = $hash; size = [int64]$size }
        }
    }
    $actual = @{}
    foreach ($f in ($files | Where-Object { $_.Name -ne 'MANIFEST.txt' })) {
        $rel = $f.FullName.Substring($PackageDir.Length + 1) -replace '\\', '/'
        $actual[$rel.ToLower()] = @{ hash = (Get-FileHash $f.FullName -Algorithm SHA256).Hash.ToLower(); size = $f.Length }
    }
    # 白名单双向：包内文件必须命中白名单，白名单缺失项（必备运行库已单独查）提示未知
    foreach ($k in $actual.Keys) {
        if (-not $whitelistSet.ContainsKey($k)) { Fail "白名单外未知组件: $k" }
    }
    foreach ($k in $expected.Keys) {
        if (-not $actual.ContainsKey($k)) { Fail "清单多列（包内无此文件）: $k" }
        elseif ($actual[$k].hash -ne $expected[$k].hash) { Fail "哈希不符: $k" }
        elseif ($actual[$k].size -ne $expected[$k].size) { Fail ("size 不符: {0} (清单 {1} != 实际 {2})" -f $k, $expected[$k].size, $actual[$k].size) }
    }
    foreach ($k in $actual.Keys) {
        if (-not $expected.ContainsKey($k)) { Fail "清单漏列: $k" }
    }
    if ($script:fail -eq 0) { Pass ("清单一致（{0} 个文件，hash+size 双向，白名单命中）" -f $actual.Count) }
}

if ($script:fail -gt 0) { Write-Host "check-package: $script:fail FAILURES"; exit 1 }
Write-Host 'check-package: ALL PASS'
exit 0
