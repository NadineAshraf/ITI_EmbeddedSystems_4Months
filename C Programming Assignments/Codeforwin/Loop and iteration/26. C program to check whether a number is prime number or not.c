#include <stdio.h>

int main()
{
   int num,i,flag=0;
   printf("Input any number: ");
   scanf("%d",&num);
   for(i=2;i<=num/2;i++)
   {
       if(num%i == 0)
       {
           flag=1;
           break;
          
       }
   }
   if(flag == 0 && num > 1)
   {
       printf("%d is prime number",num);
   }
   else
   {
       printf("%d is not prime number",num);
   }
   
  
   return 0;
}
