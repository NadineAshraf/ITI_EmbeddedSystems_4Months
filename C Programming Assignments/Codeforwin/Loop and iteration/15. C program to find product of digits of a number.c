#include <stdio.h>

int main ()
{
  int num,digit,product=1;
  printf("Input any number: ");
  scanf("%d",&num);
  while(num!=0)
  {
    digit=num%10;
    product*=digit;
    num/=10;
  }
  printf("Product of digits: %d",product);
  
  return 0;
}
