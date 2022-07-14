//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include <ValEdit.hpp>
//---------------------------------------------------------------------------
class TF_List : public TForm
{
__published:	// IDE-managed Components
    TValueListEditor *ValueListEditor1;
    TEdit *Edit1;
    TButton *Input_Key;
    TEdit *Edit2;
    TButton *Input_Value;
private:	// User declarations
public:		// User declarations
    __fastcall TF_List(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TF_List *F_List;
//---------------------------------------------------------------------------
#endif
