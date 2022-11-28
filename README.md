---
description: ExDirectUI 4.1 Manual
---

## ExDirectUI
![Ver](https://img.shields.io/badge/version-4.1-orange "Ver") ![PRs](https://img.shields.io/badge/PRs-welcome-brightgreen "PRs") ![QQ](https://img.shields.io/badge/chat-on%20qq-blue "QQ")

一款基于 GDI/GDI+ & Direct2D 的轻量级用户界面引擎<br>
它相对其他轻量级UI引擎具有 `高效` `安全` `绚丽` `扩展性强` `跨语言` 等特点。<br>
使用本引擎提供的布局文件和主题文件机制, 可以快速高效的设计和实现界面的布局, 大大提高软件开发的效率。


#### 概要
- 不大量依赖底层API, ExDUI 允许开发者使用不同的绘制引擎 `GDI/GDI+` & `Direct2D`
- 支持界面布局文件(Layout)与主题文件(Theme)，UI 与业务逻辑分离, 在某些情况下, 界面布局的修改甚至可以不用重新编译或更新整个程序
- 清晰、高效的界面逻辑, 使界面绘制的效率大大提高。支持父子关系、相对坐标、坐标锁定、光标穿透等控件特性
- 使用了大量优美高效的动画缓动效果(Animation), 开发者可轻松地制作出各种优秀的动画
- 所有接口采用 `Unicode` 编码, 只要满足 Windows 标准, 任何国家任何语言的计算机都可以正常运行
- 采用句柄作为界面元素标识, 界面库文件提供接口用于操作界面元素, 所有界面元素均采用句柄作为标识, 方便开发人员的二次封装和跨语言使用

## Github

ExDirectUI最新版 [https://github.com/ikoude/ExDirectUI4.1/releases](https://github.com/ikoude/ExDirectUI4.1/releases)
