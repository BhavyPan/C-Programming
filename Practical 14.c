#include<stdio.h>
void main()
{
    float blc=5000,with,dep;
    int i,j;
    const int pin=5236;

    while(1)
    {
        printf("Enter Your Pin: ");
        scanf("%d",&j);
        if(j==pin)
        {
            printf("\nIf You Want To Withdraw Money Press 1 Or\nIf Want To Deposit Money Press 2 Or\nIf You Want To Exit Press 0: ");
            scanf("%d",&i);
            if(i==1)
            {
                if(blc==0)
                {
                    printf("Insufficient Balance\n\n");
                    continue;
                }
                printf("\nEnter Your Withdraw Amount: ");
                scanf("%f",&with);
                if(with<0)
                {
                    printf("Invalid Input\n");
                    continue;
                }

                    if(blc>=0)
                    {
                        blc-=with;
                        printf("Your Current Balance Is: %.2f \n\n",blc);
                    }
                    else
                    {
                        printf("Insufficient Balance\n\n");
                    }
            }
            else if(i==2)
            {
                printf("Enter The Amount You Want To Deposit:");
                scanf("%f",&dep);
                blc+=dep;
                printf("Your Current Balance Is: %.2f \n\n",blc);
            }
            else if(i==0)
            {
                printf("Thank You\n");
                break;
            }
            else
            {
                printf("Invalid Choice\n");
            }
        }
        else
        {
            printf("Incorrect Pin\n\n");
        }
    }
}
