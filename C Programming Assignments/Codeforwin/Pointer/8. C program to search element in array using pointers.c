#include <stdio.h>
#define size 10
void SearchArray(int *arr, int search)
{
    int i,flag;
    for(i=0; i<size; i++)
    {
       if(arr[i] == search)
       {
           flag = 1;
           break;
       }
       else
       {
           flag = 0;
       }
    }
 if(flag == 1)
 {
     printf("%d exists in array at index %d.",search,i);
 }
 else if(flag == 0)
 {
     printf("%d does not exist in array.",search);
 }
  
}
int main()
{
  int i,x,arr[size],flag ;
  printf("Input array elements: ");
  for(i=0; i<size; i++)
  {
      scanf("%d",&arr[i]);
  }
  printf("Input element to search: ");
  scanf("%d",&x);
  SearchArray(&arr,x);
 
    return 0;
}
