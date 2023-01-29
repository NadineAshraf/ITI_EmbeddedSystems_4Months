#include <stdio.h>
int Binary_Search(int *arr,int num, int size)
{
   int start= 0,end=size-1,mid,index;
   while(start<=end)
   {
       mid = (start+end)/2;
       if(num == arr[mid])
       {
           index = mid;
           break;
       }
       else if(num < arr[mid])
       {
           end = mid -1;
       }
       else
       {
           start = mid+1;
       }
   }
   printf("%d",index);
}
int main()
{
 int n,s,i;
 printf("Please enter size of array: ");
 scanf("%d",&s);
 int arr[s];
 printf("Enter elements of array: ");
 for(i=0; i<s; i++)
 {
     scanf("%d",&arr[i]);
 }
 printf("Please enter the number: ");
 scanf("%d",&n);
Binary_Search(arr,n,s);

    return 0;
}
