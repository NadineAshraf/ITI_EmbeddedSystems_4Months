#include <iostream>

using namespace std;
#define LEN 80
class doctor
{
    private:
            char name[LEN];
            char degree[LEN];
    public:
            void getdata()
            {
                cout<<"Enter the Doctor name: ";
                cin>>name;
                cout<<"Enter Doctorate degree: ";
                cin>>degree;
            }
            void showdata()
            {
                cout<<"Doctor Name: "<<name<<endl;
                cout<<"Doctorate Degree: "<<degree<<endl;
            }
};
class patient
{
    private:
            char name[LEN];
            char number[LEN];
    public:
            void getdata()
            {
                cout<<"Enter Patient Name: ";
                cin>>name;
                cout<<"Enter Bed number: ";
                cin>>number;
            }
            void showdata()
            {
                cout<<"Patient Name: "<<name<<endl;
                cout<<"Bed Number: "<<number;
            }
};
class department 
{ 
       private: 
                            char ward [LEN] ; 
       public: 
                      void getdata() 
                       { 
                            cout<<"\nEnter Ward Name : "; 
                            cin>>ward; 
                        } 
                      void showdata() 
                       { 
                            cout<<"\nWard Name : "<<ward; 
                        } 
}; 
class amount 
{ 
    private:
            int dues;
            patient pat;
            doctor doc;
            department dept;
    public:
            void getdata()
            {
                pat.getdata();
                dept.getdata();
                doc.getdata();
                cout<<"Enter Dues of Patient: ";
                cin>>dues;
            }
            void showdata()
            {
                pat.showdata();
                dept.showdata();
                doc.showdata();
                cout<<"Total Dues of Patient: "<<dues;
            }
};
int main()
{
   amount a1;
   cout<<"Enter Data";
   a1.getdata();
   cout<<"Inserted Data is: "<<endl;
   a1.showdata();
    return 0;
}
