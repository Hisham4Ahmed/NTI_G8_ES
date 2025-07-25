#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


/*
    realloc (Pointer ,New size)

    ptr = (char*)malloc(5);
    realloc(ptr,8);
*/

int main()
{

    uint8_t   NoOfElement = 0 ; 
    uint8_t   NewNoOfElement = 0 ;
    uint16_t  *NTI_G8     = NULL;
    uint8_t   index       = 0 ; 
    printf("Enter No Of Element: ");
    scanf("%hhd",&NoOfElement);
    // NTI_G8 =(uint16_t*)calloc(NoOfElement,sizeof(uint16_t));
       NTI_G8 =(uint16_t*)malloc(NoOfElement*sizeof(uint16_t));

    for(index = 0 ;index <NoOfElement ; index++)
    {
        printf("Enter the NTI_G8[%d]:",index+1);
        scanf("%hd",(NTI_G8+index));
    }
    for(index=0;index<NoOfElement;index++)
    {
        printf("NTI_G8[%d]:%hd\n",index+1,*(NTI_G8+index));
    }
    /*---------------------------------------------------*/
    printf("Enter Total New No Of Element: ");
    scanf("%hhd",&NewNoOfElement); // 

    NTI_G8=realloc(NTI_G8,NewNoOfElement); // 
    
    for (index = NoOfElement; index<NewNoOfElement;index++) 
    {
        printf("Enter the NTI_G8[%d]:",index+1);
        scanf("%hd",(NTI_G8+index));
    }

    for(index=0;index<NewNoOfElement;index++)
    {
        printf("NTI_G8[%d]:%hd\n",index+1,*(NTI_G8+index));
    }



}