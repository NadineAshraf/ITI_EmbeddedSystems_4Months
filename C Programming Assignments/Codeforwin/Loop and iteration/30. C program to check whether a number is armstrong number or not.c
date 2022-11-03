#include <stdio.h>
#include <math.h>

int main()
{
   int num,sum=0,originalNum,lastDigit,digits;
   printf("Input any number: ");
   scanf("%d",&num);
   originalNum = num;
   /* Total digits in num */
   digits = (int) log10(num)+1;
   while(num>0)
   {
       lastDigit = num%10;
       sum += round (pow(lastDigit,digits));
       num/=10;
   }
   if(originalNum == sum)
   {
       printf("%d is armstrong number",originalNum);
   }
   else
   {
       printf("%d is not armstrong number",originalNum);
   }

   return 0;
}
