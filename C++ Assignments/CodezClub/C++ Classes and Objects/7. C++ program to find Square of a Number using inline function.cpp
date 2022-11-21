#include <iostream>

using namespace std;
class Square
{
    private:
         int n,resint;
         float f,resfloat;
    public:
    void Input();
    void Calc();
    void Print();
};

inline void Square::Input()
{
    cout<<"Please enter integer number: ";
    cin>>n;
    cout<<"Please enter float number: ";
    cin>>f;
   
}
inline void Square::Calc()
{
  resint = n*n;
  resfloat = f*f;
}
inline void Square::Print()
{
    cout<<"Square of integer = "<<resint;
    cout<<"\nSquare of float = "<<resfloat;
    
}
int main()
{
   Square s;
   s.Input();

   s.Calc();
   s.Print();
   

    return 0;
}
