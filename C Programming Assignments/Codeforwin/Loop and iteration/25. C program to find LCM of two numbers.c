#include <stdio.h>

int main()
{
   int num1,num2,lcm=1,max,i;
   printf("Input number1: ");
   scanf("%d",&num1);
   printf("Input number2: ");
   scanf("%d",&num2);
   max = (num1 > num2) ? num1:num2;
   i=max;
   while(1)
   {
       if((i%num1 == 0 ) && (i%num2 == 0))
       {
           lcm = i;
           break;
       }
       i+=max;
   }
   printf("LCM = %d",lcm);
   return 0;
}
