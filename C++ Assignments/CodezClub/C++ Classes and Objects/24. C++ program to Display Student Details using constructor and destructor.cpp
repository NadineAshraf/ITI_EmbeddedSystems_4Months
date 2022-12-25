#include <iostream>

using namespace std;
class student
{
   private:
       char name[20],address[20];
       int roll,zip;
   public:
        student();
        ~student();
        void scan(void);
        void Display(void);
};
student::student()
{
    cout<<"This is Student details constructor\n";
}
void student::scan(void)
{
    cout<<"Please Enter the name: ";
    cin>>name;
    cout<<"Please Enter the roll no: ";
    cin>>roll;
    cout<<"Please Enter the address: ";
    cin>>address;
    cout<<"Please Enter the zipcode: ";
    cin>>zip;
}

void student::Display(void)
{
    cout<<"The Details of the student\n";
    cout<<"Name: "<<name<<"\n";
    cout<<"Roll no: "<<roll<<"\n";
    cout<<"Address: "<<address<<"\n";
    cout<<"Zip: "<<zip<<"\n";
    
}
student::~student()
{
    cout<<"Student Detail is Closed\n";
}
int main()
{
    student s;
    s.scan();
    s.Display();

    return 0;
}
