#include <stdio.h>
#define ROW  3
#define COL  3
#define SIZE 3
  
int main()
{
    int arr1[SIZE][SIZE],arr2[SIZE][SIZE],i,j,flag=0;
    printf("Input elements of matrix1: ");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Input elements of matrix2: ");
     for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    
     for(i=0; i<ROW; i++)
    {
       
        for(j=0; j<COL; j++)
        {
            
          if(arr1[i][j] == arr2[i][j])
          {
              flag=1;
          }
          else
          {
              flag=0;
          }
        }
        
    }
    if(flag == 1)
    {
        printf("Both matrices are equal");
    }
    else
    {
        printf("First matrix not equal the second matrix");
    }
    return 0;
}
