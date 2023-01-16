#include<iostream>
using namespace std;
class Shape
{
    protected:
    float width,height;
    public:
    void getvalue()
    {
        cout<<"Enter the values of width and height"<<endl;
        cin>>width>>height;
    }
};
class Rectangle:public Shape
{
    float Area;
    public:
    void calculate_Area()
    {
      Area=width*height;
      cout<<Area;
    }
};
int main()
{
    Rectangle R;
    R.getvalue();
    cout<<"Area= ";R.calculate_Area();
    return 0;
}   