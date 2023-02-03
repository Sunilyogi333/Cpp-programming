/*WAP to convert the time in hours and minutes to the time in minutes*/
#include<iostream>
using namespace std;
class Time
{
  int hour, min;
  public:
        Time() {}
        Time(int h, int m)
        {
            hour = h;
            min = m;
        }
        void display()
        {
            cout<<"Time is"<<hour<<" hours and "<<min<<" minutes"<<endl;
        }
        operator int()
        {
            return((hour*60)+min);
        }
};
int main()
{
    Time T(2,45);
    T.display();
    int m;
    m=T;
    cout<<"Time after conversion is "<<m<<" minutes"<<endl;
    return 0;
}