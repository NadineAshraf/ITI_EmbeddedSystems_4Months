#include <stdio.h>

int main()
{
   float length,width;
   printf("Enter length: ");
   scanf("%f",&length);
   printf("Enter width: ");
   scanf("%f",&width);
   printf("Perimeter of rectangle = %f units", 2*(length+width));
   
    return 0;
}
