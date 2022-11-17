#include <stdio.h>
#define ROW  3
#define COL  3
#define SIZE 3
  
int main()
{
    int arr1[SIZE][SIZE],arr2[SIZE][SIZE],i,j,sum=0;
    printf("Input array elements: ");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
  
  for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }
    printf("Transpose: \n");
   for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
