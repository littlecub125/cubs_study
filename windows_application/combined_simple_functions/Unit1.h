//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TF_Main : public TForm
{
__published:	// IDE-managed Components
    TButton *B_TimerTest;
    TButton *B_Calculator;
    TButton *Lotto;
    TButton *Function;
    TButton *Login;
    void __fastcall B_TimerTestClick(TObject *Sender);
    void __fastcall B_CalculatorClick(TObject *Sender);
    void __fastcall LottoClick(TObject *Sender);
    void __fastcall FunctionClick(TObject *Sender);
    void __fastcall LoginClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TF_Main(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TF_Main *F_Main;
//---------------------------------------------------------------------------
#endif
 