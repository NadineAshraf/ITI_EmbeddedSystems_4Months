#include <stdio.h>
#include <math.h>
int main()
{
   float principle,tim,rate,CI;
   printf("Enter principle (amount): ");
   scanf("%f",&principle);
   printf("Enter time: ");
   scanf("%f",&tim);
   printf("Enter rate: ");
   scanf("%f",&rate);
   CI = (principle * pow((1+rate / 100),tim));
   printf("Simple Interest = %f",CI);
   
    return 0;
}
