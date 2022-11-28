#include <iostream>

using namespace std;
class Student
{
    private:
      char name[20],Regno[10],branch[10];
      int sem;
    public:
      void input();
      void display();
};
void Student::input()
{
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Regno.: ";
    cin>>Regno;
    cout<<"Enter Branch: ";
    cin>>branch;
    cout<<"Enter Sem: ";
    cin>>sem;
}
void Student::display()
{
    cout<<"Name: "<<name<<"\n";
    cout<<"RegNo: "<<Regno<<"\n";
    cout<<"Branch: "<<branch<<"\n";
    cout<<"Sem: "<<sem<<"\n";
}
int main()
{
    Student s;
    s.input();
    s.display();

    return 0;
}
