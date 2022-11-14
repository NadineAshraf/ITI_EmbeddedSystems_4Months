#include <stdio.h>
#define Max_size 15
void CopyString(char *str,char *ch)
{
    int i=0;
   while( str[i] != '\0')
  {
      ch[i] = str[i];
     i++;
  }
  printf("Copied string: %s",ch);
}
int main()
{
  char s[Max_size],c[Max_size];
  char *str = s;
  char *ch = c;
  printf("Input string: ");
  gets(s);
  printf("Original string: %s\n",s);
  CopyString(s,c);
    return 0;
}
