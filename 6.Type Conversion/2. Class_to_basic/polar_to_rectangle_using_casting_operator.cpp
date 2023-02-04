// WAP to convert the polar to rectangle coordinates by using casting operator
#include<iostream>
#include<math.h>
using namespace std;
class Rectangle
{
    float xco,yco;
    public:
    Rectangle(){}
    Rectangle(int x, int y)
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
    float radius,angle;
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
    operator Rectangle()
    {
        float x=radius*cos(angle);
        float y=radius*sin(angle);
        return Rectangle(x,y);
    }
};
int main()
{
    Polar P(10.0,0.785398);
    P.display();
    Rectangle R;
    R=P;
    cout<<"After conversion, Rectangular coordinates are: "<<endl;
    R.display();
    return 0;
}