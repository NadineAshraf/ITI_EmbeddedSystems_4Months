#include <stdio.h>


int main()
{
   int rows,columns,i,j;
   printf("Input rows: ");
   scanf("%d",&rows);
   printf("Input columns: ");
   scanf("%d",&columns);
   for(i=0; i<rows; i++)
   {
       for(j=0; j<columns; j++)
       {
           printf("%d",1);
       }
       printf("\n");
   }

    return 0;
}
