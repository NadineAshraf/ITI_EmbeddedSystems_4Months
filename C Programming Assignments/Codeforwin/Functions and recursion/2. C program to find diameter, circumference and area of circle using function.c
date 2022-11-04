#include <stdio.h>
#define PI 3.14
void Circle(float rad)
{
    float diameter,circum,area;
    diameter = 2*rad;
    circum = 2*PI*rad;
    area = PI*rad*rad;
    printf("Diameter = %.2f units\n",diameter);
    printf("Circumference = %.2f units\n",circum);
    printf("Area = %.2f sq. units",area);
    
}
int main()
{
    float radius;
    printf("Input any number: ");
    scanf("%f",&radius);
    Circle(radius);
    return 0;
}
