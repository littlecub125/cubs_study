//---------------------------------------------------------------------------

#ifndef FS_LoginH
#define FS_LoginH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TF_Login : public TForm
{
__published:	// IDE-managed Components
    TEdit *Login_ID;
    TLabel *Label1;
    TLabel *Label2;
    TEdit *Login_PW;
    TButton *Login_trial;
    void __fastcall Login_trialClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TF_Login(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TF_Login *F_Login;
//---------------------------------------------------------------------------
#endif
