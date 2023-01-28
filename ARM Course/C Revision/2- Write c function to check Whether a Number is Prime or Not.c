#include <stdio.h>
void CheckPrime(int num)
{
    int i,flag=0;
    if(num == 0 || num == 1)
    {
        flag = 1;
    }
    else
    {
        for(i=2; i<num; i++)
        {
            if(num%i == 0)
            {
                flag = 1;
                break;
            }
            else
            {
               flag = 0;
            }
        }
    }
    if(flag == 1)
    {
        printf("Not Prime number");
    }
    else
    {
        printf("Prime number");
    }
}
int main()
{
    int n;
    printf("Please enter the number: ");
    scanf("%d",&n);
  CheckPrime(n);

    return 0;
}
