#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long k; 
     cin>>k;
     int arr[1000];
    for(int i=0 ; i<k ; i++)
    {
    cin>>arr[i];
    }
    for(int i=0 ; i<k ; i++)
    {
    cout<<arr[k-i-1]<<" ";
    }
    return 0;
}
