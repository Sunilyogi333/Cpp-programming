/*WAP to convert the time in minutes to the time in hours and minutes*/
#include<iostream>
using namespace std;
class Time
{
    int hours,min;
    public:
    Time(){}
    Time(int m)
    {
        hours=m/60;
        min=m%60;
    }
    void display()
    {
        cout<<"Time : "<<hours<<" hours and "<<min<<" cminutes"<<endl;
    }
};
int main()
{
    Time T=125;
    T.display();
    return 0;
}