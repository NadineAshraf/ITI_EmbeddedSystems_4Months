#include <stdio.h>
#define row  3
#define col  3
void SumMatrixArray(int (*arr1)[col],int (*arr2)[col])
{
    int i,j;
 printf("Sum of both matrices:\n");
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
      {
         printf("%d ",arr1[i][j]+arr2[i][j]);
      }
      printf("\n");
  }
      
  
}
int main()
{
  int i,j,arr1[row][col],arr2[row][col];
  printf("Input matrix1: ");
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
      {
       scanf("%d",&arr1[i][j]);
      }
  }
  printf("\nInput matrix2: ");
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
      {
       scanf("%d",&arr2[i][j]);
      }
  }
 SumMatrixArray(&arr1,&arr2);
 
    return 0;
}
