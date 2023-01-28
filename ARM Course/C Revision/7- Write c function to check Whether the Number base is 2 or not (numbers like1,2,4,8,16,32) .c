#include <stdio.h>
void CheckNumBase2(float num)
{
    int i=0,flag=0;
    while(num!=0)
    {
        if(num ==1)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
        num/=2;
        i++;
        
    }
    if(flag == 1)
    {
        printf("Number is base of 2");
    }
    else 
    {
        printf("Number is not base of 2");
    }
}
int main()
{
  float n;
  printf("Please enter the number: ");
  scanf("%f",&n);
CheckNumBase2(n);
    return 0;
}
