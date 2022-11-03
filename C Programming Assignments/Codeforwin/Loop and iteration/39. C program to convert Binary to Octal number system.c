#include <stdio.h>
#define SIZE 8
int main()
{
    int octalConstant[] = {0,1,10,11,100,101,110,111};
    int temp,digit,num,i,place=1,octal=0;
    printf("Input binary number: ");
    scanf("%d",&num);
    temp=num;
    while(temp != 0)
    {
        digit= temp%1000;
        for(i=0; i<SIZE; i++)
        {
            if(octalConstant[i] == digit)
            {
              octal =(i*place) +octal;
              break;
            }
        }
        temp/=1000;
        place*=10;
    }
    printf("%d",octal);
    return 0;
}
