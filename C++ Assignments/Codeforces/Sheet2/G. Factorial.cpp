#include <iostream>

using namespace std;
void factorial(int n)
{
    long long result=1;
  while(n!= 0)
  {
      result*=n;
      n--;
  }
  cout<<result<<"\n";
}
int main()
{
 int x,i,num;
 cin>>x;
 for(i=0; i<x; i++)
 {
     cin>>num;
  factorial(num);
 }
  return 0;
  
}
