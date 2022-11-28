#include <iostream>

using namespace std;
class Student
{
    private:
         int marks;
         char grade;
    public:
         Student(int m, char g)
         {
             marks = m;
             grade = g;
         }
         void Show()
         {
             cout<<"Marks = "<<marks<<"\n";
             cout<<"Grade = "<<grade<<"\n";
         }
          
};

int main()
{
      Student s1(730,'A'),s2(621,'B');
      s1.Show();
      s2.Show();
   

    return 0;
}
