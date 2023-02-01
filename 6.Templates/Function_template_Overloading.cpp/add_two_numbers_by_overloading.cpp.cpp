/*WAP to add two numbers by overloading function template with normal function.*/
#include<iostream>
using namespace std;
template<class T>
T add(T a, T b)
{
    return(a+b);
}
int add(int a, int b)
{
    return(a+b);
}
int main()
{
    int a=5,b=10;
    float c=3.5,d=7.3;
    cout<<"Addition ="<<add(a,b)<<endl;
    cout<<"Addition ="<<add(c,d)<<endl;
    return 0;
}