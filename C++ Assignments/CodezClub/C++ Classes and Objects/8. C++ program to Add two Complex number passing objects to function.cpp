#include <iostream>

using namespace std;
class Complex
{
    private:
         float real,imag;
    public:
    void Input();
    void Sum(Complex c1,Complex c2);
    void Print();
};

void Complex::Input()
{
    cout<<"Please enter real part of the number: ";
    cin>>real;
    cout<<"Please enter imag part of the number: ";
    cin>>imag;
   
}
void Complex::Sum(Complex c1,Complex c2)
{
  real = c1.real + c2.real;
  imag = c1.imag + c2.imag;
}
void Complex::Print()
{
   cout<<"Result = ";
   cout<<real<<"+"<<imag<<"i"<<endl;
    
}
int main()
{
   Complex c1,c2,c3;
   cout<<"Enter the first number:\n";
   c1.Input();
   cout<<"Enter the second number:\n";
   c2.Input();
   c3.Sum(c1,c2);
   c3.Print();
   

    return 0;
}
