//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TfMulClient : public TForm
{
__published:	// IDE-managed Components
        TButton *btnPlay;
        TButton *btnExit;
        void __fastcall btnExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfMulClient(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfMulClient *fMulClient;
//---------------------------------------------------------------------------
#endif
