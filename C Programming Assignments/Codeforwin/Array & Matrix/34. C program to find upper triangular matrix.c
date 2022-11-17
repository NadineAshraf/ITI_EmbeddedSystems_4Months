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
            if((arr[i][j] == 0) && i>j)
            {
                flag =1;
            }
        }
    
    }
    if(flag == 0)
    {
        printf("Matrix is upper triangular");
    }
    else
    {
        printf("Matrix is not upper triangular");
    }
    return 0;
}
