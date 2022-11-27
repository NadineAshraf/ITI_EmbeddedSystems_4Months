#include <stdio.h>


int main()
{
   int rows,i,x;
   printf("Input rows: ");
   scanf("%d",&rows);
   printf("Input columns: ");
   scanf("%d",&x);
   
  
   for(i=1; i<=rows; i++)
   {
           for(x=1; x<6; x++)
           {
           printf("%d",x);
           }
           printf("\n");
           
    }
    
    return 0;
}
