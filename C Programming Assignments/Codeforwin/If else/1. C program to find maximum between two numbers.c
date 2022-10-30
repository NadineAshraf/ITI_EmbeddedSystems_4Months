#include <stdio.h>

int main()
{
   int num1,num2;
   printf("Input num1: ");
   scanf("%d",&num1);
   printf("Input num2: ");
   scanf("%d",&num2);
   if(num1>num2)
   {
       printf("Maximum = %d",num1);
   }
   else if(num2>num1)
   {
        printf("Maximum = %d",num2);
   }
   else
   {
       printf("Both are equal");
   }


    return 0;
}
