#include <stdio.h>

void Max(int num1, int num2)
{
   int max;
   if(num1>num2)
   {
      printf("Maximum = %d\n",num1);
      printf("Minimum = %d\n",num2);
      
   }
   else if(num2>num1)
   {
      printf("Maximum = %d\n",num2);
      printf("Minimum = %d\n",num1);
   }
   else
   {
       printf("The two numbers are equal");
   }
    
}
int main()
{
   int num1,num2;
   printf("Input two numbers: ");
   scanf("%d %d",&num1,&num2);
    Max(num1,num2);
    return 0;
}
