#include <stdio.h>

int main()
{
   int num,i,count=0;
   printf("Input any number: ");
   scanf("%d",&num);
   for(i=0; i<sizeof(int)*8; i++)
   {
     if(((num>>i) & 1) == 1)
     {
          
         break;
     }
    
     count++;
   }
 
    printf("Trailing zeros: %d",count);
   
  
     
    return 0;
}
