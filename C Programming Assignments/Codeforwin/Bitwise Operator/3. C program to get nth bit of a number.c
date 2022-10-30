#include <stdio.h>

int main()
{
   int num,bit;
   printf("Input number: ");
   scanf("%d",&num);
   printf("Input nth bit number: ");
   scanf("%d",&bit);
  if(((num>>bit)&1) == 1)
  {
      printf("%d bit of %d is set(1)",bit,num);
  }
  else
  {
      printf("%d bit of %d is set(0)",bit,num);
  }
     
    return 0;
}
