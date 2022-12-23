#include <iostream>

using namespace std;
class Counter
{
    private:
        int count;
    public:
       Counter();
       void Inc_Count();
       int get_Count();
         
         
};
Counter::Counter():count(0)
{
    
}
void Counter::Inc_Count()
{
    count++;
}
int Counter::get_Count()
{
    return count;
}
int main()
{
    Counter c1;
    cout<<"Before calling Counter Function, Count = ";
    cout<<c1.get_Count();
    c1.Inc_Count();
    cout<<"\nAfter calling Counter Function, Count = ";
    cout<<c1.get_Count();

    return 0;
}
