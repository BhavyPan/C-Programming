#include<stdio.h>

void main()
{
    long int p=1441981744;
    float pw=48.4;
    float lro=85.95;
    float lrw=62.84;
    float lrm=80.95;
    long int w=(pw*p)/100;
    long int m=p-w;
    long int lm=(lrm*m)/100;
    long int ilm=m-lm;
    long int lw=(lrw*w)/100;
    long int ilw=w-lw;

    printf("\n Total Women: %d" ,ilw);
    printf("\n Total Men: %d" ,ilm);
}
