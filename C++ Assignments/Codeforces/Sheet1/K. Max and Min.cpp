#include <iostream>

using namespace std;

int main()
{
    signed long long int A,B,C;
    cin>>A>>B>>C;
    signed long long int max,min;
    if(A>=B && A>=C)
    {
        max = A;
    }
    else if(B>=A && B>=C)
    {
        max = B;
    }
    else if(C>=A && C>=B)
    {
        max = C;
    }
    if(A<=B && A<=C)
    {
        min = A;
    }
    else if(B<A && B<C)
    {
        min = B;
    }
    else if(C<=A && C<=B)
    {
        min = C;
    }
    cout<<min<<" "<<max;
    return 0;
}
