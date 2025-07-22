#include <stdio.h>




int main()
{
    // /*Linear Algorthim 
    //     1- found or not found 
    //     2- no of repeat 

    // */
    // int LinearArr[5]={0};
    // int LinearSearchValue=0;
    // int index = 0 ;
    // for(index=0;index<5;index++)
    // {
    //     printf("Enter value for  LinearArr[%d]:",index);
    //     scanf("%d",&LinearArr[index]);
    // }

    // printf("---------------------------------\n");
    // printf("Enter the Linear Search Value:");
    // scanf("%d",&LinearSearchValue);


    // int NoOfRepeat = 0 ;   
    // for (index =0 ; index<5;index++)
    // {
    //     if(LinearArr[index]==LinearSearchValue)
    //     {
    //         //Actions 
    //         NoOfRepeat++;
    //     }
    // }
    // if (NoOfRepeat>0)
    // {
    //     printf("Value is Exists and repeat %d time \n",NoOfRepeat);
    // }
    // else 
    // {
    //     printf("Not Found");
    // }
/*-------------------------------------------------------------------------------*/
    /*
        Binary Search 
    */    
    int BinaryArr[5]={0};
    int BinarySearchValue=0;
    int index =0;
    for (index=0; index<5 ; index++)
    {
        printf("Enter the vlaue for BinaryArr[%d]:",index);
        scanf("%d",&BinaryArr[index]);
    }
    printf("---------------------------------\n");
    printf("Enter the Binary Search Value:");
    scanf("%d",&BinarySearchValue);

    int Start = 0 ;
    int End   = 4 ;
    int Mid   = 0 ; 
    while(Start<=End)
    {
        Mid = (Start+End)/2  ;
        if(BinaryArr[Mid]== BinarySearchValue)
        {
            //Action 
        } 
        else if (BinaryArr[Mid] > BinarySearchValue)
        {
            End=Mid-1;
        }
        else if (BinaryArr[Mid] < BinarySearchValue)
        {
            Start=Mid+1;
        }
    }
/*-------------------------------------------------------------------------------*/

    /*
        Sort alog (Bubble )
    */
    int BubbleArr [5]={0};
    int index  = 0 ;
    for (index=0; index<5 ; index++)
    {
        printf("Enter the vlaue for BubbleArr[%d]:",index);
        scanf("%d",&BubbleArr[index]);
    }

    /*Sorting Code */
    int inner=0; 
    int outter=0;
    for (outter=0;outter<5;outter++)
    {
        for(inner=0;inner<5-1;inner++)
        {
            if(BubbleArr[inner]>BubbleArr[inner+1])
            {
                // swapp
            }
        }
    }






    return 0;
}