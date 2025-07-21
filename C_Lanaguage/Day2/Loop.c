#include <stdio.h>
#include <stdlib.h>

/*
    for(Start; Condition ; Step)
    {
        Actions
    }

    while(Condition)
    {
        Actions 
    }

    do 
    {
        Actions
    }while(Conditon)
*/


int main()
{
    /* do While*/
    unsigned int Number1 = 0 ;
    unsigned int Number2 = 0 ;
    char iSExist = 0 ;
    do
    {
    system("clear"); // command clear for linux   // command cls for windows 
    printf("Enter Number1:");
    scanf("%d",&Number1);
    printf("Enter Number2:");
    scanf("%d",&Number2);

    printf("%d+%d=%d\n",Number1,Number2,Number1+Number2);
    printf("%d-%d=%d\n",Number1,Number2,Number1-Number2);
    printf("%d*%d=%d\n",Number1,Number2,Number1*Number2);
    printf("%d/%d=%0.3f\n",Number1,Number2,Number1/(float)Number2);
    printf("%d%%%d=%d\n",Number1,Number2,Number1%Number2);

    printf("Enter E to Exist or any char to cont. :");
    scanf(" %c",&iSExist);
    }while(iSExist != 'E'); // try E And e to Exist  -  try E/e for Exist C/c for Cont
}
