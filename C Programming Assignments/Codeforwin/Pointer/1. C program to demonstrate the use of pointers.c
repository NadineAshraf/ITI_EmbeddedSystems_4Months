#include <stdio.h>

int main()
{
    char ch ='A';
    int integer =1;
    float real = 5.5;
    long long longint = 1000000000;
    printf("Value of character = %c, Address of character = %u\n",ch,&ch);
    printf("Value of Integer = %d, Address of Integer = %u\n",integer, &integer);
    printf("Value of real = %.2f, Address of real = %u\n",real, &real);
    printf("Value of longint = %ld, Address of longint = %u\n",longint,&longint);
    return 0;
}
