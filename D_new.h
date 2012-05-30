//---------------------------------------------------------------------------

#ifndef D_newH
#define D_newH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TComboBox *CB_year;
        TButton *B_create;
        TButton *B_cancel;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall B_cancelClick(TObject *Sender);
        void __fastcall B_createClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
