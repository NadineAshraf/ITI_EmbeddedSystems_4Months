#include <stdio.h>
#include <math.h>
int main()
{
    int base,exponent,result;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent: ");
    scanf("%d",&exponent);
    result = pow(base,exponent);
   printf("%d ^ %d = %d",base,exponent,result);
    
   
    return 0;
}
