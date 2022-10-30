#include <stdio.h>

int main()
{
   int num,msb;
   printf("Input number: ");
   scanf("%d",&num);
   msb = 1<<((sizeof(int) * 8)-1);
  if(num & msb)
  {
        printf("Most Significant Bit (MSB) of %d is set (1).", num);
  }
  else
  {
        printf("Most Significant Bit (MSB) of %d is unset (0).", num);

  }


     
    return 0;
}
