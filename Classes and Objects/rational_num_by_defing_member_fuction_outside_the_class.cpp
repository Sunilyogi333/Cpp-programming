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
void Rational::displayrational()
{
    cout<<"The rational number is: "<<num<<"/"<<den<<endl;
}
int main()
{
    Rational R;
    R.inputrational();
    R.displayrational();
    return 0;
}
