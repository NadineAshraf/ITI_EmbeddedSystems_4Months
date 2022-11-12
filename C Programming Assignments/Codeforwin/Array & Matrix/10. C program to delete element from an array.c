#include <stdio.h>

int main()
{
    int i,x,pos,size=5;
    int arr[size];
    printf("Input array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d, ",&arr[i]);
    };
    printf("Input position to delete: ");
    scanf("%d",&pos);
    if(pos > size+1 || pos <=0)
    {
        printf("Invalid position! Please enter position 1 to %d",size);
    }
    else
    {
        for(i=pos-1; i < size-1 ; i++)
        {
          arr[i] = arr[i+1];
        
        }
   
        size--;
    printf("Array elements: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    }
    
    return 0;
}
