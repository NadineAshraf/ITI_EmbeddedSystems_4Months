#include <stdio.h>

int main()
{
   char c;
   printf("Input any character: ");
   scanf("%c",&c);
   if(c>='a'&& c<='z')
   {
       printf("'%c' is lowercase alphabet",c);
   }
   else if(c>='A'&& c<='Z')
   {
       printf("'%c' is uppercase alphabet ",c);
   }
   else
   {
       printf("'%c' is not an alphabet",c);
   }
 

    return 0;
}
