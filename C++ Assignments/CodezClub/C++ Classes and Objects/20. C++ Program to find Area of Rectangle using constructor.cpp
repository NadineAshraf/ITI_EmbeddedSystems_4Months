#include <iostream>

using namespace std;
class Area
{
    private:
       float length,width;
    public:
       float area(float length,float width);
         
         
};
float Area::area(float length,float width)
{
    return length*width;
}

int main()
{
    Area r;
    float l,w,res;
    cout<<"Enter Length of Rectangle = ";
    cin>>l;
    cout<<"Enter Width of Rectangle = ";
    cin>>w;
    res = r.area(l,w);
    cout<<"Area of Rectangle = "<<res;
    return 0;
}
