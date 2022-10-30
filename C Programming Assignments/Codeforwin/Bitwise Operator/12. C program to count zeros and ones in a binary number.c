#include <stdio.h>

int main()
{
   int num,i,count0=0,count1=0;
   printf("Input any number: ");
   scanf("%d",&num);
   for(i=0;i<sizeof(int)*8;i++)
   {
       if(num&1)
       {
           count1++;
       }
       else
       {
           count0++;
       }
       num>>=1;
   }
  
   printf("Output number of ones: %d\n",count1);
   printf("Output number of zeros: %d",count0);
   
   
    return 0;
}
