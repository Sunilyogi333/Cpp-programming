#include<iostream>
using namespace std;
class M
{
    protected:
    int x;
    public:
    void get_value()
    {
        cout<<"Enter the value of x"<<endl;
        cin>>x;
    }
    void display_value()
    {
        cout<<"x ="<<x<<endl;
    }
};
class N
{
    protected:
    int y;
    public:
    void get_value()
    {
        cout<<"Enter the value of y"<<endl;
        cin>>y;
    }
    void display_value()
    {
        cout<<"y ="<<y<<endl;
    }
};
class P:public M,public N
{
    int total;
    public:
    void display_value()
    {
        total=x+y;
        cout<<"Total = "<<total;
    }
};
int main()
{
    P p;
    p.M::get_value();
    p.N::get_value();
    p.M::display_value();
    p.N::display_value();
    p.display_value();
}