#include <stdio.h>

int main ()
{
  int num,i;
  printf("Input upper range: ");
  scanf("%d",&num);
  printf("Even numbers between 1 to 10:\n");
  for(i=0; i<=num; i++)
  {
      if(i == num)
      {
          printf("%d",i);
      }
      else if(i%2 == 0)
      {
          printf("%d, ",i);
      }
      else
      {
          printf("%d, ",i);
      }
      
  }

  return 0;
}
