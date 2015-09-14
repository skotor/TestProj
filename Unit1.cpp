//---------------------------------------------------------------------------

#include <vcl.h>
#include <idGlobal.hpp>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
AnsiString s = "0";
if (IsNumeric('0'))
   Label1->Caption="JA";
else
   Label1->Caption="NEJ";
}
//---------------------------------------------------------------------------
 