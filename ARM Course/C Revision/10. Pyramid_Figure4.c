#include <stdio.h>
#define SIZE 4
int main()
{
    int i,j;
    for(i=0; i< SIZE; i++)
    {
        for(j=i; j<SIZE-1; j++)
        {
           printf(" ");
        }
        for(j=0; j<((2*i)+1);j++)
        {
            printf("*");
        }
       printf("\n"); 
    }

    return 0;
}
