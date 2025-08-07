#include<stdio.h>

int main()
{
    float weight,height;
    float BMI;

    printf("Enter the weight of person in kilogram: ");
    scanf("%f" ,&weight);
    printf("Enter the height of the person in meter: ");
    scanf("%f" ,&height);
    if((weight>0)&&(height>0))
    {
        BMI=weight/(height*height);
        printf("The BMI of the person is %.2f",BMI);
        if (BMI<18.5)
        {
            printf("\n you are Underweight");
        }
        else if(18.5<BMI>24.9)
        {
            printf("\n You Are Healthy Weight");
        }
        else if(25<BMI>29.9)
        {
            printf("\n You Are Overweight");
        }
        else if(30<BMI>39.9)
        {
            printf("\n You Are Obesity");
        }
        else
        {
            printf("\n You Have Severe Obesity");
        }

        }
        else
        {
            printf("\n Invalid Input");
        }
    return 0;
}
