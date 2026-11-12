# 第三方声明（THIRD-PARTY NOTICES）— TmogReplica 便携包

TmogReplica 便携包包含以下第三方组件。本包为动态链接；动态链接本身不构成全部合规义务，
最终分发合规确认须由分发者（维护者）完成（见文末"合规状态"）。

## 版本与许可状态记录

本表按包内实际发出的每个 DLL/插件逐条列出。实测版本以包内 `MANIFEST.txt` 头部与
各 DLL 版本资源为准。本包制作于开发机（Windows 11 x64，Qt 6.12.0 msvc2022_64，
MSVC（Visual Studio 2022 v14.44 工具集）），组件清单与 `MANIFEST.txt` 对应。

## Qt 6（6.12.0，msvc2022_64，windeployqt 收集）

### 核心 DLL

| 文件 | 版本 | 版权 | 许可 |
|---|---|---|---|
| Qt6Core.dll | 6.12.0.0 | Copyright (C) The Qt Company Ltd. and other contributors. | LGPLv3（或商业；GPL 选项见 Qt 许可说明） |
| Qt6Gui.dll | 6.12.0.0 | 同上 | LGPLv3 |
| Qt6Widgets.dll | 6.12.0.0 | 同上 | LGPLv3 |
| Qt6Network.dll | 6.12.0.0 | 同上 | LGPLv3 |
| Qt6Svg.dll | 6.12.0.0 | 同上 | LGPLv3 |

- 许可证全文：`licenses/Qt-LICENSE.txt`（LGPLv3/GPLv3 多许可全文；本包 Qt 运行库按
  LGPLv3 选项分发，分发许可依据即此文件）、`licenses/Qt-COPYING.txt`（**Apache
  License 2.0** 全文，Qt 官方安装器 `Licenses/COPYING.txt` 原样随附；属官方随附材料，
  不含 GPL/LGPL/例外文本，**不作为本包分发许可依据**）
- 来源：Qt 官方在线安装器的 6.12.0 msvc2022_64 组件原样部署（制作过程只读使用官方安装内容，
  未修改任何 Qt 二进制）
- 对应源码：Qt 6.12.0 的 qtbase/qtsvg 模块源码，官方发布点
  https://download.qt.io/official_releases/qt/6.12/6.12.0/submodules/
  （qtbase-everywhere-src-6.12.0.tar.xz、qtsvg-everywhere-src-6.12.0.tar.xz）；
  git 镜像 https://code.qt.io/cgit/qt/qtbase.git/ 与 qtsvg.git
- 书面 offer：对应源码以官方发布点链接指示取得途径；链接失效时分发者须自行
  提供源码副本或新链接。**链接本身不等于已完成对应源码交付——分发者须确认
  目标版本可实际取得，最终交付方式由维护者确认。通用首页 https://www.qt.io/
  不作为对应源码交付证据。**
- 修改状态：未修改（使用官方二进制原样部署）
- 库替换：可替换为同一 6.12.0 版本、ABI 兼容的自编译库并重新链接本应用；LGPLv3
  保证反编译/调试所需的反向工程权利不受限制
- 注：Qt6Network/Qt6Svg 虽非应用直接链接目标，但 windeployqt 因 qnetworklistmanager/
  qsvgicon 等插件依赖而部署，属包内实际发出组件，逐条列出

### 插件（windeployqt 实际收集，与 MANIFEST 一致）

插件 DLL 本体版权同 Qt 核心（Copyright (C) The Qt Company Ltd. and other
contributors.），逐行列出以避免"同上"在表格中不可追溯：

| 文件 | 版本 | 版权 | 许可 | 备注 |
|---|---|---|---|---|
| platforms/qwindows.dll | 6.12.0.0 | Copyright (C) The Qt Company Ltd. and other contributors. | LGPLv3 | Qt 平台插件；内含 wintab API 头衍生的数据（LCS/Telegraphics，见下） |
| generic/qtuiotouchplugin.dll | 6.12.0.0 | Copyright (C) The Qt Company Ltd. and other contributors. | LGPLv3 | 触摸输入插件 |
| iconengines/qsvgicon.dll | 6.12.0.0 | Copyright (C) The Qt Company Ltd. and other contributors. | LGPLv3 | SVG 图标引擎（依赖 Qt6Svg） |
| imageformats/qgif.dll | 6.12.0.0 | Copyright (C) The Qt Company Ltd. and other contributors. | LGPLv3 | GIF 图像格式 |
| imageformats/qico.dll | 6.12.0.0 | Copyright (C) The Qt Company Ltd. and other contributors. | LGPLv3 | ICO 图像格式 |
| imageformats/qjpeg.dll | 6.12.0.0 | Copyright (C) The Qt Company Ltd. and other contributors. | LGPLv3 | JPEG 图像格式（内嵌 libjpeg-turbo 3.2.0，见内嵌表） |
| imageformats/qsvg.dll | 6.12.0.0 | Copyright (C) The Qt Company Ltd. and other contributors. | LGPLv3 | SVG 图像格式（依赖 Qt6Svg） |
| networkinformation/qnetworklistmanager.dll | 6.12.0.0 | Copyright (C) The Qt Company Ltd. and other contributors. | LGPLv3 | 网络状态后端 |
| styles/qmodernwindowsstyle.dll | 6.12.0.0 | Copyright (C) The Qt Company Ltd. and other contributors. | LGPLv3 | Windows 现代样式 |
| tls/qcertonlybackend.dll | 6.12.0.0 | Copyright (C) The Qt Company Ltd. and other contributors. | LGPLv3 | 仅证书 TLS 后端 |
| tls/qschannelbackend.dll | 6.12.0.0 | Copyright (C) The Qt Company Ltd. and other contributors. | LGPLv3 | Schannel TLS 后端（使用 Windows 系统 TLS，不含 OpenSSL） |

- 上述插件许可依据：本机 Qt 安装 SBOM（`msvc2022_64/sbom/qtbase-6.12.0.spdx.json`、
  `qtsvg-6.12.0.spdx.json`）逐包核对，均为
  `LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only`；
  本包按 LGPLv3 选项分发。`qopensslbackend.dll` 未部署（windeployqt 明确跳过）。
- 未知插件处理：包内白名单（scripts/check-package.ps1）外的任何新 DLL/插件会导致
  check 失败；windeployqt 未来收集新插件时必须先更新白名单与本表，不得默认许可。

### Qt 内嵌第三方组件（随上述二进制分发，须一并声明）

依据 Qt 6.12.0 安装内 SBOM 逐项核对（本机合法来源，SBOM 路径相对 Qt 安装根：
`msvc2022_64/sbom/qtbase-6.12.0.spdx.json`）。版本列为 SBOM `versionInfo` 实测值；
版权列为 SBOM `copyrightText` 主要条目（完整多行版权见对应源码）。

| 组件 | 版本（SBOM） | 所在 | 许可 | 版权（SBOM 摘录） |
|---|---|---|---|---|
| zlib | 1.3.2 | Qt6Core/Qt6Gui 嵌入 | Zlib | (C) 1995-2026 Jean-loup Gailly and Mark Adler |
| libpng | 1.6.58 | Qt6Gui 嵌入 | Libpng AND libpng-2.0 | Copyright (c) 1995-2026 The PNG Reference Library Authors 等（多作者，见源码） |
| libjpeg-turbo (IJG) | 3.2.0 | Qt6Gui 嵌入（qjpeg 插件） | IJG AND BSD-3-Clause | Copyright (C) 2009-2026 D. R. Commander；Copyright (C) 1991-1998 Thomas G. Lane 等 |
| PCRE2 | 10.48 | Qt6Core 嵌入（QRegularExpression） | BSD-3-Clause with PCRE2 Binary-Like-Packages exception | Copyright (c) 1997-2007 University of Cambridge；Copyright (c) 2007-2024 Philip Hazel；Copyright (c) 2010-2024 Zoltan Herczeg |
| Freetype | 2.14.3 | Qt6Gui 嵌入 | FTL OR GPL-2.0（SBOM 免责声明，以下游正式分发为准） | Copyright (c) 1996-2026 David Turner, Robert Wilhelm, Werner Lemberg 等 |
| HarfBuzz | 14.5.0 | Qt6Gui 嵌入 | MIT（SBOM 免责声明，以下游正式分发为准） | Copyright © 2010-2022 Google, Inc.；Copyright © 2005-2023 Behdad Esfahbod 等 |
| Unicode 数据 (UCD) | 36 | Qt6Core 嵌入 | Unicode-3.0 | Unicode, Inc.（SBOM Attribution 条目） |
| CLDR 数据 | v48.2 | Qt6Core 嵌入 | Unicode-3.0 | Unicode, Inc.（SBOM Attribution 条目） |
| double-conversion | 3.4.0 | Qt6Core 嵌入 | BSD-3-Clause | Google（SBOM Attribution 条目） |
| tinycbor | 7.0 | Qt6Core 嵌入 | MIT | Intel（SBOM Attribution 条目） |
| wintab 头数据 | unknown（SBOM 未记版本） | qwindows.dll | LCS/Telegraphics 授权 | Copyright 1991-1998 by LCS/Telegraphics |

**逐组件分发相关信息（修改状态/替换与重新链接/调试权利）：**

- 修改状态：**全部未修改**——上述组件以静态方式嵌入 Qt 官方二进制，制作过程对
  Qt 二进制零修改，组件修改状态继承 Qt 官方构建（dev-2 轮 SBOM 只读核对）。
- 库替换与重新链接：这些组件静态嵌入 Qt 库内部，**不能以"替换单个 DLL"方式单独
  替换**；替换途径是以同一上游版本重新构建 Qt（或使用 ABI 兼容的官方 6.12.0 构建）
  并重新链接本应用。该途径受 LGPLv3（Qt 本体的分发许可选项）保障。
- 反向工程/调试权利：按 LGPLv3 对 Qt 二进制的条款执行；内嵌组件自身的调试权利
  以其上游许可为准（SBOM `licenseDeclared` 均为 NOASSERTION，本表"许可"列为
  Attribution 条目与公开上游许可的一致性记录，不代上游与 Qt 做法律判定）。
- **完整许可证文本：随包交付**——上述 11 项内嵌组件 + Qt 2 项共 24 个
  许可/版权/头文件文本位于包内 `licenses/`，逐文件 SHA-256 记录于
  `license-sources.json`（顶层 `files` 数组，24 条目），来源对应关系见同文件
  `components` 各条目（`source_member` 指向 Qt 6.12.0 官方 tarball 成员或本机
  Qt 安装器 msvc2022_64 组件合法源）。

**全文交付状态（2026-10-31 材料恢复轮更新）：**

- 上述 11 项内嵌组件的许可全文已随包交付：22 个文本从 Qt 6.12.0 官方
  tarball（`qtbase-everywhere-src-6.12.0.tar.xz`，本地 SHA-256 与官方发布点
  `.sha256` 一致）`src/3rdparty/` 与 `LICENSES/` 成员静态提取，字节未改；
  2 个 Qt 文本（`Qt-LICENSE.txt`、`Qt-COPYING.txt`）来自本机 Qt 安装器 msvc2022_64 组件随附合法源。逐文件 hash 见
  `license-sources.json`。
- **仍然 unknown / 待维护者确认（不虚称完整）：**
  - Qt Network PSL/MPL 相关（`Network_Attribution_psl-data` MPL-2.0、
    `Network_Attribution_libpsl`）是否实际嵌入 Qt6Network 及其许可文本是否
    须随附，尚无独立静态证据，本表仅如实转录 SBOM 记录，**不能据此称
    第三方材料已穷尽**。
  - `qtsvg` 模块（Qt6Svg.dll / qsvgicon.dll / qsvg.dll）对应源码 tarball 未
    本地核验 hash，仅提供官方发布点链接。
  - 各构件与 SBOM 版本对应、上游修改状态、完整对应源码交付方式仍须维护者
    依原验收门槛确认；官方 GPG/签名元数据未取得（发布点未提供逐文件签名）。
- `Network_Attribution_psl-data`（MPL-2.0，libpsl 数据，SBOM 版本
  2026-05-14_08-35-31_UTC）：qnetworklistmanager 插件运行时使用 QNetworkInformation；
  libpsl 静态数据仅链接进 Qt6Network 的 HSTS/PSL 相关功能。Qt 官方 MSVC 二进制中
  该项是否实际嵌入以 SBOM 与源码 tarball 为准，本表如实转录 SBOM 记录，不代 Qt
  做嵌入式判定。`Network_Attribution_libpsl`（SBOM 记录 download 为
  https://github.com/rockdaboot/libpsl ，版权 Chromium Authors 2014-2016）同样
  如实转录。

## MSVC 运行库（Microsoft Visual C++ 2015-2022 Redistributable，v14.44）

实际随包部署 5 个运行库 DLL（由 `dumpbin /dependents` import 闭包决定；均来自 VS2022 14.44.35112 的 `x64/Microsoft.VC143.CRT`，二进制未修改）：

| 文件 | 字节数 | FileVersion | SHA-256 | 许可 |
|---|---|---|---|---|
| vcruntime140.dll | 124544 | 14.44.35211.0 | `D5E4D9A3E835FA679450145D6A7D94E36573A509317111904D9B3712C30D9066` | Microsoft Visual C++ Redistributable 许可条款 |
| vcruntime140_1.dll | 49792 | 14.44.35211.0 | `1F2D41C4AA5DB0BC33EBF7B66D72943A817D7CE6CBE880502A9403823633093F` | 同上 |
| msvcp140.dll | 557728 | 14.44.35211.0 | `0F885B509A685D2BBFA652FED26B5FB31D88FBDAB0A978C641D1C7B8AA460AA9` | 同上 |
| msvcp140_1.dll | 35952 | 14.44.35211.0 | `BFAD5AEF4C63A669E3C140655CDFDF395B6C979B400A447BD5DCB65ED8826C3D` | 同上 |
| msvcp140_2.dll | 280200 | 14.44.35211.0 | `3EA06F0EE098B4823CB79599DF3780E7F23CCE52C19AAC31D2A0D47EFE33A5E9` | 同上 |

- 说明文本：`MSVC-RUNTIME-NOTICE.md`（包根，记录实测 FileVersion、来源与条款出处）。
- 来源：本机 Visual Studio 2022 Professional 安装的 MSVC 14.44 工具集可再发行运行库
  （`VC/Redist/MSVC/14.44.*/x64/Microsoft.VC143.CRT/`），由 `build-msvc.ps1` 的 import 闭包
  部署步骤以 app-local 方式复制；windeployqt `--compiler-runtime` 只生成安装器、不复制 DLL。
- 许可：这些运行库按 Microsoft 的 Visual C++ Redistributable 条款随应用再分发
  （条款入口 https://visualstudio.microsoft.com/license-terms/ ）。本机 Visual Studio
  安装目录内的 LICENSE/ThirdPartyNotices 为条款随附件，未复制进包内 `licenses/`；
  分发者须自行确认再分发权利与所适用条款版本。本包不附 GCC/GPL 类运行库全文。
- **交叉 ABI 拒绝**：本包不包含 GCC/MinGW 运行库（`libgcc_s_seh-1.dll`、
  `libstdc++-6.dll`、`libwinpthread-1.dll`）；`scripts/check-package.ps1 -Toolchain msvc`
  会拒绝这些文件混入，反之 MinGW 包亦拒绝 MSVC 运行库混入。

## DirectX Shader Compiler 运行时（dxcompiler.dll / dxil.dll）

`windeployqt` 会从 Windows SDK 的 Redistributable 目录复制 DirectX Shader Compiler
运行时到包内（用于 Qt6Gui RHI / Direct3D 渲染路径）。本包保留这两个 DLL，并在
`licenses/DirectXShaderCompiler-license.txt` 随附上游许可全文。

| 文件 | 字节数 | FileVersion | 说明 | SHA-256 |
|---|---|---|---|---|
| dxcompiler.dll | 14261192 | 1.9.2602.17 | DirectX Compiler - Out Of Band | `5da37a35d53123274e2e4e7e247148350871df8ae9ecc05778bf2ac2057932be` |
| dxil.dll | 1502784 | 101.7.2308.24 | DirectX IL for Redistribution | `3d030cca37f03955c95da0978026fc06d45c49fe4e6f9d4a8cb5b9e9adf2959d` |

- 来源：`windeployqt`（Qt 6.12.0 msvc2022_64）从本机 Windows SDK `10.0.26100.0` 的
  Redistributable 目录复制；本脚本未加 `--no-system-dxc-compiler`，以保留 D3D/DXC 渲染路径。
  二进制未修改。
- 上游项目与许可：DirectXShaderCompiler（https://github.com/microsoft/DirectXShaderCompiler），
  许可为 LLVM Release License / University of Illinois/NCSA Open Source License 及其上游
  LICENSE.TXT 中列明的第三方子许可；全文见 `licenses/DirectXShaderCompiler-license.txt`
  （上游 `LICENSE.TXT` 原样，29,241 字节，SHA-256
  `27a49e35d1da96eba18fba54bc882667ff0ff8c0254f16f2b6e165d605ba7df8`）。
- Windows SDK 再分发：随 Windows SDK 交付的可再发行二进制同时受 Microsoft 的
  Windows SDK/Visual Studio 许可条款约束；分发者须自行确认再分发权利。
- **不虚称完整**：本表只覆盖包内实际出现的 DXC 运行时 DLL；上游源码树内其他第三方
  组件（如 miniz、Unicode 数据）是否嵌入这两个二进制，以 Microsoft 发布物与上游
  LICENSE.TXT 为准，尚未逐项静态核验。

## MSVC C/C++ 运行库的来源与可替换性

- 本包以动态链接（/MD）方式使用 MSVC 运行库，运行库 DLL 随包发出，目标机无需预装
  Visual C++ Redistributable。
- 修改状态：未修改（使用官方发行二进制原样部署）。
- 库替换：可用同一主版本（v14.x）ABI 兼容的官方 Redistributable 运行库替换包内
  DLL，并重新生成 MANIFEST 与 `MSVC-RUNTIME-NOTICE.md`；替换后仍须通过
  `check-package.ps1 -Toolchain msvc`。
- 调试/反向工程权利：以 Microsoft 许可条款为准；本项目对包的完整性核验不限制
  用户依适用法律进行的调试与兼容性测试。

## TmogReplica 应用本体

- TmogReplica.exe 及全部源码：本仓库，随包分发 `MANIFEST.txt` 供完整性核对；
  源码即本仓库 `src/`

## 合规状态（诚实边界）

- 本文件由技术 Review 流程自动核对组件/许可/来源/修改状态；**不构成法律签字**。
- 维护者（分发者）须另行逐项确认：完整第三方材料、准确源码取得、修改/安装信息、
  替换库权利、调试/重新链接权利与分发条款，方可对外分发。
- 技术材料不完整或无法核实时，本包不得声称"合规完整分发包"。

