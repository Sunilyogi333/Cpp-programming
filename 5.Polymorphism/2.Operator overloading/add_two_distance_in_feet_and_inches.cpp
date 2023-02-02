/*WAP to add two distance in feet and inches 
by overloading '+=' operator such that D1+=D2*/
#include<iostream>
using namespace std;
class Distance
{
    int feet,inches;
    public:
    Distance(int f, int i)
    {
        feet=f;
        inches=i;
    }
    void display()
    {
        cout<<"Distance is "<<feet<<"feet and "<<inches<<"inches"<<endl;
    }
    void operator +=(Distance D)
    {
        feet+=D.feet;
        inches+=D.inches;
        if(inches>=12)
        {
            feet++;
            inches-=12;
        }
    }
};
int main()
{
    Distance D1(2,11),D2(5,7);
    D1.display();
    D2.display();
    cout<<"After addition"<<endl;
    D1+=D2;
    D1.display();
    return 0;
}