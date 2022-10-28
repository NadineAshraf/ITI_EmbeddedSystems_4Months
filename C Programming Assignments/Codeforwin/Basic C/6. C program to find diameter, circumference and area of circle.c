#include <stdio.h>
#define PI 3.14
int main()
{
   float radius;
   printf("Enter radius: ");
   scanf("%f",&radius);
   printf("Diameter = %0.2f units\n",2*radius);
   printf("Circumference = %0.2f units\n", 2*PI*radius);
   printf("Area = %0.2f sq. units", PI*radius*radius);
   
    return 0;
}
