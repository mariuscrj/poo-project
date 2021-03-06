//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("main.cpp", fMain);
USEFORM("..\..\memory 3.9\Unit1.cpp", fMemory);
USEFORM("..\..\memory 3.9\Unit2.cpp", fWarning);
USEFORM("..\..\memory 3.9\Unit3.cpp", fWon);
USEFORM("Unit4.cpp", fMulServ);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TfMain), &fMain);
                 Application->CreateForm(__classid(TfMemory), &fMemory);
                 Application->CreateForm(__classid(TfWarning), &fWarning);
                 Application->CreateForm(__classid(TfWon), &fWon);
                 Application->CreateForm(__classid(TfMulServ), &fMulServ);
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
