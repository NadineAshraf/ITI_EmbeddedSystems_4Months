#include <stdio.h>

int prime(int num)
{
    int i,flag=0;
    for(i=2;i<num;i++)
    {
        if(num%i == 0)
        {
           return 0;
        }
    
     }     
    if (flag == 0)
    {
        return 1;
    }
}
void LimitPrime(int lower, int upper)
{
    printf("Prime numbers between %d-%d are: ",lower,upper);
    while(lower<=upper)
    {
        if(prime(lower))
        {
            printf("%d, ",lower);
        }
        lower++;
    }
}

int main()
{
     int lower,upper;
    printf("Input lower limit: ");
    scanf("%d",&lower);
    printf("Input upper limit: ");
    scanf("%d",&upper);
    LimitPrime(lower,upper);
    
    return 0;
}
