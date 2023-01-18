#include <stdio.h>
void StringLength(char *s)
{
    int i=0;
    while(s[i] != '\0')
    {
        i++;
    }
    printf("Length of string: %d",i);
}
int main()
{
   char ss[100];
   printf("Please enter the string: ");
   scanf("%s",&ss);
StringLength(ss);
    return 0;
}
