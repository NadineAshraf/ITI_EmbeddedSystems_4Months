#include <stdio.h>

int main()
{
    int num;
    printf("Input number: ");
    scanf("%d",&num);
    switch(num%2 == 0)
    {
        case 0:
               printf("Odd number");
               break;
        case 1:
               printf("Even number");
               break;
      
    }

    return 0;
}
