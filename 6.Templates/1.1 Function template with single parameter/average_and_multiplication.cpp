/*WAP to calculate average and multiplication of two 
numbers by using function temple.*/
#include<iostream>
using namespace std;
template <class T>
void calculate(T a, T b)
{
    T c;
    c=(a+b)/2.0;
    cout<<"Average of two number is:"<<c<<endl;
    c=a*b;
    cout<<"Multiplication of two numbers is:"<<c<<endl;
}
int main()
{
    int a=5,b=6;
    float c=6.6,d=4.6;
    cout<<"For interger value: "<<endl;
    calculate(a,b);
    cout<<"For decimal number: "<<endl;
     calculate(c,d);
    return 0;
}