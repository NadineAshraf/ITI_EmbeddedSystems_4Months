#include <iostream>

using namespace std;

int main()
{
    char c;
    cin>>c;
    if(c>='A' && c<='Z')
    {
        cout<<"ALPHA\n"<<"IS CAPITAL";
    }
    else if(c>='0' && c<='9')
    {
        cout<<"IS DIGIT";
    }
    else if(c>='a' && c<='z')
    {
        cout<<"ALPHA\n"<<"IS SMALL";
    }
    
   
    return 0;
}
