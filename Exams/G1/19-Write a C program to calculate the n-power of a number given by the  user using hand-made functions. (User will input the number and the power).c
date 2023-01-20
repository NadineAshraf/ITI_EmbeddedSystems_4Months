#include <stdio.h>


void POWER(int num, int power)
{
    int result=1;
    while(power!=0)
    {
        result*=num;
        power--;
    }
    printf("%d",result);
}
int main()
{
    int n,p;
    printf("Please enter the number: ");
    scanf("%d",&n);
    printf("Please enter the power: ");
    scanf("%d",&p);
    POWER(n,p);
    return 0;
}
