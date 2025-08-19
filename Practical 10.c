#include<stdio.h>
int main()
{
   int choice,qnt,total=0;
   printf("1.Burger.....150\n");
   printf("2.Pizza.....200\n");
   printf("3.Pasta.....120\n");
   printf("4.Sandwitch.....100\n");
   printf("5.French Fries.....80\n");
   printf("Enter 0 If You Want To Finish Order\n");
   while(1)
   {
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);
       if(choice==0)
       {
           break;
       }
       else
       {
           printf("\n Enter Quantity: ");
           scanf("%d",&qnt);
           switch(choice)
           {
            case 1:
                total+=150*qnt;
                break;
            case 2:
                total+=200*qnt;
                break;
            case 3:
                total+=120*qnt;
                break;
            case 4:
                total+=100*qnt;
                break;
            case 5:
                total+=80*qnt;
                break;
            default:
                printf("\n Invalid Choice");
           }
       }
   }
   if(total>500)
   {
       total=total-(total*0.2);
       printf("\n Total Amount:%d",total);
   }
   else
   {
   printf("\n Total Amount:%d",total);
   }
   return 0;
}
