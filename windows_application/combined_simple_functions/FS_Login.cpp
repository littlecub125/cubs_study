//---------------------------------------------------------------------------

#include <vcl.h>
#include <inifiles.hpp>
#pragma hdrstop

#include "FS_Login.h"
#include "FS_Login_Info.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TF_Login *F_Login;
//---------------------------------------------------------------------------
__fastcall TF_Login::TF_Login(TComponent* Owner)
    : TForm(Owner)
{


}
//---------------------------------------------------------------------------
#define COL_COUNT   3
#define ROW_COUNT   4
void __fastcall TF_Login::Login_trialClick(TObject *Sender)
{
    /*
    for (int nRow = 0; nRow < ROW_COUNT; nRow++)
    {
        if (Login_ID->Text==datas[1][nRow] && Login_PW->Text==datas[2][nRow])
        {
            ShowMessage("You are "+ datas[0][nRow]);

        }
    }
    */
    TIniFile *pINi;
    AnsiString strFileName;
    AnsiString strTitle;
    AnsiString strID;
    AnsiString strPW;


    strFileName = "D:\\Work\\Project1_login_data.set";
    pINi = new TIniFile(strFileName);

    strTitle="Senior";
    for (int nRow = 0; nRow < ROW_COUNT; nRow++)
    {
        strID = pINi->ReadString(strTitle, "ID", 0);
        strPW = pINi->ReadString(strTitle, "PW", 0);

        if (Login_ID->Text==strID && Login_PW->Text==strPW)
        {
            ShowMessage("You are "+strTitle);
            break;
        }
    }
    strTitle="Manager";
    for (int nRow = 0; nRow < ROW_COUNT; nRow++)
    {
        strID = pINi->ReadString(strTitle, "ID", 0);
        strPW = pINi->ReadString(strTitle, "PW", 0);

        if (Login_ID->Text==strID && Login_PW->Text==strPW)
        {
            ShowMessage("You are "+strTitle);
            break;
        }
    }
    strTitle="Junior";
    for (int nRow = 0; nRow < ROW_COUNT; nRow++)
    {
        strID = pINi->ReadString(strTitle, "ID", 0);
        strPW = pINi->ReadString(strTitle, "PW", 0);

        if (Login_ID->Text==strID && Login_PW->Text==strPW)
        {
            ShowMessage("You are "+strTitle);
            break;
        }
    }
    strTitle="Customer";
    for (int nRow = 0; nRow < ROW_COUNT; nRow++)
    {
        strID = pINi->ReadString(strTitle, "ID", 0);
        strPW = pINi->ReadString(strTitle, "PW", 0);

        if (Login_ID->Text==strID && Login_PW->Text==strPW)
        {
            ShowMessage("You are "+strTitle);
            break;
        }
    }


}
//---------------------------------------------------------------------------

