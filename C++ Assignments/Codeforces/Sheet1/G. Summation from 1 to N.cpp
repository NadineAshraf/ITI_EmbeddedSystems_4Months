#include <iostream>

using namespace std;

int main()
{
   long long int N,i,sum=0;
   cin>>N;
   for(i=1; i<=N; i++)
   {
       sum+=i;
   }
   cout<<sum;
  
    return 0;
}
