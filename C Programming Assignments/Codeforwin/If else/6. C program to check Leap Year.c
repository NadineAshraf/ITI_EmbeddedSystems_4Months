#include <stdio.h>

int main()
{
   int year;
   printf("Input year: ");
   scanf("%d",&year);
   if((year%4 == 0) && (year%100 !=0) || (year%400 == 0))
   {
       printf("%d is leap year",year);
   }
   else
   {
       printf("It's not a leap year");
   }
 

    return 0;
}
