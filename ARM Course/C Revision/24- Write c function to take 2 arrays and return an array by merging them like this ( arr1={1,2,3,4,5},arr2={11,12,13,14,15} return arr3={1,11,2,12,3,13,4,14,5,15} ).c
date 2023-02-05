#include <stdio.h>
void Merge(int *arr1, int *arr2, int size)
{
    int i,j=0,arr3[size];
    for(i=0; i<size; i++)
    {
        arr3[j] = arr1[i];
        arr3[j+1] = arr2[i];
        j+=2;
    }
    for(i=0; i<size*2; i++)
    {
        printf("%d ",arr3[i]);
    }
}
int main()
{
    int n,i;
    printf("Please enter size of array: ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Please enter elements of first array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Please enter elements of second array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr2[i]);
    }
    Merge(arr1,arr2,n);
    return 0;
}
