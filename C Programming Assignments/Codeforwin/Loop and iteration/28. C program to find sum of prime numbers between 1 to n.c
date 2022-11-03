#include <stdio.h>

int main()
{
   int upper,i,j,flag=0,sum=0;
   printf("Input upper limit: ");
   scanf("%d",&upper);
   printf("Prime numbers between 1-%d: ",upper);
   for(i=2;i<=upper;i++)
   {
       flag=1;
      for(j=2; j<=i/2;j++)
      {
          if(i%j == 0)
          {
              flag =0;
              break;
          }
      }
   
      if(flag == 1)
      {
        sum+=i;
      }
   }
   printf("%d",sum);

   return 0;
}
