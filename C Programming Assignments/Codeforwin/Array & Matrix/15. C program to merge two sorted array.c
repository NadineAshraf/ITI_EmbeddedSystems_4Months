#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the array

int main()
{
    int arr1[MAX_SIZE],arr2[MAX_SIZE],mergeArray[MAX_SIZE]; 
    int size1,size2,mergesize;         
    int i,index1,index2,mergeIndex;       
  
   
    printf("Enter size of the first array : ");
    scanf("%d", &size1);

    printf("Enter first array elements: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of the second array : ");
    scanf("%d", &size2);
     printf("Enter second array elements: ");
     for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    mergesize = size1 + size2;
    index1 = 0;
    index2 = 0;
    printf("Merged array in ascending order = ");
    for(mergeIndex=0; mergeIndex<mergesize; mergeIndex++)
    {
        if(index1 >= size1 || index2 >= size2)
        {
            break;
        }
        if(arr1[index1] < arr2[index2])
        {
            mergeArray[mergeIndex] = arr1[index1];
            index1++;
        }
        else
        {
            mergeArray[mergeIndex] = arr2[index2];
            index2++;
        }
    }
    while(index1 < size1)
    {
        mergeArray[mergeIndex] = arr1[index1];
        mergeIndex++;
        index1++;
    }
    while(index2 < size2)
    {
        mergeArray[mergeIndex] = arr2[index2];
        mergeIndex++;
        index2++;
    }
   for(i=0; i<mergesize; i++)
   {
       printf("%d ",mergeArray[i]);
   }

    return 0;
}
