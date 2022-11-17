#include <stdio.h>
#define SIZE 10
void RotateByOne(int *arr)
{
    int i,last;
    last = arr[SIZE -1];
    for(i=SIZE-1; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
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
