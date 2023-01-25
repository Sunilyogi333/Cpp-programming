#include<iostream>
using namespace std;
template <class T>
T average(T a, T b)
{
    return((a+b)/2.0);

}
template <class T>
T multiply(T a, T b)
{
    return (a*b);
}
int main()
{
    int a=4,b=6;
    float c=6.6,d=4.6;
    cout<<"Average of two integer number is:"<<average(a,b)<<endl;
    cout<<"Average of two decimal number is:"<<average(c,d)<<endl;
    cout<<"Multiplication of two integer number is:"<<multiply(a,b)<<endl;
    cout<<"Multiplicaiton of two decimal number is:"<<multiply(c,d)<<endl;
    return 0;
}