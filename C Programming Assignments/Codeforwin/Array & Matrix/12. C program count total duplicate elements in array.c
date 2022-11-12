#include <stdio.h>
#define size 10
int main()
{
    int i,j,count=0;
    int arr[size],freq[size];
    printf("Input array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

   for(i=0; i<size;i++)
   {
       for(j=i+1; j<size; j++)
       {
           if(arr[i] == arr[j])
           {
               count++;
               break;
           }
       }
   }
     
   printf("Total number of duplicate elements = %d",count);

    return 0;
}
