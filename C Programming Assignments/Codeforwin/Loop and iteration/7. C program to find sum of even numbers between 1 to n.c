#include <stdio.h>

int main ()
{
  int num,i,sum=0;
  printf("Input upper limit of even number: ");
  scanf("%d",&num);
  printf("Sum of even numbers between 1 to 10: ");
  for(i=2; i<=num; i+=2)
  {
    sum+=i;
  }
  printf("%d",sum);

  return 0;
}
