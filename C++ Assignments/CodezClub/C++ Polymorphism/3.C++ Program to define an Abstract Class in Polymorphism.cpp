#include <iostream>
#include <string.h>
using namespace std;

class Card //An abstract class
{
    protected:
            char recipient[20];
    public:
            virtual void greeting()=0; //A pure virtual function
};
class Holiday:public Card
{
    public:
          Holiday(char r[])
          {
              strcpy(recipient,r);
          }
          void greeting()
          {
              cout<<"Dear"<<recipient<<endl;
          }
};
class Birthday:public Card
{
    private:
            int age;
    public:
            Birthday(char r[ ], int years)
            {
                strcpy(recipient,r);
                age = years;
            }
            void greeting()
            {
                cout<<"Dear"<<recipient<<",\n";
                cout<<"Happy"<<age<<"th"<<"Birthday\n";
            }
};
class Holi:public Card
{
    private:
            int colors;
    public:
            Holi(char r[ ], int c)
            {
                strcpy(recipient,r);
                colors=c;
            }
            void greeting()
            {
                cout<<"Dear"<<recipient<<",\n";
                cout<<"Happy holi and lots of colors for you\n";
                for(int j=0; j<colors; j++)
                {
                    cout<<"*";
                }
                cout<<"\n\n";
            }
};
int main()
{
    Holiday hol("Codez");
    hol.greeting();
    Birthday bd("CodezClub",21);
    bd.greeting();
    Holi holi("Max",7);
    holi.greeting();
   
    
    return 0;
}
