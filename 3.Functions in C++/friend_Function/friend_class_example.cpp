#include<iostream>
using namespace std;
class B;
class A
{
    int numberA;
    public:
    void getdata(int a)
    {
        numberA=a;
    }
    void display()
    {
        cout<<"a ="<<numberA<<endl;
    }
    void max(B);
};
class B
{
    int numberB;
    public:
    void getdata(int b)
    {
        numberB=b;
    }
    void display()
    {
        cout<<"b ="<<numberB<<endl;
    }
    friend A;
};
void A::max(B x)
{
    if(numberA>x.numberB)
    {
        cout<<"a is greater"<<endl;
    }
    else
    {
        cout<<"b is greater"<<endl;
    }
}
int main()
{
    A a;
    B b;
    a.getdata(5);
    a.display();
    b.getdata(7);
    b.display();
    a.max(b);
    return 0;
}