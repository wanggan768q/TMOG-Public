[CmdletBinding()]
param(
    [string]$ConfigPath = (Join-Path $PSScriptRoot 'config.json'),
    [switch]$Ready,
    [ValidateSet('team', 'dev', 'plan', 'review', 'issue-writer', 'team-review')]
    [string]$Role = 'team'
)

$ErrorActionPreference = 'Stop'
$projectRoot = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../..'))
function Assert-Condition([bool]$Condition, [string]$Message) {
    if (-not $Condition) { throw $Message }
}
function Assert-Keys($Value, [string[]]$Keys, [string]$Name) {
    Assert-Condition ($Value -is [System.Collections.IDictionary]) "$Name 必须是对象。"
    Assert-Condition ($Value.Count -eq $Keys.Count) "$Name 字段不匹配；旧配置须按 config.example.json 显式迁移。"
    foreach ($key in $Keys) { Assert-Condition ($Value.ContainsKey($key)) "$Name 缺少 $key。" }
}
function Assert-Model($Value, [string]$Name) {
    if ($null -eq $Value) { return }
    Assert-Condition ($Value -is [string] -and -not [string]::IsNullOrWhiteSpace($Value)) "$Name 必须是 null 或 Claude --model 标识字符串，不使用 DSH provider 对象。"
}

try {
    $config = Get-Content -LiteralPath $ConfigPath -Raw | ConvertFrom-Json -AsHashtable
    Assert-Keys $config @('schemaVersion', 'paused', 'eval', 'executor', 'policy', 'claude') '配置'
    Assert-Condition ($config.schemaVersion -eq 2) '需要 schemaVersion=2；旧执行记录不自动迁移。'
    Assert-Condition ($config.paused -is [bool]) 'paused 必须是布尔值。'
    Assert-Keys $config.eval @('mode', 'model') 'eval'
    Assert-Condition ($config.eval.mode -cin @('off', 'observe', 'auto')) 'eval.mode 必须为 off、observe 或 auto。'
    Assert-Model $config.eval.model 'eval.model'
    Assert-Keys $config.executor @('maxWorkers', 'model') 'executor'
    $limit = $config.executor.maxWorkers
    Assert-Condition (($limit -is [int] -or $limit -is [long]) -and $limit -ge 1 -and $limit -le 16) 'executor.maxWorkers 必须是 1–16 的整数。'
    Assert-Model $config.executor.model 'executor.model'
    Assert-Keys $config.policy @('allowInferred', 'merge', 'botReviewRounds') 'policy'
    Assert-Condition ($config.policy.allowInferred -is [bool]) 'policy.allowInferred 必须是布尔值。'
    Assert-Condition ($config.policy.merge -cin @('manual', 'authorized')) 'policy.merge 必须是 manual 或 authorized；配置不替代 Ticket 合并授权。'
    Assert-Condition ($config.policy.botReviewRounds -is [int] -or $config.policy.botReviewRounds -is [long]) 'botReviewRounds 必须是整数。'
    Assert-Condition ($config.policy.botReviewRounds -ge 0 -and $config.policy.botReviewRounds -le 3) 'botReviewRounds 必须为 0–3。'
    Assert-Keys $config.claude @('settings', 'worktreeRoot', 'mergeMethod') 'claude'
    $roles = @('dev', 'plan', 'review', 'issue-writer', 'team-review')
    Assert-Keys $config.claude.settings $roles 'claude.settings'
    $root = $config.claude.worktreeRoot
    Assert-Condition ($root -is [string] -and [IO.Path]::IsPathFullyQualified($root)) 'claude.worktreeRoot 必须是绝对路径。'
    Assert-Condition ([IO.Path]::GetFullPath($root).TrimEnd('\', '/') -ne $projectRoot.TrimEnd('\', '/')) 'worktreeRoot 不能等于工程根目录。'
    Assert-Condition ($config.claude.mergeMethod -cin @('merge', 'squash', 'rebase')) 'mergeMethod 无效。'
    $readyRoles = if ($Role -eq 'team') { @('dev') } else { @($Role) }
    foreach ($name in $roles) {
        $value = $config.claude.settings[$name]
        Assert-Condition ($value -is [string]) "$name settings 必须是路径字符串。"
        if ($Ready -and $name -in $readyRoles) {
            Assert-Condition (-not [string]::IsNullOrWhiteSpace($value)) "$name settings 尚未配置。"
            $path = if ([IO.Path]::IsPathFullyQualified($value)) { $value } else { Join-Path $projectRoot $value }
            Assert-Condition (Test-Path -LiteralPath $path -PathType Leaf) "$name settings 文件不存在。"
            $settings = Get-Content -LiteralPath $path -Raw | ConvertFrom-Json -AsHashtable
            Assert-Condition ($settings -is [System.Collections.IDictionary]) "$name settings 必须是 JSON 对象。"
        }
    }
    foreach ($name in @('product') + $roles) {
        $text = Get-Content -LiteralPath (Join-Path $projectRoot ".claude/agents/$name.md") -Raw
        Assert-Condition ($text -match "(?s)\A---\r?\nname: $([regex]::Escape($name))\r?\ndescription: [^\r\n]+\r?\ntools: [^\r\n]+\r?\n---\r?\n") "角色 frontmatter 无效：$name"
        Assert-Condition ($text.Contains('.claude/agent-team/README.md')) "缺少合同指针：$name"
        $tools = ($text -split '\r?\n')[3].Substring(7) -split ',\s*'
        if ($name -in @('review', 'issue-writer', 'team-review')) {
            Assert-Condition ('Edit' -notin $tools -and 'NotebookEdit' -notin $tools) "专项角色不得持有 Edit：$name"
        }
        if ($name -eq 'team-review') {
            Assert-Condition ($text.Contains('.claude/agent-team/team-review.md') -and $text.Contains('只向用户负责')) '独立审计边界缺失。'
        } else {
            Assert-Condition ($text.Contains('ops.jsonl')) "缺少副作用日志边界：$name"
            Assert-Condition ($text.Contains('Publish-TeamReport')) "正式报告必须使用草稿校验发布入口：$name"
        }
        Assert-Condition (-not $text.Contains([char]0xfffd)) "角色含乱码：$name"
    }
    'PASS：主 Agent / Worker 团队配置与六个角色静态检查通过。'
    if ($Ready) { "PASS：$Role settings 文件检查通过；未验证实际会话、权限或自动调度。" }
    else { '只完成静态检查；启动前迁移本地配置并执行 -Ready。' }
    exit 0
} catch {
    Write-Error "FAIL：$($_.Exception.Message)" -ErrorAction Continue
    exit 1
}
