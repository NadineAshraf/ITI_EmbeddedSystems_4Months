#include <stdio.h>

int main ()
{
  int num,last,freq[10]={0},i;
  printf("Input any number: ");
  scanf("%d",&num);
  
  while(num!=0)
  {
    last=num%10;
    num/=10;
    freq[last]++;
  }
  for(i=0; i<10;i++)
  {
   printf("Frequency of %d = %d\n",i,freq[i]);
  }
  
  return 0;
}
