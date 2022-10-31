#include <stdio.h>

int main ()
{
  char ch,i;
  printf("Alphabets: ");
  for(i='a'; i<='z'; i++)
  {
      if(i == 'z')
      {
          printf("%c ",i);
      }
      else
      {
      printf("%c, ",i);
      }
      
  }

  return 0;
}
