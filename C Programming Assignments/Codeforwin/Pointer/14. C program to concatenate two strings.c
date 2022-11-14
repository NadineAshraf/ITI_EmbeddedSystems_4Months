#include <stdio.h>
#define Max_size 15
void ConcatenateString(char *str,char *ch)
{
    int i=0,j=0;
    
   while( str[i] != '\0')
  {
     i++;
  }

   while(ch[j] != '\0')
  {
     
      str[i] = ch[j];
       i++;
     j++;
  }
  str[i] = '\0';
  printf("Concatenated string: %s",str);
}
int main()
{
  char s[Max_size],c[Max_size];
  char *str = s;
  char *ch = c;
  printf("Input string1: ");
  gets(s);
  printf("Input string2: ");
  gets(c);
  ConcatenateString(s,c);
    return 0;
}
