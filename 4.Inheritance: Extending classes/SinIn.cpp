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
    public:
    float Area;
    public:
    float calculate_Area()
    {
      Area=width*height;
      return Area;
    }
};
int main()
{
    Rectangle R;
    R.getvalue();
    cout<<"Area= "<<R.calculate_Area();
    return 0;
}   