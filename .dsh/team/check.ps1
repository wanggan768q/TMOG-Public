[CmdletBinding()]
param(
    [string]$ConfigPath = (Join-Path $PSScriptRoot 'config.json'),
    [switch]$Ready,
    [ValidateSet('team', 'worker', 'plan', 'review', 'issue-writer', 'team-review', 'program')]
    [string]$Role = 'team',
    [string]$RolesRoot = (Join-Path $PSScriptRoot 'roles'),
    [string]$SkillsRoot = (Join-Path ([IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../..'))) '.dsh/skills')
)

# DSH 团队配置检查：schemaVersion=3 配置结构、角色提示文件、按需就绪门槛。
# DSH 不按角色提供模型选择或 --settings，检查对象是“团队配置 + 角色提示文件”。
$ErrorActionPreference = 'Stop'
$projectRoot = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../..'))

function Assert-Condition([bool]$Condition, [string]$Message) {
    if (-not $Condition) { throw $Message }
}
function Assert-Keys($Value, [string[]]$Keys, [string]$Name) {
    Assert-Condition ($Value -is [System.Collections.IDictionary]) "$Name 必须是 JSON 对象。"
    $missing = @($Keys | Where-Object { -not $Value.ContainsKey($_) })
    $extra = @(@($Value.Keys) | Where-Object { $_ -notin $Keys })
    if ($missing.Count -gt 0 -or $extra.Count -gt 0 -or $Value.Count -ne $Keys.Count) {
        $message = "$Name 字段不匹配；应恰好包含：$($Keys -join ', ')。"
        if ($missing.Count -gt 0) { $message += "缺少：$($missing -join ', ')。" }
        if ($extra.Count -gt 0) { $message += "多余：$($extra -join ', ')。" }
        $message += 'DSH 不按角色配置模型或 --settings；旧 Claude 配置须显式迁移到 schemaVersion=3，不覆盖原件。'
        throw $message
    }
}

try {
    $config = Get-Content -LiteralPath $ConfigPath -Raw | ConvertFrom-Json -AsHashtable
    Assert-Keys $config @('schemaVersion', 'paused', 'eval', 'executor', 'policy', 'dsh') '配置'
    $version = $config.schemaVersion
    $versionIsInteger = ($version -is [int] -or $version -is [long])
    if (-not ($versionIsInteger -and $version -eq 3)) {
        if ($versionIsInteger -and $version -eq 2) {
            throw '旧 Claude 配置须显式迁移到 schemaVersion=3，不覆盖原件（原文件保留，按 config.example.json 另行改写）。'
        }
        throw 'schemaVersion 必须为 3；旧 Claude 配置须显式迁移到 schemaVersion=3，不覆盖原件。'
    }
    Assert-Condition ($config.paused -is [bool]) 'paused 必须是布尔值。'

    Assert-Keys $config.eval @('mode') 'eval'
    Assert-Condition ($config.eval.mode -cin @('off', 'observe', 'auto')) 'eval.mode 必须为 off、observe 或 auto。'

    Assert-Keys $config.executor @('maxTeammates') 'executor'
    $limit = $config.executor.maxTeammates
    Assert-Condition (($limit -is [int] -or $limit -is [long]) -and $limit -ge 1 -and $limit -le 16) 'executor.maxTeammates 必须是 1–16 的整数。'

    Assert-Keys $config.policy @('allowInferred', 'merge', 'botReviewRounds') 'policy'
    Assert-Condition ($config.policy.allowInferred -is [bool]) 'policy.allowInferred 必须是布尔值。'
    Assert-Condition ($config.policy.merge -cin @('manual', 'authorized')) 'policy.merge 必须是 manual 或 authorized；配置不替代 Ticket 合并授权。'
    $rounds = $config.policy.botReviewRounds
    Assert-Condition (($rounds -is [int] -or $rounds -is [long]) -and $rounds -ge 0 -and $rounds -le 3) 'policy.botReviewRounds 必须是 0–3 的整数。'
    # 合同要求：auto 模式必须有用户书面允许的规则且 allowInferred=true，否则只能 observe/off。
    Assert-Condition (-not ($config.eval.mode -eq 'auto' -and -not $config.policy.allowInferred)) 'eval.mode=auto 必须同时 policy.allowInferred=true；否则只允许 observe 或 off。'

    Assert-Keys $config.dsh @('worktreeRoot', 'mergeMethod') 'dsh'
    $worktreeRoot = $config.dsh.worktreeRoot
    Assert-Condition ($worktreeRoot -is [string] -and [IO.Path]::IsPathFullyQualified($worktreeRoot)) 'dsh.worktreeRoot 必须是绝对路径。'
    Assert-Condition ([IO.Path]::GetFullPath($worktreeRoot).TrimEnd('\', '/') -ne $projectRoot.TrimEnd('\', '/')) 'dsh.worktreeRoot 不能等于工程根目录。'
    Assert-Condition ($config.dsh.mergeMethod -cin @('merge', 'squash', 'rebase')) 'dsh.mergeMethod 必须为 merge、squash 或 rebase。'

    # 角色提示文件：-Role team 检查 lead + worker；program 检查全部六个；其他值只检查该角色本身。
    $roleMarkers = @{
        'lead'         = @('team_task_', 'spawn_teammate', 'create_goal')
        'worker'       = @('Publish-TeamReport', 'ops.jsonl', 'write_scopes')
        'plan'         = @('Publish-TeamReport', 'doc/plans', '子计划')
        'review'       = @('Publish-TeamReport', '只读', '风险')
        'issue-writer' = @('Publish-TeamReport', '不伪造审批', '创建 Issue')
        'team-review'  = @('.dsh/team/team-review.md', '只向用户负责')
    }
    $allRoles = @('lead', 'worker', 'plan', 'review', 'issue-writer', 'team-review')
    $checkedRoles = switch ($Role) {
        'team' { @('lead', 'worker') }
        'program' { $allRoles }
        default { @($Role) }
    }
    $strictUtf8 = [System.Text.UTF8Encoding]::new($false, $true)
    foreach ($name in $checkedRoles) {
        $path = Join-Path $RolesRoot "$name.md"
        Assert-Condition (Test-Path -LiteralPath $path -PathType Leaf) "角色提示文件不存在：$name（$path）。"
        $bytes = [IO.File]::ReadAllBytes($path)
        Assert-Condition ($bytes.Length -gt 0) "角色提示文件为空：$name（$path）。"
        try {
            $text = $strictUtf8.GetString($bytes)
        } catch {
            throw "角色提示文件不是合法 UTF-8：$name（$path）。"
        }
        Assert-Condition (-not [string]::IsNullOrWhiteSpace($text)) "角色提示文件为空：$name（$path）。"
        Assert-Condition (-not $text.Contains([char]0xFFFD)) "角色提示文件含替换字符 U+FFFD（乱码）：$name。"
        # 路径类标记按语义比较：Windows 反斜杠写法（.dsh\team\README.md）与正斜杠等价。
        $pathText = $text.Replace('\', '/')
        Assert-Condition ($pathText.Contains('.dsh/team/README.md')) "角色提示文件缺少团队合同指针 .dsh/team/README.md：$name。"
        foreach ($marker in $roleMarkers[$name]) {
            $found = if ($marker.Contains('/')) { $pathText.Contains($marker) } else { $text.Contains($marker) }
            Assert-Condition $found "角色提示文件缺少必需标记「$marker」：$name。"
        }
    }

    if ($Ready) {
        # 就绪不仅要有角色提示，还必须有被引用的合同正文与关键条款；缺合同不能派发。
        foreach ($contract in @('README.md', 'team-review.md', 'program.md')) {
            Assert-Condition (Test-Path -LiteralPath (Join-Path $PSScriptRoot $contract) -PathType Leaf) "团队合同文件不存在：$contract。"
        }
        $strictUtf8Contract = [System.Text.UTF8Encoding]::new($false, $true)
        $readContract = {
            param([string]$Name)
            $strictUtf8Contract.GetString([IO.File]::ReadAllBytes((Join-Path $PSScriptRoot $Name)))
        }
        $readmeText = & $readContract 'README.md'
        foreach ($anchor in @('## 4. 路由、所有权与并行', '## 8. 状态、报告、跟进与恢复', '## 13. Program 模式')) {
            Assert-Condition ($readmeText.Contains($anchor)) "README.md 缺少关键条款锚点「$anchor」；合同不完整，拒绝就绪。"
        }
        $teamReviewText = & $readContract 'team-review.md'
        Assert-Condition ($teamReviewText.Contains('## 用户控制的入口')) 'team-review.md 缺少“用户控制的入口”锚点；合同不完整，拒绝就绪。'
        # program.md 是自动流水线的门槛来源；缺关键条款的残缺合同不能当作可用。
        $programText = & $readContract 'program.md'
        foreach ($anchor in @('## 3. 低风险门槛', '## 4. 中断清单', '## 5. 续跑', 'numstat', 'risk_ceiling', 'waiting_for_user', 'first_merge_confirmation', 'program-checklist', 'max_goal_rounds')) {
            Assert-Condition ($programText.Contains($anchor)) "program.md 缺少关键条款锚点「$anchor」；自动流水线合同不完整，拒绝就绪。"
        }
        Assert-Condition (Test-Path -LiteralPath $SkillsRoot -PathType Container) "DSH 项目技能根不存在或不是目录：$SkillsRoot。"
    }

    'PASS：DSH 团队配置与角色提示文件静态检查通过。'
    if ($Ready) {
        "PASS：$Role 角色就绪检查通过；未验证实际会话、权限或自动调度。"
    } else {
        '只完成静态检查；启动前迁移本地配置并执行 -Ready。'
    }
    exit 0
} catch {
    Write-Error "FAIL：$($_.Exception.Message)" -ErrorAction Continue
    exit 1
}
