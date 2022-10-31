#include <stdio.h>

int main ()
{
  int num,first;
  int count=0;
  printf("Input number: ");
  scanf("%d",&num);
  first=num;
  while(first>=10)
  {
      first/=10;
  }
  printf("Sum of first and last digit: %d ",first+num%10);
  return 0;
}
