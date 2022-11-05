#include <stdio.h>
void Multiplication(int num)
{
    int i;
    for(i=1; i<=10; i++)
    {
        printf("5 * %d = %d\n",i,5*i);
    }
    
}
int main()
{
    int num;
    printf("Input num: ");
    scanf("%d",&num);
    Multiplication(num);

    return 0;
}
