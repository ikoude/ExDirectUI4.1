function OnRememberMeChecked(oEvent)
{
    var oAL = DUI.getObjFromID(102);
    if(oEvent.check == false && oAL.check == true)
    {
        oAL.check = false;
    }
}

function OnAutoLoginChecked(oEvent)
{
    var oRM = DUI.getObjFromID(101);
    if(oEvent.check == true && oRM.check == false)
    {
        oRM.check = true;
    }
}

function OnLoginBtnClick(oEvent)
{
    var oEditUser = DUI.getObjFromID(233);
    var oEditPwd = DUI.getObjFromID(234);

    DUI.alert($.I18N("S_MSG_LOGIN_TITLE") + "\n" + $.I18N("S_MSG_LOGIN_NAME_IS") + oEditUser.text +"\n" + $.I18N("S_MSG_LOGIN_PWD_IS") + oEditPwd.text);

}