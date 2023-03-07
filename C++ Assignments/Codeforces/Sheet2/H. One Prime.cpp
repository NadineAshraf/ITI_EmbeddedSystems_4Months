#include <iostream>

using namespace std;

int main()
{
    long x;
    int i,flag=0;
    cin>>x;
    for(i=2; i<x;i++)
    {
        if(x%i == 0)
        {
            flag = 1;
            break;
        }
        else
        {
           flag = 0;
          
        }
    }
    if(flag == 1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}
