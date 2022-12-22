#include <iostream>

using namespace std;

int main()
{
   int i,N,flag=0;
   cin>>N;
   for(i=1;i<=N;i++)
   {
       if(i%2 == 0)
       {
           cout<<i<<"\n";
           flag=1;
       }
       else
       {
          
       }
   
   }
   if(flag == 0)
   {
       cout<<-1;
   }
}
