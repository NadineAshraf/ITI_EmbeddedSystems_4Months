#include <stdio.h>
#define size 10
int main()
{
    int i,j,pos,count;
    int arr[size],freq[size];
    printf("Input array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

   for(i=0; i<size;i++)
   {
       count=1;
       for(j=i+1; j<size; j++)
       {
           if(arr[i] == arr[j])
           {
              count++;
              freq[j]=0;
           }
       }
       if(freq[i] != 0)
       {
           freq[i] = count;
       }
   }
   printf("All unique elements in the array are: ");
   for(i=0; i<size; i++)
   {
       if(freq[i] == 1)
       {
          printf("%d ",arr[i]);
       }
   }

    return 0;
}
