#include <stdio.h>

int main()
{
    int marks,i;
x:
    printf("Enter student's marks (0-100): ");
    scanf("%d", &marks);
    if(marks>=0 && marks<=100)
    {
        (marks >= 90) ? printf("Grade:'A'\n") :
            (marks >= 80) ? printf("Grade:'B'\n") :
                (marks >= 70) ? printf("Grade:'C'\n") :
                    (marks >= 60) ? printf("Grade:'D'\n") : printf("Grade:'F'\n");
    }
    else
    {
        printf("Invalid Input Please Enter Marks Between (0-100)\n");
        goto x;
    }
    printf("If You Want To Continue Enter 1 Otherwise Enter 0:");
    scanf("%d",&i);
    if(i==1)
    {
        goto x;
    }
    else
    {
        printf("Thank You");
    }
    return 0;
}
