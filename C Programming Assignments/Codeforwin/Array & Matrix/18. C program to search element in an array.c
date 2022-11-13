#include <stdio.h>

int main()
{
    int size,i,x;       
 
    printf("Enter size of array : ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("Elment to search is: ");
     scanf("%d",&x);
     printf("Element found at index ");
     for(i=0 ; i<size; i++)
     {
         if(arr[i] == x)
         {
             printf("%d",i);
         }     
     }
    return 0;
}
