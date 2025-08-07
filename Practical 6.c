#include<stdio.h>

void main()
{
    int a;
    float temp,fa,c;
    printf("\n If You Want Convertion Form Celsius To Fahrenheit Then Press 1: ");
    printf("\n If You Want Convertion Form Fahrenheit To Celsius Then Press 2: ");
    scanf("%d" ,&a);

    if(a==1)
    {
        printf("\n Enter Your Temperature: ");
        scanf("%f" ,&temp);
        fa=(temp*9/5)+32;
        printf("\n Your Temperature Converted Into Fahrenheit Is: %f" ,fa);
    }
    else if(a==2)
    {
        printf("\n Enter Your Temperature: ");
        scanf("%f" ,&temp);
        c=(temp-32)*5/9;
        printf("\n Your Temperature Converted Into Celsius Is: %f" ,c);
    }
    return 0;
}
