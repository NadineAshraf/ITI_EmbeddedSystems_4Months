#include <stdio.h>


void SearchNum(int *arr,int num, int size)
{
    int i=0,*ptr,flag=0;
    ptr = arr;
    for(i=0; i<size; i++)
    {
        if(ptr[i] == num)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if (flag == 1)
    {
        printf("Element is found");
    }
    else
    {
        printf("Elment is not found");
    }
}
int main()
{
    int s,i=0,num;
   printf("Please enter size of array: ");
   scanf("%d",&s);
   int arr[s];
   printf("Please enter elements of array: ");
   for(i=0; i<s; i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("Please enter the number: ");
   scanf("%d",&num);
   SearchNum(arr,num,s);
    return 0;
}
