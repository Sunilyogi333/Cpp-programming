//Area of Rectangle and triangle using Abstract class
#include<iostream>
using namespace std;
class Polygon
{
    protected:
    float height, width;
    public:
    void setdata( float h, float w)
    {
        height =h;
        width= w;
    }
    virtual void Area()=0;
};
class Rectangle:public Polygon
{
    public:
    void Area()
    {
       cout<<"Area of Rectangle: "<<(height*width)<<endl;
    }
};
class Triangle:public Polygon
{
    public:
    void Area()
    {
       cout<<"Area of Triangle: "<<(height*width)/2<<endl;
    }
};
int main()
{
    Polygon *P1,*P2;
    P1 = new Rectangle();
    P2 = new Triangle();
    P1->setdata(2,4);
    P2->setdata(6,2);
    P1->Area();
    P2->Area();
    return 0;
}