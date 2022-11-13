#include <stdio.h>
void swap(int *num1,int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
   printf("\nNum1 = %d",*num1);
   printf("\nNum2 = %d",*num2);
}
int main()
{
   int *num1,*num2;
   printf("Input num1: ");
   scanf("%d",&num1);
   printf("Input num2: ");
   scanf("%d",&num2);
   printf("Values after swapping: ");
   swap(&num1, &num2);
   
    return 0;
}
