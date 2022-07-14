//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FS_Lotto.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TF_Lotto *F_Lotto;
//---------------------------------------------------------------------------
__fastcall TF_Lotto::TF_Lotto(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
#define max 6
void __fastcall TF_Lotto::generatorClick(TObject *Sender)
{
   int N[max], i, j, k;

   for (i = 0; i < max; i++)
    {
        //generate random number below 45
        N[i] = rand() % 45;

        //check if any number is duplicated
        for (j = 0; j < i; j++)
        {
            if (N[i] == N[j])
            {
                --i;
                break;
            }

        }
    }

    AnsiString str;
    for (k=0; k<max; k++)
    {
        if (k<max-1)
            str+=IntToStr(N[k])+", ";
        else if (k==max-1)
            str+=IntToStr(N[k]);
    }

    Memo1->Lines->Add(str);
}
//---------------------------------------------------------------------------


