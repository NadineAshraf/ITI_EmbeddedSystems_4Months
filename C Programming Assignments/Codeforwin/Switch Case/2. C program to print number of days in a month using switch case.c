#include <stdio.h>

int main()
{
    int month;
    printf("Input month number: ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
               printf("Total number of days = 31");
               break;
        case 2:
               printf("Total number of days = 28 or 29");
               break;
        case 3:
               printf("Total number of days = 31");
               break;
        case 4:
               printf("Total number of days = 30");
               break;
        case 5:
               printf("Total number of days = 31");
               break;
        case 6:
               printf("Total number of days = 30");
               break;
        case 7:
              printf("Total number of days = 31");
               break;
        case 8:
               printf("Total number of days = 31");
               break;
        case 9:
               printf("Total number of days = 30");
               break;
        case 10:
               printf("Total number of days = 31");
               break;
        case 11:
              printf("Total number of days = 30");
               break;
        case 12:
               printf("Total number of days = 31");
               break;
    }

    return 0;
}
