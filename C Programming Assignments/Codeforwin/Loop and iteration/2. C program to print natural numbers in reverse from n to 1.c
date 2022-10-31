#include <stdio.h>

int main ()
{
  int num,i;
  printf("Input N: ");
  scanf("%d",&num);
  printf("Natural numbers from 10-1 in reverse:\n");
  for(i=num; i>=1; i--)
  {
      if(i == 1)
      {
          printf("%d ",i);
      }
      else
      {
      printf("%d, ",i);
      }
      
  }

  return 0;
}
