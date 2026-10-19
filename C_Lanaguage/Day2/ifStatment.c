#include <stdio.h>

/*
    scan form User Number -> Even / Odd 

    Number%2 == 0  
*/

/*
    scan from User 3 Number 
    Print ther greater the number 

*/

/**
 * if Statment Rule : 
 *  1- you can use if and else if  without else 
 */

 /*
    scan from Student Degree : Number must have min 0 max 100
    if      Degree <50 -> Faild 
    if      50<= Degree <75 -> Good 
    if      75<= Degree <85 -> V.Good
    if      85<= Degree <=100 -> excellent 
    if      Greet than 100 or Less than 0 -> not valid Degree 
     
    
 */
int main()
{

    unsigned char Number1 = 0;
    printf("Enter your Number 1:");
    scanf("%hhd",&Number1);
    unsigned char Number2 = 0;
    printf("Enter your Number 2:");
    scanf("%hhd",&Number2);
    unsigned char Number3 = 0;
    printf("Enter your Number 3:");
    scanf("%hhd",&Number3);
    
    
    // if(Number%2==0) false  
    // {
    //     printf("your Number is Even\n"); exe 
    // }
    // else if (Number%2==1) check 
    // {
    //     printf("your Number is Odd\n");
    // }

    // if(Number%2==0)  // cehck if true  will exe  if false 
    // {
    //     printf("your Number is Even\n");
    // }

    // if (Number%2==1) // check 
    // {
    //     printf("your Number is Odd\n");
    // }

    // if(Number1>Number2)
    // {
    //     if(Number1 > Number3)
    //     {
    //         printf("Number1 is Greatest\n");
    //     }
    //     else 
    //     {
    //         printf("Number3 is Greatest\n");
    //     }
    // }
    // else if(Number2>Number1)
    // {
    //     if (Number2> Number3)
    //     {
    //         printf("Number2 is Greatest\n");
    //     }
    //     else 
    //     {
    //         printf("Number3 is Greatest\n");
    //     }
        
    // }
/**
 *  logic condition 
 *  &&  Conditon && Conditon (True & True )-> Action  
 *  ||  Conditon || Conditon (True | True ) (False | True ) ( True | flase ) -> Action 
 */
    // if(Number1 > Number2  && Number1 > Number3 )
    // {
    //     printf("Number1 is Greatest\n");

    // }
    // else if (Number2 >  Number1 && Number2 > Number3)
    // {
    //     printf("Number2 is Greatest\n");
    // }
    // else if (Number3 > Number1 && Number3 > Number2 )
    // {
    //     printf("Number3 is Greatest\n");
    // }
    // else
    // {
    //     printf("all number is Equal\n");
    // }

//     if (Number1==20)
//        { printf("20");
//         print("Hamada");
//     }
//     else
//         printf("ES");
//     return 0; 
}


