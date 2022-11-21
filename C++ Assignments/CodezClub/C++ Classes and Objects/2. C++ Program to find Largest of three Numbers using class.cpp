#include <iostream>

using namespace std;
class LargestNum
{
    private:
         int n1,n2,n3,max;
    public:
    void Input();
    void Compare();
    void Print();
};
void LargestNum::Input()
{
    cout<<"Please enter first number: ";
    cin>>n1;
    cout<<"Please enter second number: ";
    cin>>n2;
    cout<<"Please enter third number: ";
    cin>>n3;
}
void LargestNum::Compare()
{
    if(n1>n2 && n1>n3)
    {
        max = n1;
    }
    else if(n2>n1 && n2>n3)
    {
        max = n2;
    }
    else if(n3>n1 && n3>n2)
    {
        max = n3;
    }
}
void LargestNum::Print()
{
    cout<<"Maximum number = "<<max;
}
int main()
{
   LargestNum n;
   n.Input();
   n.Compare();
   n.Print();
   

    return 0;
}
