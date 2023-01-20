#include <stdio.h>


void SumDigits(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum+= (num%10);
        num/=10;
    }
    printf("%d",sum);
}
int main()
{
    int n;
    printf("Please enter the number: ");
    scanf("%d",&n);
    SumDigits(n);
    return 0;
}
