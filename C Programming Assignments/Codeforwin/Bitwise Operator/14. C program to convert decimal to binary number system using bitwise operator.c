#include <stdio.h>
#define INT_SIZE sizeof(int)*8-1

int main()
{
   int num, bin[INT_SIZE],index,i;
   printf("Input any number: ");
   scanf("%d",&num);
   for(index = INT_SIZE -1; index>=0; index--)
   {
       bin[index] = num & 1;
       num >>= 1;
   }
   printf("Converted binary: ");
   for(i=0; i<INT_SIZE;i++)
   {
       printf("%d",bin[i]);
   }
   
   
    return 0;
}
