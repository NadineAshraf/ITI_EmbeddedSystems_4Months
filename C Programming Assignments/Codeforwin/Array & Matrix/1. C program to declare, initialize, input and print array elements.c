#include <stdio.h>

int main()
{
    int n,i;
    printf("Input size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Output: ");
    for(i=0; i<n; i++)
    {
        printf("%d, ",arr[i]);
    }

    return 0;
}
