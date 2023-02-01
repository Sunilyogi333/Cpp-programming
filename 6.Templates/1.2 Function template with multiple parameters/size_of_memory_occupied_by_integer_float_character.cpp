/*WAP to display size of memory occupied by integer, float, character,
 by using function template using multiple templates*/
#include <iostream>
using namespace std;
template <class T1, class T2, class T3>
void calculate_size(T1 a, T2 b, T3 c)
{
    cout << "Memory occupied by first template type is:" << sizeof(a) << "bytes" << endl;
    cout << "Memory occupied by first template type is:" << sizeof(b) << "bytes" << endl;
    cout << "Memory occupied by first template type is:" << sizeof(c) << "bytes" << endl;
}
int main()
{
    int a=5;
    float b=3.5;
    char c='#';
    calculate_size(a,b,c);
    calculate_size(b,c,a);
    calculate_size(c,a,b);
    return 0;
}