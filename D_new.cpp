//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "D_new.h"
#include "D_main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
 CB_year->ItemIndex=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
 Form1->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::B_cancelClick(TObject *Sender)
{
 Form2->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::B_createClick(TObject *Sender)
{
 Form1->P_Monday->Visible=true;
 Form1->P_Tuesday->Visible=true;
 Form1->P_Wednesday->Visible=true;
 Form1->P_Thursday->Visible=true;
 Form1->P_Friday->Visible=true;
 Form1->P_Saturday->Visible=true;
 Form1->S_Monday->Visible=true;
 Form1->S_Tuesday->Visible=true;
 Form1->S_Wednesday->Visible=true;
 Form1->S_Thursday->Visible=true;
 Form1->S_Friday->Visible=true;
 Form1->S_Saturday->Visible=true;
 Form1->N_Fsave->Enabled=true;
 Form1->N_Fsavas->Enabled=true;
 Form1->N_Fclose->Enabled=true;
 //Form1->N_Next->Enabled=true;
 //Form1->N_Move->Enabled=true;
 Form1->N_Wnew->Enabled=true;
 Form1->N_Change->Enabled=true;
 Form1->N_Mark->Enabled=true;
 Form1->N_Teach->Enabled=true;
 switch(CB_year->ItemIndex)
 {
  case 0: D1.SetYear(2010); break;
  case 1: D1.SetYear(2011); break;
  case 2: D1.SetYear(2012); break;
  case 3: D1.SetYear(2013); break;
  case 4: D1.SetYear(2014); break;
  case 5: D1.SetYear(2015); break;
  case 6: D1.SetYear(2016); break;
  case 7: D1.SetYear(2017); break;
  case 8: D1.SetYear(2018);
 }
 D1.KalkulateDate();
 datemake(D1.w[0].d[0].GetFullDat(),D1.w[0].d[1].GetFullDat(),D1.w[0].d[2].GetFullDat(),D1.w[0].d[3].GetFullDat(),D1.w[0].d[4].GetFullDat(),D1.w[0].d[5].GetFullDat());
 Form2->Close();
}
//---------------------------------------------------------------------------
