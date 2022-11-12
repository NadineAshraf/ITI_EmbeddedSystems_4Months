#include <stdio.h>

int main()
{
    int i,count=0;
    signed int arr[10];
    printf("Input array elements: ");
    for(i=0; i<10; i++)
    {
        scanf("%d, ",&arr[i]);
    }
    for(i=0; i<10; i++)
    {
        if(arr[i] < 0)
        {
          count++;
        }
    }
    printf("Total number of negative elements: %d",count);


    return 0;
}
