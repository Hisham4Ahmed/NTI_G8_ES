#ifndef _STRUCT_H_
#define _STRUCT_H_
#include <stdint.h>
/* Create Struct*/
#define CompanySize 3 
typedef struct
{
    uint8_t Name[20];
    uint8_t POS [20];
    uint32_t Salary;
    uint16_t StartYear;
}DelevpolerInfo_t;



void ScanDelevoperInfo(DelevpolerInfo_t * Emp);

void DisplayDelevoperInfo(DelevpolerInfo_t Emp);

void ScanInfoForCompnay(DelevpolerInfo_t * Company , uint8_t size);

// void DisplayInfofor

void SortDelevoperBasedStartYear(DelevpolerInfo_t * Company,uint8_t size);




#endif 
