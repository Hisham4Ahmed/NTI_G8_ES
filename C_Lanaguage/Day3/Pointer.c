#include <stdio.h>





int main()
{

    // int  x = 196611 ; 
    // short int  *ptr = &x ; 
    // printf("x value =%d\n",x);    
    // printf("x base address= %p\n",&x);

    // printf("ptr value=%p\n",ptr);
    // printf("ptr based address=%p\n",&ptr);

    // printf("ptr point value =%d\n",*ptr);

    // printf("size of ptr %ld byte\n",sizeof(ptr));



    //  int *Ptr = ( int * )0x7ffc648e5c6f;
    // printf("Value =%d",*Ptr);
    char x = 50 ;
    char *ptr = &x;
    char y =0;
    printf("x=%d\n",x);
    printf("ptr=%p\n",ptr);
    printf("y=%d\n",y);
    y=*(ptr++);

    // y=++(*ptr); // Base Address 

    printf("x=%d\n",x);
    printf("ptr=%p\n",ptr);
    printf("ptr=%d\n",*ptr);
    printf("y=%d\n",y);
    //               Pointer synatx 
    // arr[index] => *(arr+index);
    // &arr[index] => (arr+index )
    int arr [5]={0};
    // scan from user the value by Pointer syantx 
    // Sort by bublle
    // Print arry by pointer 
    return 0 ; 
}