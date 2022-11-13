#include <stdio.h>
#define row  3
#define col  3
void MatrixArray(int (*arr)[col])
{
    int i,j;
 printf("Elements ofin 3x3 matrix:\n");
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
      {
         printf("%d ",arr[i][j]);
      }
      printf("\n");
  }
      
  
}
int main()
{
  int i,j,arr[row][col];
  printf("Input array in 3x3 matrix: ");
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
      {
       scanf("%d",&arr[i][j]);
      }
  }
  MatrixArray(&arr);
 
    return 0;
}
