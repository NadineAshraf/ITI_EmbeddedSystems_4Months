#include <stdio.h>
#define size 10
void SwapArray(int *arr1, int *arr2)
{
    int temp,i;
    
    for(i=0; i<size; i++)
    {
        int temp;
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    printf("First array after swapping: ");
     for(i=0; i<size; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nSecond array after swapping: ");
     for(i=0; i<size; i++)
    {
        printf("%d ",arr2[i]);
    }
   
}
int main()
{
  int i;
  int arr1[size],arr2[size];
  printf("Input first array: ");
  for(i=0; i<size; i++)
  {
      scanf("%d",&arr1[i]);
  }
  printf("Input second array: ");
  for(i=0; i<size; i++)
  {
      scanf("%d",&arr2[i]);
  }
  SwapArray(&arr1,&arr2);
   
   
    return 0;
}
