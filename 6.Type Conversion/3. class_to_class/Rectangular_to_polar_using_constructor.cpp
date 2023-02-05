// WAP to convert Rectangular to Polar Coordinates by using constructors
#include<iostream>
#include<math.h>
using namespace std;
class Rectangular
{
    float xco, yco;
    public:
    Rectangular(){}
    Rectangular(float x, float y)
    {
        xco=x;
        yco=y;
    }
    void display()
    {
        cout<<"("<<xco<<","<<yco<<")"<<endl;
    }
    float getx()
    {
        return xco;
    }
     float gety()
    {
        return yco;
    }
};
class Polar
{
    float radius, angle;
    public:
    Polar(){}
    Polar(float r, float a)
    {
        radius= r;
        angle= a;
    }
    void display()
    {
        cout<<"("<<radius<<","<<angle<<")"<<endl;
    }
    Polar (Rectangular R)
    {
        float xco=R.getx();
        float yco=R.gety();
        radius=sqrt(pow(xco,2)+pow(yco,2));
        angle= atan(yco/xco);
    }
};
int main()
{
    Rectangular R(7.07107,7.07107);
    R.display();
    Polar P;
    P=R;
    cout<<"After conversion"<<endl;
    P.display();
}