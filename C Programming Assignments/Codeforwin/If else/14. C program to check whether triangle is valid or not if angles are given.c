#include <stdio.h>

int main()
{
  int angle1,angle2,angle3;
  printf("Input first angle: ");
  scanf("%d",&angle1);
  printf("Input second angle: ");
  scanf("%d",&angle2);
  printf("Input third angle: ");
  scanf("%d",&angle3);
  if(angle1>0 && angle2>0 && angle3>0 && angle1+angle2+angle3 == 180)
  {
      printf("The triangle is valid");
  }
  else
  {
      printf("The triangle is invalid");
  }
    return 0;
}
