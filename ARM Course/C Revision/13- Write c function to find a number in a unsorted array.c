#include <stdio.h>
void FindNum(int *arr, int num, int size)
{
  int i,flag=0;
  for(i=0; i<size; i++)
  {
      if(arr[i] = num)
      {
          flag=1;
          break;
      }
  }
  if(flag == 1)
  {
      printf("The number is found");
  }
   
}
int main()
{
 int n,s,i;
 printf("Please enter size of array: ");
 scanf("%d",&s);
 int arr[s];
 printf("Please enter elements of array: ");
 for(i=0; i<s; i++)
 {
     scanf("%d",&arr[i]);
 }
 printf("Please enter the number: ");
 scanf("%d",&n);
 FindNum(arr,n,s);

    return 0;
}
