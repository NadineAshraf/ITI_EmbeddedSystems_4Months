#include <stdio.h>
void NearestNum(int num)
{
    int rest;
    rest = num%10;
    if(rest>=5)
    {
        num+=(10-rest);
    }
    else
    {
        num-=rest;
    }
    printf("%d",num);
}
int main()
{
    int n;
    printf("Please enter number: ");
    scanf("%d",&n);
 NearestNum(n);
    return 0;
}
