#include <stdio.h>

int main()
{
   int num,i;
   printf("Input number: ");
   scanf("%d",&num);
   printf("Factors of %d: ",num);
   for(i=1; i<=num; i++)
   {
       if(num == i)
       {
           printf("%d", i);
       }
       else if((num%i) == 0)
       {
           printf("%d, ", i);
       }
     
   }
    return 0;
}
