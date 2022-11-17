#include <stdio.h>
#define ROW  2
#define COL  2
#define SIZE 2
  
int main()
{
    int arr[SIZE][SIZE],i,j,det;
    printf("Input array elements: ");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
  det =(arr[0][0] * arr[1][1]) - (arr[0][1]*arr[1][0]);
  printf("Determinant of matrix = %d",det);
 
    
    return 0;
}
