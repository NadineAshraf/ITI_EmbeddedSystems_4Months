#include <stdio.h>

int main()
{
   float fahrenheit;
   printf("Temperature in fahrenheit = ");
   scanf("%f",&fahrenheit);
   printf("Temperature in celsius = %.2f C",(fahrenheit-32)*5/9);
   

   
    return 0;
}
