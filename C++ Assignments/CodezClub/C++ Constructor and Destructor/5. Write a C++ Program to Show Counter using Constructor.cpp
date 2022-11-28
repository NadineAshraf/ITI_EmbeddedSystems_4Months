#include <iostream>

using namespace std;
class Counter
{
    private:
          int count;
    public:
          Counter()     // Constructor
          {
              count = 0;
          }
          void Inc_Count()
          {
              count++;
          }
          int get_count()
          {
              return count;
          }
};

int main()
{
      Counter c1;
      c1.Inc_Count();
      cout<<"Counter = "<<c1.get_count();
   

    return 0;
}
