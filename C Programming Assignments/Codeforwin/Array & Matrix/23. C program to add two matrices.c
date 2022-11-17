#include <stdio.h>
#define ROW  3
#define COL  3
#define SIZE 3
  
int main()
{
    int arr1[SIZE][SIZE],arr2[SIZE][SIZE],i,j;
    printf("Input elements in 3x3 matrix1: ");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Input elements in 3x3 matrix2: ");
     for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Sum of both matrix = \n");
     for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
