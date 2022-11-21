#include <iostream>

using namespace std;
class Factorial
{
    private:
         int n,factorial=1;
    public:
    void input();
    void calc();
    void Print();
};
void Factorial::input()
{
    cout<<"Please enter the number: ";
    cin>>n;
}
void Factorial::calc()
{
    while(n!=0)
    {
    factorial*=n;
    n--;
    }
    
}
void Factorial::Print()
{
    cout<<"\nFactorial = "<<factorial;
}
int main()
{
   Factorial factorial;
   factorial.input();
   factorial.calc();
   factorial.Print();
   

    return 0;
}

