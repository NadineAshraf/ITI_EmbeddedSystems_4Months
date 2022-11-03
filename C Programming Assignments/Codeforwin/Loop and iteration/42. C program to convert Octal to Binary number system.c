#include <stdio.h>

int main()
{
    int OctalValue[] = { 0,1,10,011,100,101,110,111};
    int temp,digit,num,i,index=0,flag=0,binary=0,place=1;
    printf("Input binary number: ");
    scanf("%d",&num);
    temp=num;
    while(temp != 0)
    {
        digit= temp%10;
        binary = (OctalValue[digit]*place)+binary;
        temp/=10;
        place*=1000;
       
    }
     
    printf("Binary of %d: %d",num,binary);
    
    return 0;
}
