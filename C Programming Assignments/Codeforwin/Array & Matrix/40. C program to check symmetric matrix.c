#include <stdio.h>

#define ROW  3
#define COL  3
#define SIZE 3
  
int main()
{
    int arr[SIZE][SIZE],i,j,flag=0;
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
           if(arr[i][j] == arr[j][i])
           {
               flag=1;
           }
        }
    }
if(flag == 1)
{
    printf("Given matrix is symmetric matrix");
}
else
{
    printf("Given matrix is Asymmetric matrix");
}
 
    
    return 0;
}
