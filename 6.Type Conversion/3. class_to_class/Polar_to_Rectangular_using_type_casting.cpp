// WAP to convert the Polar to Rectangular coordinates by using casting operator
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
};
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
        cout<<"("<<radius<<","<<angle<<")"<<endl;
    }
    operator Rectangular()
    {
        float x=radius*cos(angle);
        float y=radius*sin(angle);
        return Rectangular(x,y);
    }
};
int main()
{
    Polar P(10.0,0.785398);
    P.display();
    Rectangular R;
    R=P;
    R.display();
    return 0;
}