#include <iostream>

using namespace std;

int main()
{
    long long A,B,result;
    char S;
    cin>>A>>S>>B;
    switch(S)
    {
        case '+':
                 result = A + B;
                 break;
        case '-':
                 result = A-B;
                 break;
        case '*':
                 result = A*B;
                 break;
        case '/':
                 result = A/B;
                 break;
                
    }
    cout<<result;
   
    return 0;
}
