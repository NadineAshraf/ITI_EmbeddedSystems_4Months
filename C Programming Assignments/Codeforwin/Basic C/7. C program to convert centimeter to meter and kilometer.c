#include <stdio.h>

int main()
{
   float length;
   printf("Enter length in centimeter = ");
   scanf("%f",&length);
   printf("Length in meter = %.2f m\n",length/100);
   printf("Length in kilmeter = %.2f km\n", length/100000);

   
    return 0;
}
