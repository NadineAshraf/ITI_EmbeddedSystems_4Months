#include <iostream>

using namespace std;
class Student
{
    private:
          char name[20],add[20];
          int roll,zip;
    public:
         Student();  //Constructor
         ~Student(); //Destructor
         void input();
         void display();
          
};
Student :: Student()
{
    cout<<"This is Student Details Constructor called "<<"\n";
}
void Student :: input()
{
    cout<<"Enter the Student Name: ";
    cin>>name;
    cout<<"Enter Student roll no.: ";
    cin>>roll;
    cout<<"Enter Student address: ";
    cin>>add;
    cout<<"Enter the zipcode: ";
    cin>>zip;
}
void Student :: display()
{
    cout<<"Student name: "<<name<<"\n";
    cout<<"Roll No.: "<<roll<<"\n";
    cout<<"Address : "<<add<<"\n";
    cout<<"ZipCode : "<<zip<<"\n";
}
Student:: ~Student()
{
    cout<<"That's all Student details";
}
int main()
{
      Student s;
      s.input();
      s.display();
     
   

    return 0;
}
