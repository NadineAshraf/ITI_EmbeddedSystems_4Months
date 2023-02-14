#include <stdio.h>

int main()
{
   int num;

   printf("Enter number: ");
   scanf("%d", &num);

   if((num != 0) && ((num &(num - 1)) == 0))
      printf("%d is a power of 2", num);

   else
      printf("%d is not a power of 2", num);

 return 0;
}
