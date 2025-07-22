#include "MATH.h"

int GlobalVar = 100 ; 

int AddInt(int No1, int No2)
{
    return No1+No2;
}

char AddChar(char No1,char No2)
{
    return No1+No2;
}


float SubFloating(float No1 , float No2)
{
    return No1+No2;
}

void swap(int * x , int *y)
{
    int temp =0; 
    temp = * x ;
    *x = *y;
    *y=temp;
}