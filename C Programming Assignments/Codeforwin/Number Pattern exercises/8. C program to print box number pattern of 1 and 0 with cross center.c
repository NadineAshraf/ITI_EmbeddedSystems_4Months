#include <stdio.h>


int main()
{
   int rows,columns,i,j;
   printf("Input rows: ");
   scanf("%d",&rows);
   printf("Input columns: ");
   scanf("%d",&columns);
   
   for(i=1; i<=rows; i++)
   {
       for(j=1; j<=columns; j++)
       {
           
           if( (i == j) || (j == ((columns+1)-i)))
           {
              printf("%d",1);
           }
           else
           {
               printf("%d",0);
              
           }
           
       }
    
       printf("\n");
   }

    return 0;
}
