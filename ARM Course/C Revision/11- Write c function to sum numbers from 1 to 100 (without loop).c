#include <stdio.h>
#define MAX 101
int Sum(void)
{
   static int num = 1,sum=0;
    while(num != MAX)
    {
       sum+=num;
          
       num++;
       Sum();
    }
    

 
    return sum;
    
}
int main()
{
    int x;
  x = Sum();
    printf("sum = %d",x);  
    return 0;
}
