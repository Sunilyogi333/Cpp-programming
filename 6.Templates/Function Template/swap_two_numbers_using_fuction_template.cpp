#include <iostream>
using namespace std;
template <class T>
T swap(T *a, T *b)
{
    T temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 3, b = 4;
    float c = 4.5, d = 5.6;
    char e='a', f='b';
    cout << "before swapping" << endl;
    cout << "a= " << a << "b= " << b << endl;
    cout << "c= " << c << "d= " << d << endl;
    cout << "e= " << e << "f= " << f << endl;
    swap(&a, &b);
    swap(&c, &d);
    swap(&e, &f);
    cout << "before swapping" << endl;
    cout << "a= " << a << "b= " << b << endl;
    cout << "c= " << c << "d= " << d << endl;
    cout << "e= " << e << "f= " << f << endl;

}