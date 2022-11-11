#include <stdio.h>

int main()
{
    int arr[5],i,sum=0;
    printf("Input elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d, ",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum of all elements = %d",sum);
  

    return 0;
}
