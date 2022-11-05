#include <stdio.h>
#include <math.h>
void Armstrong(int lower,int upper)
{
    int OriginalNum,last,sum,digits,i;
    for(i=lower; i<=upper; i++)
    {
        sum=0;
       OriginalNum = i;
       digits = (int)log10(i)+1;
    while(OriginalNum>0)
    {
        last = OriginalNum%10;
        sum+=ceil(pow(last,digits));
        OriginalNum/=10;
    }
    if(i == sum)
    {
        printf("%d, ",i);
    }
    
    }
    
}
int main()
{
   int lower,upper,result;
   printf("Input lower limit: ");
   scanf("%d",&lower);
   printf("Input upper limit: ");
   scanf("%d",&upper);
   printf("Armstrong numbers between %d to %d are: ",lower,upper);
    Armstrong(lower,upper);

    return 0;
}
