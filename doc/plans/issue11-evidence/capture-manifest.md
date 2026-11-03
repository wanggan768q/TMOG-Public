# Issue #11 截图证据���单（capture manifest）

发布授权：用户知情同意（2026-11-03，风险披露：状态栏像素文字无法完整判读、可能含本地路径）。

## 图片

| 文件 | 实际 PNG 尺寸 | 窗口尺寸 | 版本 | 捕获方法 |
|---|---|---|---|---|
| before-800x500.png | 786x493 | 800x500（窗口含边框） | ae5cc44902d7a55c0a22c945fe3a3b22bfc6f7fd（origin/main 基线，baseline worktree 独立 Release 构建） | Windows.Graphics.Capture（TryCreateFromWindowId） |
| after-800x500.png | 786x493 | 800x500 | 66b2fc6cc0922f79b246f1a728f2faf3c6ba067e 等价源码（be6ad14..aa6c882 仅文档差异；exe 由 be6ad14 树构建） | 同上 |
| before-after-side-by-side.png | 536x1068 | 拼合图（左=before-800x500 右=after-800x500，各 2x 缩放） | 同上两版本 | PIL 拼合 |

## SHA-256

- before-800x500.png：见 doc 提交时 git hash-object；源 = evidence/R-11/a1-agent-shot/before-wgc-big.png（0f3f5a21894cfc93…30521 bytes）
- after-800x500.png：源 = evidence/R-11/a1-agent-shot/after-wgc-early.png（829d23c932a31fe5…34027 bytes）
- before-after-side-by-side.png：源 = evidence/R-11/a1-agent-shot/before-after-side-by-side.png

## 捕获场景

- 窗口 TmogReplica（主窗口，无边框客户区捕获，WGC 绑定 hwnd）
- 主屏原生显示，无 DPI/主题覆盖；Qt 6.12.0 mingw_64 运行时
- **After 为 early-resize 特殊取证场景**：启动过程中（首绘完成前）resize 到 800x500，迫使首绘按最终 7 列布局渲染；Before 在启动后 resize（其首绘即终绘，无 I/O 列）
- **默认 272x274 启动形态未经视觉验收**（首绘冻结限制，见 wgc-capture-meta.json）

## 判读限制（完整披露）

- 像素级视觉判读未完成（当前环境图像工具未呈现图片内容）：I/O 列文字簇分析为转述，未经独立视觉确认
- 状态栏像素文字无法完整判读（可能含本地路径）；用户知情授权公开
- 上传图片 ≠ 视觉验收通过；PR 保持 Draft

## 隐私边界

- 捕获绑定 hwnd，仅含 TmogReplica 窗口内容，不含窗口外桌面
- UIA 树核验可见文本：表头列名/本机进程名/PID/CPU 数值/工具栏按钮名——无用户名/文件路径/敏感窗口标题（标准元素范围）
- 状态栏渲染文本未判读（已披露，用户授权）
