#include <stdio.h>


int main()
{
    // unsigned char x = 97 ; 
    // printf("the x = %c\n",x); 
    // printf("the x = %d\n",x);
    // printf("the size of x = %ld\n",sizeof(x)); // size 
    // char x =0 ;
    // scanf ("Enter the char %c",&x);// -> Error 
    // printf("Enter the char:");
    // scanf(" %c",&x);

    // printf("x ASCII=%d\nx Char =%c\n",x,x);
    /*Try Lab Now 
    1- Scan Decimal Number (+ve /-Ve)
    2- Scan Char
    3- Scan Floating */
    // signed char Number  = 0 ;
    // printf("Enter the Your Number : ");
    // scanf(" %hhd",&Number);
    /*---------------------------------------------------------------------------*/
    /*Operation
        1- uni Operation (-- decremnet  / ++ increament)
        2- Mathimatical Operation (+ * - / %)
    */ 
    // int x  = 20 ;
    // int y  = 0 ; 
    // // x++; //Post Increamnet 
    // // printf("x=%d\n",x); // 21
    // y=x++;   

    // printf("x=%d\n",x); //   21 
    // printf("y=%d\n",y); //   20 
    // // ++x; // Pre Icreamnet 
    // // printf("x=%d\n",x); // 21
    // y=++x;
    // printf("x=%d\n",x); //   22 
    // printf("y=%d\n",y); //   22   

    /*
       Lab  no  scan from User two Unsigned Number 
       and Print the All Mathimatical Operation  (+ * - / %)
    */
   unsigned  int Number1 = 0; 
   unsigned  int Number2 = 0;

   printf("Please Enter Number1:");
   scanf("%d",&Number1);
   printf("Please Enter Number2:");
   scanf("%d",&Number2);

   printf("----------------------------\n");
   printf("Mathimatical Operation \n");
   printf("Number1+Number2=%d\n",Number1+Number2);
   printf("Number1-Number2=%d\n",Number1-Number2);
   printf("Number1xNumber2=%d\n",Number1*Number2);
   printf("Number1/Number2=%f\n",(float)Number1/Number2);
   printf("Number1%%Number2=%d\n",Number1%Number2);
   
    /*
        int / int  -> int 
        float /int  -> float
        int / float  -> float 
        casting 
        implicit casting -> by compiler 
        int x = 1500 ; 
        char y ;
        y=x;

        Explicit casting 
        
        (float)Number1 
    */
    return 0;   
}



//Assignment 
/*
Create Some Var 
Print Size
short int 
int 
long int 
long long int 
char 
float 
double 
long double 
*/

/* 
    try this Options : 
    1- create two local  Var the same name and same data type ()-> Error 
    2- create two local  Var the same name nut diffierent data type -> Error 
    3- create two gloabl Var the same name and same data type ()-> Error 
    4- create two gloabl Var the same name nut diffierent data type -> Error   
*/

/*
    try the same lap 
    Lab  no  scan from User two Unsigned Number 
       and Print the All Mathimatical Operation  (+ * - / %)
       divid result 3 number after point 
*/
