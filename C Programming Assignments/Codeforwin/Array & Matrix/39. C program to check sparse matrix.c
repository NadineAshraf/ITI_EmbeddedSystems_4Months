#include <stdio.h>
#include <math.h>
#define ROW  3
#define COL  3
#define SIZE 3
  
int main()
{
    int arr[SIZE][SIZE],i,j,count=0;
    printf("Input array in matrix: ");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            if(arr[i][j] == 0)
            {
                count++;
            }
        }
    }
if( count == abs((ROW*COL)/2)+1)
{
    printf("The given matrix is Sparse matrix");
}
else
{
    printf("The given matrix is not Sparse matrix");
}
 
    
    return 0;
}
