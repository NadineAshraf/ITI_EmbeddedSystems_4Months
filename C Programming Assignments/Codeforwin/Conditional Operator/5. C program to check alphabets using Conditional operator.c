#include <stdio.h>

int main()
{
   char c;
   printf("Enter any character: ");
   scanf("%c",&c);
   ((c>='a')&& (c<='z'))?printf("It is ALPHABET"):(c>='A')&&(c<='Z')
   ?printf("It is ALPHABET"):printf("It is NOT ALPHABET");

    return 0;
}
