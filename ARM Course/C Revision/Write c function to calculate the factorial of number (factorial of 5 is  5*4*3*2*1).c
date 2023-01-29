#include <stdio.h>
void Factorial(int num)
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
 int n;
 printf("Please enter the number: ");
 scanf("%d",&n);
 Factorial(n);

    return 0;
}
