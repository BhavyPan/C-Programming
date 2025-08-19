#include <stdio.h>
void main()
{
  int total=21,user_pick,comp_pick;
  while(total>0)
  {
        printf("\n\n Pick a number between 1 to 4 :");
        scanf("%d",&user_pick);
    if(user_pick>0&&user_pick<5)
    {
        comp_pick=5-user_pick;
        total-=user_pick;
        printf(" Computer chose: %d",comp_pick);
        total-=comp_pick;
        printf("\n Remaining sticks=%d",total);
    }
    else
    {
        printf("\n Invalid input");
    }
    if(total==1)
    {
        printf("\n User lost the game as the remaining matchsticks=1");
        break;
    }
 }
}
