#include <stdio.h>
void LongestString(int *arr, int size)
{
   int i=0,j=0,diff=0,result=0;
   for(j=0; j < size; j++)
   {
       
      for(i = j+1; i<size; i++)
      {
  
      if(arr[j] < arr[i])
      {
          diff = arr[i] - arr[j];
          if(diff > result)
          {
             result = diff;
           
          }
      }
       }
   }
     printf("Difference = %d\n",result);
}
int main()
{
    int n,i;
    printf("Please enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Please enter elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
LongestString(a,n);
    return 0;
}
