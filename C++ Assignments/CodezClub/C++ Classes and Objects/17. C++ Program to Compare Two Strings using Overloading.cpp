#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class String
{
    char str[20];
    public:
         void getdata()
         {
             scanf("%s",str);
         }
         int operator == (String s)
         {
             if(strcmp(str,s.str))
             {
                 return 0;
             }
             else
             {
                 return 1;
             }
         }
};
int main()
{
   String s1,s2;
   cout<<"Enter first string: ";
   s1.getdata();
   cout<<"Enter second string: ";
   s2.getdata();
   if(s1 == s2)
   {
       cout<<"Strings are Equal";
   }
   else
   {
       cout<<"Strings are not Equal";
   }

    return 0;
}
