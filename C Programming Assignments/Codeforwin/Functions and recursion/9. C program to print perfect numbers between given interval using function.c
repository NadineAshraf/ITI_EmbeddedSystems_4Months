#include <stdio.h>

void Perfect(int lower,int upper)
{
    int sum,i,j;
    for(i=lower; i<=upper; i++)
    {
        sum=0;
        for(j=1; j<i; j++)
        {
            if(i%j == 0)
            {
                sum+=j;
            }
        }
        if(sum == i)
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
   printf("Perfect numbers between %d to %d are: ",lower,upper);
    Perfect(lower,upper);

    return 0;
}
