#include <stdio.h>
void print(int *arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d, ",arr[i]);
    }
}
int main()
{
  int size,i;
  printf("Input array size: ");
  scanf("%d", &size);
  int arr[size];
  printf("Input elements: ");
  for(i=0; i<size; i++)
  {
      scanf("%d",&arr[i]);
  }
   printf("Array elements: ");
   print(&arr,size);
   
   
    return 0;
}
