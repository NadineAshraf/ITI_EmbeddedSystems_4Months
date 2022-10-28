#include <stdio.h>

int main()
{
    int days,day,year,week;
   printf("Enter days: ");
   scanf("%d",&day);
   year = day / 365;
   week = (day - (year * 365))/7;
   days = day - ((year* 365) + (week*7));
   printf("%d days = %d year/s, %d week/s and %d day/s",day,year,week,days);
   

   
    return 0;
}
