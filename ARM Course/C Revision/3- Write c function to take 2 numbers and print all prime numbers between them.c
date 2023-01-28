#include <stdio.h>
void Prime(int num1, int num2)
{
   int i,j,flag=0;
  
  
   for(i=num1; i<=num2;i++)
   {
        if(i == 0 || i == 1)
       {
           flag =1;
         
       }
     
       for(j=2; j<=i/2; j++)
       {
           if(i%j == 0)
           {
               flag = 1;
               break;
           }
           else
           {
               flag=0;
           }
       }
       if(flag == 0)
       {
           printf("%d ",i);
       }
       else
       {
          flag=0; 
       }
   
   }
}
int main()
{
    int n1,n2;
    printf("Please enter first number: ");
    scanf("%d",&n1);
    printf("Please enter second number: ");
    scanf("%d",&n2);
Prime(n1,n2);
    return 0;
}
