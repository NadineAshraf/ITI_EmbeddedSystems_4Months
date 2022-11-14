#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

void Reverse(char *str)
{
    int i = 0, len,IndReverse,strInd;
    char reverse[MAX_SIZE];

    /* Iterate till both strings are equal */
    while(str[i] != '\0')
    {
        i++;
    }
    len = i;
    IndReverse=0;
    strInd = len -1;
      while(strInd >= 0)
    {
        reverse[IndReverse] = str[strInd];
        strInd--;
        IndReverse++;
    }
    reverse[IndReverse] = '\0';
    printf("Reverse string: %s",reverse);
   
}
int main()
{
    char str[MAX_SIZE];
    int res;
    /* Input two strings from user */
    printf("Enter any string: ");
    gets(str);
   Reverse(str);

    return 0;
}
