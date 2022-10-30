#include <stdio.h>
int main()
{
   int month;
   printf("Input month number: ");
   scanf("%d",&month);
   if(month == 1)
   {
       printf("It contains 31 days.");
   }
   else if(month == 2)
   {
       printf("It contains 28 or 29 days.");
   }
   else if(month == 3)
   {
       printf("It contains 31 days.");
   }
   else if(month == 4)
   {
       printf("It contains 30 days.");
   }
   else if(month == 5)
   {
      printf("It contains 31 days.");
   }
   else if(month == 6)
   {
      printf("It contains 30 days.");
   }
   else if(month == 7)
   {
       printf("It contains 31 days.");
   }
   else if(month == 8)
   {
       printf("It contains 31 days.");
   }
   else if(month == 9)
   {
       printf("It contains 30 days.");
   }
   else if(month == 10)
   {
       printf("It contains 31 days.");
   }
   else if(month == 11)
   {
       printf("It contains 30 days.");
   }
   else if(month == 12)
   {
       printf("It contains 31 days.");
   }
   else
   {
       printf("Invalid Input");
   }
    return 0;
}
