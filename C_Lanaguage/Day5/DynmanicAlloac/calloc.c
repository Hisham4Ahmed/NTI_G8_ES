#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
    calloc -> return  -> void pointer 
              intput : 1- No of Element 
                       2- Size of one element (By Byte)
   
    1- Contiguous Allocation 
    2- take Two Argument (No Of Element , size of one element)
    3- return a pointer  (basses address)
    4- Create Element in Heap and initalized of Zero 
    5- callco slower (take time )
*/

typedef unsigned short int    uint16_t; 

typedef unsigned short int    uint8_t; 

int main ()
{
    uint8_t  NoOfElement = 0 ;
    uint32_t *HeadData = NULL;
    uint8_t index = 0 ; 
    printf("Enter the Number of Element : ");
    scanf("%hhd",&NoOfElement);
    HeadData = (uint32_t*) calloc(NoOfElement,sizeof(uint32_t));

        
    //scan 
    for(index=0;index<NoOfElement;index++)
    {
        printf("Enter the HeadData[%d]",index+1);
        scanf("%hd",&HeadData[index]);
    }

    //display 
    for(index=0;index<NoOfElement;index++)
    {
        printf("Enter the HeadData[%d]=%hd\n",index+1,HeadData[index]);
    }

}