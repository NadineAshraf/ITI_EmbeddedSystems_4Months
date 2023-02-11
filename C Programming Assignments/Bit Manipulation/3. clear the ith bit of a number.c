#include <stdio.h>
void ClearBit(int number, int bit)
{
   number &=(~(1 << (bit-1)));
   printf("Number = %d",number);
}
int main()
{
    int n,b;
    printf("Please enter the number: ");
    scanf("%d",&n);
    printf("Please enter number of bit: ");
    scanf("%d",&b);
    ClearBit(n,b);
    return 0;
}
