
#include <iostream>

using namespace std;

int main()
{
   unsigned int A,B;
   signed long long C;
   char S,Q ;
   cin>>A>>S>>B>>Q>>C;
    switch(S)
    {
        case '+':
                if((A+B) == C)
                cout<<"YES";
                else if ((A+B) != C)
                cout<<A+B;
                break;
        case '-':
                if((A-B) == C)
                cout<<"YES";
                else if ((A-B) != C)
                cout<<A-B;
                break;
        case '*':
               if((A*B) == C)
                cout<<"YES";
                else if ((A*B) != C)
                cout<<A*B;
                break;
    }
    return 0;
}
