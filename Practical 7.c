#include<stdio.h>

void main()
{
    const int tc=150;
    int age,pr,fn,ds;
    printf("Enter Your Age: ");
    scanf("%d" ,&age);

    if(age>0 && age<13)
    {
        printf("Entry Is Free For You");
    }
    else if(age>=60 && age<=120)
    {
        printf("Enter Number Of Persons: ");
        scanf("%d" ,&pr);
        fn=(tc-30)*pr;
        printf("Your Total Payment is: %d",fn);
    }
    else if(age>=13 && age<60)
    {
        printf("Enter Number Of Persons: ");
        scanf("%d" ,&pr);
        fn=tc*pr;
        if(pr>5)
        {
            ds=fn*0.1;
            fn=fn-ds;
            printf("Your Total Payment is: %d",fn);
        }
        else
        {
            fn=tc*pr;
            printf("Your Total Payment is: %d",fn);
        }
    }
    else
    {
        printf("Invalid Input");
    }
}
