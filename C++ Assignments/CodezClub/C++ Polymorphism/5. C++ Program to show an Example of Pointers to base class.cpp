#include <iostream>

using namespace std;

class Polygon{
    protected:
        int width,height;
    public:
        void set_values(int a,int b)
        {
            width = a;
            height = b;
        }
};
class Rectangle: public Polygon
{
    public:
    int area()
    {
        return width*height;
    }
};
class Triangle: public Polygon
{
    public:
    int area()
    {
        return width*height/2;
    }
};
int main()
{
   Rectangle rect;
   Triangle trg;
   Polygon *poly1 = &rect;
   Polygon *poly2 = &trg;
   poly1->set_values(4,5);
   poly2->set_values(4,5);
   cout<<"Pointers to base class..\n";
   cout<<rect.area()<<"\n";
   cout<<trg.area();
    return 0;
}
