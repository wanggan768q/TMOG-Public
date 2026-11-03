[CmdletBinding()]
param()
$ErrorActionPreference = 'Stop'
$checker = Join-Path $PSScriptRoot 'check.ps1'
$template = Join-Path $PSScriptRoot 'config.example.json'
$config = Get-Content -LiteralPath $template -Raw | ConvertFrom-Json -AsHashtable
if ($config.schemaVersion -ne 2) { throw '团队配置尚未迁移到主 Agent / Worker 模型。' }
& pwsh -NoProfile -File $checker -ConfigPath $template
if ($LASTEXITCODE -ne 0) { throw '新版配置应通过静态预检。' }

$root = Join-Path ([IO.Path]::GetTempPath()) ('tmog-team-test-' + [guid]::NewGuid())
[IO.Directory]::CreateDirectory($root) | Out-Null
try {
    $path = Join-Path $root 'config.json'
    foreach ($case in @('zeroWorkers', 'badMode', 'badModel', 'legacy')) {
        $bad = $config | ConvertTo-Json -Depth 20 | ConvertFrom-Json -AsHashtable
        switch ($case) {
            'zeroWorkers' { $bad.executor.maxWorkers = 0 }
            'badMode' { $bad.eval.mode = 'always' }
            'badModel' { $bad.executor.model = @{ provider = 'dsh'; model = 'anything' } }
            'legacy' { $bad = @{ Max_Dev = 1; Dev_Setting = '' } }
        }
        [IO.File]::WriteAllText($path, ($bad | ConvertTo-Json -Depth 20))
        & pwsh -NoProfile -File $checker -ConfigPath $path 2>&1 | Out-Null
        if ($LASTEXITCODE -eq 0) { throw "没有拒绝非法配置：$case" }
    }
    $settings = Join-Path $root 'audit-settings.json'
    [IO.File]::WriteAllText($settings, '{}')
    $config.claude.settings.'team-review' = $settings
    [IO.File]::WriteAllText($path, ($config | ConvertTo-Json -Depth 20))
    & pwsh -NoProfile -File $checker -ConfigPath $path -Ready -Role team-review
    if ($LASTEXITCODE -ne 0) { throw '独立审计不应被未配置的 Worker settings 阻塞。' }
    & pwsh -NoProfile -File $checker -ConfigPath $path -Ready -Role team 2>&1 | Out-Null
    if ($LASTEXITCODE -eq 0) { throw '团队 settings 未配置时不得报告就绪。' }
    [IO.File]::WriteAllText($settings, '[]')
    & pwsh -NoProfile -File $checker -ConfigPath $path -Ready -Role team-review 2>&1 | Out-Null
    if ($LASTEXITCODE -eq 0) { throw '审计 settings 必须是 JSON 对象。' }
    [IO.File]::WriteAllText($settings, '{}')
    $config.claude.settings.dev = $settings
    [IO.File]::WriteAllText($path, ($config | ConvertTo-Json -Depth 20))
    & pwsh -NoProfile -File $checker -ConfigPath $path -Ready -Role team
    if ($LASTEXITCODE -ne 0) { throw '只启动 Worker 时不应要求未使用的专项角色 settings。' }
    & pwsh -NoProfile -File $checker -ConfigPath $path -Ready -Role review 2>&1 | Out-Null
    if ($LASTEXITCODE -eq 0) { throw '请求 Review 时必须检查其专用 settings。' }
} finally {
    Remove-Item -LiteralPath $root -Recurse -Confirm:$false
}
'PASS：新版配置、非法配置拒绝与独立角色就绪门槛检查通过。'
