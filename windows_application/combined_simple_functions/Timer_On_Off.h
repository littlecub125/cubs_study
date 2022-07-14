//---------------------------------------------------------------------------

#ifndef Timer_On_OffH
#define Timer_On_OffH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TF_TimerTest : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TButton *Button1;
    TTimer *Timer1;
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TF_TimerTest(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TF_TimerTest *F_TimerTest;
//---------------------------------------------------------------------------
#endif
