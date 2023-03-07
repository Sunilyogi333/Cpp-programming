/*WAP to swap data of two classes using friend function 
where member function of one class is friend of another.*/
#include<iostream>
using namespace std;
class B; 
class A
{
    int nA;
    public:
    void getdata(int a)
    {
        nA=a;
    }
    void display()
    {
        cout<<"a ="<<nA<<endl;
    }
    void swap(B);
};
class B
{
    int nB;
    public:
    void getdata(int b)
    {
        nB=b;
    }
    void display()
    {
        cout<<"b ="<<nB<<endl;
    }
    friend void A::swap(B);
};
void A::swap(B x)
{
    int temp;
    temp=nA;
    nA=x.nB;
}
int main()
{
    A a;
    B b;
    a.getdata(5);
    a.display();
    b.getdata(7);
    b.display();
    a.swap(b);
    return 0;
}