/*WAP to add two complex number by overloading binary'+' operator such that C3=C1+C2
Use friend function */
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
        cout<<"Complex number is: "<<real<<"+ i"<<img<<endl;
    }
    friend Complex operator +(Complex, Complex);
};
Complex operator +(Complex C1, Complex C2)
{
  Complex C;
  C.real=C1.real+C2.real;
  C.img=C1.img+C2.img;
  return C;
}
int main()
{
    Complex C1(3,5), C2(4,9), C3;
    C1.display();
    C2.display();
    cout<<"After Addition"<<endl;
    C3=C1+C2;
    C3.display();
    return 0;
}