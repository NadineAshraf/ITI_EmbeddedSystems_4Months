#include <iostream>

using namespace std;
class Max
{
    private:
      int a,b;
    public:
      void input();
      void display();
};

void Max::input()
{
     cout<<"Enter 2 numbers: ";
     cin>>a>>b;
}
void Max::display()
{
    if(a>b)
    {
        cout<<"Biggest no.: "<<a;
    }
    else if(b>a)
    {
        cout<<"Biggest no.: "<<b;
    }
    else
    {
        cout<<"The two numbers are equal";
    }
}
int main()
{
    Max m;
    
    m.input();
    m.display();
   

    return 0;
}
