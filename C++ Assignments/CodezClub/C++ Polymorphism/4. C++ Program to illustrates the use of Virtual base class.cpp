#include <iostream>

using namespace std;
class B 
{
    protected:
            int base_data;
    public:
            void get_b_data(int b)
            {
                cout<<"Accessing the data from the derived class D1----->";
                base_data = b;
            }
            void display_b_data(void)
            {
                cout<<"base_data = "<<base_data;
            }
};
class D1: virtual public B
{
    protected:
            int der1_data;
    public:
            void get_d1_data(int d1)
            {
                cout<<"Accessing the data from the derived class D1----->";
                der1_data = d1;
            }
            void display_d1_data(void)
            {
                cout<<"der1_data = "<<der1_data;
            }
};
class D2 : virtual public B // Second virtual base class.
{                                       // This class is also derived from the class B.
                protected:
                        int der2_data ;
                public:
                        void get_d2_data(int d2)
                        {
                                cout << "\n\n Accessing the data from the derived class D2---------->" ;
                                der2_data = d2 ;
                        }
                        void display_d2_data(void)
                        {
                                cout << "\n der2_data = " << der2_data ;
                        }
};
class D3: public D1, public D2
{
    public:
            int der3_data;
    public:
          void get_d3_data(int d3)
          {
                  cout << "\n\n Accessing the data from the derived class D3---------->" ;
                  der3_data = d3 ;
          }
          void display_d3_data(void)
          {
                  cout << "\n der3_data = " << der3_data ;
          }
};
int main()
{
    D3 der3; //Object of the class D3
    der3.get_b_data(7);
    der3.display_b_data();
    der3.get_d1_data(8);
    der3.display_d1_data();
    der3.get_d2_data(18);
    der3.display_d2_data();
    der3.get_d3_data(15);
    der3.display_d3_data();
    return 0;
}
