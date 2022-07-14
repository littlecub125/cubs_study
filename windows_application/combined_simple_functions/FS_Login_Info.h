//---------------------------------------------------------------------------

#ifndef FS_Login_InfoH
#define FS_Login_InfoH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include <ValEdit.hpp>
//---------------------------------------------------------------------------
class TF_Login_Info : public TForm
{
__published:	// IDE-managed Components
    TButton *Key_Input;
    TStringGrid *StringGrid1;
    TEdit *ID;
    TEdit *PW;
    TComboBox *ComboBox1;
    TLabel *Label1;
    TLabel *Label2;
    TButton *Save_file;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall Key_InputClick(TObject *Sender);
    void __fastcall Save_fileClick(TObject *Sender);




private:	// User declarations
public:		// User declarations
    __fastcall TF_Login_Info(TComponent* Owner);
};

#define COL_COUNT   3
#define ROW_COUNT   4

//---------------------------------------------------------------------------
extern PACKAGE TF_Login_Info *F_Login_Info;
extern AnsiString datas[COL_COUNT][ROW_COUNT];
//---------------------------------------------------------------------------
#endif
