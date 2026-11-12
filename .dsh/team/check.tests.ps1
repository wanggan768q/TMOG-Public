[CmdletBinding()]
param()
# 检查 .dsh/team/check.ps1：schemaVersion=3 配置校验、角色提示文件校验、按需就绪门槛。
# 全程使用临时目录，结束清理；任一步失败即 throw，全部通过后输出 PASS。
$ErrorActionPreference = 'Stop'
$checker = Join-Path $PSScriptRoot 'check.ps1'
$template = Join-Path $PSScriptRoot 'config.example.json'
$projectRoot = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../..'))

if (-not (Test-Path -LiteralPath $checker -PathType Leaf)) { throw "缺少被检脚本：$checker" }
if (-not (Test-Path -LiteralPath $template -PathType Leaf)) { throw "缺少配置模板：$template" }

function Invoke-Check([string[]]$Arguments, [string]$Checker = $checker) {
    $text = & pwsh -NoProfile -File $Checker @Arguments 2>&1 | Out-String
    [pscustomobject]@{ ExitCode = $LASTEXITCODE; Output = $text.Trim() }
}
function Assert-Exit([int]$Expected, $Result, [string]$Message) {
    if ($Result.ExitCode -ne $Expected) {
        throw "$Message（退出码 $($Result.ExitCode)，期望 $Expected）`n$($Result.Output)"
    }
}

$config = Get-Content -LiteralPath $template -Raw | ConvertFrom-Json -AsHashtable
if ($config.schemaVersion -ne 3) { throw 'config.example.json 的 schemaVersion 必须是 3。' }

# 各角色提示文件的最小标记集（与 check.ps1 的必需标记一致）。
$markers = [ordered]@{
    'lead'         = @('team_task_', 'spawn_teammate', 'create_goal')
    'worker'       = @('Publish-TeamReport', 'ops.jsonl', 'write_scopes')
    'plan'         = @('Publish-TeamReport', 'doc/plans', '子计划')
    'review'       = @('Publish-TeamReport', '只读', '风险')
    'issue-writer' = @('Publish-TeamReport', '不伪造审批', '创建 Issue')
    'team-review'  = @('.dsh/team/team-review.md', '只向用户负责')
}
function New-RoleFile([string]$Name) {
    $lines = @("# 角色提示：$Name", '', '团队合同指针：`.dsh/team/README.md`', '')
    foreach ($marker in $markers[$Name]) { $lines += "- $marker" }
    $lines += ''
    [IO.File]::WriteAllText((Join-Path $roles "$Name.md"), ($lines -join "`n"), [Text.UTF8Encoding]::new($false))
}

$root = Join-Path ([IO.Path]::GetTempPath()) ('tmog-dsh-team-check-' + [guid]::NewGuid().ToString('N'))
$roles = Join-Path $root 'roles'
$skills = Join-Path $root 'skills'
$missingSkills = Join-Path $root 'skills-missing'
[IO.Directory]::CreateDirectory($roles) | Out-Null
[IO.Directory]::CreateDirectory($skills) | Out-Null
try {
    foreach ($name in $markers.Keys) { New-RoleFile $name }

    # 1) config.example.json 静态检查通过。
    $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $skills)
    Assert-Exit 0 $result 'config.example.json 应通过静态检查。'
    if ($result.Output -notmatch 'PASS') { throw "静态检查成功时应输出 PASS：$($result.Output)" }

    # 2) 每个可单独指定的角色静态检查通过（Lead 由 -Role team 覆盖）。
    foreach ($name in @('worker', 'plan', 'review', 'issue-writer', 'team-review')) {
        $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $skills, '-Role', $name)
        Assert-Exit 0 $result "角色 $name 提示文件完整时应通过静态检查。"
    }

    # 3) 非法配置逐一被拒绝。
    $cases = @('zeroTeammates', 'badEvalMode', 'executorModel', 'legacy', 'worktreeRootIsProject', 'botRounds9', 'mergeAuto', 'autoWithoutAllow')
    $expectations = @{
        'legacy'                = '不覆盖原件'
        'executorModel'         = 'settings'
        'worktreeRootIsProject' = '工程根'
    }
    foreach ($case in $cases) {
        $bad = $config | ConvertTo-Json -Depth 20 | ConvertFrom-Json -AsHashtable
        switch ($case) {
            'zeroTeammates' { $bad.executor.maxTeammates = 0 }
            'badEvalMode' { $bad.eval.mode = 'always' }
            'executorModel' { $bad.executor.model = @{ provider = 'dsh'; model = 'anything' } }
            'legacy' { $bad = @{ Max_Dev = 1; Dev_Setting = '' } }
            'worktreeRootIsProject' { $bad.dsh.worktreeRoot = $projectRoot }
            'botRounds9' { $bad.policy.botReviewRounds = 9 }
            'mergeAuto' { $bad.policy.merge = 'auto' }
            'autoWithoutAllow' { $bad.eval.mode = 'auto'; $bad.policy.allowInferred = $false }
        }
        $path = Join-Path $root ("bad-$case.json")
        [IO.File]::WriteAllText($path, ($bad | ConvertTo-Json -Depth 20), [Text.UTF8Encoding]::new($false))
        $result = Invoke-Check @('-ConfigPath', $path, '-RolesRoot', $roles, '-SkillsRoot', $skills)
        Assert-Exit 1 $result "没有拒绝非法配置：$case"
        if ($result.Output -notmatch 'FAIL') { throw "非法配置 $case 未输出 FAIL：$($result.Output)" }
        if ($expectations.ContainsKey($case) -and $result.Output -notmatch $expectations[$case]) {
            throw "非法配置 $case 的错误信息缺少「$($expectations[$case])」：$($result.Output)"
        }
    }

    # 4) 就绪门槛：先只放 review.md。
    Remove-Item -LiteralPath (Join-Path $roles 'lead.md'), (Join-Path $roles 'worker.md')
    $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $skills, '-Ready', '-Role', 'review')
    Assert-Exit 0 $result '只请求 Review 时不应要求未使用的 Lead/Worker 提示文件。'
    $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $skills, '-Ready', '-Role', 'team')
    Assert-Exit 1 $result '缺少 Lead/Worker 提示文件时不得报告团队就绪。'

    # 补齐 lead.md + worker.md 后团队就绪。
    New-RoleFile 'lead'
    New-RoleFile 'worker'
    $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $skills, '-Ready', '-Role', 'team')
    Assert-Exit 0 $result '补齐 Lead/Worker 提示文件后团队应就绪。'

    # Program 模式要求六个角色提示全部通过。
    $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $skills, '-Ready', '-Role', 'program')
    Assert-Exit 0 $result '六个角色提示文件齐全时 Program 模式应就绪。'

    # 技能根不存在时不得报告就绪。
    $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $missingSkills, '-Ready', '-Role', 'team')
    Assert-Exit 1 $result '技能根不存在时不得报告就绪。'

    # 角色专属标记缺失应拒绝。
    $reviewPath = Join-Path $roles 'review.md'
    $original = [IO.File]::ReadAllText($reviewPath)
    [IO.File]::WriteAllText($reviewPath, $original.Replace('只读', '可写'), [Text.UTF8Encoding]::new($false))
    $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $skills, '-Ready', '-Role', 'review')
    Assert-Exit 1 $result 'Review 提示文件缺少只读边界时应拒绝就绪。'
    [IO.File]::WriteAllText($reviewPath, $original, [Text.UTF8Encoding]::new($false))

    # 角色提示文件不是合法 UTF-8 时拒绝。
    [IO.File]::WriteAllBytes((Join-Path $roles 'plan.md'), [byte[]](0x23, 0xFF))
    $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $skills, '-Role', 'plan')
    Assert-Exit 1 $result '角色提示文件不是合法 UTF-8 时应拒绝。'

    # 合同正文缺失时 -Ready 必须失败（复制 check.ps1 到临时目录模拟缺 README.md / team-review.md）。
    $teamCopy = Join-Path $root 'teamcopy'
    [IO.Directory]::CreateDirectory($teamCopy) | Out-Null
    Copy-Item -LiteralPath $checker -Destination (Join-Path $teamCopy 'check.ps1')
    $copiedChecker = Join-Path $teamCopy 'check.ps1'
    $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $skills) -Checker $copiedChecker
    Assert-Exit 0 $result '静态检查不应依赖 PSScriptRoot 下的合同正文。'
    $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $skills, '-Ready', '-Role', 'team') -Checker $copiedChecker
    Assert-Exit 1 $result '缺少 README.md / team-review.md / program.md 时不得报告就绪。'

    # program.md 存在但缺关键条款锚点时，-Ready 必须失败。
    $teamCopy2 = Join-Path $root 'teamcopy2'
    [IO.Directory]::CreateDirectory($teamCopy2) | Out-Null
    Copy-Item -LiteralPath $checker -Destination (Join-Path $teamCopy2 'check.ps1')
    [IO.File]::WriteAllText((Join-Path $teamCopy2 'README.md'), '# contract', [Text.UTF8Encoding]::new($false))
    [IO.File]::WriteAllText((Join-Path $teamCopy2 'team-review.md'), '# audit', [Text.UTF8Encoding]::new($false))
    [IO.File]::WriteAllText((Join-Path $teamCopy2 'program.md'), '# 残缺合同', [Text.UTF8Encoding]::new($false))
    $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $skills, '-Ready', '-Role', 'team') -Checker (Join-Path $teamCopy2 'check.ps1')
    Assert-Exit 1 $result 'program.md 缺少关键条款锚点时不得报告就绪。'

    # README 被截断（缺关键章节锚点）时，-Ready 必须失败。
    $teamCopy3 = Join-Path $root 'teamcopy3'
    [IO.Directory]::CreateDirectory($teamCopy3) | Out-Null
    Copy-Item -LiteralPath $checker -Destination (Join-Path $teamCopy3 'check.ps1')
    Copy-Item -LiteralPath (Join-Path $PSScriptRoot 'team-review.md') -Destination (Join-Path $teamCopy3 'team-review.md')
    Copy-Item -LiteralPath (Join-Path $PSScriptRoot 'program.md') -Destination (Join-Path $teamCopy3 'program.md')
    [IO.File]::WriteAllText((Join-Path $teamCopy3 'README.md'), '# 残缺 README', [Text.UTF8Encoding]::new($false))
    $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $skills, '-Ready', '-Role', 'team') -Checker (Join-Path $teamCopy3 'check.ps1')
    Assert-Exit 1 $result 'README.md 缺少关键章节锚点时不得报告就绪。'

    # README 缺少 subagent 台账对账锚点时，-Ready 必须失败。
    $teamCopy4 = Join-Path $root 'teamcopy4'
    [IO.Directory]::CreateDirectory($teamCopy4) | Out-Null
    Copy-Item -LiteralPath $checker -Destination (Join-Path $teamCopy4 'check.ps1')
    Copy-Item -LiteralPath (Join-Path $PSScriptRoot 'team-review.md') -Destination (Join-Path $teamCopy4 'team-review.md')
    Copy-Item -LiteralPath (Join-Path $PSScriptRoot 'program.md') -Destination (Join-Path $teamCopy4 'program.md')
    $readme = [IO.File]::ReadAllText((Join-Path $PSScriptRoot 'README.md'))
    $readmeWithoutLedger = $readme.Replace('subagent 台账对账', 'subagent ledger')
    if ($readmeWithoutLedger -eq $readme) { throw '测试准备失败：README.md 未包含 subagent 台账对账锚点。' }
    [IO.File]::WriteAllText((Join-Path $teamCopy4 'README.md'), $readmeWithoutLedger, [Text.UTF8Encoding]::new($false))
    $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $skills, '-Ready', '-Role', 'team') -Checker (Join-Path $teamCopy4 'check.ps1')
    Assert-Exit 1 $result 'README.md 缺少 subagent 台账对账锚点时不得报告就绪。'

    # program.md 缺少 subagent 台账锚点时，-Ready 必须失败。
    $teamCopy5 = Join-Path $root 'teamcopy5'
    [IO.Directory]::CreateDirectory($teamCopy5) | Out-Null
    Copy-Item -LiteralPath $checker -Destination (Join-Path $teamCopy5 'check.ps1')
    Copy-Item -LiteralPath (Join-Path $PSScriptRoot 'README.md') -Destination (Join-Path $teamCopy5 'README.md')
    Copy-Item -LiteralPath (Join-Path $PSScriptRoot 'team-review.md') -Destination (Join-Path $teamCopy5 'team-review.md')
    $program = [IO.File]::ReadAllText((Join-Path $PSScriptRoot 'program.md'))
    $programWithoutLedger = $program.Replace('subagent 台账', 'subagent ledger')
    if ($programWithoutLedger -eq $program) { throw '测试准备失败：program.md 未包含 subagent 台账锚点。' }
    [IO.File]::WriteAllText((Join-Path $teamCopy5 'program.md'), $programWithoutLedger, [Text.UTF8Encoding]::new($false))
    $result = Invoke-Check @('-ConfigPath', $template, '-RolesRoot', $roles, '-SkillsRoot', $skills, '-Ready', '-Role', 'team') -Checker (Join-Path $teamCopy5 'check.ps1')
    Assert-Exit 1 $result 'program.md 缺少 subagent 台账锚点时不得报告就绪。'
} finally {
    Remove-Item -LiteralPath $root -Recurse -Force -Confirm:$false
}
'PASS：DSH 团队配置、非法配置拒绝与角色就绪门槛检查通过。'
