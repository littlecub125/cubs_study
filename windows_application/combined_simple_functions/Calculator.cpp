//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "calculator.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TF_Calc *F_Calc;
//---------------------------------------------------------------------------
__fastcall TF_Calc::TF_Calc(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

double Store_num1, Store_num2, answer;

AnsiString operate;


void __fastcall TF_Calc::Numberclick(TObject *Sender)
{
    TButton* b= ((TButton*)Sender);

    if (Edit1->Text=="0")
    {
        Edit1->Text=b->Caption;
    }
    else
    {
        Edit1->Text=Edit1->Text+b->Caption;
    }
}
//---------------------------------------------------------------------------

void __fastcall TF_Calc::Button11Click(TObject *Sender)
{
    Edit1->Text="0";
    operate=NULL;

}
//---------------------------------------------------------------------------


void __fastcall TF_Calc::Button12Click(TObject *Sender)
{
    double Store_num2=Edit1->Text.ToDouble();

    if (operate=='+')
    {
        answer=Store_num1+Store_num2;
    }
    else if(operate=='/')
    {
        answer=Store_num1/Store_num2;
    }
    else if(operate=='X')
    {
        answer=Store_num1*Store_num2;
    }
    else if(operate=='-')
    {
        answer=Store_num1-Store_num2;
    }

    Edit1->Text=answer;
}
//---------------------------------------------------------------------------

void __fastcall TF_Calc::OpClick(TObject *Sender) //op enter, then store in *Sender
{
    TButton *b = ((TButton*) Sender);

    Store_num1  = (Edit1->Text.ToDouble());
    operate     = b->Caption;
    Edit1->Text = "0";
}
//---------------------------------------------------------------------------

