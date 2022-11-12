#include <iostream>

using namespace std;
int main()
{
   int LocalXpos=7,LocalYpos=3,i=0;
   string s;
   char state = 'N';
   cout<<"Enter the string: ";
   cin>>s;
   while(s[i] != '\0' && LocalXpos>=7 && LocalXpos<= 9 && LocalYpos >=3 && LocalYpos<=4)
   {
       if(s[i] == 'R')
       {
           if(state == 'N')
           {
               state = 'E';
           }
           else if(state == 'E')
           {
               state = 'S';
           }
           else if(state == 'S')
           {
               state = 'W';
           }
           else if(state == 'W')
           {
               state = 'N';
           }
           printf("%c ---> Your Robot Coordinates: {%d-%d} and your robot is heading to: %c\n",s[i],LocalXpos,LocalYpos,state);
       }
       else if (s[i] == 'A')
       {
          if(state == 'N')
          {
              state = 'N';
              LocalYpos++;
          }
          else if(state == 'E')
          {
              state = 'E';
              LocalXpos++;
          }
          else if(state =='S')
          {
              state = 'S';
              LocalYpos--;
          }
          else if(state == 'W')
          {
              state ='W';
              LocalXpos--;
          }
           printf("%c ---> Your Robot Coordinates: {%d-%d} and your robot is heading to: %c\n",s[i],LocalXpos,LocalYpos,state);
       }
       else if (s[i] == 'L')
       {
           if(state == 'N')
           {
               state = 'W';
           }
           else if(state == 'W')
           {
               state = 'S';
           }
           else if(state == 'S')
           {
               state = 'E';
           }
           else if(state == 'E')
           {
               state ='N';
           }
            printf("%c ---> Your Robot Coordinates: {%d-%d} and your robot is heading to: %c\n",s[i],LocalXpos,LocalYpos,state);
       }
       i++;
   }
    return 0;
}
