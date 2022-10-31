#include <stdio.h>

int main ()
{
  int num,i,sum=0;
  printf("Input upper limit: ");
  scanf("%d",&num);
  printf("Sum of natural numbers 1-10: ");
  for(i=1; i<=num; i++)
  {
    sum+=i;
  }
  printf("%d",sum);

  return 0;
}
