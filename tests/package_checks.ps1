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

# 正例对照：干净占位包必须通过（证明负例失败是因为检查逻辑而非占位包构造错误）
$script:total++
$good = Join-Path $WorkDirFull 'case-P-good'
if (Test-Path $good) { Remove-Item $good -Recurse -Force }
New-Item -ItemType Directory -Force $good | Out-Null
New-BasePackage $good
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
