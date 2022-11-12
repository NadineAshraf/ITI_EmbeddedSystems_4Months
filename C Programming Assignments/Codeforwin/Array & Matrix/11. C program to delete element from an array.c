
#include <stdio.h>

int main()
{
    int i,pos,size=5;
    int arr[size];
    printf("Input array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Input position to delete: ");
    scanf("%d",&pos);
    if(pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        /* Copy next element value to current element */
        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        /* Decrement array size by 1 */
        size--;

        /* Print array after deletion */
        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d, ", arr[i]);
        }
    }

    return 0;
}
