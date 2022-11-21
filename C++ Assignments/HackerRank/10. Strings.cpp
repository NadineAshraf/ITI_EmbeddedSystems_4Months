#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string x,y;
  cin>>x>>y;
  int len1=x.size();
  int len2=y.size();
  cout<<len1<<" "<<len2<<endl;
  cout<<x+y<<endl;
  
  swap(x[0],y[0]);
  
  cout<<x<<" "<<y<<endl;
  
  
    return 0;
}
