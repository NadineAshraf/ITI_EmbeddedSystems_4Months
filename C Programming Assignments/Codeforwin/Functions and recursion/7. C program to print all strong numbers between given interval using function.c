#include <stdio.h>
long long factorial(int num)
{
    if(num == 0)
        return 1;
    else
        return (num * factorial(num-1));
}
void LimitStrong(int lower, int upper)
{
    int last,OriginalNum;
    long long sum;
    
    while(lower!=upper)
    {
        sum=0;
        OriginalNum=lower;
        while(OriginalNum !=0)
        {
          last =OriginalNum%10;
          sum+=factorial(last);
          OriginalNum/=10;
        }
        if(lower == sum )
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
    printf("Strong numbers between %d-%d are: ",lower,upper);
    LimitStrong(lower,upper);
  
    return 0;
}
