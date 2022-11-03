#include <stdio.h>
#define SIZE 8
int main()
{
   char num[SIZE],onesComp[SIZE];
   int i,flag=0;
   printf("Input binary number: ");
   for(i=0; i<SIZE; i++ )
   {
       scanf("%c",&num[i]);
   }
   for(i=0; i<SIZE; i++)
   {
       if(num[i] == '0')
       {
           onesComp[i] = '1';
       }
       else if(num[i] == '1')
       {
           onesComp[i] = '0';
       }
       else
       {
           printf("Invalid input");
           flag=1;
           break;
       }
   }
   if(flag == 0)
   printf("Ones complement: %s",onesComp);
   
    return 0;
}
