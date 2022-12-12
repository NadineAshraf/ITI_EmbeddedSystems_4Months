#include <iostream>
#include<iomanip>

#define pi   3.141592653

using namespace std;

int main()
{
  float R,Area;
  cin>>R;
  
  cout<<fixed << setprecision(9);
  Area = pi*R*R;
  cout<<Area;
  
    return 0;
}
