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
  printf("First digit: %d\n",first);
  
  printf("Last digit: %d",num%10);
      
  

  return 0;
}
