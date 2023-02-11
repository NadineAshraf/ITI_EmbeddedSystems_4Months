#include <stdio.h>
void SetBit(int number, int bit)
{
   number |=(1 << bit);
   printf("Number = %d",number);
}
int main()
{
    int n,b;
    printf("Please enter the number: ");
    scanf("%d",&n);
    printf("Please enter number of bit: ");
    scanf("%d",&b);
    SetBit(n,b);
    return 0;
}
