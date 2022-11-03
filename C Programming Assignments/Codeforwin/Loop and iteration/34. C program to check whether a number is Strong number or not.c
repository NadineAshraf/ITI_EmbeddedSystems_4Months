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
   int num,sum=0,originalNum,lastDigit,digits;
   printf("Input number: ");
   scanf("%d",&num);
   originalNum = num;
  
   while(num>0)
   {
       lastDigit = num%10;
       sum += factorial(lastDigit);
       num/=10;
   }
   if(originalNum == sum)
   {
       printf("%d is STRONG NUMBER",originalNum);
   }
   else
   {
       printf("%d is NOT STRONG NUMBER",originalNum);
   }

   return 0;
}
