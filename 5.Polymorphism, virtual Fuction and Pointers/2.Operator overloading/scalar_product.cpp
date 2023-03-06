#include <iostream>
using namespace std;
template <class T>class Vector;
template <class T>int operator* (const Vector<T>&, const Vector<T>&);
template <class T>
class Vector
{
T a, b, c;

public:
Vector(T x, T y, T z)
{
a = x;
b = y;
c = z;
}
void display()
{
cout<<a<<"i +"<<b<<"j +"<<c<<" k"<<endl;
}
friend int operator* <T>(const Vector<T>&, const Vector<T>&);
};
template <class T>
int operator*(const Vector<T>& v1,const Vector<T>& v2)
{
int product = v1.a * v2.a + v1.b * v2.b +v1.c*v2.c;
return product;
}
int main()
{
Vector<int> v1(1, 2, 3), v2(4, 5, 6);
v1.display();
v2.display();
cout << "After multiplication" << endl;
int p = v1 * v2;
cout << "The product is " << p;
return 0;
}