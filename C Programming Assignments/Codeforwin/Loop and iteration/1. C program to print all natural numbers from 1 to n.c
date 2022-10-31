#include <stdio.h>

int main ()
{
  int num,i;
  printf("Input upper limit: ");
  scanf("%d",&num);
  printf("Natural numbers from 1 to 10: ");
  for(i=1; i<=num; i++)
  {
      if(i == num)
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
