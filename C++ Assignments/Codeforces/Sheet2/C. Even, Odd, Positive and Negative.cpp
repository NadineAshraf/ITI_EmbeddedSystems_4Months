#include <iostream>

using namespace std;

int main()
{
   int N,Even=0,odd=0,pos=0,neg=0;
   int i;
   cin>>N;
  signed long long int arr[N];
  for(i=0; i<N; i++)
  {
      cin>>arr[i];
      if(arr[i] %2 == 0)
      {
          Even++;
      }
      else
      {
          odd++;
      }
      if(arr[i]>0)
      {
          pos++;
      }
      else if(arr[i]<0)
      {
          neg++;
      }
  }
  cout<<"Even: "<<Even<<"\n";
  cout<<"Odd: "<<odd<<"\n";
  cout<<"Positive: "<<pos<<"\n";
  cout<<"Negative: "<<neg<<"\n";
   
return 0;
}
