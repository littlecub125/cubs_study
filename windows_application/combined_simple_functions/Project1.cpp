//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", F_Main);
USEFORM("Timer_On_Off.cpp", F_TimerTest);
USEFORM("calculator.cpp", F_Calc);
USEFORM("FS_Lotto.cpp", F_Lotto);
USEFORM("FS_Login_Info.cpp", F_Login_Info);
USEFORM("FS_Login.cpp", F_Login);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
         Application->Initialize();
         Application->CreateForm(__classid(TF_Main), &F_Main);
         Application->CreateForm(__classid(TF_TimerTest), &F_TimerTest);
         Application->CreateForm(__classid(TF_Calc), &F_Calc);
         Application->CreateForm(__classid(TF_Lotto), &F_Lotto);
         Application->CreateForm(__classid(TF_Login_Info), &F_Login_Info);
         Application->CreateForm(__classid(TF_Login), &F_Login);
         Application->Run();
    }
    catch (Exception &exception)
    {
         Application->ShowException(&exception);
    }
    catch (...)
    {
         try
         {
             throw Exception("");
         }
         catch (Exception &exception)
         {
             Application->ShowException(&exception);
         }
    }
    return 0;
}
//---------------------------------------------------------------------------
