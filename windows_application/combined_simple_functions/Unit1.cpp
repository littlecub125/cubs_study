//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Timer_On_Off.h"
#include "Calculator.h"
#include "FS_Lotto.h"
#include "FS_Login_Info.h"
#include "FS_Login.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TF_Main *F_Main;
//---------------------------------------------------------------------------
__fastcall TF_Main::TF_Main(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TF_Main::B_TimerTestClick(TObject *Sender)
{
    F_TimerTest->Show();
}
//---------------------------------------------------------------------------
void __fastcall TF_Main::B_CalculatorClick(TObject *Sender)
{
    F_Calc->Show();
}
//---------------------------------------------------------------------------

void __fastcall TF_Main::LottoClick(TObject *Sender)
{
    F_Lotto->Show();
}
//---------------------------------------------------------------------------

void __fastcall TF_Main::FunctionClick(TObject *Sender)
{
    F_Login_Info->Show();
}
//---------------------------------------------------------------------------



void __fastcall TF_Main::LoginClick(TObject *Sender)
{
    F_Login->Show();
}
//---------------------------------------------------------------------------

