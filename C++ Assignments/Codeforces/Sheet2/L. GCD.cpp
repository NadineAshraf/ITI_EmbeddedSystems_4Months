#include <iostream>

using namespace std;

int main()
{
  long a,b,i;
  cin>>a>>b;
  if(a>=b)
  {
     for(i=b; i>0; i--)
     {
         if((a%i == 0) && (b%i == 0))
         {
             cout<<i;
             break;
         }
     }
  }
  else if(b>a)
  {
     for(i=a; i>0; i--)
     {
         if((a%i == 0) && (b%i == 0))
         {
             cout<<i;
             break;
         }
     }
  }
  
    return 0;
}
