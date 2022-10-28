#include <stdio.h>

int main()
{
    int base,exponent,i,result=1;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent: ");
    scanf("%d",&exponent);
   for(i=0; i<exponent;i++)
   {
       result*=base;
   }
   printf("%d ^ %d = %d",base,exponent,result);
    
   
    return 0;
}
