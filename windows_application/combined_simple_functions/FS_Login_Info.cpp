//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <inifiles.hpp>
#include <stdio.h>
#include "FS_Login_Info.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TF_Login_Info *F_Login_Info;
//---------------------------------------------------------------------------
__fastcall TF_Login_Info::TF_Login_Info(TComponent* Owner)
    : TForm(Owner)
{

}
//---------------------------------------------------------------------------



void __fastcall TF_Login_Info::FormCreate(TObject *Sender)
{
    //String Grid form setting
    //column
    StringGrid1->Cells[1][0]="ID";
    StringGrid1->Cells[2][0]="PW";

    //row
    StringGrid1->Cells[0][1]="Senior";
    StringGrid1->Cells[0][2]="Manager";
    StringGrid1->Cells[0][3]="Junior";
    StringGrid1->Cells[0][4]="Customer";
    //----------------------------------------//

    //ComboBox form setting
    ComboBox1->Items->Add("Senior");
    ComboBox1->Items->Add("Manager");
    ComboBox1->Items->Add("Junior");
    ComboBox1->Items->Add("Customer");
}
//---------------------------------------------------------------------------


void __fastcall TF_Login_Info::Key_InputClick(TObject *Sender)
{

    if (ComboBox1->Text=="Senior")
    {
        StringGrid1->Cells[1][1]=ID->Text;
        StringGrid1->Cells[2][1]=PW->Text;

    }
    else if (ComboBox1->Text=="Manager")
    {
        StringGrid1->Cells[1][2]=ID->Text;
        StringGrid1->Cells[2][2]=PW->Text;

    }
    else if (ComboBox1->Text=="Junior")
    {
        StringGrid1->Cells[1][3]=ID->Text;
        StringGrid1->Cells[2][3]=PW->Text;

    }
    else if (ComboBox1->Text=="Customer")
    {
        StringGrid1->Cells[1][4]=ID->Text;
        StringGrid1->Cells[2][4]=PW->Text;
    }

}

//---------------------------------------------------------------------------


AnsiString datas[COL_COUNT][ROW_COUNT];
void __fastcall TF_Login_Info::Save_fileClick(TObject *Sender)
{

    // show in string grid
    for (int nCol=0; nCol<COL_COUNT; nCol++)
    {
        for (int nRow=0; nRow<ROW_COUNT; nRow++)
        {
            datas[nCol][nRow]=StringGrid1->Cells[nCol][nRow+1];
        }
    }


    //export login data file
    TIniFile *pINi;

    AnsiString strFileName;
    AnsiString strTitle;
    AnsiString strID;
    AnsiString strPW;

    strFileName = "D:\\Work\\Project1_login_data.set";
    pINi = new TIniFile(strFileName);

    /*
    for (int nRow=0; nRow<ROW_COUNT; nRow++)
    {
        pINi->WriteString(datas[0][nRow], "ID", StringGrid1->Cells[1][nRow+1]);
        pINi->WriteString(datas[0][nRow], "PW", StringGrid1->Cells[2][nRow+1]);
    }
      */

    for (int nRow=0; nRow<ROW_COUNT; nRow++)
    {

        //strTitle=datas[0][nRow];
        //strTitle=StringGrid1->Cells[0][nRow];
        //strID.sprintf("ID_%s, PW_%s", StringGrid1->Cells[1][nRow], StringGrid1->Cells[2][nRow]);

        pINi->WriteString(StringGrid1->Cells[0][nRow], "ID", StringGrid1->Cells[1][nRow]);
        pINi->WriteString(StringGrid1->Cells[0][nRow], "PW", StringGrid1->Cells[2][nRow]);
    }


}
//---------------------------------------------------------------------------






