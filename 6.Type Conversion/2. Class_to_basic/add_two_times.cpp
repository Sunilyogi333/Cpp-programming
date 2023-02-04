/*WAP to add two times by overloading binary '+' operator such that T1+T2 is possible.*/
#include <iostream>
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
        cout << "Time: " << hour << "Hours and " << min << "minutes" << endl;
    }
    void operator+(Time T1)
    {
        int mins = min + T1.min;
        int hours = min / 60;
        mins = min % 60;
        hours = hours + T1.hour + hour;
        cout << "Time: " << hours << "Hours and " << mins << "minutes" << endl;
    }
};
int main()
{
    Time T1(4, 45), T2(3, 35);
    T1.display();
    T2.display();
    T1 + T2;
    cout << "After addition" << endl;
    return 0;
}