#include <iostream>

using namespace std;
class SWAP
{
    private:
      int a,b;
    public:
      void input();
      void swap();
      void display();
};

void SWAP::input()
{
     cout<<"Enter 2 numbers: ";
     cin>>a>>b;
}
void SWAP::swap()
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void SWAP::display()
{
   cout<<"a = "<<a<<" , b = "<<b;
}
int main()
{
    SWAP m;
    
    m.input();
    m.swap();
    m.display();
   

    return 0;
}
