#include<stdio.h>
#include<windows.h>
int main()
{
    int wtr,i;
        for(wtr=1;wtr<=100;wtr++)
        {
            if(wtr%10==0)
            {
                printf("Current Water Level Is: %d liters\n",wtr);
                Sleep(1500);//it takes milliseconds
                if(wtr==100)
                {
                    printf("Tank Is Full");
                }
            }
        }
        return 0;
}
