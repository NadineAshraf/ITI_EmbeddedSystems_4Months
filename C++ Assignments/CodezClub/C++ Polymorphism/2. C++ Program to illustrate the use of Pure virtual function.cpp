#include <iostream>

using namespace std;
#define PI 3.14
class Shape
{
    public:
            virtual void Enter_data() = 0; // pure virtual function
            virtual void Area() = 0; // Pure virtual function
};
class Rectangle: public Shape
{
    private:
            float length;
            float breadth;
    public:
            void Enter_data(void)
            {
                 cout << "\nEnter the data for the Rectangle........" ;
                cout << "\nEnter the length of the rectangle: " ;
                cin >> length ;
                cout << "Enter the breadth of the rectangle: " ;
                cin >> breadth ;
            }
            void Area(void)
            {
                cout<<"\nThe area of the rectangle = "<<(length*breadth);
            }
};
class Circle: public Shape
{
    private:
        float radius;
    public:
        void Enter_data(void)
        {
            cout << "\nEnter the data for the Circle..........." ;
            cout << "\nEnter the radius of the circle: " ;
            cin >> radius ;
        }
        void Area(void)
        {
           cout << "\nThe area of the circle = " << (PI * radius * radius) ;
        }
};
int main()
{
   Shape* shp; //Pointer to the object of the base class Shape
   Rectangle rec;
   Circle cir;
   shp = &rec;
   shp ->Enter_data();
   shp ->Area();
   shp = &cir;
   shp ->Enter_data();
   shp ->Area();
   
    
    return 0;
}
