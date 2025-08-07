#include<stdio.h>

void main()
{
    int age,i;
    x:
        printf("\n Enter Your Age: ");
        scanf("%d" ,&age);

        if(age<18 && age>0)
        {
            printf("\n Sorry You Are Not Eligible To Open Account");
        }
        else if(age>17 && age<60)
        {
            printf("\n You Are Eligible To Open Account");
        }
        else if(age>59 && age<120)
        {
            printf("\n You Are Eligible To Open Senior Citizen Account");
        }
        else
        {
            printf("\n Invalid Input");
            goto x;
        }
        printf("\n If You Want TO Continue Enter 1 Or If You Don't Want TO Continue Enter 0: ");
        scanf("%d" ,&i);
        if(i==1)
        {
            goto x;
        }
}
