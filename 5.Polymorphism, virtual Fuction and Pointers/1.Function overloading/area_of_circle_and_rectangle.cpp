/*WAP to calculate the area of circle and 
the area of rectangle by using function overloading*/
#include<iostream>
using namespace std;
class Area
{
    public:
    void area(float radius)
    {
        cout<<"Area of cirlce:"<< (3.14*radius*radius)<<endl;
    }
    void area(float length, float breadth)
    {
        cout<<"Area of rectangle:"<< (length*breadth)<<endl;
    }
};
int main()
{
    float r,l,b;
    cout<<"Enter the radius of circle"<<endl;
    cin>>r;
    cout<<"Enter the length and breadth of rectangle"<<endl;
    cin>>l>>b;
    Area A;
    A.area(r);
    A.area(l,b);
    return 0;
}