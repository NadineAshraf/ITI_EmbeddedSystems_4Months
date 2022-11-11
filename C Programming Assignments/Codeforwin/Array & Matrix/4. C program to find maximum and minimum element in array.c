#include <stdio.h>

int main()
{
    int arr[5],i,max=0,min;
    printf("Input array elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d, ",&arr[i]);
    }
    for(i=0; i<5; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
 printf("Maximum = %d\n",max);
 printf("Minimum = %d",min);

    return 0;
}
