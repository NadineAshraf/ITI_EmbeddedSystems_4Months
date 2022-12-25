#include <iostream>

using namespace std;
class date
{
   private:
         int day;
         int month;
         int year;
   public:
        date();
        void scan(void);
        void Display(void);
};
date::date()
{
    cout<<"Date Constructor has been created\n";
}
void date::scan(void)
{
    cout<<"Please Enter the day: ";
    cin>>day;
    cout<<"Please Enter the month: ";
    cin>>month;
    cout<<"Please Enter the year: ";
    cin>>year;
}

void date::Display(void)
{
    cout<<"The Date is: "<<day<<"/"<<month<<"/"<<year;
}
int main()
{
    date p;
    p.scan();
    p.Display();

    return 0;
}
