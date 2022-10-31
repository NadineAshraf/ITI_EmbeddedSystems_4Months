#include <stdio.h>

int main ()
{
  char op;
  float num1,num2;
  scanf("%f %c %f",&num1,&op,&num2);
  switch (op)
    {

      case '+':
             printf("%.2f",num1+num2);
             break;
      case '-':
             printf("%.2f",num1-num2);
             break;
      case '*':
             printf("%.2f",num1*num2);
             break;
      case '/':
             printf("%.2f",num1/num2);
             break;
      default:
             printf("Invalid operator");
             break;
	}

  return 0;
}
