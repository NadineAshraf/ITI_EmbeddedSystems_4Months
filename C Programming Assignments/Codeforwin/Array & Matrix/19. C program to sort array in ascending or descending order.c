#include <stdio.h>

int main()
{
    int size,i,j;       
 
    printf("Enter size of array : ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array sorted in ascending order:");
    for(j=0; j<size; j++)
    {
    for(i=0; i<size; i++)
    {
        int temp;
        if(arr[i] > arr[i+1])
        {
           temp = arr[i];
           arr[i] = arr[i+1];
           arr[i+1] = temp;
        }
    }
    }
     for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
