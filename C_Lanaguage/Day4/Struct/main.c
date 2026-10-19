#include <stdio.h>
#include <stdint.h>

#include "Struc.h"



int main()
{
    DelevoperInfo_t  GestellCompany[size];
    DelevoperInfo_t  Hesham ;
    DelevoperInfo_t  *Ptr = &Hesham ;
    int index = 0 ; 
    for (index = 0 ; index<size ;index++)
    {
        printf("Enter the ID For Developer[%d]:",index+1);
        scanf("%d",&GestellCompany[index].ID);
        printf("Enter the Age For Developer[%d]:",index+1);
        scanf("%d",&GestellCompany[index].Age);
        printf("Enter the Salary For Developer[%d]:",index+1);
        scanf("%d",&GestellCompany[index].ID);
    }
    printf("Hesham ID is %d\n",Ptr->ID);
    // printf("Hesham ID is %d\n",*Ptr.ID);
}

