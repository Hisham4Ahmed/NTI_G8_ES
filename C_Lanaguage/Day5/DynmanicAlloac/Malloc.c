#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


/* 
    Size-> 
    Scan Value -> 
    
    Sorting 
*/
/*
    1- format specifier 
        1- char -> %hhd
        2- sort int -> %hd
        3- int   -> %d
        4- long int -> %ld
        5- long long int -> %lld 
    
*/
/*
    malloc - > return (void pointer ) you need to cast this pointer 
        - > intput  (Maxmuim of Bytes)
    
    1- Memory Allocaton 
    2- Take One Arguments  Number of Bytes
    3- return a pointer (base address for bytes allocated) 
    4- allocated bytes uninitialized storage 
    5- malloc faster 
*/


int main()
{
    uint8_t InputSize =0; 
    uint8_t *HeapData = NULL;
    uint8_t index =  0;
    printf("Sizeof(%ld)\n",sizeof(HeapData));
    printf("Enter the No Of Byte:");
    scanf("%hhd",&InputSize);
    HeapData = (uint8_t*)malloc(InputSize);
    // Heap Data We Can Use it as Array 
    // for(index=0;index<InputSize;index++)
    // {
    //     printf("Enter HeapData[%d]:",index+1);
    //     // scanf("%hhd",(HeapData+index));
    //     scanf("%hhd",&HeapData[index]);
    // }

    /*Sort Array*/



    /* Display*/

    for(index=0;index<InputSize;index++)
    {
        printf("Enter HeapData[%d]=%hhd\n",index+1,HeapData[index]);
        printf("Enter HeapData[%d]=%hhd\n",index+1,*(HeapData+index));
    }

}