#include <stdio.h>
int Reverse8Bits(int num)
{
    unsigned int i,rev=0;
   for(i=0; i<sizeof(char)*8; i++)
   {
       rev<<=1;
        if(num & 1)
        {
          rev ^= 1;
        }
         num >>=1;
    }
 printf("%d",rev);
}
int main()
{
    int n;
    printf("Please enter the number: ");
    scanf("%d",&n);
     Reverse8Bits(n);
    return 0;
}
