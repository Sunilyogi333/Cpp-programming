#include <iostream>
using namespace std;
template <class T>
class Rectangle
{
    T width, height;

public:
    Rectangle(T w, T h)
    {
        width = w;
        height = h;
    }
    T area()
    {
        return (width * height);
    }
};
int main()
{
    Rectangle<int> R1(3, 7);
    Rectangle<float> R2(3.5, 7.5);
    cout << "Area of first rectangle is: " << R1.area() << endl;
    cout << "Area of second rectangle is: " << R2.area() << endl;
    return 0;
}