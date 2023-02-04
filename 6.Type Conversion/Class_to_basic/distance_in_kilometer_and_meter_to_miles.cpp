/*WAP to convert distance in km and meter to the distance in miles.*/
#include<iostream>
using namespace std;
class Distance
{
    int kilometer,meter;
    public:
    Distance(int km, int m)
    {
        kilometer=km;
        meter=m;
    }
    void display()
    {
        cout<<"The distance is "<<kilometer<<" kilometers "<<meter<<" meter"<<endl;
    }
    operator double()
    {
        return(((meter/1000)+kilometer)/1.609344);
    }
};
int main()
{
    Distance D(5,700);
    D.display();
    double d;
    d=D;
    cout<<"Distance after Conversion is: "<<d<<" miles"<<endl;
    return 0;
}