#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(float &a, float &b)
{
    float temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(char &a, char &b)
{
    char temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
   int ix,iy;
   float fx,fy;
   char cx,cy;
cout<<"Enter 2 integers: ";
cin>>ix>>iy;
cout<<"Enter 2 floating point no:";
cin>>fx>>fy;
cout<<"Enter 2 characters:";
cin>>cx>>cy;
cout<<"\nIntegers:";
cout<<"\nix="<<ix<<"\niy="<<iy;
swap(ix,iy);
cout<<"\nAfter swapping";
cout<<"\nix="<<ix<<"\niy="<<iy;
cout<<"\nFloating point no:";
cout<<"\nfx="<<fx<<"\nfy="<<fy;
swap(fx,fy);
cout<<"\nAfter swapping";
cout<<"\nfx="<<fx<<"\nfy="<<fy;
cout<<"\nCharacters";
cout<<"\ncx="<<cx<<"\ncy="<<cy;
swap(cx,cy);
cout<<"\nAfter swapping";
cout<<"\ncx="<<cx<<"\ncy="<<cy;
    return 0;
}
