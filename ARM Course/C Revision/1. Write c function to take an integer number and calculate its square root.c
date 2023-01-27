#include <stdio.h>
float SquareRoot(int num)
{
    int start = 0,end = num,mid;
    float ans;
    while(start<=end)
    {
        mid = (start+end)/2;
    if(mid*mid == num)
    {
        ans = mid;
        break;
    }
    else if(mid*mid < num)
    {
        ans = start;
        start = mid+1;
    }
    else
    {
        end = mid -1;
    }
   }
    float increment = 0.1;
    for(int i=0; i<5; i++)
    {
        while(ans*ans <= num)
        {
            ans+= increment;
        }
        ans -= increment;
        increment/=10;
    }
    return ans;
}
int main()
{
  printf("%f",SquareRoot(12));

    return 0;
}

