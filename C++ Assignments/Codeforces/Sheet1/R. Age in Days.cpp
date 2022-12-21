#include <iostream>

using namespace std;

int main()
{
   long long int N,year=0,month=0,days=0;
   cin>>N;
  while(N>= 365)
  {
     
      year++;
       N-=365;
      
  }
 
 while(N>=30)
  {
      month++;
      N-=30;
      
  }
 
  cout<<year<<" years\n";
  cout<<month<<" months\n";
  cout<<N<<" days";
    return 0;
}
