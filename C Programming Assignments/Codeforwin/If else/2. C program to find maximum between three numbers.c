#include <stdio.h>

int main()
{
   int num1,num2,num3;
   printf("Input num1: ");
   scanf("%d",&num1);
   printf("Input num2: ");
   scanf("%d",&num2);
    printf("Input num3: ");
   scanf("%d",&num3);
   if(num1>num2 && num1>num3)
   {
       printf("Maximum = %d",num1);
   }
   else if(num2>num1 && num2>num3)
   {
        printf("Maximum = %d",num2);
   }
   else if(num3>num1 && num3>num2)
   {
       printf("Maximum = %d",num3);
   }
   else
   {
       printf("All numbers are equal");
   }


    return 0;
}
