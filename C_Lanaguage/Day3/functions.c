 

/*
 Function Type : 
    Normal Function 
    Function Like Macro (#define)
    Inline Function 
*/


/* Normal Function
        1- Prototype (Declartion)
            1-syntax: returnType   functionname  (Arguments); 
            2- before main or other header file (file.h)
        2- Implemention (Defintion)
            1-syntax:returnType   functionname  (Arguments)
            {
                code ;
            }
            2- after main or other Source file (file.c )
        3- Calling 
            1-synatx: functionname(paratmeters);
            2-inside main or inside onther function 

*/
/* 
    Return -> 
        1- any function return 1 value 
        2- type : 
            void  -> no return any value 
            int   -> will return 1 value int 
            float -> will return 1 value float 
            char    -> will return 1 value char 
            double -> will return 1 value double
            pointer 


    Arguments-> inputs (Call by Value ) ( Call by Refernece) 
        1- classifications: 
            1- call by value 
            2- call by refernece 
        2- Notes : 
            - can take unlimited from inputs 
            - for each input will make Declartion 
        2-type
            void   -> not take any Arguments 
            int   x  -> take the value for int  (Call By Value)
            float x  ->  take the value for float (Call By Value)
            char  x  -> take the value for char   (Call By Value)
            double x -> take the value for double  (Call By Value)
            int * x  -> take the address for int  (Call By refernece)
*/


// function add two number and return the value 


// int Add (int No1,int No2); // prototype for add function 
// int Add (int No1,int No2) // Impelemention 
// {
//     int sum = No1 + No2 ; 
//     return sum ; 
// }
// Add(5,7);//Calling 



// int Add(int x, int y);   // prototy
// int Summ(int * A , int * B);
// int main()
// {
//     int no1   = 20 ;
//     int no2   = 30 ; 

//     Add(no1,no2); // Call by Value 
//     Summ(&no1,&no2); //Call By refenrence 
// }


// int Add(int x , int y) 
// {
//     // x=no1-> 20 


//     int summation = x +y ;
//     return summation;
// }



#include <stdio.h>

/* Protototype -> call by value*/
int Add(int x, int y);
int Sub(int x,int y);
int Multi(int x,int y);
float Div(int x,int y);
int Remi(int x,int y);

void Display_Array(int Arr[],int size);

void Swapfunction(int *x , int *y);
int main()
{
    int no1 = 0 ; 
    int no2 = 0 ;
    // int Hesham[5]={1,10,50,70,100};
    // Display_Array(Hesham,5);
    printf("Enter the No1:");
    scanf("%d",&no1);
    printf("Enter the No2:");
    scanf("%d",&no2);
    printf("--------------------\n");
    printf("no1=%d\n",no1);
    printf("no2=%d\n",no2);
    printf("--------------------\n");
    Swapfunction(&no1,&no2);


    printf("no1=%d\n",no1);
    printf("no2=%d\n",no2);
    printf("--------------------\n");
    // int sum = 0 ;
    // int sub = 0 ; 
    // int multi = 0 ;
    // float div = 0 ;
    // int remi = 0 ;
    // //calling  
    // sum = Add(no1,no2);
    // sub = Sub(no1,no2);
    // multi = Multi(no1,no2);
    // printf("Sum=%d\n",sum);
    // printf("Sub=%d\n",sub);
    // printf("Multi=%d\n",multi);
     

}

void Swapfunction(int *x , int *y) 
{
    //int *x = &no1
    //int *y = &no2 
    int temp = 0 ;
    temp = *x ;
    *x = *y ;
    *y =temp ;
}

void Display_Array(int Arr[],int size)
{
    int index = 0 ;
    for(index=0; index< size ;index++)
    {
        printf("Arr[%d]=%d\n",index,Arr[index]);
    }
}


int Add(int x, int y)
{
    return x+y;
}
int Sub(int x,int y)
{
    return x-y;
}
int Multi(int x,int y)
{
    return x*y;
}






 /*
    1- function display array 
    2- function scan Array 
    3- function return no of repeat Search (int NoOfRepeat(int Arr[],int size , int search_value))


    int main()
    {
        int arr [5]={1,5,7,7,8};
        int searchvalue = 7;
        int noofrepeate = 0 ;
        noofrepeate = NoOfRepeat(arr,5,8);
    }
 
 
 */
