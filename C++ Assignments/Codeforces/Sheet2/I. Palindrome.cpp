#include <iostream>

using namespace std;

int main()
{
   long n,rev=0,rem,x;
   cin>>n;
   x=n;
   while(n !=0)
   {
       rem = n%10;
       rev = rev*10+rem;
       n/=10;
   }
  
   if(x == rev)
   {
       cout<<rev<<"\n"<<"YES";
   }
   else 
   {
        cout<<rev<<"\n"<<"NO";
   }
    return 0;
}
