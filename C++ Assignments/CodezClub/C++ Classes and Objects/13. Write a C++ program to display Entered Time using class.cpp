#include <iostream>

using namespace std;
class Time
{
    private:
      int month,second,hour;
    public:
      void get(int m, int h, int s);
      void display();
};

void Time::get(int m, int h, int s)
{
     month = m;
     hour = h;
     second = s;
}
void Time::display()
{
    cout<<"Time is "<<hour<<":"<<month<<":"<<second;
}
int main()
{
    Time t;
    int m,h,s;
    cout<<"Enter hour: ";
    cin>>h;
    cout<<"Enter minute: ";
    cin>>m;
    cout<<"Enter second: ";
    cin>>s;
    t.get(m, h,s);
    t.display();
   

    return 0;
}
