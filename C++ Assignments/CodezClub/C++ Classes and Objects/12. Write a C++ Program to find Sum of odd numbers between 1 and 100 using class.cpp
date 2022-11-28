#include <iostream>

using namespace std;
class OddSum
{
    private:
      int i,sum=0;
    public:
      void calc();
      void display();
};

void OddSum::calc()
{
     for(i=1; i<100; i+=2)
   {
       sum+=i;
   }
}
void OddSum::display()
{
    cout<<"Sum of odd numbers between 1-100: "<<sum;
}
int main()
{
    OddSum s;
    s.calc();
    s.display();
   

    return 0;
}
