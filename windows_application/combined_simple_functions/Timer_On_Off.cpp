//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Timer_On_Off.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TF_TimerTest *F_TimerTest;
//---------------------------------------------------------------------------
__fastcall TF_TimerTest::TF_TimerTest(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
int counter=1;
void __fastcall TF_TimerTest::Button1Click(TObject *Sender)
{

     if (Timer1->Enabled==false)
     {
        Timer1->Enabled=true;
        Button1->Caption="OFF";
     }
     else
     {
        Timer1->Enabled=false;
        Button1->Caption="ON";
     }
}
//---------------------------------------------------------------------------

void __fastcall TF_TimerTest::Timer1Timer(TObject *Sender)
{
    Label1->Caption=counter++;
    Label1->Repaint();
}
//---------------------------------------------------------------------------
