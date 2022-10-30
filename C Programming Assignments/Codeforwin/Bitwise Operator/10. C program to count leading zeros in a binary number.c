#include <stdio.h>

int main()
{
   int num,i,count=0,msb;
   printf("Input any number: ");
   scanf("%d",&num);
   msb = (1 << ((sizeof(int)*8)-1));
   for(i=0; i<sizeof(int)*8; i++)
   {
     if((num<<i) & msb)
     {
          
         break;
     }
    
     count++;
   }
 
    printf("Output leading zeros: %d (using 4 byte signed integer)",count);
   
  
     
    return 0;
}
