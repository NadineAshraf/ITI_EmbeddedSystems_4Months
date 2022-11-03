#include <stdio.h>

int factorial (int digit)
{
    int power;
    power=digit-1;
    while(power!=0)
    {
        digit*=power;
        power--;
    }
 return digit;   
}
int main()
{
   int upper,sum,originalNum,lastDigit,i,j;
   printf("Input number: ");
   scanf("%d",&upper);
   printf("Strong numbers between 1-%d:\n",upper);
  for(i=1; i<=upper; i++)
  {
      originalNum = i;
      sum=0;
    while(originalNum>0 )
    {
       lastDigit = originalNum%10;
       sum += factorial(lastDigit);
       
       originalNum/=10;
    }
   
   if(sum == i)
   {
       printf("%d, ",i);
   }
 
  }

   return 0;
}
