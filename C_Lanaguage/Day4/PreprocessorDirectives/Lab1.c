// C Function take 2 number return Add & Sub & Mutli 


void Calc (int no1 ,int no2 , int * Sum ,int * Sub , int * Multi);


int main()
{
    int no1 =0;
    int no2 = 0; 
    int sum=0; //0x07; 
    int sub=0;
    int multi  =0;

    Calc(no1,no2, &sum ,&sub, &multi);
    printf("Sum=%d\n",sum);
    printf("sub=%d\n",sub);
    printf("multi=%d\n",multi);
}


int *Sum =&sum;  // 0x07 


void Calc (int no1 ,int no2 , int * Sum ,int * Sub , int * Multi)
{
    if(Sum!=NULL && Sub !=NULL && Multi != NULL)
    {
    *Sum    = no1 + no2 ;  //*(0x07)=no1+no2
    *Sub    = no1 - no2 ;
    *Multi  = no1 * no2 ; 
    }
  
}   
