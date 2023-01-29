#include <stdio.h>
int Factorial(int num)
{
   int mul=1;
 
    while(num !=0)
    {
        mul*=num;
        num--;
    }
   printf("Factorial = %d",mul);
}
int main()
{
 int n,x;
 printf("Please enter the number: ");
 scanf("%d",&n);
 Factorial(n);

    return 0;
}
