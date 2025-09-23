#include <stdio.h>
int main()
{
    int bookID;
    for (bookID = 1; bookID <= 20; bookID++)
    {
        printf("Book ID: %d", bookID);
        if (bookID % 5 == 0)
        {
            printf(" (Special Edition)");
        }
        printf("\n");
    }

    return 0;
}
