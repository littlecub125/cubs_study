//---------------------------------------------------------------------------

#ifndef FS_LottoH
#define FS_LottoH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TF_Lotto : public TForm
{
__published:	// IDE-managed Components
    TButton *generator;
    TMemo *Memo1;
    void __fastcall generatorClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TF_Lotto(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TF_Lotto *F_Lotto;

//---------------------------------------------------------------------------
#endif
