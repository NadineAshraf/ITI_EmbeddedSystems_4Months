#include <stdio.h>
#include <math.h>
int main()
{
    float number,result;
    printf("Enter any number: ");
    scanf("%f",&number);
    result = sqrt(number);
    printf("Square root of %d = %.2f",(int)number,result);
    
    
    
   
    return 0;
}
