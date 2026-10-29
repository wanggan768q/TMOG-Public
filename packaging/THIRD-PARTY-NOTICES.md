# 第三方声明（THIRD-PARTY NOTICES）— TmogReplica 便携包

TmogReplica 便携包包含以下第三方组件。本包为动态链接；动态链接本身不构成全部合规义务，
最终分发合规确认须由分发者（维护者）完成（见文末"合规状态"）。

## 版本与许可状态记录

本表按包内实际发出的每个 DLL/插件逐条列出。实测版本以包内 `MANIFEST.txt` 头部与
各 DLL 版本资源为准。本包制作于开发机（Windows 11 x64，Qt 6.12.0 mingw_64，
MinGW-w64 GCC 13.1.0），组件清单与 `MANIFEST.txt` 对应。

## Qt 6（6.12.0，mingw_64，windeployqt 收集）

### 核心 DLL

| 文件 | 版本 | 版权 | 许可 |
|---|---|---|---|
| Qt6Core.dll | 6.12.0.0 | Copyright (C) The Qt Company Ltd. and other contributors. | LGPLv3（或商业；GPL 选项见 Qt 许可说明） |
| Qt6Gui.dll | 6.12.0.0 | 同上 | LGPLv3 |
| Qt6Widgets.dll | 6.12.0.0 | 同上 | LGPLv3 |
| Qt6Network.dll | 6.12.0.0 | 同上 | LGPLv3 |
| Qt6Svg.dll | 6.12.0.0 | 同上 | LGPLv3 |

- 许可证全文：`licenses/Qt-LICENSE.txt`（LGPLv3）、`licenses/Qt-COPYING.txt`（GPL 及例外说明，Qt 官方随附）
- 来源：本机 `E:/InstallApplication/Qt/6.12.0/mingw_64/bin/`（官方在线安装器安装， mingw_64 6.12.0 组件）
- 对应源码：Qt 6.12.0 的 qtbase/qtsvg 模块源码，官方发布点
  https://download.qt.io/official_releases/qt/6.12/6.12.0/submodules/
  （qtbase-everywhere-src-6.12.0.tar.xz、qtsvg-everywhere-src-6.12.0.tar.xz）；
  git 镜像 https://code.qt.io/cgit/qt/qtbase.git/ 与 qtsvg.git
- 书面 offer：以上官方源码链接即满足 LGPLv3 第 6 条的对应源码提供方式；如链接失效，
  分发者须自行提供源码副本或新链接。**通用首页 https://www.qt.io/ 不作为对应源码交付证据。**
- 修改状态：未修改（使用官方二进制原样部署）
- 库替换：可替换为同一 6.12.0 版本、ABI 兼容的自编译库并重新链接本应用；LGPLv3
  保证反编译/调试所需的反向工程权利不受限制
- 注：Qt6Network/Qt6Svg 虽非应用直接链接目标，但 windeployqt 因 qnetworklistmanager/
  qsvgicon 等插件依赖而部署，属包内实际发出组件，逐条列出

### 插件（windeployqt 实际收集，与 MANIFEST 一致）

| 文件 | 版本 | 许可 | 备注 |
|---|---|---|---|
| platforms/qwindows.dll | 6.12.0.0 | LGPLv3 | Qt 平台插件；内含 wintab API 头衍生的数据（LCS/Telegraphics，见下） |
| generic/qtuiotouchplugin.dll | 6.12.0.0 | LGPLv3 | 触摸输入插件 |
| iconengines/qsvgicon.dll | 6.12.0.0 | LGPLv3 | SVG 图标引擎（依赖 Qt6Svg） |
| imageformats/qgif.dll | 6.12.0.0 | LGPLv3 | GIF 图像格式 |
| imageformats/qico.dll | 6.12.0.0 | LGPLv3 | ICO 图像格式 |
| imageformats/qjpeg.dll | 6.12.0.0 | LGPLv3 | JPEG 图像格式 |
| imageformats/qsvg.dll | 6.12.0.0 | LGPLv3 | SVG 图像格式（依赖 Qt6Svg） |
| networkinformation/qnetworklistmanager.dll | 6.12.0.0 | LGPLv3 | 网络状态后端 |
| styles/qmodernwindowsstyle.dll | 6.12.0.0 | LGPLv3 | Windows 现代样式 |
| tls/qcertonlybackend.dll | 6.12.0.0 | LGPLv3 | 仅证书 TLS 后端 |
| tls/qschannelbackend.dll | 6.12.0.0 | LGPLv3 | Schannel TLS 后端（使用 Windows 系统 TLS，不含 OpenSSL） |

- 上述插件许可依据：本机 Qt 安装 SBOM（`mingw_64/sbom/qtbase-6.12.0.spdx.json`、
  `qtsvg-6.12.0.spdx.json`）逐包核对，均为
  `LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only`；
  本包按 LGPLv3 选项分发。`qopensslbackend.dll` 未部署（windeployqt 明确跳过）。
- 未知插件处理：包内白名单（scripts/check-package.ps1）外的任何新 DLL/插件会导致
  check 失败；windeployqt 未来收集新插件时必须先更新白名单与本表，不得默认许可。

### Qt 内嵌第三方组件（随上述二进制分发，须一并声明）

依据 Qt 安装 SBOM 逐项核对（本机合法来源）：

| 组件 | 所在 | 许可 | 版权 |
|---|---|---|---|
| zlib | Qt6Core/Qt6Gui 嵌入 | Zlib | (C) 1995-2026 Jean-loup Gailly and Mark Adler |
| libpng | Qt6Gui 嵌入 | Libpng + libpng-2.0 | libpng 项目 |
| libjpeg (IJG) | Qt6Gui 嵌入（qjpeg 插件） | IJG + BSD-3-Clause | Independent JPEG Group |
| PCRE2 | Qt6Core 嵌入（QRegularExpression） | BSD-3-Clause + PCRE2 exception | University of Cambridge / Philip Hazel |
| Freetype | Qt6Gui 嵌入 | FTL OR GPL-2.0 | Freetype 项目 |
| HarfBuzz | Qt6Gui 嵌入 | MIT | HarfBuzz 项目 |
| Unicode 数据 (UCD/CLDR) | Qt6Core 嵌入 | Unicode-3.0 | Unicode, Inc. |
| double-conversion | Qt6Core 嵌入 | BSD-3-Clause | Google |
| tinycbor | Qt6Core 嵌入 | MIT | Intel |
| wintab 头数据 | qwindows.dll | LCS/Telegraphics 授权 | Copyright 1991-1998 by LCS/Telegraphics |

- 以上组件均以静态方式嵌入 Qt 官方二进制，其许可义务由 Qt 官方二进制的分发条款
  一并承载；Qt 官方源码 tarball 内含各组件完整许可文本
  （`qtbase-everywhere-src-6.12.0/src/3rdparty/`）。本表提供组件名/许可/版权概览，
  完整文本以对应源码 tarball 为准（上方源码获取条目）。
- `Network_Attribution_psl-data`（MPL-2.0，libpsl 数据）：qnetworklistmanager 插件
  运行时使用 QNetworkInformation，但 libpsl 静态数据仅链接进 Qt6Network 的
  HSTS/PSL 相关功能；Qt 官方 mingw 二进制中该项是否实际嵌入以 SBOM 与源码 tarball
  为准，本表如实转录 SBOM 记录，不代 Qt 做嵌入式判定。

## GCC 运行库（MinGW-w64 GCC 13.1.0，MinGW-Builds 发行，随 Qt 安装器提供）

| 文件 | 版本 | 版权 | 许可 |
|---|---|---|---|
| libgcc_s_seh-1.dll | GCC 13.1.0 | Free Software Foundation | GPLv3 + GCC Runtime Library Exception |
| libstdc++-6.dll | GCC 13.1.0 | Free Software Foundation | GPLv3 + GCC Runtime Library Exception |
| libwinpthread-1.dll | 1.0（winpthreads） | Copyright (C) MingW-W64 Project Members 2010-2011 | MIT 式许可（winpthreads COPYING，独立于 GCC 例外） |

- **GCC GPLv3 全文与例外必须分开**：
  - GPLv3 全文：`licenses/gcc-COPYING3.txt`（674 行，复制自本机
    `licenses/gcc/COPYING3`）
  - GCC Runtime Library Exception（3.1 版，73 行）：`licenses/gcc-COPYING.RUNTIME.txt`。
    注意：该文件**本身不是 GPLv3 全文**，只是按 GPLv3 第 7 条追加的例外声明；例外仅
    适用于附有相应声明文字的运行库文件（libgcc_s_seh-1.dll、libstdc++-6.dll 属之）。
  - **libwinpthread-1.dll 不在 GCC 例外范围内**：winpthreads 是 mingw-w64 项目独立
    组件，其 `COPYING`（57 行，MIT 式，Copyright (c) 2011 mingw-w64 project）为独立
    许可，不并入 GCC 条目。完整文本单独提供：`licenses/winpthreads-COPYING.txt`。
- 来源：本机 `E:/InstallApplication/Qt/Tools/mingw1310_64/bin/`（Qt 官方在线安装器
  的 mingw1310_64 工具链组件）
- 对应源码：GCC 13.1.0（含 libgcc/libstdc++/winpthreads 构建脚本）官方发布点
  https://gcc.gnu.org/pub/gcc/releases/gcc-13.1.0/ ；
  MinGW-w64 项目源码 https://www.mingw-w64.org/downloads/ ；
  本包二进制来源为 MinGW-Builds 发行（Qt 安装器捆绑），其构建配置
  https://github.com/niXman/mingw-builds-binaries/releases/tag/13.1.0
- 书面 offer：以上官方源码链接满足 GPLv3 第 6 条；分发者须保持链接可达或提供副本
- 修改状态：未修改（使用发行版二进制原样部署）
- 库替换：可替换为 ABI 兼容的同名运行库并重新链接；GPLv3+例外允许替换后的
  同条件再分发
- libwinpthread-1.dll 版本资源：FileVersion 1.0.0.0，FileDescription
  "POSIX WinThreads for Windows"

## mingw-w64 运行库部分

- 许可证全文：`licenses/mingw-w64-runtime-COPYING.txt`（240 行，MinGW-w64 runtime
  licensing 汇总；覆盖 CRT 各部分的多许可汇总）
- 上游项目许可（ZPL 2.1 为主，个别部分 BSD/Public Domain/LGPL）：本包未单独分发
  mingw-w64 CRT（MinGW-Builds 将其静态链入 GCC 运行库构件）；如需完整上游许可
  文本，见 https://www.mingw-w64.org/ 与其 sourceforge 仓库
- **本条不覆盖 libwinpthread-1.dll**（见上方独立条目），不泛化成"所有 GCC 组件
  受 GCC 例外覆盖"

## TmogReplica 应用本体

- TmogReplica.exe 及全部源码：本仓库，随包分发 `MANIFEST.txt` 供完整性核对；
  源码即本仓库 `src/`

## 合规状态（诚实边界）

- 本文件由技术 Review 流程自动核对组件/许可/来源/修改状态；**不构成法律签字**。
- 维护者（分发者）须另行逐项确认：完整第三方材料、准确源码取得、修改/安装信息、
  替换库权利、调试/重新链接权利与分发条款，方可对外分发。
- 技术材料不完整或无法核实时，本包不得声称"合规完整分发包"。
