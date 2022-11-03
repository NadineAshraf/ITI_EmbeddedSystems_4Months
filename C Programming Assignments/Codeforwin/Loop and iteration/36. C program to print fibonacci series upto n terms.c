#include <stdio.h>

int main()
{
   int num,a=0,b=1,c=0,i;
   printf("Input number of terms: ");
   scanf("%d",&num);
   printf("Fibonacci series:\n");
   for(i=1; i<=10; i++)
   {
       printf("%d, ",c);
       a=b;
       b=c;
       c=a+b;
       
   }
    return 0;
}
