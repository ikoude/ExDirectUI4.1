//配合1.xml使用,GBK编码

/*

    全局对象($.)相关方法/属性：
        low(n):返回n的低16位
        high(n):返回n的高16位
        dword(a,b):返回由a为低位,b为高位组合成的一个32位数
        alert(text[,ico]):弹出系统消息框
        debug(...):输出调试
        i18n(id):多语言转换,返回转换后的内容
        flags:引擎全局属性
        hInstance:全局实例句柄
        lastError:最后错误码        
        isDxRender:获取当前是否使用D2D引擎
        toObject(hObjOrDUIOrHWND):从控件句柄/窗口句柄/皮肤句柄获取对应的JS对象
        RGB(R,G,B):由R,G,B分量生成RGB颜色值
        ARGB(R,G,B[,A]):由R,G,B,A分量生成ARGB颜色
        color(s):将s代表的颜色转换成对应的ARGB颜色值,s的格式见xml中的颜色属性填写格式
        mFree(p):释放p指向的内存
        mSize(p):取p指向内存块尺寸
        mValidate(p,s):检查p指向内存的s字节是否有效

        //以下功能需要在引擎初始化时指定 EXGF_JS_MEMORY 才可使用
        mRead(p,d[,c]):从p指针位置读入c个字节到d中(d是一个JS byte[],需要预分配好足够缓冲,c不填则为d的大小)
        mWrite(p,d[,c]):将d写入c个字节至p指向的内存位置(d是一个JS byte[],c不填则为d的大小)
        mGet(p,t[,len]):从p读入一个t类型对象(t为VT_XX开头的常量,部分类型需要填写len)
        mSet(p,o[,t]):将o对象以t类型写入p指向的内存(t为VT_XX常量,若不填写则为自动识别o的类型)
        mZero(p,c):将p指向内存后c字节清零
        mFill(p,c,d):将p指向内存后c字节填充为d(d为一个字节)
        mCopy(d,s,c):将s指向内存向d指向内存拷贝c字节
        mAlloc(c):申请c个字节的内存,注意使用完毕后及时用mFree释放

        //以下功能需要在引擎初始化时指定 EXGF_JS_FILE 才可使用
        fOpen(file[,mode,share]):打开文件,返回文件句柄
        fClose(hFile):关闭文件
        fSeek(hFile):移动读写位置
        fTell(hFile):取当前读写位置
        fEof(hFile[,textmode]):判断是否在文件尾
        fRead(hFile,length):读入字节集,注意返回值使用完后需要调用mFree释放
        fWrite(hFile,data):写出字节集,data 支持JS byte[]和 内存指针
        fPrint(hFile,text ...):写出文本(注意是宽文本)
        fGetS(hFile):读入文本(宽文本)
        fReadBytes(file):读入整个文件,注意返回值使用完后需要调用mFree释放
        fWriteBytes(file,data):写出整个文件,data 支持JS byte[]和 内存指针
        fSize(hFileOrFileName):取文件尺寸(参数支持文件句柄或文件名)
        fDel(file):删除文件
        fCopy(src,dst[,notover]):复制文件
        fMove(src,dst[,notover]):移动文件

        //以下功能需要在引擎初始化时指定 EXGF_JS_PROCESS 才可使用
        cmd(text[,wait,show]):运行,wait为是否等待执行完毕后返回,show为窗口显示模式
        exec(path[,cmd,opt,show,dir]):执行
        run(path[,cmd]):创建进程
        dLoad(path):加载DLL
        dFree(hMod):释放DLL
        dProc(hMod,func):获取DLL函数指针
        call(func,...):调用函数
        API(dll,func,...):调用API


    皮肤窗口(DUI.)对象相关方法/属性：
        validate:是否有效
        center():居中到屏幕
        getObjFromID(id):从ID获取控件对象
        getObjFromName(name):从控件名获取控件对象
        getObjFromNodeID(nid):从NodeID获取控件对象
        findObj(after,classname,text):查找控件
        move([left,top,width,height,repaint]):移动窗口,对应参数填null则为不改变
        setPos(hWndAfter,left,top,width,height,dwFlag):设置窗口位置(具体看SetWindowPos)
        show([show]):显示窗口,show为是否显示,默认true显示
        close():关闭窗口
        send(umsg[,wparam,lparam]):发送消息
        post(umsg[,wparam,lparam]):投递消息
        alert(text[,ico,flags]):弹出EX消息框
        getLong(idx):获取参数值
        setLong(idx,value):设置参数值
        setBkg([fileOrPtr,repeat,flags,alpha,x,y,pGrids,update]):设置背景图(注意pGrids需要传入一个指针)
        setBkg(bIsPlay[,reset,update]):设置背景图播放状态
        enable:窗口是否可用
        visible:窗口是否可见
        style:获取窗口风格
        exstyle:获取窗口扩展风格
        duistyle:获取窗口皮肤风格
        title:窗口标题
        left,top,width,height:窗口左顶宽高
        rect:返回窗口左顶宽高("左,顶,宽,高"的字符串)
        client:返回窗口客户区左顶宽高("左,顶,宽,高"的字符串)
        hExDui:返回皮肤句柄
        hWnd:返回窗口句柄

    控件对象相关方法/属性：
        getObjFromID(id):从ID获取控件对象
        getObjFromName(name):从控件名获取控件对象
        getObjFromNodeID(nid):从NodeID获取控件对象
        findObj(after,classname,text):查找控件
        getObj(idx):获取关联控件对象(详见 Ex_ObjGetObj)
        move([left,top,width,height,repaint]):移动窗口,对应参数填null则为不改变
        setPos(hWndAfter,left,top,width,height,dwFlag):设置窗口位置(具体看 Ex_ObjSetPos)
        show([show]):显示窗口,show为是否显示,默认true显示
        destroy():销毁控件
        getLong(idx):获取参数值
        setLong(idx,value):设置控件参数
        setBkg([fileOrPtr,repeat,flags,alpha,x,y,pGrids,update]):设置背景图(注意pGrids需要传入一个指针)
        setBkg(bIsPlay[,reset,update]):设置背景图播放状态
        setColor(idx,color):设置控件颜色(color可以使文本格式也可以是ARGB整数)
        getColor(idx):获取颜色
        setTimer(interval):开启时钟
        killTimer():关闭时钟
        setFocus():获取焦点
        killFocus():丢失焦点
        initProps(c):初始化属性列表(c为属性个数,-1为哈希表模式,0为不存储属性,正数为属性个数(每个4字节))
        Prop(key):获取属性
        Prop(key,value):设置属性(value为null则为移除属性)
        send(umsg[,wparam,lparam]):发送消息
        post(umsg[,wparam,lparam]):投递消息
        dispatch(umsg[,wparam,lparam]):分发消息
        event(type,func):绑定事件
        fireEvent(type[,wParam,lParam]):触发事件
        visible:控件是否可见
        enable:控件是否可用
        text:控件文本
        style:控件风格
        exStyle:控件扩展风格
        textFormat:控件文本格式
        hObj:返回控件句柄
        id:控件ID
        nodeID:控件NodeID
        parent:返回父控件对象
        alpha:控件透明度
        lParam:控件附加参数
        left,top,width,height:控件左顶宽高
        hue:控件的色调偏移量(0-360),仅D2D模式启用
        blur:控件背景模糊度
        state:返回控件状态
        validate:返回控件是否有效
        canDraw:控件当前是否可以绘制
        redraw():控件重画
        tooltip:控件的提示文本
        tooltip(text):弹出提示文本
        rect:返回窗口左顶宽高("左,顶,宽,高"的字符串)
        client:返回窗口客户区左顶宽高("左,顶,宽,高"的字符串)

    //控件的其他函数会分发 WM_EX_JS_DISPATCH 消息至消息回调函数

    特殊控件的js属性/函数：
        CheckButton/RadioButton:  
            check:控件是否选中(0未选中,1选中,2半选)

*/

//按钮3单击事件
function onBtn3Clicked(oEvent)
{
    //调用窗口的消息框
    DUI.alert("你点击了按钮3");

    //调用自定义对象
    我的对象.输出调试(123,123.45,"测试内容");

    //调用自定义对象,并用系统对话框弹出
    $.alert("调用 我的对象.加法(10,25) 的返回值为:" + 我的对象.加法(10,25));
}

//复选框3选择事件
function onChk3Checked(oEvent)
{
    //设置控件1001的标签可视状态
    var oStaticBlur = DUI.getObjFromID(1001);
    oStaticBlur.visible = oEvent.check;
}

//复选框4选择事件
function onChk4Checked(oEvent)
{
    //判断是否选择
    if(oEvent.check)
    {
        //设置标题,开时钟
        oEvent.text="时钟进行中";
        oEvent.setTimer(500);
        onChk4Timer(); //让它立即生效一次
    }
    else
    {
        //设置标题,关时钟
        oEvent.text="时钟停止";
        oEvent.killTimer();
    }
}

//复选框4时钟事件
function onChk4Timer(oEvent)
{
    //找ID为1000的标签
    var oStatic1 = DUI.getObjFromID(1000);
    if (oStatic1 != null)
    {
        //设置成当前时间
        var oDate = new Date();
        oStatic1.text = oDate.getHours() + ":" + oDate.getMinutes() + ":" + oDate.getSeconds();
    }

    var oListView = DUI.getObjFromID(301);
    if(oListView != null)
    {
        oListView.hue = (oListView.hue + 5) % 360;
    }
    
}

//案例,程序调用JS函数
function CodeCallJS()
{
    return DUI.alert("窗口是否允许关闭", 36) //询问|是否
}