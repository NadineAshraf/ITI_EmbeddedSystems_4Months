#include <stdio.h>
void LongestOnes(unsigned int num)
{
    int max = 0,count=0;
  
        while(num!=0)
        {
           
           if(num &1 )
           {
             count++;
             if(count>max)
             {
                 max = count;
             }
             
           
           }
           else
           {
              count = 0; 
           }
       num>>=1;  
        }
     
    printf("Longest Ones = %d",max);
}
int main()
{
   LongestOnes( 25634520);

    return 0;
}
