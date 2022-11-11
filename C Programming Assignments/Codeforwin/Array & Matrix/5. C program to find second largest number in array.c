#include <stdio.h>

int main()
{
    int i,j,temp;
    signed int arr[10];
    printf("Input array elements: ");
    for(i=0; i<10; i++)
    {
        scanf("%d, ",&arr[i]);
    }
    for(j=0; j<10; j++)
    {
        for(i=0; i<10; i++)
        {
           if(arr[i]<arr[i+1])
           {
              temp = arr[i];
              arr[i] = arr[i+1];
              arr[i+1] = temp;
          }
        }
    }
    printf("Second largest = %d",arr[1]);


    return 0;
}
