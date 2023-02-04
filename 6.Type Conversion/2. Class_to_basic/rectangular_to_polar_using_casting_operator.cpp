// WAP to convert rectangular to Polar coordinates by using casting operator.
#include <iostream>
#include<math.h>
using namespace std;
class Polar
{
    float radius, angle;

public:
    Polar() {}
    Polar(float r, float a)
    {
        radius = r;
        angle = a;
    }
    void display()
    {
        cout << "(" << radius << "," << angle << ")" << endl;
    }
};
class Rectangular
{
    float xco, yco;

public:
    Rectangular() {}
    Rectangular(float x, float y)
    {
        xco = x;
        yco = y;
    }
    void display()
    {
        cout<<"("<<xco<<","<<yco<<")"<<endl;
    }
    operator Polar()
    {
        float r= sqrt(pow(xco,2)+pow(yco,2));
        float a= atan(yco/xco);
        return Polar(r,a);
    }
};
int main()
{
    Rectangular R(7.07107, 7.07107);
    R.display();
    Polar P;
    P=R;
    cout<<"After Conversion, Polar coodinates are: "<<endl;
    P.display();
    return 0;
}