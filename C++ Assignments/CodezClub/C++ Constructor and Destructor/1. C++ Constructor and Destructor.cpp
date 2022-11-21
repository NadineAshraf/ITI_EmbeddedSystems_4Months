#include <iostream>

using namespace std;
class Cube
{
    private:
         double side;
    public:
    void Input();
    double volume();
     Cube();
    ~Cube();
};

void Cube::Input()
{
    cout<<"Please enter side length: ";
    cin>>side;
}
double Cube::volume()
{
    return side*side*side;
}
Cube:: Cube()
{
    cout<<"A default constructor is called "<<endl;
  
}
Cube::~Cube()
{
    cout<<"\nDestructing: "<<side<<endl;
}
int main()
{
   Cube c1;
   cout<<"Enter the side length:\n";
   c1.Input();
   cout<<"Volume of cube: ";
   cout<<c1.volume();
  

    return 0;
}
