#include <stdio.h>
#define ROW  3
#define COL  3
#define SIZE 3
  
int main()
{
    int arr[SIZE][SIZE],i,j,flag=1;
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
            if( i == j && arr[i][j] != 1)
            {
                flag=0;
            }
            else if(i!=j && arr[i][j]!= 0)
            {
                flag = 0;
            }
        }
    }
if(flag == 1)
{
    printf("It is an Identity matrix");
}
else
{
    printf("It is not an Identity matrix");
}
 
    
    return 0;
}
