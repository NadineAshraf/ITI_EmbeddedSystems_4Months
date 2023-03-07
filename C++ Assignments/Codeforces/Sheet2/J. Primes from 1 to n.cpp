#include <iostream>

using namespace std;

int main()
{
   int flag=0;
   long i,j,x;
   cin>>x;
  
    for(i=0; i<=x; i++)
    {
       if(i==0 || i== 1)
       {
           flag=1;
          
       }
       for(j=2; j<=(i/2); j++)
       {
          
           if(i%j == 0)
           {
              flag=1;
              break;
           }
       }
       if(flag == 0)
       {
           cout<<i<<" ";
       }
       else
       {
           flag = 0;
       }
     
    }
  
    return 0;
}
