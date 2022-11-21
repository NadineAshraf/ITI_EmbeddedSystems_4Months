#include <iostream>

using namespace std;
class Time
{
    private:
         int hr,min,sec;
    public:
    void Input();
    void Sum(Time &t1,Time &t2);
    void Print();
};
void Time::Input()
{
    cout<<"Please enter Hour: ";
    cin>>hr;
    cout<<"Please enter Min: ";
    cin>>min;
    cout<<"Please enter Second: ";
    cin>>sec;
   
}
void Time::Sum(Time &t1,Time &t2)
{
  sec = t1.sec + t2.sec;
  min = sec/60;
  sec = sec%60;
  min = min + t1.min + t2.min;
  hr = min/60;
  min = min%60;
  hr = hr + t1.hr + t2.hr;
}
void Time::Print()
{
    cout<<"Time is "<<hr<<":"<<min<<":"<<sec;
}
int main()
{
   Time t1,t2,t3;
   t1.Input();
   t2.Input();
   t3.Sum(t1,t2);
   t3.Print();
   

    return 0;
}
