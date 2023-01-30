#include <stdio.h>
void SwapWithoutZero(int *arr1, int *arr2,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
          arr1[i] = arr1[i]^arr2[i];
          arr2[i] = arr1[i]^arr2[i];
          arr1[i] = arr1[i]^arr2[i];
       
    }    
    printf("First array: ");
    for(i=0; i<size; i++)
    {
        if(arr1[i] !=0)
        {
            printf("%d ",arr1[i]);
        }
    }
    printf("\nSecond array: ");
       for(i=0; i<size; i++)
    {
        if(arr2[i] != 0)
        {
             printf("%d ",arr2[i]);
        }
    }
}
int main()
{
   int arr1[] = {0,1,2,3};
   int arr2[] = {0,5,6,7};
   int s = sizeof(arr1)/sizeof(arr1[0]);
   SwapWithoutZero(arr1,arr2,s);
    return 0;
}
