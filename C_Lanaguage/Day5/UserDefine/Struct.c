#include "Struct.h"
#include <stdio.h>

DelevpolerInfo_t NTI[CompanySize]={0};

// ScanDelevoperInfo(&obj);
// DelevpolerInfo_t obj ;
// DelevpolerInfo_t * Emp =& obj ;
void ScanDelevoperInfo(DelevpolerInfo_t * Emp)
{
    printf("Enter the Name :");// '\0'
    scanf("%s",Emp->Name);
    printf("Enter the POS :");
    scanf("%s",Emp->POS);
    printf("Enter the StartYear :");
    scanf("%hd",&Emp->StartYear);
    printf("Enter the Salary :");
    scanf("%d",&Emp->Salary);
    
}

void DisplayDelevoperInfo(DelevpolerInfo_t Emp)
{
    printf("Name=%s\n",Emp.Name);
    printf("POS=%s\n" ,Emp.POS);
    printf("Start in %d year\n",Emp.StartYear);
    printf("Salary=%d\n",Emp.Salary);
    
}

void ScanInfoForCompnay(DelevpolerInfo_t * Company , uint8_t size)
{
    uint8_t index = 0 ;
    for(index =0 ;  index < size ; index++)
    {
        ScanDelevoperInfo(&Company[index]);
    }
}

void SortDelevoperBasedStartYear(DelevpolerInfo_t * Company,uint8_t size);

