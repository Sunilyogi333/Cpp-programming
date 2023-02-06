// WAP to overload binary '+' operator to add two rational numbers by using class template.
#include <iostream>
using namespace std;
template <class T>
class Rational
{
    T num, deno;

public:
    Rational() {}
    Rational(T n, T d)
    {
        num = n;
        deno = d;
    }
    void display()
    {
        cout << "Rational Number: " << num << "/" << deno << endl;
    }
    void operator +(Rational r1)
    {
        T n = num * r1.deno + r1.num * deno;
        T d = deno * r1.deno;
        cout << "Rational Number: " << n << "/" << d << endl;
    }
};
int main()
{
    Rational<int> R1(2, 4), R2(5, 6);
    R1.display();
    R2.display();
    R1 + R2;
}