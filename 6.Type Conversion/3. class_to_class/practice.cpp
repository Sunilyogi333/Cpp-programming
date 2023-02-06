#include<iostream>
using namespace std;
class Height2
{
    double meter;
    public:
    Height2(){}
    Height2(double m)
    {
        meter=m;
    }
    void display()
    {
        cout<<"Height :"<<meter<<"meter"<<endl;
    }
};
class Height1
{
    double feet, inches;
    public:
    Height1(){}
    Height1(double f, double i)
    {
        feet=f;
        inches=i;
    }
    void display()
    {
        cout<<"Height: "<<feet<<" feet"<<inches<<"inches"<<endl;
    }
    operator Height2()
    {
        double m=((inches/12)+feet)/3.28084;
        return Height2(m);
    }
};
int main()
{
    class Height1 H1(5,7);
    H1.display();
    class Height2 H2;
    H2=H1;
    H2.display();
    return 0;
}