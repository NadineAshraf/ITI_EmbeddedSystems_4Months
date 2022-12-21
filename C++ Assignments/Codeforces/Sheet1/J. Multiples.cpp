
#include <iostream>

using namespace std;

int main()
{
    long long int A,B;
    cin>>A>>B;
    if((A%B == 0)||(B%A)==0)
    {
        cout<<"Multiples";
    }
    else
    {
        cout<<"No Multiples";
    }

    return 0;
}
