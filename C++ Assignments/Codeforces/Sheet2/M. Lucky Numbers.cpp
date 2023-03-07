#include <iostream>

using namespace std;

int main()
{
    int flag1=0,flag2=1,divide,rem,total=0;
  long a,b,i;
  cin>>a>>b;
  for(i=a; i<=b; i++)
  {
     total = i;
     divide = i;
     while(divide>0)
     {
     rem = divide%10;
     divide/=10;
     if(rem == 4 || rem == 7)
     {
         flag1=1;
         if(divide == 0)
         {
             flag2 = 0;
             cout<<total<<" ";
         }
     }
     else
     {
         flag1 =0;
         break;
     }
    
  }
  }
  if(flag1 == 0 && flag2 == 1)
  {
      cout<<-1;
  }
  return 0;
}
