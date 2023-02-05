// WAP to convert Polar to rectangular coordinates by using constructors.
#include <iostream>
#include<math.h>
using namespace std;
class Polar
{
    float radius, angle;

public:
    Polar(){}
    Polar(float r, float a)
    {
        radius = r;
        angle = a;
    }
    void display()
    {
        cout << "(" << radius << "," << angle << ")" << endl;
    }
    float getr()
    {
        return radius;
    }
    float geta()
    {
        return angle;
    }
};
class Rectangular
{
    float xco, yco;

public:
    Rectangular(){}
    Rectangular(float x, float y)
    {
        xco = x;
        yco = y;
    }
    void display()
    {
        cout << "(" << 
        xco << "," << yco << ")" << endl;
    }
    Rectangular (Polar P)
    {
        float r=P.getr();
        float a=P.geta();
        xco=r*cos(a);
        yco=r*sin(a);
    }
};
int main()
{
    Polar P(10.0,0.7853938);
    P.display();
    Rectangular R;
    cout<<"After conversion, Rectagular Coordinates are: "<<endl;
    R=P;
    R.display();
    return 0;
}