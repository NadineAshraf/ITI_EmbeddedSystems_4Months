#include <stdio.h>
void SWAP(int *arr1, int *arr2, int size1, int size2)
{
    int i,temp;
    if(size1> size2)
    {
      for(i=0; i<size2; i++)
      {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
      }
     printf("First array: ");
     for(i=0; i<size2; i++)
     {
        printf("%d ",arr1[i]);
     }
      for(i=size2; i<size1; i++)
      {
          arr2[i] = arr1[i];
      }
    }
    else if(size1<size2)
    {
     for(i=0; i<size1; i++)
      {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
      }
       for(i=size1; i<size2; i++)
      {
          arr1[i] = arr2[i];
      }
    }
   
    printf("\nSecond array: ");
      for(i=0; i<size1; i++)
    {
        printf("%d ",arr2[i]);
    }
}
int main()
{
   int s1,s2,i;
   printf("Please enter the size of first array: ");
   scanf("%d",&s1);
   printf("Please enter the size of the second array: ");
   scanf("%d",&s2);
   int arr1[s1],arr2[s2];
   printf("Please enter elements of first array: ");
   for(i=0; i<s1; i++)
   {
       scanf("%d",&arr1[i]);
   }
   printf("Please enter elements of second array: ");
   for(i=0; i<s2; i++)
   {
       scanf("%d",&arr2[i]);
   }
   SWAP(arr1,arr2,s1,s2);
    return 0;
}
