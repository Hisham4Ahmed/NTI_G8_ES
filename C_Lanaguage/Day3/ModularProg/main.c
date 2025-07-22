#include <stdio.h> // Lib Standrand 
#include "MATH.h"  // user Lib 


extern int GlobalVar;
int main()
{
    int no1 = 10 ;
    int no2 = 20 ;
    int sum = AddInt(no1,no2); 
    printf("sum=%d\n",sum);
    printf("GlobalVar=%d\n",GlobalVar);
    return 0;

}