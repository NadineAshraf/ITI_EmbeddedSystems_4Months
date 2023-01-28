#include <stdio.h>
#define MAX 100
void Sum(void)
{
   int sum;
   sum = 0.5*MAX*(MAX+1);
   printf("sum = %d",sum);
}
int main()
{
    Sum();
    return 0;
}
