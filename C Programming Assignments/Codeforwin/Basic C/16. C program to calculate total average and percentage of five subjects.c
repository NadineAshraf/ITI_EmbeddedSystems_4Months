#include <stdio.h>

int main()
{
  float eng,phy,chem,math,comp;
  printf("Enter marks of five subjects: ");
  scanf("%f %f %f %f %f",&eng,&phy,&chem,&math,&comp);
  printf("Total = %.2f\n",eng+phy+chem+math+comp);
  printf("Average = %.2f\n",(eng+phy+chem+math+comp)/5);
  printf("Percentage = %.2f",((eng+phy+chem+math+comp)/500)*100);
   
    return 0;
}
