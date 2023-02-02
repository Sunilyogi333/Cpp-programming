/*WAP to add two numbers using multiple parameters*/
#include<iostream>
using namespace std;
template <class T1, class T2>
void add(T1 a, T2 b)
{
    cout<<"Addition of two numbers is: "<<(a+b)<<endl;
}
int main()
{
    int a=2, b=3;
    float c=2.5, d=5.25;
    cout<<"For interger numbers"<<endl;
    add(a,b);
    cout<<"For decimal numbers"<<endl;
    add(c,d);
    return 0;
}