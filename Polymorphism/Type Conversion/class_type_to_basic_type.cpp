/*Program to read the height in feet and inches and convert it to metre
by using class_type to basic_type conversion*/
#include<iostream>
using namespace std;
class Height
{
    double feet,inch;
    public:
    Height(int ft, double in)
    {
        feet=ft;
        inch =in;
    }
    void display()
    {
        cout<<"Height is"<<feet<<"feet "<<inch<<"inch"<<endl;
    }
    operator int()
    {
        return((inch/12)+feet)/3.28084;
    }
};
int main()
{
    Height H(5,7);
    H.display();
    cout<<"After conversion"<<endl;
    double m;
    m=H;
    cout<<"In meter: "<<m<<" meter"<<endl;
    return 0;
};
