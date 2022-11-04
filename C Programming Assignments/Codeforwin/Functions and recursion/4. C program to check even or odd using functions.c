#include <stdio.h>

void EvenOROdd(int num)
{
   if(num%2 == 0)
   {
       printf("%d is even",num);
   }
   else
   {
       printf("%d is odd",num);
   }
    
}
int main()
{
   int number;
   printf("Input any number: ");
   scanf("%d",&number);
   EvenOROdd(number);

    return 0;
}
