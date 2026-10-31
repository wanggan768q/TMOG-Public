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

# 内嵌第三方组件许可全文（Qt 6.12.0 SBOM 内嵌 11 组件；材料轴 attempt=3 补齐）
# 缺任一 = 第三方许可材料不完整；文件名与 packaging/license-sources.json 精确对应。
$bundledLicenseFiles = @(
    'licenses/zlib-LICENSE.txt',
    'licenses/libpng-LICENSE.txt','licenses/libpng-libpng-2.0-LICENSE.txt',
    'licenses/libjpeg-turbo-LICENSE.txt','licenses/libjpeg-turbo-ijg-license.txt','licenses/libjpeg-turbo-COPYRIGHT.txt',
    'licenses/pcre2-LICENCE.md','licenses/pcre2-LICENSE-SLJIT.txt','licenses/pcre2-BSD-3-Clause-PCRE2-exception.txt',
    'licenses/freetype-LICENSE.txt','licenses/freetype-FTL.txt','licenses/freetype-GPL-2.0-only.txt',
    'licenses/freetype-ZLIB-LICENSE.txt','licenses/freetype-BDF-LICENSE.txt','licenses/freetype-PCF-LICENSE.txt',
    'licenses/harfbuzz-COPYING.txt',
    'licenses/unicode-Unicode-3.0.txt',
    'licenses/double-conversion-LICENSE.txt',
    'licenses/tinycbor-LICENSE.txt',
    'licenses/wintab-Lcs-Telegraphics-LICENSE.txt','licenses/wintab-wintab.h','licenses/wintab-pktdef.h'
)
foreach ($lic in $bundledLicenseFiles) {
    $p = Join-Path $PackageDir $lic
    if ((Test-Path $p) -and ((Get-Item $p).Length -gt 0)) { Pass "内嵌许可齐备: $lic" } else { Fail "缺内嵌组件许可文件: $lic" }
}

# license-sources.json 来源清单：包内许可文件与声明的 hash 必须逐项一致。
# 清单缺失/不可解析/文件与清单双向不一致 = 来源材料失真（N17/N18/N19 覆盖）。
# 材料恢复计划 §4M2：固定 28 允许路径集合独立于清单存在（整体改写清单不能引入
# 清单外路径）；路径安全校验在包内读取/复制前进行；components 与 files 一致。
$allowedLicensePaths = @(
    'licenses/Qt-COPYING.txt','licenses/Qt-LICENSE.txt',
    'licenses/double-conversion-LICENSE.txt',
    'licenses/freetype-BDF-LICENSE.txt','licenses/freetype-FTL.txt',
    'licenses/freetype-GPL-2.0-only.txt','licenses/freetype-LICENSE.txt',
    'licenses/freetype-PCF-LICENSE.txt','licenses/freetype-ZLIB-LICENSE.txt',
    'licenses/gcc-COPYING.RUNTIME.txt','licenses/gcc-COPYING3.txt',
    'licenses/harfbuzz-COPYING.txt',
    'licenses/libjpeg-turbo-COPYRIGHT.txt','licenses/libjpeg-turbo-ijg-license.txt',
    'licenses/libjpeg-turbo-LICENSE.txt',
    'licenses/libpng-libpng-2.0-LICENSE.txt','licenses/libpng-LICENSE.txt',
    'licenses/mingw-w64-runtime-COPYING.txt',
    'licenses/pcre2-BSD-3-Clause-PCRE2-exception.txt','licenses/pcre2-LICENCE.md',
    'licenses/pcre2-LICENSE-SLJIT.txt',
    'licenses/tinycbor-LICENSE.txt',
    'licenses/unicode-Unicode-3.0.txt','licenses/winpthreads-COPYING.txt',
    'licenses/wintab-Lcs-Telegraphics-LICENSE.txt','licenses/wintab-pktdef.h',
    'licenses/wintab-wintab.h','licenses/zlib-LICENSE.txt'
)
$allowedSet = @{}
foreach ($a in $allowedLicensePaths) { $allowedSet[$a.ToLower()] = $true }
$sourcesPath = Join-Path $PackageDir 'license-sources.json'
$declaredLicenseFiles = $null
if ((-not (Test-Path $sourcesPath)) -or ((Get-Item $sourcesPath).Length -eq 0)) {
    Fail 'license-sources.json 缺失或为空（第三方材料来源清单必需）'
} else {
    try {
        $sources = Get-Content $sourcesPath -Raw | ConvertFrom-Json
        if (-not $sources.files -or $sources.files.Count -eq 0) { throw 'files 数组为空' }
        if ($sources.files.Count -ne 28) { throw ("files 必须 28 项，实际 {0}" -f $sources.files.Count) }
        if (-not $sources.components -or $sources.components.Count -eq 0) { throw 'components 数组缺失或为空' }
        $declaredLicenseFiles = @{}
        foreach ($e in $sources.files) {
            if (-not $e.file -or -not $e.sha256) { throw "清单项缺 file/sha256: $($e | ConvertTo-Json -Compress)" }
            if ($e.sha256 -notmatch '^[0-9a-f]{64}$') { throw "清单 sha256 格式错误: $($e.file)" }
            if (-not $allowedSet.ContainsKey($e.file.ToLower())) { throw "清单路径不在固定允许集合: $($e.file)" }
            if ($e.file -match '^[A-Za-z]:') { throw "清单绝对/盘符路径: $($e.file)" }
            if ($e.file -match '\\')        { throw "清单路径含反斜杠: $($e.file)" }
            if ($e.file -match '(^|/)\.\.?(/|$)') { throw "清单路径含点段: $($e.file)" }
            if ($e.file -match '(^//|//|/$|(^|/)/)') { throw "清单路径含空段或尾斜杠: $($e.file)" }
            if ($e.file -match ':')        { throw "清单路径含 ADS/流分隔: $($e.file)" }
            if ($e.file -notmatch '^[^/]+(/[^/]+)*$') { throw "清单路径非法: $($e.file)" }
            if ($e.file -notmatch '^licenses/[^/]+$') { throw "清单路径必须直接位于 licenses/ 下: $($e.file)" }
            if ($declaredLicenseFiles.ContainsKey($e.file.ToLower())) { throw "清单大小写重复条目: $($e.file)" }
            $declaredLicenseFiles[$e.file.ToLower()] = $e.sha256
        }
        foreach ($c in $sources.components) {
            foreach ($f in $c.license_files) {
                $key = $f.file.ToLower()
                if (-not $declaredLicenseFiles.ContainsKey($key)) { throw ("组件 {0} 引用文件 {1} 不在 files" -f $c.component, $f.file) }
                if ($declaredLicenseFiles[$key] -ne $f.sha256) { throw ("组件 {0} 引用 {1} hash 与 files 不一致" -f $c.component, $f.file) }
            }
        }
        Pass "license-sources.json 可解析（$($declaredLicenseFiles.Count) 项，路径/大小写/组件一致性通过）"
    } catch {
        Fail "license-sources.json 不可解析: $($_.Exception.Message)"
        $declaredLicenseFiles = $null
    }
    if ($declaredLicenseFiles) {
        # 声明 → 包内：每项存在且 hash 一致
        foreach ($k in $declaredLicenseFiles.Keys) {
            $p = Join-Path $PackageDir $k
            if (-not (Test-Path $p)) { Fail "来源清单声明缺失（包内无此文件）: $k"; continue }
            $actualHash = (Get-FileHash $p -Algorithm SHA256).Hash.ToLower()
            if ($actualHash -ne $declaredLicenseFiles[$k]) { Fail "来源清单 hash 不符: $k" }
        }
        # 包内 → 声明：licenses/ 下每个文件必须被清单声明（未知许可材料拒绝）
        $licDir = Join-Path $PackageDir 'licenses'
        if (Test-Path $licDir) {
            foreach ($f in (Get-ChildItem $licDir -File)) {
                $rel = 'licenses/' + $f.Name
                if (-not $declaredLicenseFiles.ContainsKey($rel.ToLower())) { Fail "未声明许可材料: $rel" }
            }
        }
    }
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

# 文本文件不含绝对开发路径（C:\、C:/、E:\、E:/ 等两种分隔符形式）。
# 用行首/空白锚定 + 排除 http(s) scheme：URL 里的 "s:"/"g:" 后跟 // 是 scheme 片段，
# 真实盘符路径是行首或空白后的单字母盘符；官方许可全文内的 URL 不得误伤。
foreach ($f in ($files | Where-Object { $_.Extension -in '.md','.txt' })) {
    if ((Get-Content $f.FullName -Raw) -match '(?m)(?:^|(?<=\s))[A-Za-z]:[\\/](?!/)') { Fail "文本含绝对开发路径: $($f.Name)" }}

# 组件白名单（计划 §1.3：未知新组件不默认许可；windeployqt 增加新插件必须先更新此清单）
# 许可文件名清单与 packaging/license-sources.json 对应；不因文件名含 license 就自动允许，
# 未知许可文本仍被 N19 路径（未声明许可材料）与白名单双重拒绝。
$whitelist = @(
    'TmogReplica.exe',
    'MANIFEST.txt',
    'README-PACKAGE.md',
    'THIRD-PARTY-NOTICES.md',
    'license-sources.json',
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
# 内嵌第三方许可文件并入白名单（与上方 $bundledLicenseFiles 同一清单对象）
$whitelist += $bundledLicenseFiles
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
