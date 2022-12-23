#include <iostream>

using namespace std;
class Num
{
    public:
    static int i;
         void Print(int n)
         {
             for(i=1; i<=n; i++)
             {
                 cout<<i<<" ";
             }
         }
         
         
};
int Num::i=1;
int main()
{
    Num s;
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    s.Print(num);
    return 0;
}
