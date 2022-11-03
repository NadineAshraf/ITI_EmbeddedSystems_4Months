#include <stdio.h>

int main()
{
   int num1,num2;
   printf("Input first number: ");
   scanf("%d",&num1);
   printf("Input second number: ");
   scanf("%d",&num2);
   num1^=num2;
   num2^=num1;
   num1^=num2;
   
   printf("First number after swapping: %d\n",num1);
   printf("Second number after swapping: %d",num2);

   
   
    return 0;
}
