/*WAP to calculate the area of circle and 
the area of rectangle by using fuction overloading.*/
#include<iostream>
using namespace std;
void add(int a, int b)
{
    cout<<"Sum= "<<(a+b)<<endl;
}
void add(float a, float b)
{
    cout<<"Sum= "<<(a+b)<<endl;
}
int main()
{
    int a,b;
    float c,d;
    cout<<"Enter two integer numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter two decimal numbers"<<endl;
    cin>>c>>d;
    add(a,b);
    add(c,d);
    return 0;
}