#include <stdio.h>
#define ROW  3
#define COL  3
#define SIZE 3  
  
int main()
{
    int arr[SIZE][SIZE],i,j,sum=0;
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
        sum += arr[i][i];
    }
   printf("Sum of main diagonal elements = %d",sum);
    return 0;
}
