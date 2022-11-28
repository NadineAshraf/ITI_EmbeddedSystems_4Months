#include <iostream>

using namespace std;
class CAdd
{
    public:
    int one;
   CAdd(int two)
   {
       cout<<" \nA constructor is called."<<endl;
   }
   CAdd()
   {
       cout<<"\nA default constructor is called"<<endl;
   }
   ~CAdd()
   {
       cout<<" \nDestructing "<<one<<endl;
   }
   int add()
   {
       return(one+one);
   }
};

int main()
{
   CAdd myobj1(4);
   CAdd myobj2;
   cout<<"\nThe value in object1 is :: "<<myobj1.one<<endl;
   cout<<"\nEnter a number :: ";
   cin>>myobj2.one;
   cout<<myobj2.add()<<endl;
   

    return 0;
}
