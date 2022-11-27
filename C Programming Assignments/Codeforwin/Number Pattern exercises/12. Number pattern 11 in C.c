#include <stdio.h>


int main()
{
   int rows,cols,i,j;
   printf("Input rows: ");
   scanf("%d",&rows);
   printf("Input columns: ");
   scanf("%d",&cols);
   
  
   for(i=1; i<=rows; i++)
   {
       for(j=i; j< i+cols; j++)
       {
           
           printf("%d",j);
    
       } 
       printf("\n");
        
    }
    
    return 0;
}
