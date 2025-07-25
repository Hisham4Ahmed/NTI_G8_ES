#include "Struct.h"

extern DelevpolerInfo_t NTI[CompanySize]; 

int main()
{
    DelevpolerInfo_t   Hesham ;
//         // DelevpolerInfo_t  Amr;
    ScanDelevoperInfo(&Hesham);
    DisplayDelevoperInfo(Hesham);
    // ScanDelevoperInfo(&Hesham);
    // DisplayDelevoperInfo(Hesham);
    ScanInfoForCompnay(NTI,CompanySize);
}