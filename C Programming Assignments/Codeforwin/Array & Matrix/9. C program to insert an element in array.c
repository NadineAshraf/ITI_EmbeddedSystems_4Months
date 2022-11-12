#include <stdio.h>

int main()
{
    int i,arr[5],x,pos,size=5;
    printf("Input array elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d, ",&arr[i]);
    }
    printf("Input element to insert: ");
    scanf("%d",&x);
    printf("Input position where to insert: ");
    scanf("%d",&pos);
    if(pos > size+1 || pos <=0)
    {
        printf("Invalid position! Please enter position 1 to %d",size);
    }
    else
    {
        for(i=size; i >= pos ; i--)
        {
          arr[i] = arr[i-1];
        }
        arr[pos-1] = x;
        size++;
    printf("Elements of array: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    }
    


    return 0;
}
