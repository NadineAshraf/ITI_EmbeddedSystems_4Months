#include <iostream>

using namespace std;
class date
{
    private:
      int date,month,year;
    public:
      void input();
      void display();
};
void date::input()
{
    cout<<"Enter Date: ";
    cin>>date;
    cout<<"Enter Month: ";
    cin>>month;
    cout<<"Enter Year: ";
    cin>>year;
}
void date::display()
{
    cout<<"The date is "<<date<<"/"<<month<<"/"<<year;
}
int main()
{
    date d;
    d.input();
    d.display();

    return 0;
}
