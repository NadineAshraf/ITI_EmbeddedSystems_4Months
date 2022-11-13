#include <stdio.h>
#define size 10
void ReverseArray(int *arr)
{
    int temp,i;
    printf("Reversed array: ");
    for(i=size-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }

 
   
}
int main()
{
  int i;
  int arr[size];
  printf("Input first elements: ");
  for(i=0; i<size; i++)
  {
      scanf("%d",&arr[i]);
  }
  ReverseArray(&arr);
   
   
    return 0;
}
