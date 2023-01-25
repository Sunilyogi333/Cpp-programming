//Program to swap two numbers using swap template
#include<iostream>
using namespace std;
template <class T>
void swap (T *x, T *y)
{
    T temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=5, b=10;
    float c=2.5, d=3.75;
    char e='a',f='b';
    cout<<"Before swaping: "<<endl;
    cout<<"a ="<<a<<" b ="<<b<<endl;
    cout<<"c ="<<c<<" d ="<<d<<endl;
    cout<<"e ="<<e<<" f ="<<f<<endl;
    swap(&a,&b);
    swap(&c,&d);
    swap(&e,&f);
    cout<<"After swaping: "<<endl;
    cout<<"a ="<<a<<" b ="<<b<<endl;
    cout<<"c ="<<c<<" d ="<<d<<endl;
    cout<<"e ="<<e<<" f ="<<f<<endl;
    return 0;
}