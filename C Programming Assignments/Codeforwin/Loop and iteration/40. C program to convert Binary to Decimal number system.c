#include <stdio.h>
#include <math.h>

int main()
{
    int temp,digit,num,i=0,sum=0;
    printf("Input binary number: ");
    scanf("%d",&num);
    temp=num;
    while(temp != 0)
    {
        digit= temp%10;
      
         if(digit == 1)
         {
             sum+= pow(2,i);
         }
        i++;
        
        temp/=10;
       
    }
    printf("%d",sum);
    return 0;
}
