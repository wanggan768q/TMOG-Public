# Issue #6 集成验收记录（6T 技术部分）

> **状态：6T 技术范围完成，等待独立 Review。整票 #6 保持 OPEN：6H 干净环境与维护者
> 合规 pending，无公网包分发，本记录不构成合规最终签字。**
> 计划：`doc/plans/2026-10-29-issues-6-11-17-parallel-plan-v1.md`（v1，
> SHA-256 `d776056e1f579c195be14b37b113c72dd8e9ffebfe7cdb10194a63cdc19899e5`，
> 用户批准原文："批准 v1，允许 6T 技术部分合并；先执行无需真实实验的开发与检查。"）
> run=`parallel-plan-20261029-6-11-17`，task=`issue6-technical`，attempt=1，role=dev。
> base=`0fcd051e8e62ccc4f17f990f0825a19d85e2355f`（与批准计划规划基点一致）。

## 1. 范围与旧成果迁入

本任务只覆盖计划 §4 任务6T（技术部分）、§1.3 修正、§5.1+5.3 验证。旧成果只读来源
`E:/Git/TMOG-Public-WorkTree/issue-6-portable-package`，固定 HEAD
`c62992b837e20665399798a46e170b85ce5bde06`（只读核对时 `git status --short` 为空）。

| 新文件 | 迁入来源（旧树 c62992b8 固定对象） | 旧来源 SHA-256 | 迁入后新文件 SHA-256（attempt=2 修复后，见 §8） | 迁入方式 |
|---|---|---|---|---|
| CMakeLists.txt（portable 段） | 旧 CMakeLists L13–15, L61–95 | 01e3c3789bef416cbf08a0071064cfafa2bdf8c7182e60d4389e68de52286a61 | c031086827bf96f29df9225c3c6f22f12cb565fbb44d6c341c732f4aaf1b1816 | 重写适配：新树 Qt Core 可选/AUTOMOC 前置/stale 检查等 6 测试结构保留；strict 检查挪到 target 定义后（WINDEPLOYQT_EXE 已解析）；portable staging 逻辑同旧版 |
| scripts/package-portable.ps1 | 旧 scripts/package-portable.ps1 | 177db2a5455fc30eb1947647e9e1c29cc51b1aafa5ef8099d6bc7d97ffd91b9a | c9e8432feefc25d4d5b554e920c6e0aa9b0b52d39adaccb979c6c95900f9f8ee | 重写：见 §2 修正清单 |
| scripts/check-package.ps1 | 旧 scripts/check-package.ps1 | 5404dbad4ae4456b8d09925f901f6bdf96276b753e2811763e20a0a8d1c82bdc | 13156d8cb16e74d45c827d06dfab0a051ea2fc45c295ce9f65def510f96540f2 | 重写增强：见 §2 |
| packaging/README-PACKAGE.md | 旧 packaging/README-PACKAGE.md | 3a5071b5ed295a7521d4fbe267df50d8775e2268b7907253f124597987237206 | bf7c1812362ed10634fe9d4caa0bf7f0c7c6c7ddc585c1ba3354813fdef7bb79 | 保留 5 点人工清单，补包内容结构与 6H 边界说明 |
| packaging/THIRD-PARTY-NOTICES.md | 旧 packaging/THIRD-PARTY-NOTICES.md | c3c4302cc7e3e50fc05a66dda867a1be8467ca2dfe9a67eb883e730db3aac3c3 | 4a1fc86812d1156e7c627b93edf57561054eb3694ba325a3c88cd48e60ebec96 | 重写为逐组件表，见 §3 |

新迁入文件 hash 在 attempt=2 修复后重测（含 NOTICES 表补全、脚本检查修复）；旧来源
hash 取自 `git show <c62992b8>:<path> | sha256sum` 固定对象。

未迁入：旧 `tests/smoke_enumerate.cpp` 之外的旧测试基线（新树已有 6 测试更全）、
旧 `.gitignore`（禁止修改域）、旧 build 产物。

## 2. 计划 §1.3 最小修正落实

- **移除固定 TEMP 清理与默认启动器**：新版 package-portable.ps1 无
  `$env:TEMP\tmog-portable-verify` 段、无 Start-Process/Stop-Process/Remove-Item TEMP。
  清 PATH 运行列为 6H 人工授权步骤，不在默认制作流程。
- **BuildDir 规范化**：必须绝对路径或相对 SourceDir；解析后强制位于
  `<SourceDir>/build/issue6-*` 专用目录（leaf 正则 `^issue6-[a-z0-9-]+$`），
  拒绝工程根/源码/链接重解析点（SourceDir 与 BuildDir 均查 LinkType）。
- **显式编译器**：`-DCMAKE_CXX_COMPILER=<MinGWDir>/bin/g++.exe` 显式传入；
  CMakeExe/NinjaExe 必填且 Test-Path 校验。
- **逐命令退出码**：`Assert-NativeOk` 覆盖 configure/build/staging/dumpfullversion；
  许可证源缺失即 throw（新增 COPYING3 与 winpthreads COPYING 前置检查）。
- **check-package 增强**：必备文件存在性（exe/notices/readme/manifest/licenses 6 文件）、
  运行库 7 项、许可 6 项、白名单 28 项、清单行 hash(64hex)/size(数字)/路径合法性
  （拒绝对路径、反斜杠、`..`、空段、尾斜杠）、重复路径拒绝、双向 hash+size、
  白名单独立于清单（篡改清单加未知文件仍失败）。
- **不新增自动启动器**；`portable_package`/`TMOG_PORTABLE_STRICT` root 目标名保留。

## 3. 第三方材料（THIRD-PARTY-NOTICES.md）

逐组件表覆盖包内实际发出的 19 个 DLL：5 个 Qt 核心 DLL + 11 个插件 + 3 个 GCC 运行库。
许可依据为本机合法源只读核对：

- Qt 插件许可逐包核对自 `mingw_64/sbom/qtbase-6.12.0.spdx.json` 与
  `qtsvg-6.12.0.spdx.json`（均为 Qt-Commercial OR LGPL-3.0-only OR GPL 双/三选）；
  DLL 版本资源实测 6.12.0.0（libgcc/libstdc++ 无版本资源，用 GCC 13.1.0 构建标识）。
- Qt 内嵌第三方（zlib/libpng/libjpeg/PCRE2/Freetype/HarfBuzz/Unicode/double-conversion/
  tinycbor/wintab）从 SBOM Attribution 条目转录，完整文本指向官方源码 tarball
  的 `src/3rdparty/`；PSL 数据（MPL-2.0）如实转录并注明"不代 Qt 做嵌入式判定"。
- **GCC GPLv3 全文（COPYING3，674 行）与 GCC Runtime Library Exception（COPYING.RUNTIME，
  73 行）分列**，并注明例外文件本身不是 GPL 全文、仅适用于附声明的运行库文件。
- **winpthreads COPYING（57 行，MIT 式，Copyright (c) 2011 mingw-w64 project）单列**，
  明确不在 GCC 例外范围，纠正旧版"并入 GCC 例外"的归类。
- mingw-w64 runtime 汇总（240 行）独立条目，明确不覆盖 libwinpthread。
- 源码获取给到 6.12.0 子模块 tarball 与 GCC 13.1.0 release 精确地址；注明通用
  Qt 首页不作为对应源码交付证据。
- 文末"合规状态"明确：技术核对 ≠ 法律签字；维护者逐项确认前不得声称合规完整包。

## 4. 验证证据（全部实际执行，非静态声称）

工具（只读核对存在后使用）：CMake `D:/InstallApplication/CMake/bin/cmake.exe`；
CTest 同目录 `ctest.exe`；Qt `E:/InstallApplication/Qt/6.12.0/mingw_64`；
G++ `E:/InstallApplication/Qt/Tools/mingw1310_64/bin/g++.exe`；
Ninja `E:/InstallApplication/Qt/Tools/Ninja/ninja.exe`。
会话 PATH 仅临时加 `$QT/bin` 与 G++ 目录，`QT_QPA_PLATFORM_PLUGIN_PATH=<QT>/plugins/platforms`；
未改持久环境。

### 4.1 Debug/Release 安全子集（§5.1）

- 命令：`cmake -S <WT> -B <WT>/build/issue6-{debug,release} -G Ninja
  -DCMAKE_BUILD_TYPE=<cfg> -DCMAKE_PREFIX_PATH=<QT> -DCMAKE_CXX_COMPILER=<GXX>
  -DCMAKE_MAKE_PROGRAM=<NINJA>`，随后 `cmake --build <B> --parallel 2`，
  `ctest --test-dir <B> -N`（库存）与 `ctest --output-on-failure --timeout 120 -j 1
  -R '^(process_checks|close_lifecycle_checks|sampling_recovery_checks|stale_persistence_checks)$'`。
- **Debug**：库存 4/4（Total Tests: 4，无 0-tests 假绿）；执行 4/4 Passed
  （0.03s / 11.56s / 1.83s / 8.77s）。
- **Release**：库存 4/4；执行 4/4 Passed（0.04s / 11.58s / 1.77s / 8.77s）。
- **事故与教训（如实记录）**：Debug 第一轮 stale_persistence_checks 以 0xc0000602
  失败——根因是新 PowerShell 进程未继承 `QT_QPA_PLATFORM_PLUGIN_PATH`（计划 §5.1
  已预告该插件路径要求）。同进程内补环境后复跑通过。后续 17U/Review 须在统一进程
  会话中带插件路径执行离屏 Widgets 检查。

### 4.2 package_checks 负例（§5.3，先于完整制作）

命令：`pwsh -NoProfile -File <WT>/tests/package_checks.ps1 -SourceDir <WT>
-WorkDir <WT>/build/issue6-package-checks -QtDir <QT> -MinGWDir <MinGW父>
-CMakeExe <CMAKE> -NinjaExe <NINJA>`。

- 最终结果 **11/11**：10 个负例（缺 Qt DLL、缺许可、hash 篡改、size 篡改、重复路径、
  `..`、绝对路径、未知文件+重写 manifest 自证、额外 exe、未知 DLL+重写 manifest）
  全部如预期非零；正例对照（干净占位包）通过，证明负例失败源于检查逻辑。
- 只使用自建无害占位文件（文本字节），未复制任何厂商二进制；只污染登记的
  `build/issue6-package-checks/`。
- **开发中发现并修复的真实缺口**：初版 check-package 只查"包内文件都在白名单内"，
  未查"白名单必备项存在"，N2（删许可文件）意外通过；修复为显式必备许可 6 文件
  存在性检查后 N2 生效。此为负例驱动修复，非事后补测。
- 过程修复均在获准文件内：package_checks.ps1 WorkDir 根化路径处理、check 输出移出
  包目录（避免自 hash 争用）、check-package.ps1 必备项检查。

### 4.3 完整制作 ×2 与可重复性（§5.3）

- 命令：`pwsh -NoProfile -File <WT>/scripts/package-portable.ps1 -SourceDir <WT>
  -BuildDir <WT>/build/issue6-release -QtDir <QT> -MinGWDir <MinGW父> -CMakeExe <CMAKE>
  -NinjaExe <NINJA>`，随后 `check-package.ps1 -PackageDir <WT>/build/issue6-release/portable`。
  同一命令重跑两次。
- 两次均：strict configure OK → portable_package staging → 6 许可文件复制 →
  MANIFEST 生成 → check-package ALL PASS（28 文件）。
- **可重复性**：剔除 `# generated:` UTC 行后，两次 MANIFEST 主体（路径+sha256+size）
  **逐行一致**（diff 为空），组件清单可重复。按计划不声称 EXE 或含 UTC 的 MANIFEST
  逐字节重现。
- run1 清单快照：`build/issue6-package-checks/run1-manifest-snapshot.txt`（产物目录内）。
- 期间修复两个脚本缺陷（均属获准写域）：BuildDir 根化路径双拼（与 package_checks
  同因）、专用目录 leaf 变量取错层级。

## 5. 组件清单（= 白名单 28 项，两次制作一致）

TmogReplica.exe、MANIFEST.txt、README-PACKAGE.md、THIRD-PARTY-NOTICES.md、
Qt6Core/Gui/Widgets/Network/Svg.dll、libgcc_s_seh-1/libstdc++-6/libwinpthread-1.dll、
platforms/qwindows.dll、generic/qtuiotouchplugin.dll、iconengines/qsvgicon.dll、
imageformats/qgif|qico|qjpeg|qsvg.dll、networkinformation/qnetworklistmanager.dll、
styles/qmodernwindowsstyle.dll、tls/qcertonlybackend|qschannelbackend.dll、
licenses/ 下 6 个文本（Qt-LICENSE、Qt-COPYING、gcc-COPYING3、gcc-COPYING.RUNTIME、
winpthreads-COPYING、mingw-w64-runtime-COPYING）。

## 6. 提交与产物归属

- 允许写域内 8 文件：根 CMakeLists.txt、scripts/package-portable.ps1、
  scripts/check-package.ps1、packaging/README-PACKAGE.md、
  packaging/THIRD-PARTY-NOTICES.md、tests/package_checks.ps1、
  doc/plans/2026-10-29-issue-6-integration-acceptance.md（本文件）、
  doc/plans/2026-10-29-issues-6-11-17-parallel-plan-v1.md（批准计划副本）。
- 产物（不提交）：`build/issue6-debug/`、`build/issue6-release/`（含 portable）、
  `build/issue6-package-checks/`——均在登记边界内首次生成本任务所有。
- 工程根其他文件未动；未修改 .gitignore/MainWindow/model/sampler；未运行旧树脚本；
  未触碰旧树/旧索引/旧进程。
- CodeGraph：本任务树新 init（40 files/443 nodes/922 edges，1.6.2，complete），
  status/explore 均证明对应 worktree；改动后 sync "Already up to date"
  （改动为 PS1/MD/CMake，不在 cpp 索引范围）。

## 7. 未完成与待 Review 事项

- **整票 #6 保持 OPEN**：6H 干净普通用户实机、维护者逐项合规签字、跨机器复现均
  pending（用户条件未提供，不阻塞 11/17）。
- 未验证项（明确列出）：
  - 清 PATH 下真实启动（属 6H 人工授权，本任务禁跑）；
  - 干净机器（未装 Qt/开发工具）实机运行；
  - Qt 内嵌第三方完整许可文本分发（当前指向源码 tarball，未逐个附文本——若维护者
    要求包内附全文需扩大包内容并更新白名单，另行批准）；
  - Digital signature / 代码签名（无授权，未做）。
- Review 建议重点：check-package 白名单完备性、BuildDir 边界正则严格性、
  THIRD-PARTY-NOTICES 表与 MANIFEST 实际组件一一对应、许可文件复制来源核对。
- 技能使用：本任务未调用 Skill 工具（计划指定的 superpowers:executing-plans 属流程
  方法，其"逐项落实+如实证据"要求已直接体现在本记录与 ops.jsonl 结构中；如实声明，
  不伪造调用记录）。

## 8. attempt=2（repair_round=1）返工记录

Review 裁定（review-1-adjudication，SHA
`1833bd118df03666e2121ef369504777cbe7e95d2f759784462a923cd1aa65e3`）整体 FAIL，
本轮按返工合同完成以下修复（不降验收、不下载外部法律材料）：

1. **检查绕过（adjudication §2.4a）**：check-package.ps1 绝对路径检查正则由
   `[A-Za-z]:\\` 扩为 `[A-Za-z]:[\\/]`，两种分隔符均拒绝；NOTICES 内 2 处
   `E:/InstallApplication/...` 本机绝对路径删除，来源改为一般合法名称描述（官方
   安装器组件说明），不泄漏开发机布局。
2. **WorkDir 硬编码（DEF-1）**：package_checks.ps1 WorkDir 由子串匹配
   `issue6-package-checks` 改为 leaf 正则 `^issue6-[a-z0-9-]+$`（与
   package-portable 的 BuildDir 规则对称），根边界 StartsWith 保留、SourceDir
   LinkType 检查新增；未放宽任意 substring 逃逸。负例实测：`build/not-issue6-dir`
   → throw exit 1；review 专用 `issue6-review-package-checks` 顶层目录可接受。
3. **U+FFFD 乱码（adjudication §2.4b）**：package_checks.ps1 内 3 处替换字符修复
   （"负例"/"检"字），提交文本 `efbfbd` 字节计数复测为 0。
4. **NOTICES 字段补全（S1 版本列/S3 逐组件/S5 插件版权列）**：内嵌 11 组件表补
   SBOM 实测版本列（1.3.2/1.6.58/3.2.0/10.48/2.14.3/14.5.0/36/v48.2/3.4.0/7.0/
   unknown）；版权列改录 SBOM copyrightText 摘录；逐组件修改状态/替换途径/调试
   权利段落补齐；插件表 11 行补版权列。数据来源为本机 Qt 6.12.0 安装 SBOM
   （qtbase-6.12.0.spdx.json / qtsvg-6.12.0.spdx.json）只读解析。
5. **负例补强**：新增 N11（正斜杠绝对路径）、N12（反斜杠绝对路径）、N13（未知
   exe+重写清单）、N14（未知插件子目录组件）、N15（清单 size 字段非法），全部
   实测非零退出；连同原 N1-N10 与正例对照共 16 案例全过（exit 0，16/16）。
6. **迁入文件 hash（S4）**：§1 表补旧来源 SHA-256（git show 固定对象）与迁入后
   新文件 SHA-256（attempt=2 修复后实测）。

**材料声明纠正（诚实边界）**：本记录此前"第三方材料完整"表述以 L62 为准纠正——
Qt 内嵌 11 组件的**许可全文未随包附带且当前不可获取**（本机 Qt 安装批准范围内无
对应全文源；工具链 zlib 文本系 MinGW-builds 2013 版本，与内嵌 1.3.2 非同一来源，
不得冒替）。NOTICES 已如实标注交付状态 pending。**在维护者批准全文获取方式并
扩包前，本包不得声称第三方许可材料完整；完整验收（含材料项）不能在此状态宣称
ALL PASS。**本轮安全/脚本/清单类检查项与材料项分列：前者全部完成并验证，后者
BLOCKED（缺合法源，需用户决定获取方式）。

## 9. 材料恢复轮追加记录（2026-10-31，本记录由材料恢复合同 §第6路径授权更新）

上述 §8 末尾的材料 BLOCKED 状态已由材料恢复阶段解除（run=`parallel-plan-20261029-6-11-17`，
task=`issue6-material-recovery`，计划 `doc/plans/2026-10-31-issue-6-material-recovery-plan-v1.md`
SHA-256 `97157b9673365a3d0b5ca3cee768cd86c59a5c88fbb751517ef6c834447fab04`，用户批准）：

- 22 个内嵌第三方许可/版权/头文件文本已从 Qt 6.12.0 官方 tarball
  `src/3rdparty/`、`LICENSES/` 成员静态提取（本地 tarball SHA-256 与官方发布点
  `.sha256` 一致），加上 6 个工具链文本共 28 文件随包交付于 `licenses/`；
  逐文件来源与 hash 记录于 `packaging/license-sources.json`（顶层 `files` 28 条目
  + `components` 组件对应）。
- **仍然 unknown / 不声称完整**：Qt Network PSL/MPL 数据是否实际嵌入及许可文本
  是否须随附无独立静态证据；qtsvg 对应源码 tarball 未本地核验；各构件与 SBOM
  版本对应、完整对应源码交付方式须维护者确认；官方 GPG/签名未取得。NOTICES
  与 README-PACKAGE 已同步该边界。
- 新增负例 N20–N27（schema 残缺/组件冲突/大小写重复/整体改写自证/路径逃逸/
  ADS/嵌套子目录/链接文件）与 P-good 前后通过，共 28 案例 exit 0（0 意外通过）。
