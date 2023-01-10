#include <iostream>
#include <string>
using namespace std;

struct complex
{
    float real;
    float imag;
};
complex operator +(struct complex a, struct complex b)
{
    complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}
complex operator -(struct complex a, struct complex b)
{
    complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}
complex operator *(struct complex a, struct complex b)
{
    complex c;
    c.real =((a.real*b.real)-(a.imag*b.imag));
    c.imag =((a.real*b.imag)+(a.imag*b.real));
    return c;
}
complex operator/(struct complex a,struct complex b)
{
    complex c;
    float temp;
    temp=((b.real*b.real)+(b.imag*b.imag));
    c.real=((a.real*b.real)+(a.imag*b.imag))/temp;
    return c;
}
void menu()
{
cout<<"complex no: operators\n";
cout<<"a->addition\n";
cout<<"s->substraction\n";
cout<<"m->multiplication\n";
cout<<"d->division\n";
cout<<"q->quit\n";
cout<<"options please : ";
}
int main()
{
   complex a,b,c;
   int ch;
   cout<<"Enter the first complex no: ";
   cin>>a.real>>a.imag;
   cout<<"Enter the second complex no: ";
   cin>>b.real>>b.imag;
   menu();
   while((ch = getchar()) != 'q')
   {
       switch(ch)
       {
           case 'a':
                 c = a+b;
                 cout<<"Addition = "<<c.real<<"+i"<<c.imag;
                 break;
           case 's':
                 c = a-b;
                 cout<<"Subtraction = "<<c.real<<"i"<<c.imag;
                 break;
           case 'm':
                 c=a*b;
                 cout<<"multiplication = "<<c.real<<"i"<<c.imag;
                 break;
           case 'd':
                 c = a/b;
                 cout<<"Division = "<<c.real<<"i"<<c.imag;
                 break;
       }
   }
    
    return 0;
}
