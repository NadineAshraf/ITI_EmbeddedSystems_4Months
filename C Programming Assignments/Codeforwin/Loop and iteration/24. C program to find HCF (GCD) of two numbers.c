#include <stdio.h>

int main()
{
   int num1,num2,hcf=1,min,i;
   printf("Input first number: ");
   scanf("%d",&num1);
   printf("Input second number: ");
   scanf("%d",&num2);
   min = (num1 < num2) ? num1:num2;
   for(i=1; i<=min; i++)
   {
       if((num1%i == 0 ) && (num2%i == 0))
       {
           hcf = i;
       }
   }
   printf("HCF of %d and %d: %d",num1,num2,hcf);
   return 0;
}
