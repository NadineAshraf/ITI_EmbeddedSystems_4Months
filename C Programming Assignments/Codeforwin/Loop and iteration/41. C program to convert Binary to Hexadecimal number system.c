#include <stdio.h>
#include <string.h>
#define SIZE 16
int main()
{
    int hexConstant [] = {0000,0001,0010,0011,0100,0101,0110,0111,1000,1001,1010,1011,1100,1101,1110,1111};
    int temp,digit,num,i,index=0,flag=0;
    char hex[20];
    printf("Input binary number: ");
    scanf("%d",&num);
    temp=num;
    while(temp != 0)
    {
        digit= temp%10000;
       for(i=0; i<SIZE;i++)
       {
           if(hexConstant[i]==digit)
           {
              if(i<10)
              {
                  hex[index] = (char)(i+48);
              }
              else
              {
                  hex[index] = (char)((i-10)+65);
              }
              index++;
              flag=1;
              break;
           }
       }
        
        temp/=10000;
       
    }
     
    if(flag == 1)
    {
    printf("%s",hex);
    }
    return 0;
}
