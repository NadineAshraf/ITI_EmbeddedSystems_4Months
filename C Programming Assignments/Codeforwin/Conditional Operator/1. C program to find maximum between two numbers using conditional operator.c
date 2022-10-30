#include <stdio.h>

int main()
{
   int first,second,max;
   printf("Input first number: ");
   scanf("%d",&first);
   printf("Input second number: ");
   scanf("%d",&second);
   max=(first>second)?first:second;
   printf("Maximum: %d",max);

    return 0;
}
