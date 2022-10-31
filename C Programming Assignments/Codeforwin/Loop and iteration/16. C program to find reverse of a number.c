#include <stdio.h>

int main ()
{
  int num,reversed=0,remindar;
  printf("Input any number: ");
  scanf("%d",&num);
  while(num!=0)
  {
    remindar=num%10;
    reversed=reversed*10+remindar;
    num/=10;
  }
  printf("Reverse = %d",reversed);
  
  return 0;
}
