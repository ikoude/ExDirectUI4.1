//======================================================
// 本文件由黑月自动生成
// libexdui.lib 要和本文件在同一目录
// 编译后的EXE必须带上 libexdui.dll
//======================================================
#pragma comment(lib,"libexdui.lib")

//======================================================
// 函数名称：Ex_Init
// 返回类型：逻辑型
// 函数说明：初始化引擎.
// 参数<1>：hInstance，(值可为0)
// 参数<2>：dwGlobalFlags，相关常量:#EXGF_ .(值可为0)
// 参数<3>：hDefaultCursor，默认鼠标指针.(值可为0)
// 参数<4>：lpszDefaultClassName，默认窗口类名.(值可为0)
// 参数<5>：lpDefaultTheme，默认主题包指针.
// 参数<6>：dwDefaultThemeLen，默认主题包长度.
// 参数<7>：lpDefaultI18N，默认语言包指针.(值可为0)
// 参数<8>：dwDefaultI18NLen，默认语言包长度.(值可为0)
//======================================================
extern "C" BOOL Ex_Init (int hInstance,int dwGlobalFlags,int hDefaultCursor,int lpszDefaultClassName,int lpDefaultTheme,int dwDefaultThemeLen,int lpDefaultI18N,int dwDefaultI18NLen);

//======================================================
// 函数名称：Ex_UnInit
// 返回类型：无返回值
// 函数说明：反初始化引擎
//======================================================
extern "C" void Ex_UnInit ();

//======================================================
// 函数名称：Ex_GetLastError
// 返回类型：整数型
// 函数说明：获取最后错误代码.相关常量 :#ERROR_EX_
//======================================================
extern "C" int Ex_GetLastError ();

//======================================================
// 函数名称：Ex_SetLastError
// 返回类型：无返回值
// 函数说明：设置最后错误代码.相关常量 :#ERROR_EX_
// 参数<1>：nError
//======================================================
extern "C" void Ex_SetLastError (int nError);

//======================================================
// 函数名称：Ex_IsDxRender
// 返回类型：逻辑型
// 函数说明：是否使用D2D渲染
//======================================================
extern "C" BOOL Ex_IsDxRender ();

//======================================================
// 函数名称：Ex_Atom
// 返回类型：整数型
// 函数说明：获取字符串唯一原子号
// 参数<1>：lptstring
//======================================================
extern "C" int Ex_Atom (int lptstring);

//======================================================
// 函数名称：Ex_Scale
// 返回类型：小数型
// 参数<1>：n
//======================================================
extern "C" float Ex_Scale (float n);

//======================================================
// 函数名称：F2I
// 返回类型：整数型
// 参数<1>：f
//======================================================
extern "C" int F2I (float f);

//======================================================
// 函数名称：I2F
// 返回类型：小数型
// 参数<1>：int
//======================================================
extern "C" float I2F (int int);

//======================================================
// 函数名称：Ex_LoadImageFromMemory
// 返回类型：整数型
// 函数说明：gdi
// 参数<1>：lpData
// 参数<2>：dwLen
// 参数<3>：uType，#IMAGE_
// 参数<4>：nIndex
//======================================================
extern "C" int Ex_LoadImageFromMemory (int lpData,int dwLen,int uType,int nIndex);

//======================================================
// 函数名称：Ex_Sleep
// 返回类型：无返回值
// 参数<1>：us
//======================================================
extern "C" void Ex_Sleep (int us);

//======================================================
// 函数名称：Ex_WndRegisterClass
// 返回类型：整数型
// 函数说明：注册窗口类
// 参数<1>：lpwzClassName
// 参数<2>：hIcon
// 参数<3>：hIconsm
// 参数<4>：hCursor
//======================================================
extern "C" int Ex_WndRegisterClass (int lpwzClassName,int hIcon,int hIconsm,int hCursor);

//======================================================
// 函数名称：Ex_WndCreate
// 返回类型：整数型
// 函数说明：创建窗口
// 参数<1>：hWndParent
// 参数<2>：lpwzClassName
// 参数<3>：lpwzWindowName
// 参数<4>：x
// 参数<5>：y
// 参数<6>：Width
// 参数<7>：Height
// 参数<8>：dwStyle
// 参数<9>：dwStyleEx
//======================================================
extern "C" int Ex_WndCreate (int hWndParent,int lpwzClassName,int lpwzWindowName,int x,int y,int Width,int Height,int dwStyle,int dwStyleEx);

//======================================================
// 函数名称：Ex_WndMsgLoop
// 返回类型：整数型
// 函数说明：窗口消息循环
//======================================================
extern "C" int Ex_WndMsgLoop ();

//======================================================
// 函数名称：Ex_WndCenterFrom
// 返回类型：无返回值
// 函数说明：窗口居中
// 参数<1>：hWnd，预居中的原始窗口
// 参数<2>：hWndFrom，预居中的目标窗口,如果为0则为屏幕居中.
// 参数<3>：bFullScreen，是否全屏模式
//======================================================
extern "C" void Ex_WndCenterFrom (int hWnd,int hWndFrom,BOOL bFullScreen);

//======================================================
// 函数名称：Ex_JSLoadConst
// 返回类型：无返回值
// 函数说明：加载JS常量
// 参数<1>：szConst
//======================================================
extern "C" void Ex_JSLoadConst (char* szConst);

//======================================================
// 函数名称：Ex_JSBindObject
// 返回类型：整数型
// 函数说明：绑定自己的JS对象
// 参数<1>：hExDUI_hObj，作用域为DUI
// 参数<2>：szObjName
// 参数<3>：lpfnDispatch，HRESULT DispatchFunc (this,atomName,hExDUI,pvParam,wFlags,pDispParams,pVarResult,lpDispInfo)
// 参数<4>：pvParam
//======================================================
extern "C" int Ex_JSBindObject (int hExDUI_hObj,int szObjName,int lpfnDispatch,int pvParam);

//======================================================
// 函数名称：Ex_JSEval
// 返回类型：整数型
// 参数<1>：hExDUI_hObj
// 参数<2>：szExpression
// 参数<3>：fUseThis，为真时表达式中this代表参数1对应的JS对象
// 参数<4>：pVarResult，不为NULL时会将返回值写入,注意释放
//======================================================
extern "C" int Ex_JSEval (int hExDUI_hObj,int szExpression,BOOL fUseThis,int pVarResult);

//======================================================
// 函数名称：Ex_JSAddCode
// 返回类型：逻辑型
// 参数<1>：hExDUI_hObj
// 参数<2>：szCode
//======================================================
extern "C" BOOL Ex_JSAddCode (int hExDUI_hObj,char* szCode);

//======================================================
// 函数名称：Ex_JSGetLastError
// 返回类型：逻辑型
// 参数<1>：hExDUI_hObj
// 参数<2>：nErrCode
// 参数<3>：nErrLine
// 参数<4>：szErrMsg，char[1024]
//======================================================
extern "C" BOOL Ex_JSGetLastError (int hExDUI_hObj,int nErrCode,int nErrLine,int szErrMsg);

//======================================================
// 函数名称：Ex_JSRegisterFunction
// 返回类型：逻辑型
// 参数<1>：hObj
// 参数<2>：notyfiCode
// 参数<3>：szFuncName
//======================================================
extern "C" BOOL Ex_JSRegisterFunction (int hObj,int notyfiCode,int szFuncName);

//======================================================
// 函数名称：Ex_JSSetVariant
// 返回类型：无返回值
// 参数<1>：pVariant
// 参数<2>：nType
// 参数<3>：dwValue
//======================================================
extern "C" void Ex_JSSetVariant (int pVariant,short nType,int dwValue);

//======================================================
// 函数名称：Ex_JSSetVariantPtr
// 返回类型：无返回值
// 参数<1>：pVariant
// 参数<2>：nType
// 参数<3>：pValue
// 参数<4>：cbSize，1,2,4,8
//======================================================
extern "C" void Ex_JSSetVariantPtr (int pVariant,short nType,int pValue,int cbSize);

//======================================================
// 函数名称：Ex_JSGetParamCount
// 返回类型：整数型
// 参数<1>：lpParams
//======================================================
extern "C" int Ex_JSGetParamCount (int lpParams);

//======================================================
// 函数名称：Ex_JSGetParamType
// 返回类型：整数型
// 参数<1>：lpParams
// 参数<2>：nIndex
//======================================================
extern "C" int Ex_JSGetParamType (int lpParams,int nIndex);

//======================================================
// 函数名称：Ex_JSGetParam
// 返回类型：整数型
// 函数说明：返回pVar
// 参数<1>：lpParams
// 参数<2>：nIndex
//======================================================
extern "C" int Ex_JSGetParam (int lpParams,int nIndex);

//======================================================
// 函数名称：Ex_JSGetParamNumber
// 返回类型：双精度小数型
// 参数<1>：lpParams
// 参数<2>：nIndex
// 参数<3>：nDefault
// 参数<4>：pType
//======================================================
extern "C" double Ex_JSGetParamNumber (int lpParams,int nIndex,double nDefault,int pType);

//======================================================
// 函数名称：Ex_JSGetParamInt
// 返回类型：整数型
// 参数<1>：lpParams
// 参数<2>：nIndex
// 参数<3>：nDefault
//======================================================
extern "C" int Ex_JSGetParamInt (int lpParams,int nIndex,int nDefault);

//======================================================
// 函数名称：Ex_JSGetParamFloat
// 返回类型：小数型
// 参数<1>：lpParams
// 参数<2>：nIndex
// 参数<3>：nDefault
//======================================================
extern "C" float Ex_JSGetParamFloat (int lpParams,int nIndex,float nDefault);

//======================================================
// 函数名称：Ex_JSGetParamDouble
// 返回类型：双精度小数型
// 参数<1>：lpParams
// 参数<2>：nIndex
// 参数<3>：nDefault
//======================================================
extern "C" double Ex_JSGetParamDouble (int lpParams,int nIndex,double nDefault);

//======================================================
// 函数名称：Ex_JSGetParamString
// 返回类型：整数型
// 函数说明：wchar_t* 不要释放
// 参数<1>：lpParams
// 参数<2>：nIndex
//======================================================
extern "C" int Ex_JSGetParamString (int lpParams,int nIndex);

//======================================================
// 函数名称：Ex_JSGetParamFormatString
// 返回类型：整数型
// 函数说明：wchar_t* 需要自己释放
// 参数<1>：lpParams
// 参数<2>：nIndex
//======================================================
extern "C" int Ex_JSGetParamFormatString (int lpParams,int nIndex);

//======================================================
// 函数名称：Ex_JSGetParamToString
// 返回类型：整数型
// 函数说明：wchar_t* 需要自己释放
// 参数<1>：lpParams
// 参数<2>：nIndex
// 参数<3>：wzDefault
// 参数<4>：pType
// 参数<5>：fFormat
//======================================================
extern "C" int Ex_JSGetParamToString (int lpParams,int nIndex,int wzDefault,int pType,BOOL fFormat);

//======================================================
// 函数名称：Ex_ThemeFree
// 返回类型：逻辑型
// 函数说明：释放主题
// 参数<1>：hTheme
//======================================================
extern "C" BOOL Ex_ThemeFree (int hTheme);

//======================================================
// 函数名称：Ex_ThemeLoadFromFile
// 返回类型：整数型
// 函数说明：加载主题包
// 参数<1>：lptszFile
// 参数<2>：lpKey
// 参数<3>：dwKeyLen
// 参数<4>：bDefault
//======================================================
extern "C" int Ex_ThemeLoadFromFile (int lptszFile,int lpKey,int dwKeyLen,BOOL bDefault);

//======================================================
// 函数名称：Ex_ThemeLoadFromMemory
// 返回类型：整数型
// 函数说明：加载主题包
// 参数<1>：lpData
// 参数<2>：dwDataLen
// 参数<3>：lpKey
// 参数<4>：dwKeyLen
// 参数<5>：bDefault
//======================================================
extern "C" int Ex_ThemeLoadFromMemory (int lpData,int dwDataLen,int lpKey,int dwKeyLen,BOOL bDefault);

//======================================================
// 函数名称：Ex_ThemeDrawControl
// 返回类型：逻辑型
// 函数说明：绘制主题数据
// 参数<1>：hTheme，主题句柄
// 参数<2>：hCanvas，画板句柄
// 参数<3>：dstLeft，目标左边
// 参数<4>：dstTop，目标顶边
// 参数<5>：dstRight，目标右边
// 参数<6>：dstBottom，目标底边
// 参数<7>：atomClass
// 参数<8>：atomSrcRect
// 参数<9>：dwAlpha，透明度(0-255)
//======================================================
extern "C" BOOL Ex_ThemeDrawControl (int hTheme,int hCanvas,float dstLeft,float dstTop,float dstRight,float dstBottom,int atomClass,int atomSrcRect,int dwAlpha);

//======================================================
// 函数名称：Ex_ThemeDrawControlEx
// 返回类型：逻辑型
// 函数说明：绘制主题数据加强版
// 参数<1>：hTheme，主题句柄
// 参数<2>：hCanvas，画板句柄
// 参数<3>：dstLeft，目标左边
// 参数<4>：dstTop，目标顶边
// 参数<5>：dstRight，目标右边
// 参数<6>：dstBottom，目标底边
// 参数<7>：atomClass
// 参数<8>：atomSrcRect
// 参数<9>：atomBackgroundRepeat
// 参数<10>：atomBackgroundPositon
// 参数<11>：atomBackgroundGrid
// 参数<12>：atomBackgroundFlags
// 参数<13>：dwAlpha，透明度(0-255)
//======================================================
extern "C" BOOL Ex_ThemeDrawControlEx (int hTheme,int hCanvas,float dstLeft,float dstTop,float dstRight,float dstBottom,int atomClass,int atomSrcRect,int atomBackgroundRepeat,int atomBackgroundPositon,int atomBackgroundGrid,int atomBackgroundFlags,int dwAlpha);

//======================================================
// 函数名称：Ex_ThemeGetValuePtr
// 返回类型：整数型
// 函数说明：获取组件属性值指针.
// 参数<1>：hTheme，主题句柄
// 参数<2>：atomClass
// 参数<3>：atomProp
//======================================================
extern "C" int Ex_ThemeGetValuePtr (int hTheme,int atomClass,int atomProp);

//======================================================
// 函数名称：Ex_ThemeGetColor
// 返回类型：整数型
// 函数说明：获取主题相关颜色值
// 参数<1>：hTheme，主题句柄
// 参数<2>：nIndex，#COLOR_EX_
//======================================================
extern "C" int Ex_ThemeGetColor (int hTheme,int nIndex);

//======================================================
// 函数名称：Ex_ResLoadFromFile
// 返回类型：整数型
// 函数说明：从文件加载资源
// 参数<1>：lpwzFile
//======================================================
extern "C" int Ex_ResLoadFromFile (int lpwzFile);

//======================================================
// 函数名称：Ex_ResLoadFromMemory
// 返回类型：整数型
// 函数说明：从内存加载资源
// 参数<1>：lpData
// 参数<2>：dwDataLen
//======================================================
extern "C" int Ex_ResLoadFromMemory (int lpData,int dwDataLen);

//======================================================
// 函数名称：Ex_ResFree
// 返回类型：无返回值
// 函数说明：释放资源
// 参数<1>：hRes
//======================================================
extern "C" void Ex_ResFree (int hRes);

//======================================================
// 函数名称：Ex_ResGetFile
// 返回类型：逻辑型
// 函数说明：获取资源文件
// 参数<1>：hRes
// 参数<2>：lpwzPath
// 参数<3>：lpFile，[out]文件数据指针.用户不应该释放该内存.
// 参数<4>：dwFileLen，[out]文件尺寸.
//======================================================
extern "C" BOOL Ex_ResGetFile (int hRes,int lpwzPath,int lpFile,int dwFileLen);

//======================================================
// 函数名称：Ex_ResGetFileFromAtom
// 返回类型：逻辑型
// 函数说明：获取资源文件
// 参数<1>：hRes
// 参数<2>：atomPath
// 参数<3>：lpFile，[out]文件数据指针.用户不应该释放该内存.
// 参数<4>：dwFileLen，[out]文件尺寸.
//======================================================
extern "C" BOOL Ex_ResGetFileFromAtom (int hRes,int atomPath,int lpFile,int dwFileLen);

//======================================================
// 函数名称：Ex_XmlRegisterCallback
// 返回类型：无返回值
// 函数说明：注册XML键值回调
// 参数<1>：atomValue
// 参数<2>：pfnCallback
//======================================================
extern "C" void Ex_XmlRegisterCallback (int atomValue,int pfnCallback);

//======================================================
// 函数名称：Ex_I18NGetString
// 返回类型：逻辑型
// 函数说明：语言包_获取文本
// 参数<1>：lpwzID
// 参数<2>：lpString，[out]指向字符串指针.如果已被格式化,用户需调用 Ex_I18NFreeString() 进行释放.
// 参数<3>：bFormat，[in/out]是否需要格式化
//======================================================
extern "C" BOOL Ex_I18NGetString (int lpwzID,int lpString,BOOL bFormat);

//======================================================
// 函数名称：Ex_I18NGetStringFromAtom
// 返回类型：逻辑型
// 函数说明：语言包_获取文本
// 参数<1>：atomID
// 参数<2>：lpString，[out]指向字符串指针.如果已被格式化,用户需调用 Ex_FreeBuffer() 进行释放.
// 参数<3>：bFormat，[in/out]是否需要格式化
//======================================================
extern "C" BOOL Ex_I18NGetStringFromAtom (int atomID,int lpString,BOOL bFormat);

//======================================================
// 函数名称：Ex_I18NRegisterCallback
// 返回类型：无返回值
// 函数说明：语言包_注册回调
// 参数<1>：pfnStringFormatCallback，[bool]callback(atomID,lppString)
//======================================================
extern "C" void Ex_I18NRegisterCallback (int pfnStringFormatCallback);

//======================================================
// 函数名称：Ex_I18NStringFormat
// 返回类型：无返回值
// 函数说明：语言包_文本格式化
// 参数<1>：lppStringSrc
// 参数<2>：lpStringFormated
//======================================================
extern "C" void Ex_I18NStringFormat (int lppStringSrc,int lpStringFormated);

//======================================================
// 函数名称：Ex_AllocBuffer
// 返回类型：整数型
// 函数说明：申请内存
// 参数<1>：dwLen
//======================================================
extern "C" int Ex_AllocBuffer (int dwLen);

//======================================================
// 函数名称：Ex_FreeBuffer
// 返回类型：无返回值
// 函数说明：释放内存
// 参数<1>：lpBuffer
//======================================================
extern "C" void Ex_FreeBuffer (int lpBuffer);

//======================================================
// 函数名称：_fmt_int
// 返回类型：整数型
// 函数说明：格式化_文本到整数
// 参数<1>：lpValue，字符串指针
// 参数<2>：lpdwPercentFlags，(out)返回是否为百分比单位
//======================================================
extern "C" int _fmt_int (int lpValue,int lpdwPercentFlags);

//======================================================
// 函数名称：_fmt_intary
// 返回类型：整数型
// 函数说明：格式化_文本到整数数组
// 参数<1>：lpValue，字符串指针
// 参数<2>：lpAry，数组指针
// 参数<3>：nMaxCount，最大数量
// 参数<4>：fZero，是否清空
// 参数<5>：lpdwPercentFlags，(out)返回百分比标记位(0-31位)
//======================================================
extern "C" int _fmt_intary (int lpValue,int lpAry,int nMaxCount,BOOL fZero,int lpdwPercentFlags);

//======================================================
// 函数名称：_fmt_rect
// 返回类型：逻辑型
// 函数说明：格式化_文本到矩形
// 参数<1>：lpValue，字符串指针
// 参数<2>：lpRect，矩形指针
// 参数<3>：lpdwPercentFlags，(out)返回百分比标记位(0-31位)
//======================================================
extern "C" BOOL _fmt_rect (int lpValue,int lpRect,int lpdwPercentFlags);

//======================================================
// 函数名称：_fmt_string
// 返回类型：逻辑型
// 函数说明：格式化_文本到文本_语言包
// 参数<1>：hRes，资源句柄.(值可为0)
// 参数<2>：lpValue，字符串指针
// 参数<3>：lpString，(out)
// 参数<4>：bDispatchI18NCallback，(in/out)
//======================================================
extern "C" BOOL _fmt_string (int hRes,int lpValue,int lpString,BOOL bDispatchI18NCallback);

//======================================================
// 函数名称：_fmt_color
// 返回类型：逻辑型
// 函数说明：格式化_文本到颜色
// 参数<1>：lpValue，字符串指针
// 参数<2>：lpColor，(out)返回颜色
//======================================================
extern "C" BOOL _fmt_color (int lpValue,int lpColor);

//======================================================
// 函数名称：_fmt_bin
// 返回类型：逻辑型
// 函数说明：格式化_二进制数据
// 参数<1>：hRes，资源句柄
// 参数<2>：lpValue，数据指针
// 参数<3>：lpBin，(out)返回二进制数据指针
// 参数<4>：lpLen，(out)返回数据长度
// 参数<5>：lpFreeBuffer，(out)返回是否需要释放数据
//======================================================
extern "C" BOOL _fmt_bin (int hRes,int lpValue,int lpBin,int lpLen,BOOL lpFreeBuffer);

//======================================================
// 函数名称：_fmt_getvalue
// 返回类型：逻辑型
// 函数说明：格式化_获取数据偏移地址
// 参数<1>：lpValue
// 参数<2>：atomDest
//======================================================
extern "C" BOOL _fmt_getvalue (int lpValue,int atomDest);

//======================================================
// 函数名称：_fmt_getatom
// 返回类型：整数型
// 函数说明：格式化_获取数据偏移地址
// 参数<1>：lpValue
// 参数<2>：lpValueOffset
//======================================================
extern "C" int _fmt_getatom (int lpValue,int lpValueOffset);

//======================================================
// 函数名称：_fmt_const
// 返回类型：逻辑型
// 参数<1>：const，in/out
// 参数<2>：consts，atom
// 参数<3>：values，value
// 参数<4>：nCount
//======================================================
extern "C" BOOL _fmt_const (int const,int consts,int values,int nCount);

//======================================================
// 函数名称：_layout_register
// 返回类型：逻辑型
// 参数<1>：nType，布局类型
// 参数<2>：lpfnLayoutProc，布局管理器回调函数(lpLayout[有可能是NULL],nEevent,wParam,lParam)返回整数
//======================================================
extern "C" BOOL _layout_register (int nType,int lpfnLayoutProc);

//======================================================
// 函数名称：_layout_unregister
// 返回类型：逻辑型
// 参数<1>：nType，布局类型
//======================================================
extern "C" BOOL _layout_unregister (int nType);

//======================================================
// 函数名称：_layout_create
// 返回类型：整数型
// 函数说明：hLayout
// 参数<1>：nType，#ELT_ 布局类型
// 参数<2>：hObjBind，所绑定的HOBJ或HEXDUI
//======================================================
extern "C" int _layout_create (int nType,int hObjBind);

//======================================================
// 函数名称：_layout_destory
// 返回类型：逻辑型
// 参数<1>：hLayout
//======================================================
extern "C" BOOL _layout_destory (int hLayout);

//======================================================
// 函数名称：Ex_ObjLayoutGet
// 返回类型：整数型
// 函数说明：获取布局对象句柄
// 参数<1>：handle
//======================================================
extern "C" int Ex_ObjLayoutGet (int handle);

//======================================================
// 函数名称：Ex_ObjLayoutSet
// 返回类型：逻辑型
// 函数说明：设置布局对象句柄
// 参数<1>：handle
// 参数<2>：hLayout
// 参数<3>：fUpdate
//======================================================
extern "C" BOOL Ex_ObjLayoutSet (int handle,int hLayout,BOOL fUpdate);

//======================================================
// 函数名称：Ex_ObjLayoutUpdate
// 返回类型：逻辑型
// 函数说明：更新对象布局
// 参数<1>：handle
//======================================================
extern "C" BOOL Ex_ObjLayoutUpdate (int handle);

//======================================================
// 函数名称：Ex_ObjLayoutClear
// 返回类型：逻辑型
// 函数说明：清空对象布局信息
// 参数<1>：handle
// 参数<2>：bChildren，是否清空所有子组件,否则为当前组件.
//======================================================
extern "C" BOOL Ex_ObjLayoutClear (int handle,BOOL bChildren);

//======================================================
// 函数名称：_layout_addchild
// 返回类型：逻辑型
// 参数<1>：hLayout
// 参数<2>：hObj
//======================================================
extern "C" BOOL _layout_addchild (int hLayout,int hObj);

//======================================================
// 函数名称：_layout_addchildren
// 返回类型：逻辑型
// 函数说明：已被加入的不会重复添加(系统按钮不加入)
// 参数<1>：hLayout
// 参数<2>：fDesc，是否倒序
// 参数<3>：dwObjClassATOM，0或空为所有
// 参数<4>：nCount，加入的个数
//======================================================
extern "C" BOOL _layout_addchildren (int hLayout,BOOL fDesc,int dwObjClassATOM,int nCount);

//======================================================
// 函数名称：_layout_deletechild
// 返回类型：逻辑型
// 参数<1>：hLayout
// 参数<2>：hObj
//======================================================
extern "C" BOOL _layout_deletechild (int hLayout,int hObj);

//======================================================
// 函数名称：_layout_deletechildren
// 返回类型：逻辑型
// 参数<1>：hLayout
// 参数<2>：dwObjClassATOM，0或空为所有
//======================================================
extern "C" BOOL _layout_deletechildren (int hLayout,int dwObjClassATOM);

//======================================================
// 函数名称：_layout_setchildprop
// 返回类型：逻辑型
// 参数<1>：hLayout
// 参数<2>：hObj
// 参数<3>：dwPropID
// 参数<4>：pvValue
//======================================================
extern "C" BOOL _layout_setchildprop (int hLayout,int hObj,int dwPropID,int pvValue);

//======================================================
// 函数名称：_layout_getchildprop
// 返回类型：逻辑型
// 参数<1>：hLayout
// 参数<2>：hObj
// 参数<3>：dwPropID
// 参数<4>：pvValue
//======================================================
extern "C" BOOL _layout_getchildprop (int hLayout,int hObj,int dwPropID,int pvValue);

//======================================================
// 函数名称：_layout_getchildproplist
// 返回类型：逻辑型
// 参数<1>：hLayout
// 参数<2>：hObj
// 参数<3>：lpProps，不释放
//======================================================
extern "C" BOOL _layout_getchildproplist (int hLayout,int hObj,int lpProps);

//======================================================
// 函数名称：_layout_getprop
// 返回类型：整数型
// 参数<1>：hLayout
// 参数<2>：dwPropID
//======================================================
extern "C" int _layout_getprop (int hLayout,int dwPropID);

//======================================================
// 函数名称：_layout_setprop
// 返回类型：逻辑型
// 参数<1>：hLayout
// 参数<2>：dwPropID
// 参数<3>：pvValue
//======================================================
extern "C" BOOL _layout_setprop (int hLayout,int dwPropID,int pvValue);

//======================================================
// 函数名称：_layout_getproplist
// 返回类型：整数型
// 参数<1>：hLayout
//======================================================
extern "C" int _layout_getproplist (int hLayout);

//======================================================
// 函数名称：_layout_update
// 返回类型：逻辑型
// 参数<1>：hLayout
//======================================================
extern "C" BOOL _layout_update (int hLayout);

//======================================================
// 函数名称：_layout_gettype
// 返回类型：整数型
// 函数说明：重新设置type应当重新创建LM
// 参数<1>：hLayout
//======================================================
extern "C" int _layout_gettype (int hLayout);

//======================================================
// 函数名称：_layout_enableupdate
// 返回类型：逻辑型
// 参数<1>：hLayout
// 参数<2>：fUpdateable
//======================================================
extern "C" BOOL _layout_enableupdate (int hLayout,BOOL fUpdateable);

//======================================================
// 函数名称：_layout_notify
// 返回类型：整数型
// 参数<1>：hLayout
// 参数<2>：nEvent
// 参数<3>：wParam
// 参数<4>：lParam
//======================================================
extern "C" int _layout_notify (int hLayout,int nEvent,int wParam,int lParam);

//======================================================
// 函数名称：_layout_table_setinfo
// 返回类型：逻辑型
// 参数<1>：hLayout
// 参数<2>：aRowHeight
// 参数<3>：cRows
// 参数<4>：aCellWidth
// 参数<5>：cCells
//======================================================
extern "C" BOOL _layout_table_setinfo (int hLayout,int aRowHeight,int cRows,int aCellWidth,int cCells);

//======================================================
// 函数名称：_layout_absolute_setedge
// 返回类型：逻辑型
// 参数<1>：hLayout
// 参数<2>：hObjChild
// 参数<3>：dwEdge，#ELCP_ABSOLUTE_XXX
// 参数<4>：dwType
// 参数<5>：nValue
//======================================================
extern "C" BOOL _layout_absolute_setedge (int hLayout,int hObjChild,int dwEdge,int dwType,int nValue);

//======================================================
// 函数名称：_layout_absolute_lock
// 返回类型：逻辑型
// 函数说明：按当前位置锁定
// 参数<1>：hLayout
// 参数<2>：hObjChild
// 参数<3>：tLeft，#ELCP_ABSOLUTE_XXX_TYPE 下同
// 参数<4>：tTop
// 参数<5>：tRight
// 参数<6>：tBottom
// 参数<7>：tWidth
// 参数<8>：tHeight
//======================================================
extern "C" BOOL _layout_absolute_lock (int hLayout,int hObjChild,int tLeft,int tTop,int tRight,int tBottom,int tWidth,int tHeight);

//======================================================
// 函数名称：Ex_DUIBindWindow
// 返回类型：整数型
// 函数说明：绑定窗口,成功返回引擎句柄,失败返回0.
// 参数<1>：hWnd，窗口句柄
// 参数<2>：hTheme，主题句柄.(值可为0)
// 参数<3>：dwStyle，相关常量:#EWS_
//======================================================
extern "C" int Ex_DUIBindWindow (int hWnd,int hTheme,int dwStyle);

//======================================================
// 函数名称：Ex_DUIBindWindowEx
// 返回类型：整数型
// 函数说明：绑定窗口,成功返回引擎句柄,失败返回0.
// 参数<1>：hWnd，窗口句柄
// 参数<2>：hTheme，主题句柄.(值可为0)
// 参数<3>：dwStyle，相关常量:#EWS_
// 参数<4>：lParam，附加参数.(值可为0)
// 参数<5>：lpfnMsgProc，(BOOL)MsgProc(hWnd,hExDui,uMsg,wParam,lParam,lpResult).
//======================================================
extern "C" int Ex_DUIBindWindowEx (int hWnd,int hTheme,int dwStyle,int lParam,int lpfnMsgProc);

//======================================================
// 函数名称：Ex_DUIShowWindow
// 返回类型：逻辑型
// 函数说明：显示窗口
// 参数<1>：hExDui，引擎句柄
// 参数<2>：nCmdShow，相关常量:#SW_
// 参数<3>：dwTimer，动画时间间隔.(ms)
// 参数<4>：dwFrames，动画总帧数.
// 参数<5>：dwFlags，动画标记.#EXA_
//======================================================
extern "C" BOOL Ex_DUIShowWindow (int hExDui,int nCmdShow,int dwTimer,int dwFrames,int dwFlags);

//======================================================
// 函数名称：Ex_DUIShowWindowEx
// 返回类型：逻辑型
// 函数说明：显示窗口
// 参数<1>：hExDui，引擎句柄
// 参数<2>：nCmdShow，相关常量:#SW_
// 参数<3>：dwTimer，动画时间间隔.(ms)
// 参数<4>：dwFrames，动画总帧数.
// 参数<5>：dwFlags，动画标记.#EXA_
// 参数<6>：uEasing，#缓动类型_
// 参数<7>：wParam，参数1
// 参数<8>：lParam，参数2
//======================================================
extern "C" BOOL Ex_DUIShowWindowEx (int hExDui,int nCmdShow,int dwTimer,int dwFrames,int dwFlags,int uEasing,int wParam,int lParam);

//======================================================
// 函数名称：Ex_DUISetLong
// 返回类型：整数型
// 函数说明：设置引擎数值
// 参数<1>：hExDui
// 参数<2>：nIndex，#EWL_
// 参数<3>：dwNewlong
//======================================================
extern "C" int Ex_DUISetLong (int hExDui,int nIndex,int dwNewlong);

//======================================================
// 函数名称：Ex_DUIGetLong
// 返回类型：整数型
// 函数说明：获取引擎数值
// 参数<1>：hExDui，引擎句柄
// 参数<2>：nIndex，相关常量: EWL_
//======================================================
extern "C" int Ex_DUIGetLong (int hExDui,int nIndex);

//======================================================
// 函数名称：Ex_DUIGetClientRect
// 返回类型：逻辑型
// 函数说明：获取客户区矩形
// 参数<1>：hExDui，引擎句柄
// 参数<2>：lpClientRect，矩形指针
//======================================================
extern "C" BOOL Ex_DUIGetClientRect (int hExDui,int lpClientRect);

//======================================================
// 函数名称：Ex_DUICreateFromHRes
// 返回类型：逻辑型
// 函数说明：创建自资源包句柄
// 参数<1>：hParent，父窗口句柄
// 参数<2>：hTheme，主题句柄
// 参数<3>：hRes，资源句柄
// 参数<4>：atomLayout，布局文件名原子号
// 参数<5>：hWnd，(out)返回窗口句柄
// 参数<6>：hExDui，(out)返回引擎句柄
//======================================================
extern "C" BOOL Ex_DUICreateFromHRes (int hParent,int hTheme,int hRes,int atomLayout,int hWnd,int hExDui);

//======================================================
// 函数名称：Ex_DUICreateFromLayout
// 返回类型：逻辑型
// 函数说明：创建自布局
// 参数<1>：hParent，父窗口句柄
// 参数<2>：hTheme，主题句柄
// 参数<3>：lpLayout，布局资源数据指针
// 参数<4>：cbLayout，布局资源数据长度
// 参数<5>：hWnd，(out)返回窗口句柄
// 参数<6>：hExDui，(out)返回引擎句柄
//======================================================
extern "C" BOOL Ex_DUICreateFromLayout (int hParent,int hTheme,int lpLayout,int cbLayout,int hWnd,int hExDui);

//======================================================
// 函数名称：Ex_DUIGetObjFromPoint
// 返回类型：整数型
// 函数说明：获取鼠标所在窗口组件句柄(如果handle为0,则参数x,y默认为当前鼠标[屏幕]坐标;否则为x,y为窗口坐标)
// 参数<1>：handle，0[坐标所在窗口]/窗口句柄/引擎句柄/组件句柄
// 参数<2>：x
// 参数<3>：y
//======================================================
extern "C" int Ex_DUIGetObjFromPoint (int handle,int x,int y);

//======================================================
// 函数名称：Ex_DUITrayIconSet
// 返回类型：逻辑型
// 函数说明：设置托盘图标
// 参数<1>：hExdui，引擎句柄
// 参数<2>：hIcon，图标句柄
// 参数<3>：lpwzTips，提示文本指针
//======================================================
extern "C" BOOL Ex_DUITrayIconSet (int hExdui,int hIcon,int lpwzTips);

//======================================================
// 函数名称：Ex_DUITrayIconPopup
// 返回类型：逻辑型
// 函数说明：弹出托盘图标
// 参数<1>：hExDui，引擎句柄
// 参数<2>：lpwzInfo，弹出文本内容
// 参数<3>：lpwzInfoTitle，弹出标题文本
// 参数<4>：dwInfoFlags，相关常量 #NIIF_
//======================================================
extern "C" BOOL Ex_DUITrayIconPopup (int hExDui,int lpwzInfo,int lpwzInfoTitle,int dwInfoFlags);

//======================================================
// 函数名称：Ex_DUIFromWindow
// 返回类型：整数型
// 函数说明：从窗口句柄获取引擎句柄
// 参数<1>：hWnd
//======================================================
extern "C" int Ex_DUIFromWindow (int hWnd);

//======================================================
// 函数名称：Ex_MessageBox
// 返回类型：整数型
// 函数说明：弹出信息框
// 参数<1>：handle，组件句柄/引擎句柄/窗口句柄.(如果该值为窗口句柄且窗口未使用引擎渲染,则以默认信息框弹出)
// 参数<2>：lpText，消息框内容
// 参数<3>：lpCaption，消息框标题
// 参数<4>：uType，相关常量 #MB_
// 参数<5>：dwFlags，相关常量 #EMF_
//======================================================
extern "C" int Ex_MessageBox (int handle,int lpText,int lpCaption,int uType,int dwFlags);

//======================================================
// 函数名称：Ex_MessageBoxEx
// 返回类型：整数型
// 函数说明：弹出信息框
// 参数<1>：handle，组件句柄/引擎句柄/窗口句柄.(如果该值为窗口句柄且窗口未使用引擎渲染,则以默认信息框弹出)
// 参数<2>：lpText，消息框内容
// 参数<3>：lpCaption，消息框标题
// 参数<4>：uType，相关常量 #MB_
// 参数<5>：lpCheckBox，检查框标题(消息框左下角显示一个检查框组件).(如果该窗口未使用引擎渲染,则该值无效)
// 参数<6>：lpCheckBoxChecked，返回检查框选中状态.(如果该窗口未使用引擎渲染,则该值无效)
// 参数<7>：dwMilliseconds，消息框延迟关闭时间，单位：毫秒。如果该值不为0,且超时后(即用户未操作)，消息框自动关闭，返回32000。
// 参数<8>：dwFlags，相关常量 #EMF_
// 参数<9>：lpfnMsgProc，(BOOL)MsgProc(hWnd,hExDui,uMsg,wParam,lParam,lpResult).
//======================================================
extern "C" int Ex_MessageBoxEx (int handle,int lpText,int lpCaption,int uType,int lpCheckBox,BOOL lpCheckBoxChecked,int dwMilliseconds,int dwFlags,int lpfnMsgProc);

//======================================================
// 函数名称：Ex_TrackPopupMenu
// 返回类型：逻辑型
// 函数说明：弹出菜单
// 参数<1>：hMenu，菜单句柄
// 参数<2>：uFlags，相关常量 TPM_
// 参数<3>：x，弹出坐标X(屏幕坐标)
// 参数<4>：y，弹出坐标Y(屏幕坐标)
// 参数<5>：nReserved，0.备用
// 参数<6>：handle，组件句柄/引擎句柄/窗口句柄.(如果该值为窗口句柄且窗口未使用引擎渲染,则以默认菜单弹出)
// 参数<7>：lpRc，0.忽略
// 参数<8>：pfnCallback，(BOOL)MsgProc(hWnd,hExDui,uMsg,wParam,lParam,lpResult).
// 参数<9>：dwFlags，相关常量 EMNF_
//======================================================
extern "C" BOOL Ex_TrackPopupMenu (int hMenu,int uFlags,int x,int y,int nReserved,int handle,int lpRc,int pfnCallback,int dwFlags);

//======================================================
// 函数名称：Ex_ObjRegister
// 返回类型：整数型
// 函数说明：注册组件.失败返回0
// 参数<1>：lptszClassName，组件类名.最大允许长度:MAX_CLASS_NAME_LEN
// 参数<2>：dwStyle，组件默认风格
// 参数<3>：dwStyleEx，组件默认扩展风格
// 参数<4>：dwTextFormat，相关常量 DT_
// 参数<5>：cbObjExtra，组件额外分配字节数(值可为0)
// 参数<6>：hCursor，组件默认鼠标指针句柄(值可为0)
// 参数<7>：dwFlags，类标志 #ECF_(值可为0)
// 参数<8>：pfnObjProc，组件默认回调
//======================================================
extern "C" int Ex_ObjRegister (int lptszClassName,int dwStyle,int dwStyleEx,int dwTextFormat,int cbObjExtra,int hCursor,int dwFlags,int pfnObjProc);

//======================================================
// 函数名称：Ex_ObjCallProc
// 返回类型：整数型
// 函数说明：调用过程
// 参数<1>：lpPrevObjProc
// 参数<2>：hWnd
// 参数<3>：hObj
// 参数<4>：uMsg
// 参数<5>：wParam
// 参数<6>：lParam
// 参数<7>：pvData
//======================================================
extern "C" int Ex_ObjCallProc (int lpPrevObjProc,int hWnd,int hObj,int uMsg,int wParam,int lParam,int pvData);

//======================================================
// 函数名称：Ex_ObjDefProc
// 返回类型：整数型
// 函数说明：组件默认过程
// 参数<1>：hWnd
// 参数<2>：hObj
// 参数<3>：uMsg
// 参数<4>：wParam
// 参数<5>：lParam
//======================================================
extern "C" int Ex_ObjDefProc (int hWnd,int hObj,int uMsg,int wParam,int lParam);

//======================================================
// 函数名称：Ex_ObjDispatchMessage
// 返回类型：整数型
// 函数说明：分发消息
// 参数<1>：hObj
// 参数<2>：uMsg
// 参数<3>：wParam
// 参数<4>：lParam
//======================================================
extern "C" int Ex_ObjDispatchMessage (int hObj,int uMsg,int wParam,int lParam);

//======================================================
// 函数名称：Ex_ObjDispatchNotify
// 返回类型：整数型
// 函数说明：分发事件
// 参数<1>：hObj
// 参数<2>：nCode
// 参数<3>：wParam
// 参数<4>：lParam
//======================================================
extern "C" int Ex_ObjDispatchNotify (int hObj,int nCode,int wParam,int lParam);

//======================================================
// 函数名称：Ex_ObjHandleEvent
// 返回类型：逻辑型
// 函数说明：挂接事件回调
// 参数<1>：hObj
// 参数<2>：nEvent，#NM_
// 参数<3>：pfnCallback，(Bool) Handler(hObj,nID,nCode,wParam,lParam) 返回假继续分发事件,返回真则停止继续分发事件
//======================================================
extern "C" BOOL Ex_ObjHandleEvent (int hObj,int nEvent,int pfnCallback);

//======================================================
// 函数名称：Ex_ObjSendMessage
// 返回类型：整数型
// 函数说明：发送消息
// 参数<1>：hObj
// 参数<2>：uMsg
// 参数<3>：wParam
// 参数<4>：lParam
//======================================================
extern "C" int Ex_ObjSendMessage (int hObj,int uMsg,int wParam,int lParam);

//======================================================
// 函数名称：Ex_ObjPostMessage
// 返回类型：整数型
// 函数说明：投递消息
// 参数<1>：hObj
// 参数<2>：uMsg
// 参数<3>：wParam
// 参数<4>：lParam
//======================================================
extern "C" int Ex_ObjPostMessage (int hObj,int uMsg,int wParam,int lParam);

//======================================================
// 函数名称：Ex_ObjDestroy
// 返回类型：整数型
// 函数说明：销毁组件
// 参数<1>：hObj
//======================================================
extern "C" int Ex_ObjDestroy (int hObj);

//======================================================
// 函数名称：Ex_ObjCreate
// 返回类型：整数型
// 函数说明：创建组件.
// 参数<1>：lptszClassName，组件类名
// 参数<2>：lptszObjTitle，组件标题
// 参数<3>：dwStyle，组件风格 相关常量 EOS_
// 参数<4>：x，左边
// 参数<5>：y，顶边
// 参数<6>：width，宽度
// 参数<7>：height，高度
// 参数<8>：hParent，父组件句柄
//======================================================
extern "C" int Ex_ObjCreate (int lptszClassName,int lptszObjTitle,int dwStyle,int x,int y,int width,int height,int hParent);

//======================================================
// 函数名称：Ex_ObjCreateEx
// 返回类型：整数型
// 函数说明：创建组件.
// 参数<1>：dwStyleEx，组件扩展风格 相关常量 EOS_EX_
// 参数<2>：lptszClassName，组件类名
// 参数<3>：lptszObjTitle，组件标题
// 参数<4>：dwStyle，组件风格 相关常量 EOS_
// 参数<5>：x，左边
// 参数<6>：y，顶边
// 参数<7>：width，宽度
// 参数<8>：height，高度
// 参数<9>：hParent，父组件句柄
// 参数<10>：nID
// 参数<11>：dwTextFormat，相关常量 DT_
// 参数<12>：lParam，附加参数
// 参数<13>：hTheme，主题句柄.0为默认
// 参数<14>：lpfnMsgProc，(BOOL)MsgProc(hWnd,hObj,uMsg,wParam,lParam,lpReturn).
//======================================================
extern "C" int Ex_ObjCreateEx (int dwStyleEx,int lptszClassName,int lptszObjTitle,int dwStyle,int x,int y,int width,int height,int hParent,int nID,int dwTextFormat,int lParam,int hTheme,int lpfnMsgProc);

//======================================================
// 函数名称：Ex_ObjBeginPaint
// 返回类型：逻辑型
// 函数说明：开始绘制
// 参数<1>：hObj
// 参数<2>：lpPS
//======================================================
extern "C" BOOL Ex_ObjBeginPaint (int hObj,int lpPS);

//======================================================
// 函数名称：Ex_ObjDrawBackgroundProc
// 返回类型：逻辑型
// 函数说明：默认绘制背景过程
// 参数<1>：hObj
// 参数<2>：hCanvas
// 参数<3>：lprcPaint
//======================================================
extern "C" BOOL Ex_ObjDrawBackgroundProc (int hObj,int hCanvas,int lprcPaint);

//======================================================
// 函数名称：Ex_ObjEndPaint
// 返回类型：逻辑型
// 函数说明：结束绘制
// 参数<1>：hObj
// 参数<2>：lpPS
//======================================================
extern "C" BOOL Ex_ObjEndPaint (int hObj,int lpPS);

//======================================================
// 函数名称：Ex_ObjInvalidateRect
// 返回类型：逻辑型
// 函数说明：设置重画区域
// 参数<1>：hObj
// 参数<2>：lprcRedraw
//======================================================
extern "C" BOOL Ex_ObjInvalidateRect (int hObj,int lprcRedraw);

//======================================================
// 函数名称：Ex_ObjUpdate
// 返回类型：逻辑型
// 函数说明：立即更新组件
// 参数<1>：hObj
//======================================================
extern "C" BOOL Ex_ObjUpdate (int hObj);

//======================================================
// 函数名称：Ex_ObjSetRedraw
// 返回类型：逻辑型
// 函数说明：设置组件是否可以重画.如果组件扩展风格存在EOS_EX_COMPOSITED,则该函数无效.
// 参数<1>：hObj，组件句柄
// 参数<2>：fCanbeRedraw，是否可重画
//======================================================
extern "C" BOOL Ex_ObjSetRedraw (int hObj,BOOL fCanbeRedraw);

//======================================================
// 函数名称：Ex_ObjGetRect
// 返回类型：逻辑型
// 函数说明：获取组件矩形
// 参数<1>：hObj
// 参数<2>：lpRect
//======================================================
extern "C" BOOL Ex_ObjGetRect (int hObj,int lpRect);

//======================================================
// 函数名称：Ex_ObjGetClientRect
// 返回类型：逻辑型
// 函数说明：获取组件客户区矩形
// 参数<1>：hObj
// 参数<2>：lpRect
//======================================================
extern "C" BOOL Ex_ObjGetClientRect (int hObj,int lpRect);

//======================================================
// 函数名称：Ex_ObjGetTextRect
// 返回类型：逻辑型
// 函数说明：获取组件文本矩形
// 参数<1>：hObj
// 参数<2>：lpRect
//======================================================
extern "C" BOOL Ex_ObjGetTextRect (int hObj,int lpRect);

//======================================================
// 函数名称：Ex_ObjSetPadding
// 返回类型：逻辑型
// 函数说明：设置组件偏移矩形
// 参数<1>：hObj
// 参数<2>：nPaddingType，EOPT_TEXT=0
// 参数<3>：left
// 参数<4>：top
// 参数<5>：right
// 参数<6>：bottom
// 参数<7>：fRedraw
//======================================================
extern "C" BOOL Ex_ObjSetPadding (int hObj,int nPaddingType,int left,int top,int right,int bottom,BOOL fRedraw);

//======================================================
// 函数名称：Ex_ObjClientToWindow
// 返回类型：逻辑型
// 函数说明：客户区坐标到窗口坐标
// 参数<1>：hObj
// 参数<2>：x
// 参数<3>：y
//======================================================
extern "C" BOOL Ex_ObjClientToWindow (int hObj,int x,int y);

//======================================================
// 函数名称：Ex_ObjClientToScreen
// 返回类型：逻辑型
// 函数说明：客户区坐标到屏幕坐标
// 参数<1>：hObj
// 参数<2>：x
// 参数<3>：y
//======================================================
extern "C" BOOL Ex_ObjClientToScreen (int hObj,int x,int y);

//======================================================
// 函数名称：Ex_ObjEnable
// 返回类型：逻辑型
// 函数说明：设置组件可用状态.
// 参数<1>：hObj，组件句柄
// 参数<2>：fEnable，是否可用
//======================================================
extern "C" BOOL Ex_ObjEnable (int hObj,BOOL fEnable);

//======================================================
// 函数名称：Ex_ObjIsEnable
// 返回类型：逻辑型
// 函数说明：组件是否可用
// 参数<1>：hObj
//======================================================
extern "C" BOOL Ex_ObjIsEnable (int hObj);

//======================================================
// 函数名称：Ex_ObjIsVisible
// 返回类型：逻辑型
// 函数说明：判断组件是否可视.
// 参数<1>：hObj，组件句柄
//======================================================
extern "C" BOOL Ex_ObjIsVisible (int hObj);

//======================================================
// 函数名称：Ex_ObjShow
// 返回类型：逻辑型
// 函数说明：设置组件可视状态
// 参数<1>：hObj
// 参数<2>：fShow
//======================================================
extern "C" BOOL Ex_ObjShow (int hObj,BOOL fShow);

//======================================================
// 函数名称：Ex_ObjIsValidate
// 返回类型：逻辑型
// 函数说明：是否有效的组件
// 参数<1>：hObj
//======================================================
extern "C" BOOL Ex_ObjIsValidate (int hObj);

//======================================================
// 函数名称：Ex_ObjGetParent
// 返回类型：整数型
// 函数说明：获取父组件
// 参数<1>：hObj
//======================================================
extern "C" int Ex_ObjGetParent (int hObj);

//======================================================
// 函数名称：Ex_ObjGetParentEx
// 返回类型：整数型
// 函数说明：获取父组件和EXDUI句柄
// 参数<1>：hObj
// 参数<2>：phExDUI
//======================================================
extern "C" int Ex_ObjGetParentEx (int hObj,int phExDUI);

//======================================================
// 函数名称：Ex_ObjGetLong
// 返回类型：整数型
// 函数说明：获取组件数值
// 参数<1>：hObj
// 参数<2>：nIndex，相关常量 #EOL_
//======================================================
extern "C" int Ex_ObjGetLong (int hObj,int nIndex);

//======================================================
// 函数名称：Ex_ObjSetLong
// 返回类型：整数型
// 函数说明：设置组件数值
// 参数<1>：hObj
// 参数<2>：nIndex，#EOL_
// 参数<3>：dwNewLong
//======================================================
extern "C" int Ex_ObjSetLong (int hObj,int nIndex,int dwNewLong);

//======================================================
// 函数名称：Ex_ObjSetPos
// 返回类型：逻辑型
// 函数说明：设置组件位置
// 参数<1>：hObj
// 参数<2>：hObjInsertAfter
// 参数<3>：x
// 参数<4>：y
// 参数<5>：width
// 参数<6>：height
// 参数<7>：flags，相关常量 #SWP_
//======================================================
extern "C" BOOL Ex_ObjSetPos (int hObj,int hObjInsertAfter,int x,int y,int width,int height,int flags);

//======================================================
// 函数名称：Ex_ObjGetObj
// 返回类型：整数型
// 函数说明：返回与指定组件有特定关系（如Z序或所有者）的组件句柄。
// 参数<1>：hObj
// 参数<2>：nCmd，相关常量 #GW_
//======================================================
extern "C" int Ex_ObjGetObj (int hObj,int nCmd);

//======================================================
// 函数名称：Ex_ObjGetFromID
// 返回类型：整数型
// 函数说明：获取组件句柄自ID
// 参数<1>：hExDuiOrhObj，如果指定引擎句柄,则全部搜索;如果指定组件句柄,则从该组件的子组件开始搜索.
// 参数<2>：nID
//======================================================
extern "C" int Ex_ObjGetFromID (int hExDuiOrhObj,int nID);

//======================================================
// 函数名称：Ex_ObjGetFromName
// 返回类型：整数型
// 函数说明：获取组件句柄自NAME
// 参数<1>：hExDuiOrhObj，如果指定引擎句柄,则全部搜索;如果指定组件句柄,则从该组件的子组件开始搜索.
// 参数<2>：lpwzName
//======================================================
extern "C" int Ex_ObjGetFromName (int hExDuiOrhObj,int lpwzName);

//======================================================
// 函数名称：Ex_ObjFind
// 返回类型：整数型
// 函数说明：查找组件.
// 参数<1>：hObjParent，父组件句柄。从根部查找则为引擎句柄。
// 参数<2>：hObjChildAfter，由此组件开始查找（不包含该组件）。如果为0，则从第一个组件开始查找。
// 参数<3>：lpClassName，欲查找的组件类名指针/Ex_ATOM()
// 参数<4>：lpTitle，欲查找的组件标题
//======================================================
extern "C" int Ex_ObjFind (int hObjParent,int hObjChildAfter,int lpClassName,int lpTitle);

//======================================================
// 函数名称：Ex_ObjEnumChild
// 返回类型：逻辑型
// 函数说明：枚举子组件.
// 参数<1>：hObjParent，父组件的句柄。从根部枚举则为引擎句柄。
// 参数<2>：lpEnumFunc，callback(hObj,lParam).返回1继续枚举,返回0停止枚举.
// 参数<3>：lParam，附带参数
//======================================================
extern "C" BOOL Ex_ObjEnumChild (int hObjParent,int lpEnumFunc,int lParam);

//======================================================
// 函数名称：Ex_ObjGetText
// 返回类型：整数型
// 函数说明：获取组件文本.返回值:已拷贝字符长度.
// 参数<1>：hObj，组件句柄.
// 参数<2>：lpString，缓冲区指针.
// 参数<3>：nMaxCount，缓冲区长度.
//======================================================
extern "C" int Ex_ObjGetText (int hObj,int lpString,int nMaxCount);

//======================================================
// 函数名称：Ex_ObjGetTextLength
// 返回类型：整数型
// 函数说明：获取组件文本长度
// 参数<1>：hObj
//======================================================
extern "C" int Ex_ObjGetTextLength (int hObj);

//======================================================
// 函数名称：Ex_ObjSetText
// 返回类型：逻辑型
// 函数说明：设置组件文本.
// 参数<1>：hObj，组件句柄.
// 参数<2>：lpString，指向一个空结束的字符串的指针.
// 参数<3>：fRedraw，是否重画组件
//======================================================
extern "C" BOOL Ex_ObjSetText (int hObj,int lpString,BOOL fRedraw);

//======================================================
// 函数名称：Ex_ObjSetFont
// 返回类型：逻辑型
// 函数说明：设置组件文本字体
// 参数<1>：hObj
// 参数<2>：hFont，_font_createxxx
// 参数<3>：fRedraw
//======================================================
extern "C" BOOL Ex_ObjSetFont (int hObj,int hFont,BOOL fRedraw);

//======================================================
// 函数名称：Ex_ObjSetFontFromFamily
// 返回类型：逻辑型
// 函数说明：设置组件文本字体
// 参数<1>：hObj
// 参数<2>：lpszFontfamily，-1 为默认字体
// 参数<3>：dwFontsize，-1 为默认尺寸
// 参数<4>：dwFontstyle，-1 为默认风格
// 参数<5>：fRedraw
//======================================================
extern "C" BOOL Ex_ObjSetFontFromFamily (int hObj,int lpszFontfamily,int dwFontsize,int dwFontstyle,BOOL fRedraw);

//======================================================
// 函数名称：Ex_ObjGetFont
// 返回类型：整数型
// 函数说明：获取字体。用户不应该销毁该字体对象
// 参数<1>：hObj
//======================================================
extern "C" int Ex_ObjGetFont (int hObj);

//======================================================
// 函数名称：Ex_ObjSetColor
// 返回类型：整数型
// 函数说明：设置组件相关颜色,返回修改前相关颜色
// 参数<1>：hObj
// 参数<2>：nIndex，相关常量 COLOR_EX_
// 参数<3>：dwColor
// 参数<4>：fRedraw，是否重画
//======================================================
extern "C" int Ex_ObjSetColor (int hObj,int nIndex,int dwColor,BOOL fRedraw);

//======================================================
// 函数名称：Ex_ObjGetColor
// 返回类型：整数型
// 函数说明：获取组件相关颜色
// 参数<1>：hObj
// 参数<2>：nIndex，相关常量 COLOR_EX_
//======================================================
extern "C" int Ex_ObjGetColor (int hObj,int nIndex);

//======================================================
// 函数名称：Ex_ObjGetBackgroundImage
// 返回类型：逻辑型
// 函数说明：获取组件背景信息
// 参数<1>：handle
// 参数<2>：lpBackgroundImage，相关结构 EX_BACKGROUNDIMAGEINFO
//======================================================
extern "C" BOOL Ex_ObjGetBackgroundImage (int handle,int lpBackgroundImage);

//======================================================
// 函数名称：Ex_ObjSetBackgroundImage
// 返回类型：逻辑型
// 函数说明：设置组件背景信息
// 参数<1>：handle，引擎句柄/组件句柄
// 参数<2>：lpImage，图片指针
// 参数<3>：dwImageLen，图片长度
// 参数<4>：X，偏移X
// 参数<5>：Y，偏移Y
// 参数<6>：dwRepeat，相关常量 BIR_
// 参数<7>：lpGird，九宫矩形指针 (值可为0)
// 参数<8>：dwFlags，相关常量 BIF_
// 参数<9>：dwAlpha，透明度(0-255)
// 参数<10>：fUpdate，是否立即刷新
//======================================================
extern "C" BOOL Ex_ObjSetBackgroundImage (int handle,int lpImage,int dwImageLen,int X,int Y,int dwRepeat,int lpGird,int dwFlags,int dwAlpha,BOOL fUpdate);

//======================================================
// 函数名称：Ex_ObjSetBackgroundPlayState
// 返回类型：逻辑型
// 函数说明：设置组件背景图片播放状态.
// 参数<1>：handle，引擎句柄/组件句柄
// 参数<2>：fPlayFrames，是否播放.
// 参数<3>：fResetFrame，是否重置当前帧为首帧.
// 参数<4>：fUpdate，是否更新背景.
//======================================================
extern "C" BOOL Ex_ObjSetBackgroundPlayState (int handle,BOOL fPlayFrames,BOOL fResetFrame,BOOL fUpdate);

//======================================================
// 函数名称：Ex_ObjSetTimer
// 返回类型：整数型
// 函数说明：设置组件时钟
// 参数<1>：hObj
// 参数<2>：uElapse
//======================================================
extern "C" int Ex_ObjSetTimer (int hObj,int uElapse);

//======================================================
// 函数名称：Ex_ObjKillTimer
// 返回类型：逻辑型
// 函数说明：销毁组件时钟
// 参数<1>：hObj
//======================================================
extern "C" BOOL Ex_ObjKillTimer (int hObj);

//======================================================
// 函数名称：Ex_ObjSetRadius
// 返回类型：逻辑型
// 函数说明：设置组件圆角度
// 参数<1>：hObj
// 参数<2>：topleft，左上角
// 参数<3>：topright，右上角
// 参数<4>：bottomright，右下角
// 参数<5>：bottomleft，左下角
// 参数<6>：fUpdate
//======================================================
extern "C" BOOL Ex_ObjSetRadius (int hObj,float topleft,float topright,float bottomright,float bottomleft,BOOL fUpdate);

//======================================================
// 函数名称：Ex_ObjTooltipsSetText
// 返回类型：逻辑型
// 函数说明：设置提示文本
// 参数<1>：hObj
// 参数<2>：lpString
//======================================================
extern "C" BOOL Ex_ObjTooltipsSetText (int hObj,int lpString);

//======================================================
// 函数名称：Ex_ObjTooltipsPop
// 返回类型：逻辑型
// 函数说明：弹出或关闭提示文本
// 参数<1>：hObj，组件句柄.
// 参数<2>：lpString，提示文本.该值为0则关闭提示文本
//======================================================
extern "C" BOOL Ex_ObjTooltipsPop (int hObj,int lpString);

//======================================================
// 函数名称：Ex_ObjTooltipsPopEx
// 返回类型：逻辑型
// 函数说明：弹出或关闭提示文本Ex
// 参数<1>：hObj，组件句柄.
// 参数<2>：lpTitle，标题内容
// 参数<3>：lpText，提示文本.
// 参数<4>：x，屏幕坐标.(-1:默认)
// 参数<5>：y，屏幕坐标.(-1:默认)
// 参数<6>：dwTime，单位:毫秒.(-1:默认,0:始终显示)
// 参数<7>：nIcon，#气泡图标_
// 参数<8>：fShow，是否立即显示
//======================================================
extern "C" BOOL Ex_ObjTooltipsPopEx (int hObj,int lpTitle,int lpText,int x,int y,int dwTime,int nIcon,BOOL fShow);

//======================================================
// 函数名称：Ex_ObjGetFocus
// 返回类型：整数型
// 函数说明：获取焦点组件
// 参数<1>：hExDuiOrhObj
//======================================================
extern "C" int Ex_ObjGetFocus (int hExDuiOrhObj);

//======================================================
// 函数名称：Ex_ObjSetFocus
// 返回类型：逻辑型
// 函数说明：设置组件焦点
// 参数<1>：hObj
//======================================================
extern "C" BOOL Ex_ObjSetFocus (int hObj);

//======================================================
// 函数名称：Ex_ObjKillFocus
// 返回类型：逻辑型
// 函数说明：销毁组件焦点
// 参数<1>：hObj
//======================================================
extern "C" BOOL Ex_ObjKillFocus (int hObj);

//======================================================
// 函数名称：Ex_ObjGetProp
// 返回类型：整数型
// 函数说明：获取属性
// 参数<1>：hObj
// 参数<2>：dwKey
//======================================================
extern "C" int Ex_ObjGetProp (int hObj,int dwKey);

//======================================================
// 函数名称：Ex_ObjSetProp
// 返回类型：整数型
// 函数说明：设置组件属性条目
// 参数<1>：hObj
// 参数<2>：dwKey
// 参数<3>：dwValue
//======================================================
extern "C" int Ex_ObjSetProp (int hObj,int dwKey,int dwValue);

//======================================================
// 函数名称：Ex_ObjRemoveProp
// 返回类型：整数型
// 函数说明：移除属性
// 参数<1>：hObj
// 参数<2>：dwKey
//======================================================
extern "C" int Ex_ObjRemoveProp (int hObj,int dwKey);

//======================================================
// 函数名称：Ex_ObjEnumProps
// 返回类型：整数型
// 函数说明：返回个数.枚举属性表
// 参数<1>：hObj
// 参数<2>：lpfnCbk，bool enum(hObj,dwKey,dwValue,param)
// 参数<3>：param
//======================================================
extern "C" int Ex_ObjEnumProps (int hObj,int lpfnCbk,int param);

//======================================================
// 函数名称：Ex_ObjInitPropList
// 返回类型：逻辑型
// 函数说明：要注意每次初始化都会清空之前存储的内容,若存储的是指针需要自己先行释放
// 参数<1>：hObj
// 参数<2>：nPropCount，-1为哈希表模式,0为不存储属性,正数为属性个数(每个4字节)
//======================================================
extern "C" BOOL Ex_ObjInitPropList (int hObj,int nPropCount);

//======================================================
// 函数名称：Ex_ObjMove
// 返回类型：逻辑型
// 函数说明：移动组件
// 参数<1>：hObj
// 参数<2>：x
// 参数<3>：y
// 参数<4>：width
// 参数<5>：height
// 参数<6>：bRepaint
//======================================================
extern "C" BOOL Ex_ObjMove (int hObj,int x,int y,int width,int height,BOOL bRepaint);

//======================================================
// 函数名称：Ex_ObjSetUIState
// 返回类型：逻辑型
// 函数说明：设置组件状态,用于更新组件界面显示状态
// 参数<1>：hObj
// 参数<2>：dwState
// 参数<3>：fRemove
// 参数<4>：lprcRedraw
// 参数<5>：fRedraw
//======================================================
extern "C" BOOL Ex_ObjSetUIState (int hObj,int dwState,BOOL fRemove,int lprcRedraw,BOOL fRedraw);

//======================================================
// 函数名称：Ex_ObjGetUIState
// 返回类型：整数型
// 函数说明：获取组件状态
// 参数<1>：hObj
//======================================================
extern "C" int Ex_ObjGetUIState (int hObj);

//======================================================
// 函数名称：Ex_ObjLoadFromLayout
// 返回类型：逻辑型
// 函数说明：加载XML布局
// 参数<1>：handle，窗口句柄/引擎句柄/组件句柄
// 参数<2>：hRes，资源句柄.(值可为0)
// 参数<3>：lpLayout，布局资源指针
// 参数<4>：cbLayout，布局资源长度
//======================================================
extern "C" BOOL Ex_ObjLoadFromLayout (int handle,int hRes,int lpLayout,int cbLayout);

//======================================================
// 函数名称：Ex_ObjGetFromNodeID
// 返回类型：整数型
// 参数<1>：hExDUIOrObj
// 参数<2>：nNodeID
//======================================================
extern "C" int Ex_ObjGetFromNodeID (int hExDUIOrObj,int nNodeID);

//======================================================
// 函数名称：Ex_ObjGetRectEx
// 返回类型：逻辑型
// 参数<1>：hObj
// 参数<2>：lpRect
// 参数<3>：nType
//======================================================
extern "C" BOOL Ex_ObjGetRectEx (int hObj,int lpRect,int nType);

//======================================================
// 函数名称：Ex_ObjPointTransform
// 返回类型：无返回值
// 参数<1>：hObjSrc
// 参数<2>：hObjDst，0为所属窗口
// 参数<3>：ptX，in/out
// 参数<4>：ptY，in/out
//======================================================
extern "C" void Ex_ObjPointTransform (int hObjSrc,int hObjDst,int ptX,int ptY);

//======================================================
// 函数名称：Ex_ObjEnableEventBubble
// 返回类型：逻辑型
// 函数说明：设置该控件是否启用事件冒泡
// 参数<1>：hObj
// 参数<2>：fEnable
//======================================================
extern "C" BOOL Ex_ObjEnableEventBubble (int hObj,BOOL fEnable);

//======================================================
// 函数名称：Ex_ObjGetClassInfo
// 返回类型：逻辑型
// 函数说明：获取组件类信息
// 参数<1>：hObj
// 参数<2>：lpClassInfo，相关结构 EX_CLASSINFO
//======================================================
extern "C" BOOL Ex_ObjGetClassInfo (int hObj,int lpClassInfo);

//======================================================
// 函数名称：Ex_ObjGetClassInfoEx
// 返回类型：逻辑型
// 函数说明：通过类名/类ATOM获取类信息
// 参数<1>：wzClassName，wzClassName/AtomClassName
// 参数<2>：lpClassInfo，相关结构 EX_CLASSINFO
//======================================================
extern "C" BOOL Ex_ObjGetClassInfoEx (int wzClassName,int lpClassInfo);

//======================================================
// 函数名称：_img_destroy
// 返回类型：整数型
// 函数说明：销毁图像
// 参数<1>：hImg
//======================================================
extern "C" int _img_destroy (int hImg);

//======================================================
// 函数名称：_img_create
// 返回类型：整数型
// 函数说明：创建图像。成功返回0。
// 参数<1>：width，图像宽度
// 参数<2>：height，图像高度
// 参数<3>：hImg，返回图像指针
//======================================================
extern "C" int _img_create (int width,int height,int hImg);

//======================================================
// 函数名称：_img_createfromres
// 返回类型：整数型
// 函数说明：创建图像自资源包。成功返回0。
// 参数<1>：hRes
// 参数<2>：atomPath
// 参数<3>：hImg，返回图像指针
//======================================================
extern "C" int _img_createfromres (int hRes,int atomPath,int hImg);

//======================================================
// 函数名称：_img_createfromhbitmap
// 返回类型：整数型
// 函数说明：创建自GDI位图句柄。成功返回0。
// 参数<1>：hBitmap
// 参数<2>：hPalette
// 参数<3>：fPreAlpha，是否预乘透明通道
// 参数<4>：hImg，返回图像指针
//======================================================
extern "C" int _img_createfromhbitmap (int hBitmap,int hPalette,BOOL fPreAlpha,int hImg);

//======================================================
// 函数名称：_img_createfromhicon
// 返回类型：整数型
// 函数说明：创建自图标句柄。成功返回0。
// 参数<1>：hIcon
// 参数<2>：hImg，返回图像指针
//======================================================
extern "C" int _img_createfromhicon (int hIcon,int hImg);

//======================================================
// 函数名称：_img_createfrommemory
// 返回类型：整数型
// 函数说明：创建自内存。成功返回0。
// 参数<1>：lpData，图像指针
// 参数<2>：dwLen，图像长度
// 参数<3>：hImg，返回图像指针
//======================================================
extern "C" int _img_createfrommemory (int lpData,int dwLen,int hImg);

//======================================================
// 函数名称：_img_createfromstream
// 返回类型：整数型
// 函数说明：创建自字节流。成功返回0。
// 参数<1>：lpStream
// 参数<2>：hImg，返回图像指针
//======================================================
extern "C" int _img_createfromstream (int lpStream,int hImg);

//======================================================
// 函数名称：_img_createfromcanvas
// 返回类型：整数型
// 函数说明：(拷贝)创建自画布。成功返回0。
// 参数<1>：hCanvas
// 参数<2>：hImg，返回图像指针
//======================================================
extern "C" int _img_createfromcanvas (int hCanvas,int hImg);

//======================================================
// 函数名称：_img_createfromfile
// 返回类型：整数型
// 函数说明：创建自文件。成功返回0。
// 参数<1>：lpwzFilename
// 参数<2>：hImg，返回图像指针
//======================================================
extern "C" int _img_createfromfile (int lpwzFilename,int hImg);

//======================================================
// 函数名称：_img_lock
// 返回类型：整数型
// 函数说明：锁定图像.成功返回0.
// 参数<1>：hImg
// 参数<2>：lpRectL，锁定矩形指针，如果为0，则锁定整张图像。
// 参数<3>：flags，READ:1 / WRITE:2 / READ&WRITE:3
// 参数<4>：PixelFormat
// 参数<5>：lpLockedBitmapData，BITMAPDATA
//======================================================
extern "C" int _img_lock (int hImg,int lpRectL,int flags,int PixelFormat,int lpLockedBitmapData);

//======================================================
// 函数名称：_img_unlock
// 返回类型：整数型
// 函数说明：解锁图像.成功返回0.
// 参数<1>：hImg
// 参数<2>：lpLockedBitmapData
//======================================================
extern "C" int _img_unlock (int hImg,int lpLockedBitmapData);

//======================================================
// 函数名称：_img_getframedelay
// 返回类型：整数型
// 函数说明：取图像帧延时。成功返回0。
// 参数<1>：hImg
// 参数<2>：lpDelayAry，指针指向图像帧延时数组。
// 参数<3>：nFrames，返回总帧数
//======================================================
extern "C" int _img_getframedelay (int hImg,int lpDelayAry,int nFrames);

//======================================================
// 函数名称：_img_getframecount
// 返回类型：整数型
// 函数说明：取图像帧数。成功返回0。
// 参数<1>：hImg
// 参数<2>：nFrameCount，返回帧数.
//======================================================
extern "C" int _img_getframecount (int hImg,int nFrameCount);

//======================================================
// 函数名称：_img_selectactiveframe
// 返回类型：整数型
// 函数说明：设置当前活动帧。成功返回0。
// 参数<1>：hImg
// 参数<2>：nIndex
//======================================================
extern "C" int _img_selectactiveframe (int hImg,int nIndex);

//======================================================
// 函数名称：_img_getpixel
// 返回类型：整数型
// 函数说明：获取点像素,成功返回0
// 参数<1>：hImg
// 参数<2>：x
// 参数<3>：y
// 参数<4>：color，返回ARGB颜色
//======================================================
extern "C" int _img_getpixel (int hImg,int x,int y,int color);

//======================================================
// 函数名称：_img_setpixel
// 返回类型：整数型
// 函数说明：设置点像素.成功返回0
// 参数<1>：hImg
// 参数<2>：x
// 参数<3>：y
// 参数<4>：color，argb
//======================================================
extern "C" int _img_setpixel (int hImg,int x,int y,int color);

//======================================================
// 函数名称：_img_getsize
// 返回类型：整数型
// 函数说明：获取图像尺寸.成功返回0
// 参数<1>：hImg
// 参数<2>：lpWidth
// 参数<3>：lpHeight
//======================================================
extern "C" int _img_getsize (int hImg,int lpWidth,int lpHeight);

//======================================================
// 函数名称：_img_width
// 返回类型：整数型
// 函数说明：返回宽度
// 参数<1>：hImg
//======================================================
extern "C" int _img_width (int hImg);

//======================================================
// 函数名称：_img_height
// 返回类型：整数型
// 函数说明：返回高度
// 参数<1>：hImg
//======================================================
extern "C" int _img_height (int hImg);

//======================================================
// 函数名称：_img_copy
// 返回类型：整数型
// 函数说明：复制图像.成功返回0
// 参数<1>：hImg
// 参数<2>：dstImg，返回新图像指针
//======================================================
extern "C" int _img_copy (int hImg,int dstImg);

//======================================================
// 函数名称：_img_copyrect
// 返回类型：整数型
// 函数说明：复制部分图像.成功返回0
// 参数<1>：hImg
// 参数<2>：x
// 参数<3>：y
// 参数<4>：width
// 参数<5>：height
// 参数<6>：dstImg，返回新图像指针
//======================================================
extern "C" int _img_copyrect (int hImg,int x,int y,int width,int height,int dstImg);

//======================================================
// 函数名称：_img_scale
// 返回类型：整数型
// 函数说明：缩放图像.成功返回0
// 参数<1>：hImage
// 参数<2>：dstWidth
// 参数<3>：dstHeight
// 参数<4>：dstImg，返回新图像
//======================================================
extern "C" int _img_scale (int hImage,int dstWidth,int dstHeight,int dstImg);

//======================================================
// 函数名称：_img_rotateflip
// 返回类型：整数型
// 函数说明：旋转翻转图像.成功返回0
// 参数<1>：hImg
// 参数<2>：rfType
//======================================================
extern "C" int _img_rotateflip (int hImg,int rfType);

//======================================================
// 函数名称：_img_getthumbnail
// 返回类型：整数型
// 函数说明：取缩略图.成功返回0
// 参数<1>：hImg
// 参数<2>：thumbWidth
// 参数<3>：thumbHeight
// 参数<4>：hImgThumbnail，返回缩略图图像指针
//======================================================
extern "C" int _img_getthumbnail (int hImg,int thumbWidth,int thumbHeight,int hImgThumbnail);

//======================================================
// 函数名称：_font_copy
// 返回类型：整数型
// 参数<1>：hFont
//======================================================
extern "C" int _font_copy (int hFont);

//======================================================
// 函数名称：_font_destroy
// 返回类型：逻辑型
// 参数<1>：hFont
//======================================================
extern "C" BOOL _font_destroy (int hFont);

//======================================================
// 函数名称：_font_create
// 返回类型：整数型
// 函数说明：创建默认字体
//======================================================
extern "C" int _font_create ();

//======================================================
// 函数名称：_font_createfromfamily
// 返回类型：整数型
// 参数<1>：lpwzFontFace
// 参数<2>：dwFontSize
// 参数<3>：dwFontStyle
//======================================================
extern "C" int _font_createfromfamily (int lpwzFontFace,int dwFontSize,int dwFontStyle);

//======================================================
// 函数名称：_font_createfromlogfont
// 返回类型：整数型
// 参数<1>：lpLogfont
//======================================================
extern "C" int _font_createfromlogfont (int lpLogfont);

//======================================================
// 函数名称：_font_getlogfont
// 返回类型：逻辑型
// 函数说明：获取逻辑字体
// 参数<1>：hFont
// 参数<2>：lpLogFont
//======================================================
extern "C" BOOL _font_getlogfont (int hFont,int lpLogFont);

//======================================================
// 函数名称：_font_getcontext
// 返回类型：整数型
// 参数<1>：hFont
//======================================================
extern "C" int _font_getcontext (int hFont);

//======================================================
// 函数名称：_matrix_create
// 返回类型：整数型
//======================================================
extern "C" int _matrix_create ();

//======================================================
// 函数名称：_matrix_create3d
// 返回类型：整数型
//======================================================
extern "C" int _matrix_create3d ();

//======================================================
// 函数名称：_matrix_destroy
// 返回类型：逻辑型
// 参数<1>：pMatrix
//======================================================
extern "C" BOOL _matrix_destroy (int pMatrix);

//======================================================
// 函数名称：_matrix_reset
// 返回类型：逻辑型
// 参数<1>：pMatrix
//======================================================
extern "C" BOOL _matrix_reset (int pMatrix);

//======================================================
// 函数名称：_matrix_translate
// 返回类型：逻辑型
// 参数<1>：pMatrix
// 参数<2>：offsetX
// 参数<3>：offsetY
//======================================================
extern "C" BOOL _matrix_translate (int pMatrix,float offsetX,float offsetY);

//======================================================
// 函数名称：_matrix_rotate
// 返回类型：逻辑型
// 参数<1>：pMatrix
// 参数<2>：fAngle
//======================================================
extern "C" BOOL _matrix_rotate (int pMatrix,float fAngle);

//======================================================
// 函数名称：_matrix_scale
// 返回类型：逻辑型
// 参数<1>：pMatrix
// 参数<2>：scaleX
// 参数<3>：scaleY
//======================================================
extern "C" BOOL _matrix_scale (int pMatrix,float scaleX,float scaleY);

//======================================================
// 函数名称：_matrix_reset3d
// 返回类型：逻辑型
// 参数<1>：pMatrix
//======================================================
extern "C" BOOL _matrix_reset3d (int pMatrix);

//======================================================
// 函数名称：_matrix_translate3d
// 返回类型：逻辑型
// 参数<1>：pMatrix
// 参数<2>：offsetX
// 参数<3>：offsetY
// 参数<4>：offsetZ
//======================================================
extern "C" BOOL _matrix_translate3d (int pMatrix,float offsetX,float offsetY,float offsetZ);

//======================================================
// 函数名称：_matrix_rotate3d
// 返回类型：逻辑型
// 参数<1>：pMatrix
// 参数<2>：x
// 参数<3>：y
// 参数<4>：z
// 参数<5>：fAngle
//======================================================
extern "C" BOOL _matrix_rotate3d (int pMatrix,float x,float y,float z,float fAngle);

//======================================================
// 函数名称：_matrix_scale3d
// 返回类型：逻辑型
// 参数<1>：pMatrix
// 参数<2>：scaleX
// 参数<3>：scaleY
// 参数<4>：scaleZ
//======================================================
extern "C" BOOL _matrix_scale3d (int pMatrix,float scaleX,float scaleY,float scaleZ);

//======================================================
// 函数名称：_brush_create
// 返回类型：整数型
// 参数<1>：argb
//======================================================
extern "C" int _brush_create (int argb);

//======================================================
// 函数名称：_brush_destroy
// 返回类型：整数型
// 参数<1>：hBrush
//======================================================
extern "C" int _brush_destroy (int hBrush);

//======================================================
// 函数名称：_brush_setcolor
// 返回类型：整数型
// 参数<1>：hBrush
// 参数<2>：argb
//======================================================
extern "C" int _brush_setcolor (int hBrush,int argb);

//======================================================
// 函数名称：_brush_createfromimg
// 返回类型：整数型
// 参数<1>：hImg
//======================================================
extern "C" int _brush_createfromimg (int hImg);

//======================================================
// 函数名称：_brush_createfromcanvas
// 返回类型：整数型
// 参数<1>：hCanvas
//======================================================
extern "C" int _brush_createfromcanvas (int hCanvas);

//======================================================
// 函数名称：_brush_settransform
// 返回类型：整数型
// 参数<1>：hBrush
// 参数<2>：matrix
//======================================================
extern "C" int _brush_settransform (int hBrush,int matrix);

//======================================================
// 函数名称：_path_destroy
// 返回类型：整数型
// 函数说明：销毁路径
// 参数<1>：hPath
//======================================================
extern "C" int _path_destroy (int hPath);

//======================================================
// 函数名称：_path_create
// 返回类型：整数型
// 函数说明：创建路径
// 参数<1>：brushmode
// 参数<2>：dwFlags，EPF_
// 参数<3>：hPath
//======================================================
extern "C" int _path_create (int brushmode,int dwFlags,int hPath);

//======================================================
// 函数名称：_path_reset
// 返回类型：整数型
// 函数说明：重置路径
// 参数<1>：hPath
//======================================================
extern "C" int _path_reset (int hPath);

//======================================================
// 函数名称：_path_getbounds
// 返回类型：整数型
// 函数说明：取路径边界矩形
// 参数<1>：hPath
// 参数<2>：lpBounds，RECTF
//======================================================
extern "C" int _path_getbounds (int hPath,int lpBounds);

//======================================================
// 函数名称：_path_open
// 返回类型：整数型
// 函数说明：打开路径
// 参数<1>：hPath
//======================================================
extern "C" int _path_open (int hPath);

//======================================================
// 函数名称：_path_close
// 返回类型：整数型
// 函数说明：关闭路径
// 参数<1>：hPath
//======================================================
extern "C" int _path_close (int hPath);

//======================================================
// 函数名称：_path_beginfigure
// 返回类型：整数型
// 函数说明：开始新图形
// 参数<1>：hPath
//======================================================
extern "C" int _path_beginfigure (int hPath);

//======================================================
// 函数名称：_path_endfigure
// 返回类型：整数型
// 函数说明：结束当前图形
// 参数<1>：hPath
// 参数<2>：fCloseFigure，是否需要闭合图形
//======================================================
extern "C" int _path_endfigure (int hPath,BOOL fCloseFigure);

//======================================================
// 函数名称：_path_hittest
// 返回类型：逻辑型
// 函数说明：测试坐标是否在可见路径内
// 参数<1>：hPath
// 参数<2>：x
// 参数<3>：y
//======================================================
extern "C" BOOL _path_hittest (int hPath,float x,float y);

//======================================================
// 函数名称：_path_addline
// 返回类型：整数型
// 函数说明：添加线
// 参数<1>：hPath
// 参数<2>：x1
// 参数<3>：y1
// 参数<4>：x2
// 参数<5>：y2
//======================================================
extern "C" int _path_addline (int hPath,float x1,float y1,float x2,float y2);

//======================================================
// 函数名称：_path_addarc
// 返回类型：整数型
// 函数说明：添加弧
// 参数<1>：hPath
// 参数<2>：x1，起始坐标X
// 参数<3>：y1，起始坐标Y
// 参数<4>：x2，终点坐标X
// 参数<5>：y2，终点坐标Y
// 参数<6>：radiusX，半径X
// 参数<7>：radiusY，半径Y
// 参数<8>：fClockwise，是否顺时针
//======================================================
extern "C" int _path_addarc (int hPath,float x1,float y1,float x2,float y2,float radiusX,float radiusY,BOOL fClockwise);

//======================================================
// 函数名称：_path_addrect
// 返回类型：整数型
// 函数说明：添加矩形
// 参数<1>：hPath
// 参数<2>：left
// 参数<3>：top
// 参数<4>：right
// 参数<5>：bottom
//======================================================
extern "C" int _path_addrect (int hPath,float left,float top,float right,float bottom);

//======================================================
// 函数名称：_path_addroundedrect
// 返回类型：整数型
// 函数说明：添加圆角矩形
// 参数<1>：hPath
// 参数<2>：left
// 参数<3>：top
// 参数<4>：right
// 参数<5>：bottom
// 参数<6>：radiusTopLeft
// 参数<7>：radiusTopRight
// 参数<8>：radiusBottomLeft
// 参数<9>：radiusBottomRight
// 参数<10>：unit
//======================================================
extern "C" int _path_addroundedrect (int hPath,float left,float top,float right,float bottom,float radiusTopLeft,float radiusTopRight,float radiusBottomLeft,float radiusBottomRight,int unit);

//======================================================
// 函数名称：_rgn_destroy
// 返回类型：逻辑型
// 参数<1>：hRgn
//======================================================
extern "C" BOOL _rgn_destroy (int hRgn);

//======================================================
// 函数名称：_rgn_createfromrect
// 返回类型：整数型
// 参数<1>：left
// 参数<2>：top
// 参数<3>：right
// 参数<4>：bottom
//======================================================
extern "C" int _rgn_createfromrect (float left,float top,float right,float bottom);

//======================================================
// 函数名称：_rgn_createfromroundrect
// 返回类型：整数型
// 参数<1>：left
// 参数<2>：top
// 参数<3>：right
// 参数<4>：bottom
// 参数<5>：radiusX
// 参数<6>：radiusY
//======================================================
extern "C" int _rgn_createfromroundrect (float left,float top,float right,float bottom,float radiusX,float radiusY);

//======================================================
// 函数名称：_rgn_combine
// 返回类型：整数型
// 参数<1>：hRgnSrc
// 参数<2>：hRgnDst
// 参数<3>：nCombineMode，#RGN_COMBINE_
// 参数<4>：dstOffsetX
// 参数<5>：dstOffsetY
//======================================================
extern "C" int _rgn_combine (int hRgnSrc,int hRgnDst,int nCombineMode,int dstOffsetX,int dstOffsetY);

//======================================================
// 函数名称：_rgn_hittest
// 返回类型：逻辑型
// 参数<1>：hRgn
// 参数<2>：x
// 参数<3>：y
//======================================================
extern "C" BOOL _rgn_hittest (int hRgn,float x,float y);

//======================================================
// 函数名称：Ex_ObjScrollGetControl
// 返回类型：整数型
// 函数说明：获取滚动条句柄
// 参数<1>：hObj
// 参数<2>：nBar，相关常量 #SB_
//======================================================
extern "C" int Ex_ObjScrollGetControl (int hObj,int nBar);

//======================================================
// 函数名称：Ex_ObjScrollSetInfo
// 返回类型：整数型
// 函数说明：设置滚动条信息
// 参数<1>：hObj
// 参数<2>：fnBar，SB_
// 参数<3>：fMask，SIF_
// 参数<4>：nMin
// 参数<5>：nMax
// 参数<6>：nPage
// 参数<7>：nPos
// 参数<8>：fRedraw
//======================================================
extern "C" int Ex_ObjScrollSetInfo (int hObj,int fnBar,int fMask,int nMin,int nMax,int nPage,int nPos,BOOL fRedraw);

//======================================================
// 函数名称：Ex_ObjScrollSetRange
// 返回类型：逻辑型
// 函数说明：设置滚动条范围
// 参数<1>：hObj
// 参数<2>：nBar，SB_
// 参数<3>：nMin
// 参数<4>：nMax
// 参数<5>：bRedraw
//======================================================
extern "C" BOOL Ex_ObjScrollSetRange (int hObj,int nBar,int nMin,int nMax,BOOL bRedraw);

//======================================================
// 函数名称：Ex_ObjScrollSetPos
// 返回类型：整数型
// 函数说明：设置滚动条位置
// 参数<1>：hObj
// 参数<2>：nBar，SB_
// 参数<3>：nPos
// 参数<4>：bRedraw
//======================================================
extern "C" int Ex_ObjScrollSetPos (int hObj,int nBar,int nPos,BOOL bRedraw);

//======================================================
// 函数名称：Ex_ObjScrollGetInfo
// 返回类型：逻辑型
// 函数说明：获取滚动条信息
// 参数<1>：hObj
// 参数<2>：fnBar
// 参数<3>：lpnMin
// 参数<4>：lpnMax
// 参数<5>：lpnPos
// 参数<6>：lpnTrackPos
//======================================================
extern "C" BOOL Ex_ObjScrollGetInfo (int hObj,int fnBar,int lpnMin,int lpnMax,int lpnPos,int lpnTrackPos);

//======================================================
// 函数名称：Ex_ObjScrollGetPos
// 返回类型：整数型
// 函数说明：获取滚动条位置
// 参数<1>：hObj
// 参数<2>：nBar
//======================================================
extern "C" int Ex_ObjScrollGetPos (int hObj,int nBar);

//======================================================
// 函数名称：Ex_ObjScrollGetTrackPos
// 返回类型：整数型
// 函数说明：获取滚动条拖动位置
// 参数<1>：hObj
// 参数<2>：nBar
//======================================================
extern "C" int Ex_ObjScrollGetTrackPos (int hObj,int nBar);

//======================================================
// 函数名称：Ex_ObjScrollGetRange
// 返回类型：逻辑型
// 函数说明：获取滚动条范围
// 参数<1>：hObj
// 参数<2>：nBar
// 参数<3>：lpnMinPos
// 参数<4>：lpnMaxPos
//======================================================
extern "C" BOOL Ex_ObjScrollGetRange (int hObj,int nBar,int lpnMinPos,int lpnMaxPos);

//======================================================
// 函数名称：Ex_ObjScrollShow
// 返回类型：逻辑型
// 函数说明：显示/隐藏滚动条
// 参数<1>：hObj
// 参数<2>：wBar，支持SB_BOTH
// 参数<3>：fShow
//======================================================
extern "C" BOOL Ex_ObjScrollShow (int hObj,int wBar,BOOL fShow);

//======================================================
// 函数名称：Ex_ObjScrollEnable
// 返回类型：逻辑型
// 函数说明：禁用/启用滚动条
// 参数<1>：hObj
// 参数<2>：wSB，支持SB_BOTH
// 参数<3>：wArrows，相关常量 ESB_
//======================================================
extern "C" BOOL Ex_ObjScrollEnable (int hObj,int wSB,int wArrows);

//======================================================
// 函数名称：_easing_curve_load
// 返回类型：整数型
// 参数<1>：lpCurveInfo
// 参数<2>：cbCurveInfo
//======================================================
extern "C" int _easing_curve_load (int lpCurveInfo,int cbCurveInfo);

//======================================================
// 函数名称：_easing_curve_free
// 返回类型：无返回值
// 参数<1>：pCurveInfo
//======================================================
extern "C" void _easing_curve_free (int pCurveInfo);

//======================================================
// 函数名称：_easing_create
// 返回类型：整数型
// 参数<1>：dwType，#缓动类型_
// 参数<2>：pEasingContext
// 参数<3>：dwMode，#缓动模式_ 的组合
// 参数<4>：pContext
// 参数<5>：nTotalTime，ms
// 参数<6>：nInterval，ms
// 参数<7>：nState，#EES_
// 参数<8>：nStart
// 参数<9>：nStop
// 参数<10>：param1
// 参数<11>：param2
// 参数<12>：param3
// 参数<13>：param4
//======================================================
extern "C" int _easing_create (int dwType,int pEasingContext,int dwMode,int pContext,int nTotalTime,int nInterval,int nState,int nStart,int nStop,int param1,int param2,int param3,int param4);

//======================================================
// 函数名称：_easing_setstate
// 返回类型：逻辑型
// 参数<1>：pEasing
// 参数<2>：nState，#EES_
//======================================================
extern "C" BOOL _easing_setstate (int pEasing,int nState);

//======================================================
// 函数名称：_easing_getstate
// 返回类型：整数型
// 参数<1>：pEasing
//======================================================
extern "C" int _easing_getstate (int pEasing);

//======================================================
// 函数名称：_imglist_draw
// 返回类型：逻辑型
// 参数<1>：hImageList
// 参数<2>：nIndex
// 参数<3>：hCanvas
// 参数<4>：nLeft
// 参数<5>：nTop
// 参数<6>：nRight
// 参数<7>：nBottom
// 参数<8>：nAlpha
//======================================================
extern "C" BOOL _imglist_draw (int hImageList,int nIndex,int hCanvas,int nLeft,int nTop,int nRight,int nBottom,int nAlpha);

//======================================================
// 函数名称：_imglist_count
// 返回类型：整数型
// 参数<1>：hImageList
//======================================================
extern "C" int _imglist_count (int hImageList);

//======================================================
// 函数名称：Ex_ObjEnableIME
// 返回类型：逻辑型
// 参数<1>：hObj
// 参数<2>：fEnable
//======================================================
extern "C" BOOL Ex_ObjEnableIME (int hObj,BOOL fEnable);

//======================================================
// 函数名称：Ex_ObjSetIMEState
// 返回类型：逻辑型
// 参数<1>：hObjOrExDui
// 参数<2>：fOpen
//======================================================
extern "C" BOOL Ex_ObjSetIMEState (int hObjOrExDui,BOOL fOpen);

//======================================================
// 函数名称：Ex_ObjDisableTranslateSpaceAndEnterToClick
// 返回类型：逻辑型
// 参数<1>：hObj
// 参数<2>：fDisable
//======================================================
extern "C" BOOL Ex_ObjDisableTranslateSpaceAndEnterToClick (int hObj,BOOL fDisable);

