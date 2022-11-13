#include <stdio.h>

#define MAX_SIZE 5   // Maximum size of the array

int main()
{
    int arr[MAX_SIZE], i;       
  
    printf("Input array elements: ");
    for(i=0; i<MAX_SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
  printf("Array elements after reverse: ");
   for(i=0; i<MAX_SIZE; i++)
   {
       printf("%d ",arr[MAX_SIZE-i-1]);
   }

    return 0;
}
