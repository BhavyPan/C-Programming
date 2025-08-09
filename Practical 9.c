#include<stdio.h>
void main ()
{
    float amt,dis;
    int i,y;
    x:
        printf("\n Enter Your Amount: ");
        scanf("%f" ,&amt);
        printf("\n Enter 1 If You Are Registered Your Number Or Enter 0 If You Are Not Registered Your Number: ");
        scanf("%d" ,&i);
        if(i==1)
        {
            if(amt<1000)
            {
                dis=0;
            }
            else if(amt>=1000 && amt<=5000)
            {
                dis=0.1;
            }
            else
            {
                dis=0.2;
            }
            amt=amt-(amt*dis);
            dis=dis*100;
            printf("\n Your Total Amount Is: %.2f",amt);
            printf("\n Your Total Discount Is: %.1f",dis);
        }
        else if(i==0)
        {
            if(amt<1000)
            {
                dis=0;
            }
            else if(amt>=1000 && amt<=5000)
            {
                dis=0.1;
            }
            else
            {
                dis=0.2;
            }
            amt=amt-(amt*dis);
            amt=amt+(amt*0.05);
            dis=dis*100;
            printf("\n Your Total Amount Is: %.2f",amt);
            printf("\n Your Total Discout Is: %.1f",dis);
        }
        else
        {
            printf("Invalid Choice");
        }
    printf("\n Enter 1 If You Want To Enter Another Amount Or Enter 0 If You Want To Exit: ");
    scanf("%d",&y);
    if(y==1)
    {
        goto x;
    }
    else
    {
        printf("Thank You");
    }
}

