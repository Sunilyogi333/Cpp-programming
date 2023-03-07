#include <iostream>
using namespace std;
class Box
{
    float length, breadth, width;

public:
    Box(float l, float b, float w)
    {
        this->length = l;
        this->breadth = b;
        this->width = w;
    }
    float volume()
    {
        return (this->length * this->breadth * this->width);
    }
    void compare(Box b)
    {
        if (this->volume() > b.volume())
        {
            cout << "Object calling fuction is greater" << endl;
        }
        else
        {
            cout << "Object passed as a argument is greater" << endl;
        }
    }
};
int main()
{
    Box B1(1, 2, 3), B2(4, 5, 6);
    B1.compare(B2);
    return 0;
}