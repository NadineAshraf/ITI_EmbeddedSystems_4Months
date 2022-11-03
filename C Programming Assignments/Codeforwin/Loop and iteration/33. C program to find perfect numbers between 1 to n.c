#include <stdio.h>

int main()
{
   int num,i,j,sum;
   printf("Input any number: ");
   scanf("%d",&num);
   printf("Perfect numbers between 1 to %d:",num);
   for(i=1; i<=num;i++)
   {
       sum=0;
       for(j=1; j<i; j++)
       {
         if(i%j == 0)
          {
             sum+=j;
          }
       }
   
   if(sum == i)
   {
       printf("%d, ",i);
   }
  
   }
   return 0;
}
