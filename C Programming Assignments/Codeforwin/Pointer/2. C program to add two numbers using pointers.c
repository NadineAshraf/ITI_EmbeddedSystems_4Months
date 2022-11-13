#include <stdio.h>

int main()
{
   int num1,num2;
   int *ptr1, *ptr2;
   ptr1 = &num1;
   ptr2 = &num2;
   printf("Input num1: ");
   scanf("%d",ptr1);
   printf("Input num2: ");
   scanf("%d",ptr2);
   printf("Sum = %d\n", *ptr1 + *ptr2);
   printf("Difference = %d\n", *ptr1 - *ptr2);
   printf("Product = %d\n", *ptr1 * *ptr2);
   printf("Quotient = %d",*ptr1/ *ptr2);
    return 0;
}
