/*WAP to add two complex number by overloading binary'+' operator such that C3=C1+C2*/
#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    Complex(){}
    Complex(int r, int i)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<"Complex number is:"<<real<<"+ i"<<img<<endl;
    }
    Complex operator +(Complex C1)
    {
        Complex C2;
        C2.real=C1.real+real;
        C2.img=C1.img+img;
        return C2;
    }
};
int main()
{
    Complex C1(3,6),C2(5,8),C3;
    C1.display();
    C2.display();
    C3=C1+C2;
    cout<<"After Addition"<<endl;
    C3.display();
    return 0;
};