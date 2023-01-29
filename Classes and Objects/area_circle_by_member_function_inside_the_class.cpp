/*WAP to input calculate the area of circle by using class.
(By defining member function inside the class)*/
#include<iostream>
using namespace std;
class Area
{
    int radius;
    public:
    void inputarea()
    {
        cout<<"Enter the radius"<<endl;
        cin>>radius;
    }
    void displayarea()
    {
        cout<<"Area of a circle is: "<<(3.14*radius*radius)<<endl;
    }
};
int main()
{
    Area A;
    A.inputarea();
    A.displayarea();
    return 0;
}
