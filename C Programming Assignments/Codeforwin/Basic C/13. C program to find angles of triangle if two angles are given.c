#include <stdio.h>

int main()
{
   int angle1,angle2;
   printf("Enter first angle: ");
   scanf("%d",&angle1);
   printf("Enter second angle: ");
   scanf("%d",&angle2);
   printf("Third angle = %d",180-(angle1+angle2));
  
    return 0;
}
