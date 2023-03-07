#include <iostream>

using namespace std;

int main()
{
    int x;
   while(1)
   {
       cin>>x;
       if(x == 1999)
       {
           cout<<"Correct";
           break;
       }
       else
       {
           cout<<"Wrong"<<"\n";
       }
   }
  return 0;
}
