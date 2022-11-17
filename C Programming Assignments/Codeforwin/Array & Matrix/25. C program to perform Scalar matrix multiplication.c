#include <stdio.h>
#define ROW  3
#define COL  3
#define SIZE 3
  
int main()
{
    int arr[SIZE][SIZE],i,j,num;
    printf("Input elements of matrix: ");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
   printf("Input multiplier: ");
   scanf("%d",&num);
    printf("Difference of both matrix = \n");
     for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d ",num*arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
