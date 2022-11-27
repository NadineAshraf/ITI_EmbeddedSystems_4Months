#include <stdio.h>


int main()
{
   int rows,cols,i,j,x;
   printf("Input rows: ");
   scanf("%d",&rows);
   printf("Input columns: ");
   scanf("%d",&cols);
   
  
   for(i=1; i<=rows; i+=5)
   {
       
          for(x=i; x<26; x++)
          {
              
              printf("%d ",x);
              if(x%5 == 0)
              {
                  printf("\n");
              }
          }
    printf("\n");
      
    }
    
    return 0;
}
