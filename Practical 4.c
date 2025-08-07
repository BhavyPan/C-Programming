#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    long long num;
    printf("Enter the number to know the variety of the range in datatype in which it falls : ");
    scanf("%lld",num);
    printf("\n size of char is = %zu byte",sizeof(char));
    printf("\n size of int is = %zu byte",sizeof(int));
    printf("\n size of float is = %zu byte",sizeof(float));
    printf("\n size of double is = %zu byte",sizeof(double));
    printf("\n Range of int= %d to %d\n",INT_MIN, INT_MAX);
    printf("\n Range of character= %d to %d\n",CHAR_MIN, CHAR_MAX);
    printf("\n Range of long = %d to %d\n",LONG_MIN, LONG_MAX);
    printf("\n Range of  long long= %lld to %lld\n",LLONG_MIN, LLONG_MAX);
    printf("\n Range of unsigned long long = 0 to %llu\n",ULLONG_MAX);
    if (num >= SCHAR_MIN && num <= SCHAR_MAX)
        printf("Fits in signed char\n");
    if (num >= 0 && num <= UCHAR_MAX)
        printf("Fits in unsigned char\n");

    //Short
    if (num >= SHRT_MIN && num <= SHRT_MAX)
        printf("Fits in signed short\n");
    if (num >= 0 && num <= USHRT_MAX)
        printf("Fits in unsigned short\n");

    //Int
    if (num >= INT_MIN && num <= INT_MAX)
        printf("Fits in signed int\n");
    if (num >= 0 && num <= UINT_MAX)
        printf("Fits in unsigned int\n");

    //Long
    if (num >= LONG_MIN && num <= LONG_MAX)
        printf("Fits in signed long\n");
    if (num >= 0 && num <= ULONG_MAX)
        printf("Fits in unsigned long\n");

    //Long long
    if (num >= LLONG_MIN && num <= LLONG_MAX)
        printf("Fits in signed long long\n");
    if (num >= 0 && num <= ULLONG_MAX)
        printf("Fits in unsigned long long\n");

    return 0;
}
