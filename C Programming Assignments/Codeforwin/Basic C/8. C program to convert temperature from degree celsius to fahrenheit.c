#include <stdio.h>

int main()
{
   float celsius;
   printf("Enter temperature in Celsius = ");
   scanf("%f",&celsius);
   printf("Temperature in Fahrenheit = %.2f F",(celsius*9/5)+32);
   

   
    return 0;
}
