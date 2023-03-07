// WAP to calculate the volume of Box by using new and delete operator.
#include <iostream>
using namespace std;
class Box
{
    float *p;

public:
    Box()
    {
        p = new float[3];
    }
    void readdata()
    {
        cout << "Enter the length, breadth and height of box" << endl;
        cin >> *p >> *(p + 1) >> *(p + 2);
    }
    void calculate()
    {
        float c= (*p)*(*(p+1))*(*(p+2));
        cout<<"Volume= "<<c<<endl;
    }
    ~Box()
    {
        delete p;
        cout<<"Memory has been freed"<<endl;
    }
};
int main()
{
    Box B1;
    B1.readdata();
    B1.calculate();
}