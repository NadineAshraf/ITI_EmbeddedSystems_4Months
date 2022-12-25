#include <iostream>

using namespace std;
class student
{
   private:
       int marks;
       char grade;
   public:
        student(int m, char g);
       
        void Display(void);
};
student::student(int m, char g)
{
    marks = m;
    grade = g;
}

void student::Display(void)
{
    cout<<"Marks = "<<marks<<endl;
    cout<<"Grade = "<<grade<<endl;
    
}

int main()
{
    student s1(50,'F'), s2(100,'A');
    cout<<"Record of Student 1: ";
    s1.Display();
    cout<<"Record of Student 2: ";
    s2.Display();

    return 0;
}
