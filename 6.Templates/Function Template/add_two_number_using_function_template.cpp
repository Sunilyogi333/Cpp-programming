#include <iostream>
using namespace std;
template <class T>
T add(T a, T b)
{
    return (a + b);
}
int main()
{
    int a = 4, b = 5;
    float c = 5.6, d = 6.7;
    cout << "sum of integer number is: " << add(a, b) << endl;
    cout << "Sum of decimal number is: " << add(c, d) << endl;
    return 0;
}