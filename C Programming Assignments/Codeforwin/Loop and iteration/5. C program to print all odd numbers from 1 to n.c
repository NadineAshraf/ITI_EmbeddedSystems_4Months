#include <stdio.h>

int main ()
{
  int num,i;
  printf("Input upper range: ");
  scanf("%d",&num);
  printf("Odd numbers between 1 to 10:\n");
  for(i=1; i<=num; i+=2)
  {
    
      if(i%2 != 0)
      {
          printf("%d, ",i);
      }
      else
      {
          printf("%d",i);
      }
      
  }

  return 0;
}
