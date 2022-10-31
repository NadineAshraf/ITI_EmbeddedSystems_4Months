#include <stdio.h>

int main ()
{
  int num,i,sum=0;
  printf("Input upper limit: ");
  scanf("%d",&num);
  printf("Sum of odd numbers between 1-10: ");
  for(i=1; i<=num; i+=2)
  {
    sum+=i;
  }
  printf("%d",sum);

  return 0;
}
