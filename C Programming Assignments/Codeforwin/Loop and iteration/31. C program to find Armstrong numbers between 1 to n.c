#include <stdio.h>
#include <math.h>

int main()
{
   int lower,upper,sum,originalNum,lastDigit,digits,i;
   printf("Enter lower limit: ");
   scanf("%d",&lower);
   printf("Enter upper limit: ");
   scanf("%d",&upper);
   
 
   
   printf("Armstrong number between %d to %d are:\n",lower,upper);
   for(i=lower; i<=upper; i++)
   {
       sum=0;
       originalNum = i;
         /* Total digits in num */
       digits = (int) log10(i)+1;
      while(originalNum>0)
      {
       lastDigit = originalNum%10;
       sum += ceil(pow(lastDigit,digits));
       originalNum/=10;
      }
        if(i == sum)
       {
           printf("%d, ",i);
       }
    }
   
  
  

   return 0;
}
