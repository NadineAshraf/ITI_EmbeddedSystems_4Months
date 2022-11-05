#include <stdio.h>
#include <math.h>
void prime(int num)
{
    int i,flag=0;
    for(i=2;i<num;i++)
    {
        if(num%i == 0)
        {
            printf("%d is not prime number",num);
            flag=1;
            break;
        }
    
     }     
    if (flag == 0)
    {
        printf("%d is a prime number\n",num);
    }
}
void Armstrong(int num)
{
    int digits,i,last,sum=0,OriginalNum;
    OriginalNum = num;
    digits=(int)log10(num)+1;
    while(num>0)
    {
        last = num%10;
        sum+= round(pow(last,digits));
        num/=10;
    }
    if(OriginalNum == sum)
    {
       printf("%d is a armstrong number\n",OriginalNum);
    }
    else
    {
        printf("%d is not armstrong number\n",OriginalNum);
    }
}
void Perfect(int num)
{
    int i,sum=0,OriginalNum;
    OriginalNum = num;
    for(i=1; i<num; i++)
    {
        if(num%i == 0)
        {
            sum+=i;
        }
    }
    if(OriginalNum == sum & num>0)
    {
        printf("%d is a perfect number\n",num);
    }
    else
    {
        printf("%d is not a perfect number\n",num);
    }
}
int main()
{
    int num;
    printf("Input any number: ");
    scanf("%d",&num);
    prime(num);
    Armstrong(num);
    Perfect(num);
    
    return 0;
}
