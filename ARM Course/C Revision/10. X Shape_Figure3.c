#include <stdio.h>
#define SIZE 5
int main()
{
    int i,j;
    for(i=0; i< SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            if(i == j || i == SIZE-j-1)
            {
             printf("*");
            }
            else
            {
                printf(" ");
            }
        }
       printf("\n"); 
    }

    return 0;
}
