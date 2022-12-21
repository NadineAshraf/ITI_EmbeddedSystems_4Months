#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char c,s;
    cin>>c;
    if(isupper(c))
    {
        s=tolower(c);
    }
    else if(islower(c))
    {
        s=toupper(c);
    }
    cout<<s;
   
    return 0;
}
