#include <stdio.h>

int main ()
{
  int num,reversed=0,remindar,n;
  printf("Input any number: ");
  scanf("%d",&num);
  n=num;
  while(num!=0)
  {
    remindar=num%10;
    reversed=reversed*10+remindar;
    num/=10;
  }
  
  if(reversed == n)
  {
     printf("%d is palindrome.",n);
  }
  else
  {
      printf("%d is not palindrome.",n);
  }
  return 0;
}
