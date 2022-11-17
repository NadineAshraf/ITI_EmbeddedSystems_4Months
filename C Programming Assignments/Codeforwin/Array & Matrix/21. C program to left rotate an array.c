#include <stdio.h>
#define SIZE 10
void RotateByOne(int *arr)
{
    int i,first;
    first = arr[0];
    for(i=0; i < SIZE -1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[SIZE-1] = first;
}
int main()
{
   int arr[SIZE],i,rotate;
   printf("Input 10 elements in array: ");
   for(i=0; i<SIZE; i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("Input number of times to rotate: ");
   scanf("%d",&rotate);
   rotate = rotate % SIZE;
   for(i=0; i<rotate; i++)
   {
       RotateByOne(arr);
   }
   printf("Array after left rotation %d times: ",rotate);
   for(i=0; i<SIZE; i++)
   {
   printf("%d ",arr[i]);
   }

    return 0;
}
