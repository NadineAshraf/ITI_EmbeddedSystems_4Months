#include <iostream>

using namespace std;
class industry
{
    protected:
             char name[25];
    public:
             void insert()
             {
                 cout<<"Enter your Name: ";
                 cin>>name;
             }
             void Output()
             {
                 cout<<"Name"<<name<<endl;
             }
};
class computer:public industry
{
    protected:
             char education[10];
             float salary;
    public:
             void insert()
             {
                 industry::insert();
                 cout<<"Enter your highest Qualification: ";
                 cin>>education;
                 cout<<"Enter your salary: ";
                 cin>>salary;
             }
             void Output()
             {
                 industry::Output();
                 cout<<"Highest Qualification is: "<<education<<endl;
                 cout<<"Salary Drawn is: "<<salary<<endl;
             }
};
class manager:public industry
{
    protected:
              int experience;
              char grade;
    public:
              void insert()
              {
                  industry::insert();
                  cout<<"Your Previous Experience: ";
                  cin>>experience;
                  cout<<"Your Grade: ";
                  cin>>grade;
              }
              void Output()
              {
                  industry::Output();
                  cout<<"Total Previous Experience: "<<experience<<endl;
                  cout<<"Your Grade: "<<grade<<endl;
              }
};
class admin:public industry
{
     protected : 
                      char type[10]; 
    public: 
              void insert() 
               { 
                     industry::insert(); 
                     cout<<"Type : "; 
                     cin>>type; 
               } 
             void output() 
              { 
                     industry::Output(); 
                     cout<<"Type : "<<type<<"\n"; 
               } 
};
class soft: public computer 
{ 
   protected : 
                     char expert[10]; 
   public: 
             void insert() 
              { 
                     computer::insert(); 
                     cout<<"Enter Your Expertise Field : "; 
                     cin>>expert; 
               } 
             void output() 
              { 
                     computer::Output(); 
                     cout<<"Expertise Field is : "<<expert<<"\n"; 
              } 
}; 
class hard: public computer 
{ 
   protected: 
                    int experience; 
   public: 
            void insert() 
             { 
                     computer::insert(); 
                     cout<<"Enter Previous Experience : "; 
                     cin>>experience; 
              } 
           void output() 
            { 
                    computer::Output(); 
                    cout<<"Previous Experience in Hardware : "<<experience<<"\n"; 
             } 
}; 
int main()
{
    soft s1;
    hard h1;
    manager m1;
    admin a1;
    
    cout<<"Enter the Data for software Personnel: "<<endl;
    s1.insert();
    cout<<"\nInformation of Software Personnel: ";
    s1.Output();
    cout<<"\nEnter the Data for Hardware Personnel : \n"; 
    h1.insert(); 
    cout<<"\nInformation of Hardware Personnel : "; 
    h1.Output(); 
    cout<<"\nEnter Data for Manager : \n"; 
    m1.insert(); 
    cout<<"\nManager Information : "; 
    m1.Output(); 
    cout<<"\nEnter Data for Administrative Staft : \n"; 
    a1.insert(); 
    cout<<"\nOutput of the Administrative Staff : "; 
    a1.Output(); 
    return 0;
}
