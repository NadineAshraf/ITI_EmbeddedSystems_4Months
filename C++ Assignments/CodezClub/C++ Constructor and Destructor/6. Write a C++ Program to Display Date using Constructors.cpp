#include <iostream>

using namespace std;
class Date
{
    private:
          int date,month,year;
    public:
          Date()     // Constructor
          {
              date = 31;
              month = 12;
              year = 2016;
          }
          void display()
          {
              cout<<"The date is: "<<date<<"/"<<month<<"/"<<year;
          }
          
};

int main()
{
      Date d;
      d.display();
     
   

    return 0;
}
