#include <stdio.h>
#include <math.h>
int main()
{
   float side;
   printf("Enter side of the equilateral triangle: ");
   scanf("%f",&side);
   printf("Area of equilateral triangle = %.2f sq. units",(sqrt(3)/4)*side*side);
    
   
    return 0;
}
