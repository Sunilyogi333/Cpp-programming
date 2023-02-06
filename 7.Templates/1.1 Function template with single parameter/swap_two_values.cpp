// WAP to swap to values by using function template
#include<iostream>
using namespace std;
template< class T>
void swap(T *a, T *b)
{
    T temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=5, b=4;
    float c=3.7, d=2.6;
    char e='r', f='d';
    cout<<"Before Swapping: " <<endl;
    cout<<"a= "<<a<<" b= "<<b<<endl;
    cout<<"c= "<<c<<" d= "<<d<<endl;
    cout<<"e= "<<e<<" f= "<<f<<endl;
    cout<<"After Swapping: "<<endl;
    swap(&a,&b);
    swap(&c,&d);
    swap(&e,&f);
    cout<<"a= "<<a<<" b= "<<b<<endl;
    cout<<"c= "<<c<<" d= "<<d<<endl;
    cout<<"e= "<<e<<" f= "<<f<<endl;

}