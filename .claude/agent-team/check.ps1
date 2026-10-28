[CmdletBinding()]
param(
    [string]$ConfigPath = (Join-Path $PSScriptRoot 'config.json'),
    [switch]$Ready,
    [ValidateSet('team', 'team-review')]
    [string]$Role = 'team'
)

$ErrorActionPreference = 'Stop'
$projectRoot = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../..'))

function Assert-Condition([bool]$Condition, [string]$Message) {
    if (-not $Condition) { throw $Message }
}

try {
    $config = Get-Content -LiteralPath $ConfigPath -Raw | ConvertFrom-Json -AsHashtable
    $template = Get-Content -LiteralPath (Join-Path $PSScriptRoot 'config.example.json') -Raw | ConvertFrom-Json -AsHashtable
    $teamSettings = @('Dev_Setting', 'Review_Setting', 'IssueWriter_Setting', 'Plan_Setting')
    $settingsKeys = $teamSettings + @('TeamReview_Setting')
    $readyKeys = if ($Role -eq 'team-review') { @('TeamReview_Setting') } else { $teamSettings }
    $limitKeys = @('Max_Dev', 'Max_Review', 'Max_IssueWriter')
    $required = $settingsKeys + $limitKeys + @('Worktree_Root', 'Dev_Split_Direction', 'Review_Split_Direction', 'Merge_Method')
    Assert-Condition ($config -is [System.Collections.IDictionary]) '配置必须是 JSON 对象。'
    Assert-Condition ($config.Count -eq $required.Count) '配置字段数量不匹配；Plan 和 TeamReview 固定单例，不配置数量上限。'
    foreach ($key in $required) {
        Assert-Condition ($config.ContainsKey($key) -and $template.ContainsKey($key)) "缺少字段：$key"
    }
    Assert-Condition ($template.Count -eq $required.Count) '示例配置字段数量不匹配。'
    foreach ($key in $limitKeys) {
        $value = $config[$key]
        Assert-Condition (($value -is [int] -or $value -is [long]) -and $value -gt 0) "$key 必须是正整数。"
    }
    $root = $config['Worktree_Root']
    Assert-Condition ($root -is [string] -and -not [string]::IsNullOrWhiteSpace($root)) 'Worktree_Root 必须是非空字符串。'
    Assert-Condition ([IO.Path]::IsPathFullyQualified($root)) 'Worktree_Root 必须是绝对路径。'
    Assert-Condition ([IO.Path]::GetFullPath($root).TrimEnd('\', '/') -ne $projectRoot.TrimEnd('\', '/')) 'Worktree_Root 不能等于当前工程根目录。'
    foreach ($key in @('Dev_Split_Direction', 'Review_Split_Direction')) {
        Assert-Condition ($config[$key] -cin @('vertical', 'horizontal')) "$key 必须是 vertical 或 horizontal。"
    }
    Assert-Condition ($config['Merge_Method'] -cin @('merge', 'squash', 'rebase')) 'Merge_Method 必须是 merge、squash 或 rebase。'
    foreach ($key in $settingsKeys) {
        $value = $config[$key]
        Assert-Condition ($value -is [string]) "$key 必须是路径字符串。"
        if ($Ready -and $key -in $readyKeys) {
            Assert-Condition (-not [string]::IsNullOrWhiteSpace($value)) "$key 尚未配置，不能启动。"
            $path = if ([IO.Path]::IsPathFullyQualified($value)) { $value } else { Join-Path $projectRoot $value }
            Assert-Condition (Test-Path -LiteralPath $path -PathType Leaf) "$key 文件不存在：$path"
            $settings = Get-Content -LiteralPath $path -Raw | ConvertFrom-Json -AsHashtable
            Assert-Condition ($settings -is [System.Collections.IDictionary]) "$key 设置文件必须是 JSON 对象。"
        }
    }
    foreach ($name in @('product', 'plan', 'dev', 'review', 'issue-writer', 'team-review')) {
        $path = Join-Path $projectRoot ".claude/agents/$name.md"
        $text = Get-Content -LiteralPath $path -Raw
        Assert-Condition ($text -match "(?s)\A---\r?\nname: $([regex]::Escape($name))\r?\ndescription: [^\r\n]+\r?\n---\r?\n") "角色 frontmatter 无效：$name"
        Assert-Condition ($text.Contains('.claude/agent-team/README.md')) "角色缺少共享合同指针：$name"
        if ($name -eq 'team-review') {
            Assert-Condition ($text.Contains('.claude/agent-team/team-review.md')) 'TeamReview 缺少独立审计合同指针。'
            Assert-Condition ($text.Contains('只向用户负责')) 'TeamReview 缺少独立管理边界。'
        } else {
            Assert-Condition ($text.Contains('INTENT_RECORDED')) "角色缺少副作用落盘确认：$name"
        }
        Assert-Condition (-not $text.Contains([char]0xfffd)) "角色包含乱码替换字符：$name"
    }
    foreach ($relative in @('.claude/agent-team/README.md', '.claude/agent-team/team-review.md', '.claude/workflow/README.md', 'AGENTS.md')) {
        Assert-Condition (Test-Path -LiteralPath (Join-Path $projectRoot $relative) -PathType Leaf) "缺少文档：$relative"
    }
    Write-Output 'PASS：六个角色、共享合同和配置结构检查通过。'
    if ($Ready) {
        Write-Output "PASS：$Role 所需的 $($readyKeys.Count) 个 settings 文件存在且为 JSON 对象；未验证运行时或权限行为。"
    } else {
        Write-Output '仅静态检查；启动前须配置 settings 并执行 -Ready。'
    }
    exit 0
} catch {
    Write-Error "FAIL：$($_.Exception.Message)" -ErrorAction Continue
    exit 1
}
