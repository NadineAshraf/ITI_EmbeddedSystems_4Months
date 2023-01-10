#include <iostream>

using namespace std;

class counter
{
    int count;
    public:
           counter();
           int get_count();
           void operator++();
};
counter::counter()
{
    count=0;
}
int counter::get_count()
{
    return count;
}
void counter::operator++()
{
    count++;
}

int main()
{
    counter c1,c2;
    cout<<"C1 = "<<c1.get_count();
    cout<<" C2 = "<<c2.get_count()<<endl;
   c1.operator++();
   c2.operator++();
    ++c2;
    cout<<"C1 = "<<c1.get_count();
    cout<<" C2 = "<<c2.get_count();
    
    return 0;
}
