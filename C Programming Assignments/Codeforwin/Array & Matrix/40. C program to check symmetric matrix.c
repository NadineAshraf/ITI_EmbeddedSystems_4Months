#include <stdio.h>

#define ROW  3
#define COL  3
#define SIZE 3
  
int main()
{
    int arr1[SIZE][SIZE],arr2[SIZE][SIZE],i,j,flag=1;
    printf("Input array in matrix: ");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
     for(i=0; i<ROW && flag; i++)
    {
        for(j=0; j<COL; j++)
        {
           arr2[i][j] = arr1[j][i];
        }
    }
      for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            if(arr1[i][j] != arr2[i][j])
            {
              flag=0;
              break;
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
