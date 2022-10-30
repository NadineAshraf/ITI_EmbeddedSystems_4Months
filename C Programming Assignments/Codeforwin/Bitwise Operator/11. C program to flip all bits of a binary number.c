#include <stdio.h>

int main()
{
   int num,i,count=0,msb;
   printf("Input any number: ");
   scanf("%d",&num);
   num=~num;
   printf("Number after bits are flipped: %d (in decimal)",num);
   
    return 0;
}
