#include <stdio.h>
#include <math.h>
int main ()
{
  int num,swappedNum;
  int first,last,digits;
  printf("Input any number: ");
  scanf("%d",&num);
  last=num%10;
  digits=(int)log10(num);
  first=(int)(num/pow(10,digits));
 swappedNum = last;
 swappedNum*=(int)pow(10,digits);
 swappedNum+=num%((int) pow(10,digits));
 swappedNum-=last;
 swappedNum+=first;
  printf("Number after swapping first and last digit: ");
  printf("%d",swappedNum);
  
  return 0;
}
