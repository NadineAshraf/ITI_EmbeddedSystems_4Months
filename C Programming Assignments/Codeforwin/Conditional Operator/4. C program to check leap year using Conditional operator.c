#include <stdio.h>

int main()
{
   int year;
   printf("Input year: ");
   scanf("%d",&year);
   ((year%4 == 0)&& (year%100 !=0))?printf("%d is Leap Year",year):(year%400 == 0)
   ?printf("%d is Leap Year",year):printf("%d is common year",year);

    return 0;
}
