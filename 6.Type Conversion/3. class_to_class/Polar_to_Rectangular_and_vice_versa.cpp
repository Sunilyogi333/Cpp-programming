// WAP to convert Polar to rectangular coordinates and vice-versa
#include<iostream>
#include<math.h>
using namespace std;
class Polar
{
    float radius, angle;
    public:
    Polar(){}
    Polar(float r, float a)
    {
        radius=r;
        angle=a;
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
        xco=x;
        yco=y;
    }
    void display()
    {
        cout << "(" <<xco << "," << yco << ")" << endl;
    }
    Rectangular (Polar P)
    {
        float r= P.getr();
        float a= P.geta();
        xco=r*cos(a);
        yco=r*sin(a);
    }
    operator Polar()
    {
        float r=sqrt(pow(xco,2)+pow(yco,2));
        float a= atan(yco/xco);
        return Polar(r,a);
    }
};
int main()
{
    Polar P1(10.0, 0.785398);
    P1.display();
    Rectangular R1;
    R1=P1;
    cout<<"After conversion"<<endl;
    R1.display();
    Rectangular R2(7.07107, 7.07107);
    R2.display();
    Polar P2;
    P2=R2;
    cout<<"After conversion"<<endl;
    P2.display();
    return 0;
}