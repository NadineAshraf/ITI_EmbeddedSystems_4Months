#include <stdio.h>
int CountOnes(int num)
{
    int i=0,count=0;
    while(num>>i)
    {
        if(num>>i &1)
        {
            count++;
        }
        i++;
    }
  return count;
}
int main()
{
  int n,x;
  printf("Please enter the number: ");
  scanf("%d",&n);
x = CountOnes(n);
printf("Count = %d",x);
    return 0;
}
