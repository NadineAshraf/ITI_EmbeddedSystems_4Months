#include <stdio.h>

int main()
{
   int lower,upper,i,j,flag=0;
   printf("Input lower limit: ");
   scanf("%d",&lower);
   printf("Input upper limit: ");
   scanf("%d",&upper);
   printf("Prime numbers between %d-%d: ",lower,upper);
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
        printf("%d, ",i);
      }
   }

   return 0;
}
