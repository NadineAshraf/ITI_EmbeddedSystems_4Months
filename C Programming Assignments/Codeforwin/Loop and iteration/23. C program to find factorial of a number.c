#include <stdio.h>

int main()
{
   int num,power;
   printf("Input number: ");
   scanf("%d",&num);
   power=num-1;
   printf("Factorial: ");
   while(power!=0)
   {
       num*=power;
       power--;
   }
   printf("%d",num);
    return 0;
}
