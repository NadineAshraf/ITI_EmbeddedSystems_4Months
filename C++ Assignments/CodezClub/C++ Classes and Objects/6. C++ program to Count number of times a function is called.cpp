#include <iostream>

using namespace std;
class Square
{
    private:
         int n,resint;
         float f,resfloat;
         static int count;
    public:
    void Input();
    void Calc();
    void Print();
};
int Square::count=0;
void Square::Input()
{
    cout<<"Please enter integer number: ";
    cin>>n;
    cout<<"Please enter float number: ";
    cin>>f;
    count++;
   
}
void Square::Calc()
{
  resint = n*n;
  resfloat = f*f;
  count++;
}
void Square::Print()
{
    cout<<"Square of integer = "<<resint;
    cout<<"\nSquare of float = "<<resfloat;
    cout<<"\nFunction is called "<<count<<" times by the objects";
}
int main()
{
   Square s;
   s.Input();

   s.Calc();
   s.Print();
   

    return 0;
}
