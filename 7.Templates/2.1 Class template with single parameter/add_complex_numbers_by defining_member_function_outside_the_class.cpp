/*WAP to add complex number by defining the member function outside the class template*/
#include<iostream>
using namespace std;
template<class T>
class Complex
{
    T real,img;
    public:
    Complex(){}
    Complex(T,T);
    void display();
    void addComplex(Complex,Complex);

};
template<class T>
Complex<T>::Complex(T r, T i)
{
    real=r;
    img=i;
}
template<class T>
void Complex<T>::display()
{
    cout<<real<<"+ i"<<img<<endl;
}
template<class T>
void Complex<T>::addComplex(Complex T1, Complex T2)
{
    real=T1.real+T2.real;
    img=T1.img+T2.img;
    cout<<real<<"+ i"<<img<<endl;
}
int main()
{
    Complex<int>C1(3,7),C2(6,8);
    C1.display();
    C2.display();
    cout<<"After Addition"<<endl;
    C1.addComplex(C1,C2);
    return 0;
}