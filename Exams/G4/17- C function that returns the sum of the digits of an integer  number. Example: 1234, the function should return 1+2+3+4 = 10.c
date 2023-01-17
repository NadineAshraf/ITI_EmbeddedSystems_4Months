#include <stdio.h>
int Summuation(unsigned int num)
{
     int reserved,sum=0;
     while(num !=0)
     {
     reserved = num % 10;
     sum+=reserved;
     
     num/=10;
     }
     return sum;
     
}
int main()
{
    int x;
   x = Summuation(1234);
   printf("%d",x);

    return 0;
}
