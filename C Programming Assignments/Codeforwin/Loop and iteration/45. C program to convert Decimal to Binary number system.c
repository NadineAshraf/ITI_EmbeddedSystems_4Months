#include <stdio.h>
#include <string.h>
int main()
{
    int temp,digit,num,i,j=0,length,index=0;
   char outbin[65],binary[65];
    printf("Input deciaml number: ");
    scanf("%d",&num);
    temp=num;
   
    while(temp != 0)
    {
        binary[index]= (temp%2)+'0';
        temp/=2;
        index++;
    }
  
    
length =strlen(binary);
i = length -1;
while(i>=0)
{
    outbin[j] = binary[i];
    i--;
    j++;
}
printf("Binary number: %s",outbin);


    return 0;
}
