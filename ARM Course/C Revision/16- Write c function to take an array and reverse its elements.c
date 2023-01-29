#include <stdio.h>
void Array(int *arr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[size-i-1]);
    }
}
int main()
{
    int i,s;
    printf("Please enter size of array: ");
    scanf("%d",&s);
    int arr[s];
    printf("Please enter elements of array: ");
    for(i=0; i<s; i++)
    {
        scanf("%d",&arr[i]);
    }
    Array(arr,s);


    return 0;
}
