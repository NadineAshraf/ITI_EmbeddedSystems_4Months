#include <iostream>

using namespace std;
class Max
{
    private:
      int x,y,z;
    public:
      void input();
      void calc();
};
void Max::input()
{
   cout<<"Enter 3 numbers: ";
   cin>>x>>y>>z;
}
void Max::calc()
{
    int max;
    if(x>y && x>z)
    {
        max = x;
    }
    else if(y>x && y>z)
    {
        max = y;
    }
    else if(z>x && z>y)
    {
        max = z;
    }
    cout<<"The Maximum no. = "<<max;
}

int main()
{
    Max s;
    s.input();
    s.calc();
   

    return 0;
}
