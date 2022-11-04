#include <stdio.h>

int Cube(int number)
{
    int cube;
    cube=number*number*number;
    return cube;
}
int main()
{
    int num,result;
    printf("Input any number: ");
    scanf("%d",&num);
    result = Cube(num);
    printf("Cube of %d = %d",num,result);

    return 0;
}
