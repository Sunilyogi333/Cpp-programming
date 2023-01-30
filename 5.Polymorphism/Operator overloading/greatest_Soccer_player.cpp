/* Design a Soccer Player class that includes three integer fields: a player's 
jersey number, number of goals, number of assists and necessary constructors to 
initialize the data members.Overload the > operator (greater than).One player 
is considered greater than another if the sum of goals plus assists is greater
than that of the others.Create an array of 11 soccer players, then use the 
overload > operator to find the player who has the greatest total of goals plus
assists */
#include <iostream>
using namespace std;
class SoccerPlayer
{
    int jn, ng, na;

public:
    SoccerPlayer() {}
    SoccerPlayer(int j, int g, int a)
    {
        jn = j;
        ng = g;
        na = a;
    }
    void display()
    {
        cout << "Jersey number= " << jn << endl
             << "Number of goals= " << ng << endl
             << "Number of assits =" << na << endl;
    }
    friend int operator>(SoccerPlayer &S1, SoccerPlayer &S2);
};
int operator>(SoccerPlayer &S1, SoccerPlayer &S2)
{

    int sum1 = S1.ng + S2.na;
    int sum2 = S2.ng + S2.na;
    if (sum1 > sum2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int j, g, a, max;
    SoccerPlayer *S[11];
    for (int i = 0; i < 11; i++)
    {
        cout << "Enter the jersey number, number of goals and number of assits" << endl;
        cin>>j>>g>>a;
        S[i]=new SoccerPlayer(j,g,a);
    }
    cout<<"The information of 11 players are:"<<endl;
    for(int i=0; i<11; i++)
    {
        S[i]->display();
    }
    max=0;
    for(int i=0; i<10; i++)
    {
        if(*S[i+1]>*S[max])
        {
         cout<<(i+1)<<" Player is greater than "<<i<<endl;
         max=i+1;
        }
    }
    cout<<"The information of greatest player is:"<<endl;
    S[max]->display();
    return 0;
}
