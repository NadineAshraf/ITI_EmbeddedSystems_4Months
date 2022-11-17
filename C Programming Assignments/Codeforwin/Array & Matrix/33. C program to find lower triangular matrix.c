#include <stdio.h>
#define ROW  3
#define COL  3
#define SIZE 3
  
int main()
{
    int arr[SIZE][SIZE],i,j,flag=0;
    printf("Input array elements: ");
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
            if((arr[i][j] == 0) && j>i)
            {
                flag =1;
            }
        }
    
    }
    if(flag == 1)
    {
        printf("Matrix is lower triangular");
    }
    else
    {
        printf("Matrix is not lower triangular");
    }
    return 0;
}
