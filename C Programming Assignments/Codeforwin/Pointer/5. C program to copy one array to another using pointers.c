#include <stdio.h>
#define size 10
void CopyArray(int *arr1, int *arr2)
{
    int i;
    printf("Array2: ");
    for(i=0; i<size; i++)
    {
        arr2[i] = arr1[i];
        
        printf("%d ",arr2[i]);
    }
   
}
int main()
{
  int i;
  int arr1[size],arr2[size];
  printf("Input array1 elements: ");
  for(i=0; i<size; i++)
  {
      scanf("%d",&arr1[i]);
  }
  printf("Array1: ");
   for(i=0; i<size; i++)
  {
      printf("%d ",arr1[i]);
  }
  printf("\n");
 CopyArray(&arr1,&arr2);
   
   
    return 0;
}
