// #include <stdio.h>
// #include  <stdlib.h>
// #include <stdint.h>
#include "stdtype.h"
#include "Array.h"


// #define size 50 
// #define PI   40
// #define Add(x,y)   x+y
// int main()
// {
//     int Sum = Add(size,PI); // prepro int Sum = 50+40 
//     Add(size,PI); //50+40 
//     Add(20,3); //20+30
//     Add(100,4);//100+4
// }



#define MotorType      5  //configration 



int main()
{
    int Speed  = 0 ;
    scanf("%d",&Speed);
    #if MotorType==1 
        if(Speed>100)
        {
            printf("Normal Speed");
        }
    #elif MotorType == 2 
        if(Speed > 100)
        {
             printf("High Speed");
        }
    #elif MotorType == 3
        if(Speed > 100)
        {
             printf("Slow Speed");
        }
    #else 
        // #warning "Not Valid Option"
        // printf("Default Type is MotroType1");
        #error  "Error404 Not Vaild Options"
    #endif
}


