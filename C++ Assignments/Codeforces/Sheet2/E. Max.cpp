#include <iostream>

using namespace std;

int main()
{
    int N,i;
    cin>>N;
    long long arr[N],max=0;
    for(i=0; i<N; i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max = arr[i];
        }
        
    }
    cout<<max;

    return 0;
}
