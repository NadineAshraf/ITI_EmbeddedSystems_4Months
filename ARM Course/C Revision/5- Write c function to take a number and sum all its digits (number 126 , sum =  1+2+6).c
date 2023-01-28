#include <stdio.h>
void Sum(int num)
{
  int sum=0,i=0,res;
  while(num!=0)
  {
  res= num%10;
  sum+=res;
  num/=10;
  i++;
  }
 printf("Sum = %d",sum); 
}
int main()
{
    int n;
    printf("Please enter number: ");
    scanf("%d",&n);
     Sum(n);
    return 0;
}
