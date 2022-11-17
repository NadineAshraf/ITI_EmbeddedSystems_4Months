#include <stdio.h>
#define ROW  3
#define COL  3
#define SIZE 3  
  
int main()
{
    int arr[SIZE][SIZE],i,j,sum;
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
        sum=0;
        for(j=0; j<COL; j++)
        {
           sum += arr[i][j];
           
        }
        printf("Sum of row %d = %d\n",i+1,sum);
    }
     for(i=0; i<ROW; i++)
    {
        sum=0;
        for(j=0; j<COL; j++)
        {
           sum += arr[j][i];
           
        }
        printf("Sum of column %d = %d\n",i+1,sum);
    }
    return 0;
}
