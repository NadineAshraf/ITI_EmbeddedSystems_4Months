#include <stdio.h>

int main()
{
   float principle,tim,rate,SI;
   printf("Enter principle: ");
   scanf("%f",&principle);
   printf("Enter time: ");
   scanf("%f",&tim);
   printf("Enter rate: ");
   scanf("%f",&rate);
   SI=(principle*tim*rate)/100;
   printf("Simple Interest = %f",SI);
   
    return 0;
}
