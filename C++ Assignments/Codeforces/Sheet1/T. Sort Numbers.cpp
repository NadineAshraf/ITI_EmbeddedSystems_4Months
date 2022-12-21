#include <iostream>

using namespace std;

int main()
{
   signed long long int A,B,C;
   cin>>A>>B>>C;
   if(A<=B && A<=C && B<=C)
   {
       cout<<A<<"\n"<<B<<"\n"<<C<<"\n";
   }
   else if(A<=B && A<=C && C<=B)
   {
       cout<<A<<"\n"<<C<<"\n"<<B<<"\n";
   }
   else if(B<=A && B<=C && A<=C)
   {
        cout<<B<<"\n"<<A<<"\n"<<C<<"\n";
   }
   else if(B<=A && B<=C && C<=A)
   {
        cout<<B<<"\n"<<C<<"\n"<<A<<"\n";
   }
    else if(C<=A && C<=B && A<=B)
   {
        cout<<C<<"\n"<<A<<"\n"<<B<<"\n";
   }
   else if(C<=A && C<=B && B<=A)
   {
        cout<<C<<"\n"<<B<<"\n"<<A<<"\n";
   }
   cout<<"\n"<<A<<"\n"<<B<<"\n"<<C<<"\n";
    return 0;
}
