#include <stdio.h>
#define ROW  3
#define COL  3
#define SIZE 3
  
int main()
{
    int arr[SIZE][SIZE],i,j,temp;
    printf("Input array elements: ");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix after interchanging its diagonal: \n");
    for(i=0; i<ROW; i+=2)
    {
            temp = arr[i][i];
            arr[i][i] = arr[i][SIZE-i-1];
            arr[i][SIZE-i-1] = temp;
        
       
    }
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d ",arr[i][j]);
        }
       printf("\n");
    }
    
    return 0;
}
