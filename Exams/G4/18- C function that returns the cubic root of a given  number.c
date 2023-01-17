#include <stdio.h>
double diff(double n, double mid)
{
    if(n > (mid*mid*mid))
      return (n-(mid*mid*mid));
    else
      return((mid*mid*mid)-n);
}
double CubeRoot(double n)
{
   double start=0,end=n;
   double e = 0.0000001;
   while(1)
   {
       double mid = (start+end)/2;
       double error = diff(n,mid);
       
       if(error <= e)
       {
          return mid;
       }
          
       if((mid*mid*mid) > n)
       {
          end = mid;
       }
          
       else
       {
        start = mid;
       }
   }
}
int main()
{
  double n;
  printf("Please enter the number: ");
  scanf("%lf",&n);
  printf("Cubic root of %lf is %lf",n,CubeRoot(n));

    return 0;
}
