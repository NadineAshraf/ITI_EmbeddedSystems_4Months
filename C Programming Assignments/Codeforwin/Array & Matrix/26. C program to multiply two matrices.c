#include <stdio.h>
#define ROW  3
#define COL  3
#define SIZE 3
  
int main()
{
    int arr1[SIZE][SIZE],arr2[SIZE][SIZE],arr3[SIZE][SIZE],i,j,k,sum;
    printf("Input elements of matrix1: ");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Input elements of matrix2: ");
     for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    
     for(i=0; i<ROW; i++)
    {
       
        for(j=0; j<COL; j++)
        {
             sum=0;
            for(k=0; k<SIZE; k++)
            {
               sum+=arr1[i][k]*arr2[k][j];
            }
          arr3[i][j] = sum;
        }
        
    }
    printf("Product of matrices = \n");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
