#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


/*

memory leak 

*/


// free - > Pointer 
//     remove access 

//  5 
//  2 
//  total = 2*5 

int main()
{

    uint8_t   NoOfElement = 0 ; 
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
    printf("--------------------------------------------\nBefore Free\n--------------------------------");
    for(index=0;index<NoOfElement;index++)
    {
        printf("NTI_G8[%d]:%hd\n",index+1,*(NTI_G8+index));
    }
    printf("--------------------------------------------\nAfter Free\n--------------------------------");
    free(NTI_G8);
    for(index=0;index<NoOfElement;index++)
    {
        printf("NTI_G8[%d]:%hd\n",index+1,*(NTI_G8+index));
    }

    
}