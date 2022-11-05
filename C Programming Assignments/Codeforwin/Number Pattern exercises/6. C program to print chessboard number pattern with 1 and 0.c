#include <stdio.h>


int main()
{
   int rows,columns,i,j,k;
   printf("Input rows: ");
   scanf("%d",&rows);
   printf("Input columns: ");
   scanf("%d",&columns);
   k=1;
   for(i=0; i<rows; i++)
   {
       for(j=0; j<columns; j++)
       {
           
           if(k == 1)
           {
              printf("%d",1);
           }
           else
           {
               printf("%d",0);
              
           }
           k*=-1;
       }
       if(columns%2 == 0)
       {
           k*=-1;
       }
       printf("\n");
   }

    return 0;
}
