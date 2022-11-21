#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int x , int y , int z , int k);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int x , int y , int z , int k)
{ int max;
  if(x>y && x> z && x>k)
  max=x;
  else if (y>x && y>z && y>k)
  max=y;
  else if (z>x && z>y && z>k)
  max=z;
  else
  {
  max=k;
  }
  return max;
}
