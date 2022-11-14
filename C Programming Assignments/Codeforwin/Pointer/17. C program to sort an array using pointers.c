#include <stdio.h>
#define MAX_SIZE 10  

void Ascending(int (*arr))
{
   int i,j,temp;
   for(j=0; j<MAX_SIZE; j++)
   {
       for(i=0; i<MAX_SIZE-1; i++)
       {
           if(arr[i]> arr[i+1])
           {
               temp = arr[i];
               arr[i] = arr[i+1];
               arr[i+1] = temp;
           }
       }
   }
   for(i=0; i<MAX_SIZE; i++)
   {
       printf("%d ",arr[i]);
   }
   
}
void Desending(int (*arr))
{
 
    int i,j,temp;
   for(j=0; j<MAX_SIZE; j++)
   {
       for(i=0; i<MAX_SIZE-1; i++)
       {
           if(arr[i]< arr[i+1])
           {
               temp = arr[i];
               arr[i] = arr[i+1];
               arr[i+1] = temp;
           }
       }
   }
   for(i=0; i<MAX_SIZE; i++)
   {
       printf("%d ",arr[i]);
   }
   
}
int main()
{
    int arr[MAX_SIZE],i;
    printf("Input array elements: ");
    for(i=0; i<MAX_SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array in Ascending order: ");
    Ascending(&arr);
    printf("\nArray in Desending order: ");
    Desending(&arr);
    

    return 0;
}
