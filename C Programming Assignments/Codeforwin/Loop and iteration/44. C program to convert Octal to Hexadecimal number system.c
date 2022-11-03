#include <stdio.h>
#include <string.h>
int main()
{
    int OctalValues[]={0,1,10,11,100,101,110,111};
    int temp,digit,num,binary=0,place=1;
    char hex[65] ="";
    char outhex[65];
    int length,i,j=0;
    printf("Input binary number: ");
    scanf("%d",&num);
    temp=num;
    /* Octal to binary conversion */
    while(temp != 0)
    {
        digit= temp%10;
        binary =(OctalValues[digit]*place)+binary;
        temp/=10;
        place *=1000;
    }
    /* Binary to hexadecimal conversion */
    while(binary>0)
    {
        digit = binary%10000;
        switch(digit)
        {
             case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
            break;
        }

        binary /= 10000;
    }
    
length =strlen(hex);
i = length -1;
while(i>=0)
{
    outhex[j] = hex[i];
    i--;
    j++;
}
printf("Hexadecimal number: %s",outhex);
    return 0;
}
