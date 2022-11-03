#include <stdio.h>
#include <math.h>
int main()
{

    int temp,digit,num,decimal=0,place=0;
    printf("Input binary number: ");
    scanf("%d",&num);
    temp=num;
    while(temp != 0)
    {
        digit= temp%10;
        decimal+= pow(8,place)*digit;
        temp/=10;
        place++;
    }
     
    printf("Decimal number: %d",decimal);
    
    return 0;
}
