#include <stdio.h>

int main()
{
    int i,arr2[10];
    signed int arr[10];
    printf("Input array1 elements: ");
    for(i=0; i<10; i++)
    {
        scanf("%d, ",&arr[i]);
    }
    printf("Array1: ");
    for(i=0; i<10; i++)
    {
      printf("%d ",arr[i]);
    }
    printf("\nArray2: ");
    for(i=0; i<10; i++)
    {
        arr2[i]=arr[i];
        printf("%d ",arr2[i]);
    }
    


    return 0;
}
