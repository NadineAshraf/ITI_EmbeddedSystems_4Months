
#include <stdio.h>
int SumOdd(int num)
{
    int sum=0,i;
    for(i=1; i<=num; i++)
    {
    if(i%2 !=0)
    {
        sum+=i;
    }
    }
    return sum;
    
}
int main()
{
    int upper,result;
    printf("Input upper limit: ");
    scanf("%d",&upper);
    result = SumOdd(upper);
    printf("Sum of odd numbers from 1-%d: %d",upper,result);

    return 0;
}
