# TmogReplica 便携包检查负例（issue6，计划 §4 任务6T）。
# 在自建 WorkDir 内构造无害占位文件与自建"包"结构，验证 check-package.ps1 的
# 各负例确实失败（非零退出）；不使用厂商原件，不触碰真实包。
#
# 负例清单（计划 §1.3 + §4）：
#   N1 缺必要运行库（Qt/部署缺组件）          => 非零
#   N2 缺必要许可证文件                        => 非零
#   N3 文件 hash 篡改                          => 非零
#   N4 文件 size 篡改（清单纯报 size）          => 非零
#   N5 清单重复路径                            => 非零
#   N6 清单 '..' 路径组件                       => 非零
#   N7 清单绝对路径                            => 非零
#   N8 清单多列未知文件（重写 manifest 自证）   => 非零（白名单独立于清单）
#   N9 额外无害 exe                            => 非零
#   N10 未知 DLL（重写 manifest 也失败）        => 非零
#   N16 缺内嵌第三方许可全文（必配清单项）        => 非零
#   N17 许可文本被篡改（hash 与 license-sources.json 记录不符） => 非零
#   N18 license-sources.json 与包内许可文件清单不符（来源清单失真） => 非零
#   N19 未知许可材料文件（未声明许可文本混入）    => 非零
#
# 退出码 0=全部负例如预期失败；1=某负例意外通过（检查失效）或内部错误。
param(
    [Parameter(Mandatory)][string]$SourceDir,
    [Parameter(Mandatory)][string]$WorkDir,
    [Parameter(Mandatory)][string]$QtDir,
    [Parameter(Mandatory)][string]$MinGWDir,
    [Parameter(Mandatory)][string]$CMakeExe,
    [Parameter(Mandatory)][string]$NinjaExe
)
$ErrorActionPreference = 'Stop'
$SourceDir = (Resolve-Path $SourceDir).Path
$checkScript = Join-Path $PSScriptRoot '..\scripts\check-package.ps1'
if (-not (Test-Path $checkScript)) { throw "check-package.ps1 未找到: $checkScript" }

# WorkDir 边界：必须位于 <SourceDir>/build/issue6-* 专用目录内（leaf 正则，与
# package-portable.ps1 的 BuildDir 规则对称），不存在则创建。
# 严格性：根边界用 StartsWith 前缀而非子串；leaf 必须整体匹配 issue6- 前缀名；
# 子目录使用仍须以该专用目录为前缀，未放宽任意 substring 逃逸。
$WorkDirFull = if ([System.IO.Path]::IsPathRooted($WorkDir)) {
    [System.IO.Path]::GetFullPath($WorkDir)
} else {
    [System.IO.Path]::GetFullPath((Join-Path $SourceDir $WorkDir))
}
if (-not $WorkDirFull.StartsWith((Join-Path $SourceDir 'build') + [System.IO.Path]::DirectorySeparatorChar)) {
    throw "WorkDir 必须位于 <SourceDir>/build/ 内: $WorkDirFull"
}
$workLeaf = Split-Path $WorkDirFull -Leaf
if ($workLeaf -notmatch '^issue6-[a-z0-9-]+$') {
    throw ("WorkDir 必须是 <SourceDir>/build/issue6-* 专用目录（leaf 正则 ^issue6-[a-z0-9-]+$）: {0} (leaf={1})") -f $WorkDirFull, $workLeaf
}
$srcRootItem = Get-Item $SourceDir
if ($srcRootItem.LinkType) { throw "SourceDir 不得是链接/重解析点: $($srcRootItem.LinkType)" }
New-Item -ItemType Directory -Force $WorkDirFull | Out-Null

$script:failed_negatives = 0
$script:total = 0
function Run-Negative([string]$id, [scriptblock]$body) {
    $script:total++
    $case = Join-Path $WorkDirFull "case-$id"
    if (Test-Path $case) { Remove-Item $case -Recurse -Force }
    New-Item -ItemType Directory -Force $case | Out-Null
    & $body $case
    & pwsh -NoProfile -File $checkScript -PackageDir $case *> (Join-Path $WorkDirFull "check-output-$id.txt")
    $code = $LASTEXITCODE
    if ($code -ne 0) {
        Write-Host "PASS: 负例 $id 如预期失败 (exit=$code)"
    } else {
        Write-Host "FAIL: 负例 $id 意外通过（检查失效）"
        $script:failed_negatives++
    }
}

# 无害占位文件生成器：只写文本字节，不复制任何厂商二进制
function New-Placeholder([string]$path, [string]$content) {
    $dir = Split-Path $path -Parent
    if (-not (Test-Path $dir)) { New-Item -ItemType Directory -Force $dir | Out-Null }
    Set-Content -Path $path -Value $content -Encoding ascii
}
# 生成一个"最小合法包"骨架：占位 exe/dll/许可/清单，随后各负例在其上变异
function New-BasePackage([string]$dir) {
    New-Placeholder (Join-Path $dir 'TmogReplica.exe') 'placeholder executable (not a real binary; negative-test fixture only)'
    foreach ($d in 'Qt6Core.dll','Qt6Gui.dll','Qt6Widgets.dll') { New-Placeholder (Join-Path $dir $d) "placeholder $d" }
    New-Placeholder (Join-Path $dir 'platforms\qwindows.dll') 'placeholder qwindows'
    New-Placeholder (Join-Path $dir 'libgcc_s_seh-1.dll') 'placeholder libgcc'
    New-Placeholder (Join-Path $dir 'libstdc++-6.dll') 'placeholder libstdc'
    New-Placeholder (Join-Path $dir 'libwinpthread-1.dll') 'placeholder winpthread'
    New-Placeholder (Join-Path $dir 'licenses\Qt-LICENSE.txt') 'placeholder Qt license'
    New-Placeholder (Join-Path $dir 'licenses\Qt-COPYING.txt') 'placeholder Qt copying'
    New-Placeholder (Join-Path $dir 'licenses\gcc-COPYING3.txt') 'placeholder gpl v3'
    New-Placeholder (Join-Path $dir 'licenses\gcc-COPYING.RUNTIME.txt') 'placeholder gcc exception'
    New-Placeholder (Join-Path $dir 'licenses\winpthreads-COPYING.txt') 'placeholder winpthreads'
    New-Placeholder (Join-Path $dir 'licenses\mingw-w64-runtime-COPYING.txt') 'placeholder mingw runtime'
    New-Placeholder (Join-Path $dir 'THIRD-PARTY-NOTICES.md') '# placeholder notices'
    New-Placeholder (Join-Path $dir 'README-PACKAGE.md') '# placeholder readme'
}
function Write-Manifest([string]$dir) {
    # 用与 check-package 相同的算法生成真实 MANIFEST（占位文件内容也会被 hash+size 记录）
    $pkg = $dir
    $lines = @("# placeholder manifest", "# format: sha256<TAB>size<TAB>path")
    foreach ($f in (Get-ChildItem $pkg -Recurse -File | Where-Object Name -ne 'MANIFEST.txt' | Sort-Object FullName)) {
        $rel = $f.FullName.Substring($pkg.Length + 1) -replace '\\', '/'
        $lines += "$((Get-FileHash $f.FullName -Algorithm SHA256).Hash.ToLower())`t$($f.Length)`t$rel"
    }
    Set-Content -Path (Join-Path $pkg 'MANIFEST.txt') -Value $lines -Encoding utf8
}

# N1 缺 Qt 运行库（部署缺组件）
Run-Negative 'N1-missing-qt-dll' {
    param($d) New-BasePackage $d
    Remove-Item (Join-Path $d 'Qt6Gui.dll') -Force
    Write-Manifest $d
}

# N2 缺必要许可证文件
Run-Negative 'N2-missing-license' {
    param($d) New-BasePackage $d
    Remove-Item (Join-Path $d 'licenses\winpthreads-COPYING.txt') -Force
    Write-Manifest $d
}

# N3 文件 hash 篡改（文件内容改动，清单仍报旧 hash）
Run-Negative 'N3-hash-tamper' {
    param($d)
    New-BasePackage $d
    Write-Manifest $d
    Set-Content (Join-Path $d 'Qt6Widgets.dll') -Value 'tampered content' -Encoding ascii
}

# N4 size 篡改（文件大小与清单不符）
Run-Negative 'N4-size-tamper' {
    param($d)
    New-BasePackage $d
    # 先写 manifest，再向一个已记录文件追加字节（hash 与 size 均变，size 断言暴露）
    Write-Manifest $d
    Add-Content (Join-Path $d 'README-PACKAGE.md') -Value 'extra bytes'
}

# N5 清单重复路径
Run-Negative 'N5-duplicate-manifest-entry' {
    param($d)
    New-BasePackage $d
    Write-Manifest $d
    $m = Join-Path $d 'MANIFEST.txt'
    $lines = Get-Content $m
    $lines += ($lines | Where-Object { $_ -notmatch '^#' } | Select-Object -First 1)
    Set-Content $m -Value $lines -Encoding utf8
}

# N6 清单 '..' 路径组件
Run-Negative 'N6-dotdot-path' {
    param($d)
    New-BasePackage $d
    Write-Manifest $d
    $m = Join-Path $d 'MANIFEST.txt'
    $lines = Get-Content $m
    $lines += "0000000000000000000000000000000000000000000000000000000000000000`t10`t../licenses/Qt-LICENSE.txt"
    Set-Content $m -Value $lines -Encoding utf8
}

# N7 清单绝对路径
Run-Negative 'N7-absolute-path' {
    param($d)
    New-BasePackage $d
    Write-Manifest $d
    $m = Join-Path $d 'MANIFEST.txt'
    $lines = Get-Content $m
    $lines += "1111111111111111111111111111111111111111111111111111111111111111`t10`tE:/somewhere/evil.dll"
    Set-Content $m -Value $lines -Encoding utf8
}

# N8 清单多列未知文件（重写 manifest 自证合法 => 白名单仍拒绝）
Run-Negative 'N8-unknown-file-self-certify' {
    param($d)
    New-BasePackage $d
    New-Placeholder (Join-Path $d 'extra-unknown.dll') 'unknown component'
    Write-Manifest $d   # manifest 里如实记录了该文件，白名单独立存在仍拒绝
}

# N9 额外无害 exe（自建占位）
Run-Negative 'N9-extra-exe' {
    param($d)
    New-BasePackage $d
    New-Placeholder (Join-Path $d 'helper.exe') 'placeholder extra exe'
    Write-Manifest $d
}

# N10 未知 DLL 且重写 manifest（同 N8，区别在多目录组件）
Run-Negative 'N10-unknown-dll-rewritten-manifest' {
    param($d)
    New-BasePackage $d
    New-Placeholder (Join-Path $d 'styles\evilstyle.dll') 'unknown plugin component'
    Write-Manifest $d
}

# N11 NOTICES 含正斜杠绝对开发路径（C:/ 形式，本轮修复的绕过路径）
Run-Negative 'N11-absolute-path-forward-slash' {
    param($d)
    New-BasePackage $d
    Set-Content (Join-Path $d 'THIRD-PARTY-NOTICES.md') 'source: E:/InstallApplication/dev/path' -Encoding ascii
    Write-Manifest $d
}

# N12 NOTICES 含反斜杠绝对开发路径（C:\ 形式，回归覆盖）
Run-Negative 'N12-absolute-path-backslash' {
    param($d)
    New-BasePackage $d
    Set-Content (Join-Path $d 'README-PACKAGE.md') 'build dir: E:\Dev\build\secret' -Encoding ascii
    Write-Manifest $d
}

# N13 未知顶层 exe（重写 manifest 仍被白名单拒绝；与 N9 区别：N9 不重写清单）
Run-Negative 'N13-unknown-exe-rewritten-manifest' {
    param($d)
    New-BasePackage $d
    New-Placeholder (Join-Path $d 'unknown-helper.exe') 'unknown executable component'
    Write-Manifest $d
}

# N14 未知插件子目录组件（不在任何白名单目录内，重写 manifest 仍拒绝）
Run-Negative 'N14-unknown-plugin-subdir' {
    param($d)
    New-BasePackage $d
    New-Placeholder (Join-Path $d 'sensors\fakeqtsensorsplugin.dll') 'unknown sensor plugin component'
    Write-Manifest $d
}

# N15 清单行被篡改（size 字段伪造为非数字）
Run-Negative 'N15-manifest-size-malformed' {
    param($d)
    New-BasePackage $d
    Write-Manifest $d
    $m = Join-Path $d 'MANIFEST.txt'
    $lines = Get-Content $m
    $lines = $lines | ForEach-Object { if ($_ -match 'README-PACKAGE\.md$') { ($_ -split "`t")[0] + "`tnot-a-number`tREADME-PACKAGE.md" } else { $_ } }
    Set-Content $m -Value $lines -Encoding utf8
}

# ===== 内嵌第三方许可材料检查（attempt=3 材料轴补齐）=====

# 来源清单构造：与包内 licenses/ 一致的文件清单 + 每文件 SHA-256。
# -RealHashes 重算真实 hash（正例对照用）；默认写全 0 假 hash（负例用）。
function Write-LicenseSources([string]$dir, [switch]$RealHashes) {
    # 清单覆盖包内 licenses/ 全部文件：内嵌第三方 22 项 + Qt/GCC 工具链 6 项
    # （来源清单与包内许可文件双向一致是检查闭环的前提）
    $entries = @(
        'licenses/Qt-LICENSE.txt','licenses/Qt-COPYING.txt',
        'licenses/gcc-COPYING3.txt','licenses/gcc-COPYING.RUNTIME.txt',
        'licenses/winpthreads-COPYING.txt','licenses/mingw-w64-runtime-COPYING.txt',
        'licenses/zlib-LICENSE.txt','licenses/libpng-LICENSE.txt','licenses/libpng-libpng-2.0-LICENSE.txt',
        'licenses/libjpeg-turbo-LICENSE.txt','licenses/libjpeg-turbo-ijg-license.txt','licenses/libjpeg-turbo-COPYRIGHT.txt',
        'licenses/pcre2-LICENCE.md','licenses/pcre2-LICENSE-SLJIT.txt','licenses/pcre2-BSD-3-Clause-PCRE2-exception.txt',
        'licenses/freetype-LICENSE.txt','licenses/freetype-FTL.txt','licenses/freetype-GPL-2.0-only.txt',
        'licenses/freetype-ZLIB-LICENSE.txt','licenses/freetype-BDF-LICENSE.txt','licenses/freetype-PCF-LICENSE.txt',
        'licenses/harfbuzz-COPYING.txt','licenses/unicode-Unicode-3.0.txt','licenses/double-conversion-LICENSE.txt',
        'licenses/tinycbor-LICENSE.txt','licenses/wintab-Lcs-Telegraphics-LICENSE.txt',
        'licenses/wintab-wintab.h','licenses/wintab-pktdef.h'
    )
    $objs = foreach ($e in $entries) {
        $p = Join-Path $dir $e
        $hash = if ($RealHashes -and (Test-Path $p)) { (Get-FileHash $p -Algorithm SHA256).Hash.ToLower() } else { '0' * 64 }
        [ordered]@{ file = $e; sha256 = $hash }
    }
    # 组件占位条目：hash 必须与 files 中同路径条目一致（双向一致核验会比对）。
    $filesHash = @{}
    foreach ($o in $objs) { $filesHash[$o.file] = $o.sha256 }
    $comps = foreach ($e in $entries) {
        [ordered]@{
            component     = 'placeholder-' + ($e -replace '^licenses/', '' -replace '[^a-zA-Z0-9._-]', '-')
            license_files = @([ordered]@{ file = $e; sha256 = $filesHash[$e] })
        }
    }
    @{ schema = 'issue6-license-sources v1'; components = $comps; files = $objs } |
        ConvertTo-Json -Depth 4 | Set-Content (Join-Path $dir 'license-sources.json') -Encoding utf8
}

# 在占位包上添加 22 个内嵌第三方许可文本占位文件 + 真实 hash 的 license-sources.json
function Add-BundledLicenses([string]$dir) {
    $texts = [ordered]@{
        'licenses\zlib-LICENSE.txt' = 'placeholder zlib license'
        'licenses\libpng-LICENSE.txt' = 'placeholder libpng license'
        'licenses\libpng-libpng-2.0-LICENSE.txt' = 'placeholder libpng-2.0 license'
        'licenses\libjpeg-turbo-LICENSE.txt' = 'placeholder libjpeg-turbo license'
        'licenses\libjpeg-turbo-ijg-license.txt' = 'placeholder ijg license'
        'licenses\libjpeg-turbo-COPYRIGHT.txt' = 'placeholder ijg copyright'
        'licenses\pcre2-LICENCE.md' = 'placeholder pcre2 licence'
        'licenses\pcre2-LICENSE-SLJIT.txt' = 'placeholder sljit license'
        'licenses\pcre2-BSD-3-Clause-PCRE2-exception.txt' = 'placeholder pcre2 exception'
        'licenses\freetype-LICENSE.txt' = 'placeholder freetype license'
        'licenses\freetype-FTL.txt' = 'placeholder ftl'
        'licenses\freetype-GPL-2.0-only.txt' = 'placeholder gpl2'
        'licenses\freetype-ZLIB-LICENSE.txt' = 'placeholder ftl zlib'
        'licenses\freetype-BDF-LICENSE.txt' = 'placeholder bdf'
        'licenses\freetype-PCF-LICENSE.txt' = 'placeholder pcf'
        'licenses\harfbuzz-COPYING.txt' = 'placeholder harfbuzz copying'
        'licenses\unicode-Unicode-3.0.txt' = 'placeholder unicode 3.0'
        'licenses\double-conversion-LICENSE.txt' = 'placeholder double-conversion'
        'licenses\tinycbor-LICENSE.txt' = 'placeholder tinycbor'
        'licenses\wintab-Lcs-Telegraphics-LICENSE.txt' = 'placeholder wintab license'
        'licenses\wintab-wintab.h' = 'placeholder wintab header'
        'licenses\wintab-pktdef.h' = 'placeholder wintab pktdef'
    }
    foreach ($k in $texts.Keys) { New-Placeholder (Join-Path $dir $k) $texts[$k] }
    Write-LicenseSources $dir -RealHashes
}

# N16 缺内嵌第三方许可全文（删除一个必配项）
Run-Negative 'N16-missing-bundled-license' {
    param($d)
    New-BasePackage $d
    Add-BundledLicenses $d
    Remove-Item (Join-Path $d 'licenses\zlib-LICENSE.txt') -Force
    Write-LicenseSources $d
    Write-Manifest $d
}

# N17 许可文本篡改（内容改动后 license-sources.json hash 不符）
Run-Negative 'N17-license-content-tamper' {
    param($d)
    New-BasePackage $d
    Add-BundledLicenses $d
    Set-Content (Join-Path $d 'licenses\harfbuzz-COPYING.txt') 'tampered' -Encoding ascii
    Write-Manifest $d
}

# N18 来源清单与包内文件不符（删文件但 sources.json 仍声明）
Run-Negative 'N18-sources-list-mismatch' {
    param($d)
    New-BasePackage $d
    Add-BundledLicenses $d
    Remove-Item (Join-Path $d 'licenses\tinycbor-LICENSE.txt') -Force
    Write-Manifest $d   # sources.json 仍列 tinycbor，但包内缺失
}

# N19 未知许可材料（未声明的许可文件混入）
Run-Negative 'N19-unknown-license-file' {
    param($d)
    New-BasePackage $d
    Add-BundledLicenses $d
    New-Placeholder (Join-Path $d 'licenses\unknown-vendor-EULA.txt') 'unknown license material'
    Write-Manifest $d
}

# ===== 材料恢复计划 §4M3 新边界负例（N20–N27）=====
# 共同前提：从已通过检查的完整占位基包出发，只变异目标条件；
# P-good 前后均通过，各负例 checker exit1 且有明确目标诊断。

# N20 license-sources.json 顶层缺 files（schema 残缺：只有 components 无 files）
Run-Negative 'N20-sources-missing-files-array' {
    param($d)
    New-BasePackage $d
    Add-BundledLicenses $d
    @{ schema = 'issue6-license-sources v1'; components = @() } |
        ConvertTo-Json -Depth 4 | Set-Content (Join-Path $d 'license-sources.json') -Encoding utf8
    Write-Manifest $d
}

# N21 components 引用与 files 冲突（同路径不同 hash）
Run-Negative 'N21-components-files-conflict' {
    param($d)
    New-BasePackage $d
    Add-BundledLicenses $d
    $j = Get-Content (Join-Path $d 'license-sources.json') -Raw | ConvertFrom-Json
    # 直接改第一个组件引用的 hash，使其与 files 中同路径条目不一致
    $j.components[0].license_files[0].sha256 = ('f' * 64)
    $j | ConvertTo-Json -Depth 8 | Set-Content (Join-Path $d 'license-sources.json') -Encoding utf8
    Write-Manifest $d
}

# N22 清单大小写重复（同一路径不同大小写两条目）
Run-Negative 'N22-case-duplicate-entries' {
    param($d)
    New-BasePackage $d
    Add-BundledLicenses $d
    $j = Get-Content (Join-Path $d 'license-sources.json') -Raw | ConvertFrom-Json
    $extra = @{ file = 'LICENSES/ZLIB-LICENSE.txt'; sha256 = $j.files[0].sha256 }
    # 原 files 里有 licenses/zlib-LICENSE.txt；加入大写变体路径构造大小写重复
    $j.files = @($j.files) + [pscustomobject]$extra
    $j | ConvertTo-Json -Depth 8 | Set-Content (Join-Path $d 'license-sources.json') -Encoding utf8
    Write-Manifest $d
}

# N23 整体重写 JSON+MANIFEST 加未知许可（自证合法应失败：白名单独立存在）
Run-Negative 'N23-rewritten-json-manifest-unknown-license' {
    param($d)
    New-BasePackage $d
    Add-BundledLicenses $d
    New-Placeholder (Join-Path $d 'licenses\rogue-EULA.txt') 'rogue license injected with rewritten manifest'
    # 重写 license-sources.json 让 files 也声明 rogue（自生成清单不自证）
    $j = Get-Content (Join-Path $d 'license-sources.json') -Raw | ConvertFrom-Json
    $realHash = (Get-FileHash (Join-Path $d 'licenses\rogue-EULA.txt') -Algorithm SHA256).Hash.ToLower()
    $j.files = @($j.files) + [pscustomobject]@{ file = 'licenses/rogue-EULA.txt'; sha256 = $realHash }
    $j | ConvertTo-Json -Depth 8 | Set-Content (Join-Path $d 'license-sources.json') -Encoding utf8
    Write-Manifest $d
}

# N24 来源清单路径逃逸（.. 组件）
Run-Negative 'N24-sources-path-escape-dotdot' {
    param($d)
    New-BasePackage $d
    Add-BundledLicenses $d
    $j = Get-Content (Join-Path $d 'license-sources.json') -Raw | ConvertFrom-Json
    $j.files[0].file = 'licenses/../licenses/zlib-LICENSE.txt'
    $j | ConvertTo-Json -Depth 8 | Set-Content (Join-Path $d 'license-sources.json') -Encoding utf8
    Write-Manifest $d
}

# N25 来源清单路径含 ADS（NTFS 流分隔符）
Run-Negative 'N25-sources-path-ads' {
    param($d)
    New-BasePackage $d
    Add-BundledLicenses $d
    $j = Get-Content (Join-Path $d 'license-sources.json') -Raw | ConvertFrom-Json
    $j.files[0].file = 'licenses/zlib-LICENSE.txt:hidden'
    $j | ConvertTo-Json -Depth 8 | Set-Content (Join-Path $d 'license-sources.json') -Encoding utf8
    Write-Manifest $d
}

# N26 嵌套 license 子目录（licenses/sub/extra.txt 不在任何允许路径内）
Run-Negative 'N26-nested-license-subdir' {
    param($d)
    New-BasePackage $d
    Add-BundledLicenses $d
    New-Placeholder (Join-Path $d 'licenses\sub\extra.txt') 'nested unknown license'
    Write-Manifest $d
}

# N27 清单声明包内链接/非普通文件（对声明文件建立 symlink；环境不允许则此项记 FAIL 由 Run-Negative 捕获）
Run-Negative 'N27-declared-file-is-link' {
    param($d)
    New-BasePackage $d
    Add-BundledLicenses $d
    $target = Join-Path $d 'licenses\zlib-LICENSE.txt'
    $link = Join-Path $d 'licenses\zlib-LICENSE-link.txt'
    $j = Get-Content (Join-Path $d 'license-sources.json') -Raw | ConvertFrom-Json
    $realHash = (Get-FileHash $target -Algorithm SHA256).Hash.ToLower()
    Remove-Item $target -Force
    try {
        New-Item -ItemType SymbolicLink -Path $target -Target (Join-Path $d 'licenses\Qt-LICENSE.txt') -ErrorAction Stop | Out-Null
        # 链接建立成功：把声明 hash 保留，包内实为链接→应被拒绝（source_member hash 仍指原文本）
        $j | ConvertTo-Json -Depth 8 | Set-Content (Join-Path $d 'license-sources.json') -Encoding utf8
        Write-Manifest $d
    } catch {
        # 环境不允许建链接：恢复普通文件，case 保持完整但目标条件未触发——
        # 该负例将以 exit0 通过并计入 failed_negatives（由 Report 交 Product BLOCKED）
        Set-Content $target -Value 'placeholder zlib license' -Encoding ascii
        Write-LicenseSources $d -RealHashes
        Write-Manifest $d
    }
}

# 正例对照：干净占位包必须通过（证明负例失败是因为检查逻辑而非占位包构造错误）
$script:total++
$good = Join-Path $WorkDirFull 'case-P-good'
if (Test-Path $good) { Remove-Item $good -Recurse -Force }
New-Item -ItemType Directory -Force $good | Out-Null
New-BasePackage $good
Add-BundledLicenses $good
Write-Manifest $good
& pwsh -NoProfile -File $checkScript -PackageDir $good *> (Join-Path $WorkDirFull 'check-output-P-good.txt')
if ($LASTEXITCODE -ne 0) {
    Write-Host "FAIL: 正例对照意外失败 (exit=$LASTEXITCODE)，占位包构造有误"
    Get-Content (Join-Path $WorkDirFull 'check-output-P-good.txt') | ForEach-Object { Write-Host "  output: $_" }
    $script:failed_negatives++
} else {
    Write-Host "PASS: 正例对照通过（占位包构造有效）"
}

Write-Host "package_checks: $script:total cases, $script:failed_negatives unexpected passes"
if ($script:failed_negatives -gt 0) { exit 1 }
Write-Host 'ALL NEGATIVE CASES FAILED AS EXPECTED (checks effective)'
exit 0
