# TmogReplica 便携包

Windows 11 x64。无安装器：解压后直接运行 `TmogReplica.exe`。
本包不联网、无遥测、无自动更新检查。

## 包内容

- `TmogReplica.exe`：主程序
- `Qt6*.dll` 与插件目录（platforms/、styles/、imageformats/ 等）：Qt 6.12.0 运行库
- `libgcc_s_seh-1.dll`、`libstdc++-6.dll`、`libwinpthread-1.dll`：GCC 13.1.0 运行库
- `licenses/`：Qt 与 GCC/winpthreads/mingw-w64 许可证全文，及 Qt 内嵌第三方
  组件（zlib/libpng/libjpeg-turbo/PCRE2/Freetype/HarfBuzz/Unicode/double-conversion/
  tinycbor/wintab）的许可/版权/头文件文本，共 28 个文件
- `THIRD-PARTY-NOTICES.md`：第三方组件逐项声明（版本/版权/许可/源码获取）
- `license-sources.json`：逐文件来源与 SHA-256 清单（28 条目 `files` 数组 +
  组件对应关系 `components`），供来源核验
- `MANIFEST.txt`：包内全部文件 SHA-256+size 清单（可用仓库 scripts/check-package.ps1 核验）

## 启动验证要点（干净环境人工验收清单）

1. 双击 `TmogReplica.exe`，主窗口出现进程表格。
2. 列表为真实系统进程（含系统进程名与真实 PID）。
3. CPU% 列随时间变化（采样约每秒一帧；新进程首帧显示"待采样"）。
4. 点击列头可排序；工具栏"暂停"停止刷新，"刷新"立即采样一次。
5. 第三方许可证与源码获取说明见 `THIRD-PARTY-NOTICES.md` 与 `licenses/`。

## 已知边界

- 本包在开发机制作；干净未装 Qt/开发工具机器上的实机运行属于独立人工验收项
  （Issue #6 的 6H 阶段），本 README 不代替该验收。
- 修改/替换包内 DLL 会破坏 `MANIFEST.txt` 一致性；如需替换库须同步更新声明。
