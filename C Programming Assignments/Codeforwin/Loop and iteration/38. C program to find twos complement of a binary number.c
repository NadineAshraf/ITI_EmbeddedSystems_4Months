#include <stdio.h>
#define SIZE 8
int main()
{
   char num[SIZE],onesComp[SIZE],twosComp[SIZE];
   int i,flag=0,carry=1;
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
   for(i=SIZE-1; i>=0; i--)
   {
       if(onesComp[i] == '1' && carry == 1)
       {
           twosComp[i] = '0';
       }
       else if(onesComp[i] == '0' && carry == 1)
       {
           twosComp[i] = '1';
           carry=0;
       }
       else
       {
           twosComp[i] = onesComp[i];
       }
   }
   if(flag == 0)
   printf("Ones complement: %s",twosComp);
   
    return 0;
}
