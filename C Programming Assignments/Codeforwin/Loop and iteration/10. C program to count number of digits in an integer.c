#include <stdio.h>

int main ()
{
  long int num;
  int count=0,i;
  printf("Input num: ");
  scanf("%ld",&num);
  printf("Number of digits: ");
while(num!=0)
{
    count++;
    num/=10;
}
  printf("%d",count);

  return 0;
}
