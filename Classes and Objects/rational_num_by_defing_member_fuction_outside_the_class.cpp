/*WAP to input and display rational number by using class.
(By defining member function inside the class)*/
#include<iostream>
using namespace std;
class Rational
{
    int num,den;
    public:
    void inputrational();
    void displayrational();
};
void Rational::inputrational()
{
    cout<<"Enter the numerator and denominator"<<endl;
    cin>>num>>den;
}
void Rational::inputrational()
{
    cout<<"The rational number is: "<<num<<"/"<<den<<endl;
}
void main()
{
    float r,l,b;
    cout<<"Enter the radius of circle"<<endl;
    cin>>r;
    cout<<"Enter the length and breath of rectangle"<<endl;
    cin>>l>>b;
}
