#include <stdio.h>

int main()
{
   int num,i,order=-1;
   printf("Input any number: ");
   scanf("%d",&num);
   for(i=0; i<sizeof(int)*8; i++)
   {
     if(((num>>i) & 1) == 1)
     {
         order=i;
         break;
     }
   }
   if(order != -1)
   {
      printf("First set bit %d",order);
   }
   else
   {
      printf("0 has no set bits");
   }
     
    return 0;
}
