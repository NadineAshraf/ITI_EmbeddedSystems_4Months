#include <stdio.h>
void CheckBit(int number, int bit)
{
    number = number >> bit;
    if(number & 1)
    {
        printf("SET");
    }
    else
    {
        printf("Not Set");
    }
}
int main()
{
    int n,b;
    printf("Please enter the number: ");
    scanf("%d",&n);
    printf("Please enter number of bit: ");
    scanf("%d",&b);
    CheckBit(n,b);
    return 0;
}
