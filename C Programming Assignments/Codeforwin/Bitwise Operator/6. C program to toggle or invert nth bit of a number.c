#include <stdio.h>

int main()
{
   int num,bit;
   printf("Input number: ");
   scanf("%d",&num);
   printf("Input nth bit to toggle: ");
   scanf("%d",&bit);
   num ^=(1<<bit);
   printf("Number after toggling nth bit: %d (in decimal)",num);
     
    return 0;
}
