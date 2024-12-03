#include <stdio.h>
union bankCustomer
{
    int AtmCardNo;
    int pwd;
    double AmountAvailable;
    double AmountTobeWithdrawn;
    double AmountLeftOver;
};

void main()
{

    union bankCustomer bc;

    printf("enter your ATM NO :");
    scanf("%d", &bc.AtmCardNo);
    if (bc.AtmCardNo == 1234)
    {
        printf("enter your pwd :");
        scanf("%d", &bc.pwd);

        if (bc.pwd == 4567)
        {
            printf("Autenticated \n");
            bc.AmountAvailable = 5000;
            printf("your Available balance is : %lf", bc.AmountAvailable);
            double temp1=bc.AmountAvailable;

            printf(" \n enter your amount to be withdrawn ");
            scanf("%lf", &bc.AmountTobeWithdrawn);
            double temp2=bc.AmountTobeWithdrawn;
            
            bc.AmountLeftOver = temp1-temp2;
            printf("your Resudual balance is : %lf", bc.AmountLeftOver);
        }
    }
}