#include <stdio.h>
#define Max_size 100

int main()
{
  char s[Max_size];
  char *str = s;
  int count=0,i=0;
  printf("Input string: ");
  gets(s);
  while(*(str++) != '\0')
  {
      count++;
  }
  printf("Length of string: %d",count);
    return 0;
}
