#include <iostream>

using namespace std;
class RectArea
{
    private:
         float length;
         float width;
    public:
    void Input();
    double Area();
     RectArea();
    ~RectArea();
};

void RectArea::Input()
{
    cout<<"Please enter length of rectangle: ";
    cin>>length;
    cout<<"Please enter width of rectangle: ";
    cin>>width;
}
double RectArea::Area()
{
    return length*width;
}
RectArea::RectArea()
{
    
}

RectArea::~RectArea()
{
    
}

int main()
{
   RectArea c1;
   cout<<"Enter the Dimensions:\n";
   c1.Input();
   cout<<"Area of rectangle: ";
   cout<<c1.Area();
  

    return 0;
}
