//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
  Form1->GymUsersGrid->Columns[0]->Header="Id";
  Form1->GymUsersGrid->Columns[1]->Header="Membership type";
  Form1->GymUsersGrid->Columns[2]->Header="First name";
  Form1->GymUsersGrid->Columns[3]->Header="Last name";
  Form1->GymUsersGrid->Columns[0]->Width=70;
  Form1->GymUsersGrid->Columns[1]->Width=110;
  Form1->GymUsersGrid->Columns[2]->Width=80;
  Form1->GymUsersGrid->Columns[3]->Width=100;
  Form1->GymUsersGrid->Width=400;

 Form1->MembershipsGrid->Columns[0]->Header="Id";
 Form1->MembershipsGrid->Columns[1]->Header="Membership type";
 Form1->MembershipsGrid->Columns[0]->Width=70;
 Form1->MembershipsGrid->Columns[1]->Width=200;
 Form1->MembershipsGrid->Width=300;
 Form1->MembershipsGrid->ShowScrollBars=false; //This line hides the scroll bars of the MembershipsGrid control on Form1. It prevents the display of horizontal and vertical scroll bars.

  Form1->FilteredUsersGrid->Columns[0]->Header="Id";
  Form1->FilteredUsersGrid->Columns[1]->Header="Membership type";
  Form1->FilteredUsersGrid->Columns[2]->Header="First name";
  Form1->FilteredUsersGrid->Columns[3]->Header="Last name";
  Form1->FilteredUsersGrid->Columns[0]->Width=70;
  Form1->FilteredUsersGrid->Columns[1]->Width=150;
  Form1->FilteredUsersGrid->Columns[2]->Width=110;
  Form1->FilteredUsersGrid->Columns[3]->Width=110;
}
//---------------------------------------------------------------------------









