#include <stdio.h>

int main()
{
   int num;
   printf("Input num: ");
   scanf("%d",&num);
   (num%2 == 0)?printf("%d is even",num):printf("%d is odd",num);

    return 0;
}
