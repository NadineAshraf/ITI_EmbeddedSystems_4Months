
#include <stdio.h>

int main()
{
   int num;
   printf("Input num: ");
   scanf("%d",&num);
   if(num<0)
   {
       printf("%d is negative",num);
   }
   else if(num>0)
   {
       printf("%d is positive",num);
   }
   else
   {
      printf("Number is Zero"); 
   }
  

    return 0;
}
