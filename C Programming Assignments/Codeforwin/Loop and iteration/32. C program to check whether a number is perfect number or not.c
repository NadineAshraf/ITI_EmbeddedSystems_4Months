#include <stdio.h>

int main()
{
   int num,i,sum=0;
   printf("Input any number: ");
   scanf("%d",&num);
   for(i=1; i<=num/2;i++)
   {
       if(num%i == 0)
       {
           sum+=i;
       }
   }
   if(num == sum && num>0)
   {
       printf("%d is PERFECT NUMBER",num);
   }
   else
   {
        printf("%d is NOT PERFECT NUMBER",num);
   }
   return 0;
}
