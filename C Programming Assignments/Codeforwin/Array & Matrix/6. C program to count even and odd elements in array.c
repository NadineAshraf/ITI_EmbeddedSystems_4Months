#include <stdio.h>

int main()
{
    int arr[9],i,CountODD=0,CountEven=0;
    printf("Input array: ");
    for(i=0; i<9; i++)
    {
        scanf("%d, ",&arr[i]);
    }
    for(i=0; i<9; i++)
    {
        if(arr[i]%2 == 0)
        {
            CountEven++;
        }
        else if(arr[i]%2 !=0)
        {
            CountODD++;
        }
    }
 printf("Total even elements: %d\n",CountEven);
 printf("Total odd elements: %d",CountODD);

    return 0;
}
