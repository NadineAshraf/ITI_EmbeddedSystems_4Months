#include <stdio.h>

#define MAX_SIZE 10 // Maximum size of the array
#define size1 5
#define size2 5
int main()
{
    int arr[MAX_SIZE],ArrEven[MAX_SIZE],ArrOdd[MAX_SIZE]; 
    int size,i, EvenCount=0, OddCount=0;       
  
   
    printf("Enter size of array : ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
     for(i=0; i<size; i++)
    {
       if(arr[i] & 1)
       {
           ArrOdd[OddCount] = arr[i];
           OddCount++;
       }
       else
       {
           ArrEven[EvenCount] = arr[i];
           EvenCount++;
       }
    }
    printf("Output even elements in array: ");
    for(i=0; i<size1; i++)
    {
        printf("%d ",ArrEven[i]);
    }
    printf("\nOutput odd elements in array: ");
    for(i=0; i<size2; i++)
    {
        printf("%d ",ArrOdd[i]);
    }
    return 0;
}
