#include <stdio.h>
void ReverseNum(int num)
{
   int reversed=0,i=0;
   while(num!=0)
   {
       reversed = reversed*10 + (num%10);
       num/=10;
       i++;
   }
   printf("Reversed Num = %d",reversed);
}
int main()
{
    int n;
    printf("Please enter number: ");
    scanf("%d",&n);
  ReverseNum(n);
    return 0;
}
