#include <stdio.h>


/*
    user Fav Number  -> player name  
*/
/*
    scan User ID  
    based ID Print his name 
    0124 -> Ahmed 
    7845 -> Omar 
    6598 -> ezzat
    -> we have problem with 0 in case please about it 
*/
/*
    Assignment : 
    program -> scan from user 2 number 
    scan the operation (+ - * / %)
    print the value 
    user swtich case 

*/
int main()
{
    // int number =0;
    // printf("enter your fav number:");
    // scanf("%d",&number);

    // switch(number)
    // {
    //     default :  printf ("No player");break;
    //     case no1  :  printf  ("CR7\n");break;
    //     case 10 :  printf  ("messi\n");break;
    //     case 11 :  printf  ("mo Salah\n");break;

    // }
    int ID = 0 ; 
    printf("Enter Your ID:");
    scanf("%d",&ID);

    switch (ID)
    {
        case 1240 : printf("Welcome Mr.Ahmed\n");int x = 50 ; printf("x=%d"); break;
        case 7845 : printf("Welcome Mr.Omar\n");break;    
        case 6598 : printf("Welcome Mr.ezzat\n");break;
        default   : printf("Not vaild ID\n");break   ; 
    }
}