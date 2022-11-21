#include <iostream>

using namespace std;
class ReverseNum
{
    private:
         int num,reversed=0,rest;
    public:
    void Input();
    void Operation();
    void Print();
};
void ReverseNum::Input()
{
    cout<<"Please enter number: ";
    cin>>num;
   
}
void ReverseNum::Operation()
{
    while(num !=0)
    {
    rest = num%10;
    reversed = reversed*10+rest;
    num/=10;
    }
}
void ReverseNum::Print()
{
    cout<<"Reseved number = "<<reversed;
}
int main()
{
   ReverseNum n;
   n.Input();
   n.Operation();
   n.Print();
   

    return 0;
}
